/*
 * XREFs of ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180129F4C
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800588AC (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18012A500 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x180128D7C (Windows--Internal--ComTaskPool--QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___.c)
 */

__int64 __fastcall RaiseApplicationViewChangeNotification(__int64 a1, int a2)
{
  PSRWLOCK v4; // rsi
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  PVOID Ptr; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF

  v14 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v9 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v10 = a2;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
    v5 = (unsigned int)v4[15].Ptr;
    v9 = 0LL;
    v12 = a1;
    v13 = a2;
    Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___(v7, v6, v5, (__int64)&Ptr);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
}
