/*
 * XREFs of NtUserFillWindow @ 0x1C008D670
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C008D7C8 (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h]
  __int64 v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+48h] [rbp-8h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    v21 = v8;
    HMLockObject(v8);
    if ( a3 )
    {
      if ( !a1 )
      {
        v15 = 0LL;
        goto LABEL_5;
      }
      v15 = ValidateHwnd(a1);
      if ( v15 )
      {
LABEL_5:
        v23 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v23;
        v24 = v15;
        if ( v15 )
          HMLockObject(v15);
        v10 = xxxFillWindow(v15, v11, a3, a4);
        ThreadUnlock1(v17, v16, v18);
      }
    }
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
