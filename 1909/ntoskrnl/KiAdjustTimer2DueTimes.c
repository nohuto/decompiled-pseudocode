/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x140179D34
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x140179ACC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiShouldActivateHRTimerClock @ 0x14009F518 (KiShouldActivateHRTimerClock.c)
 *     KiRemoveTimer2 @ 0x14009FAD0 (KiRemoveTimer2.c)
 *     RtlULongLongSub @ 0x1400E2CC0 (RtlULongLongSub.c)
 *     KiSendClockInterruptToClockOwner @ 0x140111DF8 (KiSendClockInterruptToClockOwner.c)
 *     KiInsertTimer2 @ 0x140122C34 (KiInsertTimer2.c)
 *     KiRequestTimer2Expiration @ 0x14012D1A0 (KiRequestTimer2Expiration.c)
 */

char __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  int v1; // r15d
  _QWORD *v2; // rdi
  __int64 v3; // r10
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *i; // rbx
  _QWORD **v7; // rax
  _QWORD *v8; // r13
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  char v11; // al
  ULONGLONG *v12; // r8
  ULONGLONG v13; // rcx
  signed __int64 v14; // rdx
  signed __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // bl
  __int64 v20; // rcx
  char result; // al
  __int64 v22; // rax
  _QWORD *v23; // r8
  ULONGLONG v24; // rcx
  _QWORD *v25; // r8
  _QWORD v26[2]; // [rsp+20h] [rbp-10h] BYREF
  char v28; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0;
  v2 = v26;
  v26[1] = v26;
  v3 = a1;
  v26[0] = v26;
  v4 = (unsigned __int64)KiTimer2Collections;
  do
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( (v5 & 1) != 0 )
    {
      if ( v5 == 1 )
        goto LABEL_18;
      i = (_QWORD *)(v5 ^ (v4 | 1));
    }
    else
    {
      i = *(_QWORD **)(v4 + 8);
    }
    while ( i )
    {
      v7 = (_QWORD **)i[1];
      v8 = &i[-3 * ((unsigned __int64)(unsigned int)v1 >> 1)];
      v9 = i;
      if ( v7 )
      {
        v10 = *v7;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
      v11 = *((_BYTE *)v8 + 104);
      if ( v11 != *(_BYTE *)v3 && (v11 || (*((_BYTE *)v8 + 105) & 2) == 0) )
      {
        KiRemoveTimer2((__int64)(v8 - 3));
        v3 = a1;
        v12 = v8 + 6;
        v13 = v8[6];
        v14 = *(_QWORD *)(a1 + 24);
        if ( v14 >= 0 )
        {
          if ( RtlULongLongSub(v13, v14, v12) )
            *v23 = 0LL;
          v24 = v8[7];
          if ( v24 != -1LL && RtlULongLongSub(v24, *(_QWORD *)(v3 + 24), v8 + 7) )
            *v25 = 0LL;
        }
        else
        {
          v15 = -v14;
          v16 = v13 + v15;
          if ( v13 + v15 < v13 || v16 == -1 )
            v16 = -2LL;
          v17 = v8[7];
          *v12 = v16;
          if ( v17 != -1LL )
          {
            v22 = v17 + v15;
            if ( v17 + v15 < v17 || v22 == -1 )
              v22 = -2LL;
            v8[7] = v22;
          }
        }
        v18 = v26[0];
        v2 = v8;
        if ( *(_QWORD **)(v26[0] + 8LL) != v26 )
          __fastfail(3u);
        *v8 = v26[0];
        v8[1] = v26;
        *(_QWORD *)(v18 + 8) = v8;
        v26[0] = v8;
      }
    }
LABEL_18:
    ++v1;
    v4 += 24LL;
  }
  while ( v1 < 4 );
  v19 = 0;
  if ( v2 != v26 )
  {
    do
    {
      v20 = (__int64)(v2 - 3);
      v2 = (_QWORD *)*v2;
      KiInsertTimer2(v20, 1, &v28);
      if ( v28 )
        v19 = 1;
    }
    while ( v2 != v26 );
    if ( v19 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_14044D748);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
