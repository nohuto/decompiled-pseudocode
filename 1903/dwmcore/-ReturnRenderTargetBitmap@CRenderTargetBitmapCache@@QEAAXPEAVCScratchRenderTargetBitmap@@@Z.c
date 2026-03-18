/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180047548
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800474C0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x180047638 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800D2750 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18016253C (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edx
  CBaseRenderTarget *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  CBaseRenderTarget *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  if ( *((_BYTE *)a2 + 217) )
    --*((_DWORD *)this + 10);
  v3 = (__int64)this + 608;
  if ( !this )
    v3 = 1128LL;
  *((_QWORD *)a2 + 26) = *(_QWORD *)v3;
  LODWORD(v4) = *((_DWORD *)this + 6);
  if ( (unsigned int)v4 >= 0x20 )
  {
    v12 = (__int64)this + 608;
    if ( !this )
      v12 = 608LL;
    v13 = *(_QWORD *)v12;
    while ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      v14 = *(_QWORD *)(*(_QWORD *)this + 8 * v4);
      if ( (unsigned __int64)(v13 - *(_QWORD *)(v14 + 208)) > 1 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, (unsigned int)v4);
        *(_BYTE *)(v14 + 216) = 0;
        ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(v14);
      }
    }
  }
  v5 = (__int64)this + 360;
  if ( !this )
    v5 = 360LL;
  if ( *(int *)v5 >= 0 )
  {
    v6 = *((_DWORD *)this + 6);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x168u, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v7 <= *((_DWORD *)this + 5) )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL * v6) = v15;
        *((_DWORD *)this + 6) = v7;
LABEL_12:
        CMILCOMBase::InternalAddRef((CBaseRenderTarget *)((char *)v15 + 96));
        v8 = v15;
        CBaseRenderTarget::RemoveAssociations(v15);
        *((_QWORD *)v8 + 8) = (char *)v8 + 56;
        *((_QWORD *)v8 + 7) = (char *)v8 + 56;
        return;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v15);
      v11 = v9;
      if ( v9 >= 0 )
        goto LABEL_12;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC3u, 0LL);
    }
    if ( v11 >= 0 )
      goto LABEL_12;
  }
}
