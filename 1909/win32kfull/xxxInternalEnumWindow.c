/*
 * XREFs of xxxInternalEnumWindow @ 0x1C01D5E5C
 * Callers:
 *     xxxTurnOffCompositing @ 0x1C01E9B1C (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C023A794 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 * Callees:
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxInternalEnumWindow(struct tagWND *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagBWL *v8; // rdi
  unsigned __int64 *v9; // rbx
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  result = BuildHwndList(a1);
  v8 = (struct tagBWL *)result;
  if ( result )
  {
    v9 = (unsigned __int64 *)(result + 32);
    v10 = 1;
    v11 = *(_QWORD *)(result + 32);
    if ( v11 != 1 )
    {
      do
      {
        LOBYTE(v6) = 1;
        v12 = HMValidateHandleNoSecure(v11, v6, v7);
        if ( v12 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
          v17 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
          v18 = v12;
          HMLockObject(v12);
          v10 = a2(v12, a3);
          ThreadUnlock1(v15, v14, v16);
          if ( !v10 )
            break;
        }
        v11 = *++v9;
      }
      while ( *v9 != 1 );
    }
    FreeHwndList(v8);
    return v10;
  }
  return result;
}
