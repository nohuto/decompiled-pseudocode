/*
 * XREFs of ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x18012A090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18012A7B8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

__int64 __fastcall CClassicWindowManager::RefreshCollection(CClassicWindowManager *this)
{
  unsigned __int64 v2; // r14
  unsigned __int64 i; // rsi
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *((_QWORD *)this + 12);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
    v4 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType((char *)this - 104, v4, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
