/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18006178C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x180061820 (-Initialize@DataProviderManager@@AEAAJXZ.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x180061F80 (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  CMILCOMBase *v5; // rax
  struct DataProviderManager *v6; // rsi
  DataProviderManager *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (DataProviderManager *)WPF::ProcessHeapImpl::AllocClear(0x88uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = DataProviderManager::DataProviderManager(v4, a1);
  v6 = v5;
  v7 = v5;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v8 = DataProviderManager::Initialize(v7);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v7 = 0LL;
      *a2 = v6;
      v9 = 0;
      goto LABEL_5;
    }
    v11 = (unsigned int)v8;
    v12 = 75LL;
  }
  else
  {
    v9 = -2147024882;
    v12 = 73LL;
    v11 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
    (const char *)v11,
    v13);
LABEL_5:
  if ( v7 )
    CGdiSpriteBitmap::Release(v7);
  return v9;
}
