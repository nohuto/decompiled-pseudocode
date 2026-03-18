/*
 * XREFs of ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x1800E69F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVIRenderTargetDesktop@@@Z @ 0x1800E6AD0 (-AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVIRenderTargetDesktop@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCreate(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPRENDERTARGET_CREATE *a3)
{
  __int64 v6; // rcx
  bool v7; // cf
  __int64 v8; // rax
  struct IRenderTargetDesktop *v9; // r14
  __int64 v10; // r10
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  signed int v18; // edi
  __int64 v19; // rcx
  signed int v20; // eax
  struct CResourceTable *v21; // [rsp+48h] [rbp+10h] BYREF

  v21 = a2;
  if ( (*((_BYTE *)a3 + 32) & 0x10) == 0 )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x4AAu, 0LL);
    return v16;
  }
  v6 = (__int64)this + 168;
  v7 = this != 0LL;
  v8 = *((_QWORD *)this + 2);
  v9 = (struct IRenderTargetDesktop *)(v6 & -(__int64)v7);
  v21 = v9;
  v10 = *(_QWORD *)(v8 + 64);
  v11 = *(_DWORD *)(v10 + 80);
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x80070216, 0xB8u, 0LL);
LABEL_11:
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x26Cu, 0LL);
    goto LABEL_5;
  }
  if ( v12 > *(_DWORD *)(v10 + 76) )
  {
    v20 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 56, 8, 1, &v21);
    v18 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0xC3u, 0LL);
    goto LABEL_11;
  }
  *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8LL * v11) = v21;
  *(_DWORD *)(v10 + 80) = v12;
LABEL_5:
  v13 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 85) = *((_DWORD *)a3 + 8);
  *(_OWORD *)((char *)this + 344) = *((_OWORD *)a3 + 1);
  *((_DWORD *)this + 89) = 1065353216;
  v14 = CUINTDesktopAssociation::AddDesktopRenderTarget(
          (CUINTDesktopAssociation *)(v13 + 24),
          (unsigned int *)this + 100,
          v9);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4BFu, 0LL);
  return v16;
}
