/*
 * XREFs of ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800DE51C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DE5D4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800DE80C (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessCreate(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DCOMPRENDERTARGET_CREATE *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  CHwndRenderTarget *v7; // rax
  CHwndRenderTarget *v8; // rcx
  char v9; // cl
  int v10; // ecx

  v3 = *((_QWORD *)this + 7);
  v4 = 0;
  if ( !v3 )
  {
    v7 = (CHwndRenderTarget *)CHwndRenderTarget::operator new((unsigned __int64)this);
    if ( v7 )
      v8 = CHwndRenderTarget::CHwndRenderTarget(v7, *((struct CComposition **)this + 2));
    else
      v8 = 0LL;
    *((_QWORD *)this + 7) = v8;
    if ( !v8 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0x27u, 0LL);
      return v4;
    }
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v8 + 8LL))(v8);
    v3 = *((_QWORD *)this + 7);
  }
  v9 = (*((_DWORD *)a3 + 2) & 0x2000) != 0;
  if ( *(_BYTE *)(v3 + 868) != v9 )
  {
    *(_BYTE *)(v3 + 868) = v9;
    *(_BYTE *)(v3 + 161) = 1;
    v3 = *((_QWORD *)this + 7);
  }
  v10 = *((_DWORD *)a3 + 10);
  *(_DWORD *)(v3 + 104) = *((_DWORD *)a3 + 11);
  *(_DWORD *)(v3 + 96) = v10;
  *(_BYTE *)(*((_QWORD *)this + 7) + 867LL) = *((_BYTE *)a3 + 48) != 0;
  *(_QWORD *)(*((_QWORD *)this + 7) + 520LL) = *((_QWORD *)a3 + 4);
  return v4;
}
