/*
 * XREFs of sub_1800DE908 @ 0x1800DE908
 * Callers:
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180082AC4 @ 0x180082AC4 (sub_180082AC4.c)
 *     sub_1800DE870 @ 0x1800DE870 (sub_1800DE870.c)
 */

NTSTATUS __fastcall sub_1800DE908(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  unsigned int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  sub_1800DE870();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v2 + 8) != a1 + 8 || *v3 != a1 + 8 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  for ( i = dword_180166600; i && i >= dword_1801627C8; i = --dword_180166600 )
  {
    v5 = qword_180166608;
    v6 = *(_QWORD *)qword_180166608;
    if ( *(__int64 **)(qword_180166608 + 8) != &qword_180166608 || *(_QWORD *)(v6 + 8) != qword_180166608 )
      __fastfail(3u);
    qword_180166608 = *(_QWORD *)qword_180166608;
    *(_QWORD *)(v6 + 8) = &qword_180166608;
    sub_180082AC4(v5 - 8);
  }
  if ( dword_1801627C8 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = (_QWORD *)qword_180166610;
    if ( *(__int64 **)qword_180166610 != &qword_180166608 )
      __fastfail(3u);
    *v7 = &qword_180166608;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v7;
    qword_180166610 = a1 + 8;
    dword_180166600 = i + 1;
  }
  else
  {
    sub_180082AC4(a1);
  }
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
