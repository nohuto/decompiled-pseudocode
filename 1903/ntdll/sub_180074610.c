/*
 * XREFs of sub_180074610 @ 0x180074610
 * Callers:
 *     RtlFlsFree @ 0x180074600 (RtlFlsFree.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800747CC @ 0x1800747CC (sub_1800747CC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_18009BC24 @ 0x18009BC24 (sub_18009BC24.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180074610(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  _RTL_SRWLOCK *v7; // rbp
  PVOID Ptr; // r15
  _RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rdi
  __int64 *i; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  _QWORD v21[31]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned int)(a2 - 1) > 0xFEE )
    return (unsigned int)-1073741811;
  v2 = a2 + 16;
  v3 = 0;
  _BitScanReverse((unsigned int *)&v4, a2 + 16);
  v5 = *((_QWORD *)&stru_180166120 + (unsigned int)(v4 - 4) + 1);
  if ( !v5 )
    return (unsigned int)-1073741811;
  v6 = 16 * (v2 ^ (unsigned __int64)(unsigned int)(1 << v4));
  v7 = (_RTL_SRWLOCK *)(v6 + v5 + 8);
  if ( !v7 || !v7[1].Ptr )
    return (unsigned int)-1073741811;
  Ptr = 0LL;
  v9 = (_RTL_SRWLOCK *)(v6 + v5 + 8);
  if ( v7[1].Ptr != (PVOID)-1LL )
    Ptr = v7[1].Ptr;
  RtlAcquireSRWLockExclusive(v9);
  while ( 2 )
  {
    v10 = 0LL;
    RtlAcquireSRWLockShared(&stru_180166120);
    for ( i = (__int64 *)qword_180166168; i != &qword_180166168 && (unsigned int)v10 < 0x10; i = (__int64 *)*i )
    {
      if ( !Ptr )
        goto LABEL_15;
      _BitScanReverse(&v12, v2);
      v13 = v2 ^ (1 << v12);
      v14 = i[v12 - 2];
      if ( v14 )
      {
        v15 = (__int64 *)(v14 + 8 * (v13 + 1LL));
        if ( v15 )
        {
          v16 = *v15;
          if ( v16 )
          {
            v17 = 2LL * (unsigned int)v10;
            v10 = (unsigned int)(v10 + 1);
            v21[v17 - 1] = Ptr;
            v21[v17] = v16;
LABEL_15:
            sub_18009BC24(i + 2, v2, 0LL);
            continue;
          }
        }
      }
    }
    RtlReleaseSRWLockShared(&stru_180166120);
    if ( (_DWORD)v10 )
    {
      v18 = v21;
      do
      {
        ((void (__fastcall *)(_QWORD))*(v18 - 1))(*v18);
        v18 += 2;
        --v10;
      }
      while ( v10 );
      continue;
    }
    break;
  }
  v7[1].Ptr = (PVOID)-2LL;
  RtlReleaseSRWLockExclusive(v7);
  RtlAcquireSRWLockExclusive(&stru_180166120);
  v7[1].Ptr = 0LL;
  sub_1800747CC(&unk_180166128);
  RtlReleaseSRWLockExclusive(&stru_180166120);
  return v3;
}
