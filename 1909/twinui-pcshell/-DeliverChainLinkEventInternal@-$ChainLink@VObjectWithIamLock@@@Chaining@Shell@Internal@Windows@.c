/*
 * XREFs of ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x180162764
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1801660F0 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
        __int64 a1,
        int a2)
{
  char v3; // bp
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v3 = 0;
      while ( 1 )
      {
        v9 = 0LL;
        v4 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( *(_BYTE *)(a1 + 89) )
        {
          if ( !v3 )
            break;
        }
        v3 = 1;
        *(_BYTE *)(a1 + 89) = 1;
        if ( !*(_BYTE *)(a1 + 88) )
          goto LABEL_18;
        *(_BYTE *)(a1 + 88) = 0;
        v5 = (__int64 *)(a1 + 64);
        if ( *(_QWORD *)(a1 + 80) )
          goto LABEL_13;
        if ( !*v5 )
          goto LABEL_18;
        if ( *(_QWORD *)(a1 + 80) )
        {
LABEL_13:
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v9, (__int64 *)(a1 + 80));
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
          *(_BYTE *)(a1 + 88) = *(_QWORD *)(a1 + 64) != 0LL;
          v7 = 1;
        }
        else
        {
          v6 = Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 80), v5);
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v9, v6);
          v7 = 0;
        }
        v8 = v9;
        if ( !v9 )
        {
LABEL_18:
          *(_BYTE *)(a1 + 89) = 0;
          break;
        }
        if ( v4 )
          ReleaseSRWLockExclusive(v4);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8, v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      }
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
    else if ( a2 == 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, 0LL);
    }
  }
}
