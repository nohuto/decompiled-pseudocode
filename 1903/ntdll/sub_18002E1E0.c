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

void sub_18002E1E0()
{
  __int64 *v0; // rbx
  __int64 v1; // rax

  if ( !byte_180165300 )
  {
    RtlEnterCriticalSection((__int64)&unk_1801652C0);
    v0 = (__int64 *)qword_1801652F0;
    v1 = *(_QWORD *)qword_1801652F0;
    if ( *(__int64 **)(qword_1801652F0 + 8) != &qword_1801652F0 || *(_QWORD *)(v1 + 8) != qword_1801652F0 )
      __fastfail(3u);
    qword_1801652F0 = *(_QWORD *)qword_1801652F0;
    *(_QWORD *)(v1 + 8) = &qword_1801652F0;
    if ( &qword_1801652F0 != v0 )
    {
      ++dword_1801652E8;
      sub_18002E464();
    }
    RtlLeaveCriticalSection(&unk_1801652C0);
    if ( &qword_1801652F0 != v0 )
      sub_18002E26C(v0 - 8, 0LL);
  }
}
