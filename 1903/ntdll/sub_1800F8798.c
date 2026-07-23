/*
 * XREFs of sub_1800F8798 @ 0x1800F8798
 * Callers:
 *     sub_1800F8090 @ 0x1800F8090 (sub_1800F8090.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800F7B98 @ 0x1800F7B98 (sub_1800F7B98.c)
 */

PVOID *__fastcall sub_1800F8798(PVOID a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  PVOID *v4; // rcx
  __int64 v5; // r8
  PVOID *v6; // rax
  PVOID **v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // rbx
  PVOID *result; // rax
  _QWORD *v11; // rax
  PVOID *v12; // rcx
  PVOID **v13; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v3));
    v4 = *(PVOID **)(qword_180166870 + 16LL * v2);
    v5 = qword_180166870 + 16LL * v2;
    if ( v4 != (PVOID *)v5 )
    {
      do
      {
        v6 = (PVOID *)*v4;
        if ( v4[2] == a1 )
        {
          if ( v6[1] != v4
            || (v7 = (PVOID **)v4[1], *v7 != v4)
            || (*v7 = v6, v6[1] = v7, v8 = BaseAddress[0], *((PVOID **)BaseAddress[0] + 1) != BaseAddress) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v4 = BaseAddress[0];
          v4[1] = BaseAddress;
          v8[1] = v4;
          BaseAddress[0] = v4;
        }
        v4 = v6;
      }
      while ( v6 != (PVOID *)v5 );
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v9 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      return result;
    v11 = *(_QWORD **)BaseAddress[0];
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0] )
      goto LABEL_16;
    v12 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1);
    if ( *v12 != BaseAddress[0] )
      goto LABEL_16;
    *v12 = v11;
    v11[1] = v12;
    v13 = (PVOID **)v9[4];
    if ( v13 )
    {
      sub_1800F7B98(v13);
      v9[4] = 0LL;
    }
    RtlFreeHeap(qword_180166A08, 0, v9);
  }
}
