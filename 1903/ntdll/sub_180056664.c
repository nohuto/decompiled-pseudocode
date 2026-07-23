/*
 * XREFs of sub_180056664 @ 0x180056664
 * Callers:
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180056664(__int64 a1, unsigned __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdi
  _RTL_SRWLOCK *v3; // rsi

  v2 = (_RTL_SRWLOCK *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = a2;
  v3 = (_RTL_SRWLOCK *)((char *)&unk_1801661C0 + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  v2[1].Ptr = v3->Ptr;
  v3->Ptr = v2;
  RtlReleaseSRWLockExclusive(v3 + 1);
}
