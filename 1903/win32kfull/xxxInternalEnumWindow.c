/*
 * XREFs of xxxInternalEnumWindow @ 0x1C01D5FEC
 * Callers:
 *     xxxTurnOffCompositing @ 0x1C01E9C9C (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C023ADB4 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxInternalEnumWindow(struct tagWND *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagBWL *v9; // rdi
  unsigned __int64 *v10; // rbx
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  result = BuildHwndList(a1);
  v9 = (struct tagBWL *)result;
  if ( result )
  {
    v10 = (unsigned __int64 *)(result + 32);
    v11 = 1;
    v12 = *(_QWORD *)(result + 32);
    if ( v12 != 1 )
    {
      do
      {
        LOBYTE(v6) = 1;
        v13 = HMValidateHandleNoSecure(v12, v6, v7, v8);
        if ( v13 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
          v18 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
          v19 = v13;
          HMLockObject(v13);
          v11 = a2(v13, a3);
          ThreadUnlock1(v16, v15, v17);
          if ( !v11 )
            break;
        }
        v12 = *++v10;
      }
      while ( *v10 != 1 );
    }
    FreeHwndList(v9);
    return v11;
  }
  return result;
}
