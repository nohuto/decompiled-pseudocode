/*
 * XREFs of sub_180068BD4 @ 0x180068BD4
 * Callers:
 *     RtlFlsAlloc @ 0x180068BC0 (RtlFlsAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180068D20 @ 0x180068D20 (sub_180068D20.c)
 *     sub_1800747CC @ 0x1800747CC (sub_1800747CC.c)
 */

__int64 __fastcall sub_180068BD4(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v6; // esi
  unsigned int v7; // edx
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v16; // r8d
  __int64 v17; // r9
  unsigned int v18; // eax

  v6 = 1;
  RtlAcquireSRWLockExclusive(&stru_180166120);
  v7 = sub_180068D20(&unk_180166128);
  if ( v7 == -1 )
    goto LABEL_8;
  v8 = 8LL;
  while ( 1 )
  {
    v9 = v7 - 16;
    if ( v7 != 16 )
      break;
    _BitScanReverse(&v10, 0x10u);
    v11 = (1 << v10) ^ 0x10;
    v12 = *((_QWORD *)&stru_180166120 + v10 - 3);
    if ( v12 )
      v13 = v12 + 16 * (v11 + 1LL);
    else
      v13 = 8LL;
    *(_QWORD *)v13 = -1LL;
    v7 = sub_180068D20(&unk_180166128);
    if ( v7 == -1 )
      goto LABEL_8;
  }
  if ( v9 >= 0xFF0 )
  {
LABEL_8:
    v14 = -1073741801;
  }
  else
  {
    _BitScanReverse((unsigned int *)&v16, v7);
    v17 = *((_QWORD *)&stru_180166120 + (unsigned int)(v16 - 4) + 1);
    if ( v17 )
      v8 = v17 + 16 * ((v7 ^ (unsigned __int64)(unsigned int)(1 << v16)) + 1);
    if ( !a3 )
      a3 = -1LL;
    *(_QWORD *)v8 = a3;
    v18 = qword_180166178;
    if ( v9 > (unsigned int)qword_180166178 )
      v18 = v7 - 16;
    LODWORD(qword_180166178) = v18;
    RtlReleaseSRWLockExclusive(&stru_180166120);
    v6 = 0;
    *a4 = v9;
    v14 = 0;
    v7 = -1;
  }
  if ( v7 != -1 )
    sub_1800747CC(&unk_180166128);
  if ( v6 )
    RtlReleaseSRWLockExclusive(&stru_180166120);
  return v14;
}
