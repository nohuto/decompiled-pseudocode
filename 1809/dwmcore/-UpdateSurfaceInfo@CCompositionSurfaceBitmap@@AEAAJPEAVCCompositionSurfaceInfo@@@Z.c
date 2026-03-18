/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800A08C0
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1800A07F0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180191F60 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800A0F80 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::UpdateSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  CGdiSpriteBitmap **v2; // r14
  unsigned int v3; // ebx
  __int64 v4; // r8
  char v5; // bp
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v14; // edx
  char *v15; // r10
  __int64 v16; // r9
  __int64 i; // rcx
  int v18; // eax
  char *v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = (CGdiSpriteBitmap **)((char *)this + 88);
  v3 = 0;
  v4 = *((_QWORD *)this + 11);
  v5 = 0;
  if ( (struct CCompositionSurfaceInfo *)v4 != a2 )
  {
    if ( v4 )
    {
      v14 = *(_DWORD *)(v4 + 392);
      v15 = (char *)this + 72;
      v16 = *(_QWORD *)(v4 + 368);
      for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
      {
        if ( v15 == *(char **)(v16 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < v14 )
      {
        while ( (unsigned int)i < v14 - 1 )
        {
          *(_QWORD *)(v16 + 8 * i) = *(_QWORD *)(v16 + 8LL * (unsigned int)(i + 1));
          i = (unsigned int)(i + 1);
          v14 = *(_DWORD *)(v4 + 392);
        }
        *(_DWORD *)(v4 + 392) = v14 - 1;
      }
      ReleaseInterface<CCompositionSurfaceInfo>(v2);
      v5 = 1;
    }
    if ( a2 )
    {
      v19 = (char *)this + 72;
      v8 = *((_DWORD *)a2 + 98);
      v9 = v8 + 1;
      v3 = v8 + 1 < v8 ? 0x80070216 : 0;
      if ( v8 + 1 < v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)a2 + 97) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 368, 8, 1, &v19);
        v3 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v18, 0xC0u);
      }
      else
      {
        v10 = *((_DWORD *)a2 + 98);
        *(_QWORD *)(*((_QWORD *)a2 + 46) + 8LL * v8) = v19;
        *((_DWORD *)a2 + 98) = v9;
      }
      if ( (v3 & 0x80000000) == 0 )
      {
        v11 = *((_QWORD *)this + 6);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 40);
          if ( v12 )
            *((_DWORD *)a2 + 88) = *(_DWORD *)(v12 + 128);
        }
        *v2 = a2;
        CMILCOMBase::InternalAddRef(a2);
LABEL_12:
        CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x493u);
    }
    if ( !v5 )
      return v3;
    goto LABEL_12;
  }
  return v3;
}
