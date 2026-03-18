/*
 * XREFs of NtUserGetControlColor @ 0x1C022BBC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1C012C064 (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 ControlColor; // rbx
  ULONG_PTR v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  HICON *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h]
  __int64 v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  HICON *v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+48h] [rbp-8h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v11 = v8;
  if ( v8 )
  {
    v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    v21 = v8;
    HMLockObject(v8);
    v14 = (HICON *)ValidateHwnd(a2);
    if ( v14 && a3 && a4 - 306 <= 6 )
    {
      v23 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v23;
      v24 = v14;
      HMLockObject(v14);
      ControlColor = xxxGetControlColor(v11, v14, a3, a4);
      ThreadUnlock1(v17, v16, v18);
    }
    ThreadUnlock1(v13, v12, v15);
  }
  UserSessionSwitchLeaveCrit(v9);
  return ControlColor;
}
