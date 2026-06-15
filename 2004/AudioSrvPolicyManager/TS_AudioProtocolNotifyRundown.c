/*
 * XREFs of TS_AudioProtocolNotifyRundown @ 0x18002AE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_1800286E8 @ 0x1800286E8 (sub_1800286E8.c)
 *     sub_18002B478 @ 0x18002B478 (sub_18002B478.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void __fastcall TS_AudioProtocolNotifyRundown(void *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  EnterCriticalSection(&CriticalSection);
  v4 = (_QWORD *)qword_18004FF98;
  while ( 1 )
  {
    v5 = v4;
    v6 = v4;
    if ( !v4 )
      break;
    v3 = v4[2];
    v4 = (_QWORD *)*v4;
    v7 = v6[2];
    if ( !(unsigned int)sub_1800286E8(v7, a1) )
      goto LABEL_6;
    v3 = 0LL;
  }
  v7 = 0LL;
LABEL_6:
  LeaveCriticalSection(&CriticalSection);
  if ( v7 && *(_DWORD *)(v3 + 48) && *(_DWORD *)(v3 + 4) == 0xFFFF && !*(_DWORD *)(v3 + 32) && !*(_QWORD *)(v3 + 72) )
  {
    EnterCriticalSection(&CriticalSection);
    sub_18002B478(v8, v5);
    sub_180025BB0(v3);
    sub_180039D98((void *)v3);
    LeaveCriticalSection(&CriticalSection);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
