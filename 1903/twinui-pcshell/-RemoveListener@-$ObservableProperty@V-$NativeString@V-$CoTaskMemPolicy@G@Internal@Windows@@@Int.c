/*
 * XREFs of ?RemoveListener@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAJPEAX@Z @ 0x180356274
 * Callers:
 *     ?_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x180356FA4 (-_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18012E6C8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::RemoveListener(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // esi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) == a2 )
        break;
      if ( ++v6 >= v2 )
        goto LABEL_4;
    }
    if ( v6 < *(_QWORD *)(a1 + 32) )
    {
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 24)
                                                                                                  + 8 * v6));
      v9 = *(_QWORD *)(a1 + 32);
      if ( v6 != v9 - 1 )
      {
        memmove_0(
          (void *)(*(_QWORD *)(a1 + 24) + 8 * v6),
          (const void *)(*(_QWORD *)(a1 + 24) + 8 * v6 + 8),
          8 * (v9 - v6) - 8);
        v9 = *(_QWORD *)(a1 + 32);
      }
      *(_QWORD *)(a1 + 32) = v9 - 1;
    }
    else
    {
      v3 = -2147316575;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
        (const char *)0x80028CA1LL);
    }
    return v3;
  }
  else
  {
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
