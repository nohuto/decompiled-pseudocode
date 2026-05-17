/*
 * XREFs of sub_180088B88 @ 0x180088B88
 * Callers:
 *     sub_180088B70 @ 0x180088B70 (sub_180088B70.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlDelete @ 0x180064B60 (RtlDelete.c)
 *     sub_1800803C4 @ 0x1800803C4 (sub_1800803C4.c)
 */

signed __int64 __fastcall sub_180088B88(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // r14
  __int64 *v5; // rdi
  unsigned __int64 v6; // rdx
  signed __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&qword_1801664C8);
  v3 = (__int64 *)qword_1801660A8;
  while ( 1 )
  {
    v4 = v3;
    if ( !v3 )
      break;
    v5 = v3 - 12;
    v6 = *(v3 - 12);
    if ( v6 < *(_QWORD *)(a1 + 24) )
      goto LABEL_8;
    if ( v6 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v3 = RtlDelete(v3);
      qword_1801660A8 = (__int64)v3;
      *v4 = v2;
      v2 = (__int64)v5;
    }
    else if ( v6 < *(_QWORD *)(a1 + 24) )
    {
LABEL_8:
      v3 = (__int64 *)v3[2];
    }
    else
    {
      v3 = (__int64 *)v3[1];
    }
  }
  result = RtlReleaseSRWLockExclusive(&qword_1801664C8);
  while ( v2 )
  {
    v11 = *(_QWORD *)(v2 + 96);
    sub_1800803C4(*(_QWORD *)(v2 + 80), v8, v9, v10);
    RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v11;
  }
  return result;
}
