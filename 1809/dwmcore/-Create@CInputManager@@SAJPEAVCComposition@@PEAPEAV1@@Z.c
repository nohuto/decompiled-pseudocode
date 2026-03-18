/*
 * XREFs of ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800628D0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180062944 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180062B58 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  CInputManager *v4; // rax
  CMILCOMBase *v5; // rax
  unsigned int v6; // ecx
  CInputManager *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CInputManager *)WPF::ProcessHeapImpl::AllocClear(0x120uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CInputManager::CInputManager(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v8 = CInputManager::Initialize(v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x28u);
      CGdiSpriteBitmap::Release(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x25u);
  }
  return v10;
}
