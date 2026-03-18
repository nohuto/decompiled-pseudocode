/*
 * XREFs of ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x18007AFE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z @ 0x18007B0B0 (-AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCreate(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CREATE *a3)
{
  __int64 v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int v15; // eax
  struct CResourceTable *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  if ( (*((_BYTE *)a3 + 32) & 0x10) != 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
    v16 = (CDesktopRenderTarget *)((char *)this + 168);
    v6 = *(_DWORD *)(v5 + 80);
    v7 = v6 + 1;
    v8 = v6 + 1 < v6 ? 0x80070216 : 0;
    if ( v6 + 1 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v8, 0xB5u);
    }
    else if ( v7 > *(_DWORD *)(v5 + 76) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 56, 8, 1, &v16);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      v9 = *(_DWORD *)(v5 + 80);
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL * v6) = v16;
      *(_DWORD *)(v5 + 80) = v7;
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x26Fu);
    v10 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 73) = *((_DWORD *)a3 + 8);
    *(_OWORD *)((char *)this + 296) = *((_OWORD *)a3 + 1);
    *((_DWORD *)this + 77) = 1065353216;
    v11 = CUINTDesktopAssociation::AddDesktopRenderTarget(
            (CUINTDesktopAssociation *)(v10 + 24),
            (unsigned int *)this + 88,
            this);
    v13 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x489u);
  }
  else
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x474u);
  }
  return v13;
}
