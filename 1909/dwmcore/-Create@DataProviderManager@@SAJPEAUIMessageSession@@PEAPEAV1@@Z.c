/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E19C8
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1800E1A5C (-Initialize@DataProviderManager@@AEAAJXZ.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x1800E25DC (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  __int64 v5; // r8
  CMILCOMBase *v6; // rax
  struct DataProviderManager *v7; // rsi
  DataProviderManager *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (DataProviderManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  v6 = DataProviderManager::DataProviderManager(v4, a1);
  v7 = v6;
  v8 = v6;
  if ( v6 )
  {
    CMILCOMBase::InternalAddRef(v6);
    v9 = DataProviderManager::Initialize(v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v8 = 0LL;
      *a2 = v7;
      v10 = 0;
      goto LABEL_5;
    }
    v12 = (unsigned int)v9;
    v13 = 64LL;
  }
  else
  {
    v10 = -2147024882;
    v13 = 62LL;
    v12 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
    (const char *)v12,
    v14);
LABEL_5:
  if ( v8 )
    CGdiSpriteBitmap::Release(v8);
  return v10;
}
