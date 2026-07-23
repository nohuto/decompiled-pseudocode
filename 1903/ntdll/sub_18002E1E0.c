/*
 * XREFs of sub_18002E1E0 @ 0x18002E1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_18002E464 @ 0x18002E464 (sub_18002E464.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

void __fastcall sub_18002E1E0(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  if ( !byte_180165300 )
  {
    RtlEnterCriticalSection(&stru_1801652C0);
    v3 = (__int64 *)qword_1801652F0;
    v4 = *(_QWORD *)qword_1801652F0;
    if ( *(__int64 **)(qword_1801652F0 + 8) != &qword_1801652F0 || *(_QWORD *)(v4 + 8) != qword_1801652F0 )
      __fastfail(3u);
    qword_1801652F0 = *(_QWORD *)qword_1801652F0;
    *(_QWORD *)(v4 + 8) = &qword_1801652F0;
    if ( &qword_1801652F0 != v3 )
    {
      ++dword_1801652E8;
      sub_18002E464();
    }
    RtlLeaveCriticalSection(&stru_1801652C0);
    if ( &qword_1801652F0 != v3 )
      sub_18002E26C(v3 - 8, 0LL);
  }
}
