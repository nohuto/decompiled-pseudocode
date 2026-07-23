/*
 * XREFs of PopIsWakeTimerImmanent @ 0x140870AFC
 * Callers:
 *     PopDeferDoze @ 0x140870970 (PopDeferDoze.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExGetNextWakeTime @ 0x14057F734 (ExGetNextWakeTime.c)
 */

bool __fastcall PopIsWakeTimerImmanent(
        unsigned __int64 a1,
        int a2,
        int a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // r11
  bool v10; // r14
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r10
  char v14; // r8
  bool NextWakeTime; // al
  char v16; // r8
  bool v17; // al
  unsigned __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 *v20; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 *v22; // [rsp+48h] [rbp-8h] BYREF
  int v24; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v25; // [rsp+B0h] [rbp+60h]

  v24 = a3;
  v6 = -1LL;
  v7 = 0LL;
  v19 = -1LL;
  v8 = 0LL;
  v21 = -1LL;
  v9 = a1;
  v20 = 0LL;
  *a5 = 0LL;
  v10 = 0;
  v22 = 0LL;
  v12 = -1LL;
  if ( qword_140418860 && PopDozeDeferralMaxSeconds )
  {
    v13 = qword_140418860 + 10000000LL * (unsigned int)PopDozeDeferralMaxSeconds;
    v25 = v13;
    if ( a2 )
    {
      v14 = a2 == 2 && PopSimulate >= 0;
      NextWakeTime = ExGetNextWakeTime(a1, v13, v14, &v19, &v20);
      v6 = v19;
      v8 = v20;
      a3 = v24;
      v13 = v25;
      v9 = a1;
      v10 = NextWakeTime;
    }
    if ( a3 )
    {
      v16 = a3 == 2 && PopSimulate >= 0;
      v17 = ExGetNextWakeTime(v9, v13, v16, &v21, &v22);
      v12 = v21;
      v7 = v22;
      if ( v17 )
        v10 = 1;
    }
    if ( v10 )
    {
      if ( v6 > v12 )
      {
        if ( v8 )
          ExFreePoolWithTag(v8, 0x53577254u);
        *a4 = v12;
        *a5 = v7;
      }
      else
      {
        if ( v7 )
          ExFreePoolWithTag(v7, 0x53577254u);
        *a4 = v6;
        *a5 = v8;
      }
    }
  }
  return v10;
}
