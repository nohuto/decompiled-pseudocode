/*
 * XREFs of sub_18010B5E4 @ 0x18010B5E4
 * Callers:
 *     sub_1800501E4 @ 0x1800501E4 (sub_1800501E4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800506F0 @ 0x1800506F0 (sub_1800506F0.c)
 */

unsigned __int64 __fastcall sub_18010B5E4(_RTL_SRWLOCK *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdi
  _RTL_SRWLOCK *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned __int16 *Ptr; // rcx
  PVOID *v13; // rcx
  _RTL_SRWLOCK *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  sub_1800506F0(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v15, 0LL);
  v8 = (a2 - v5) / *a3;
  RtlAcquireSRWLockExclusive(a1 + 14);
  v9 = v15;
  v10 = WORD1(v15->Ptr) ^ (1 << v8);
  WORD1(v15->Ptr) = v10;
  v11 = (unsigned __int64)LOWORD(v9->Ptr) >> 15;
  if ( (unsigned __int16)v10 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( v9[1].Ptr != (PVOID)-1LL )
    {
      while ( 1 )
      {
        Ptr = (unsigned __int16 *)a1[v11 + 15].Ptr;
        if ( !Ptr )
          break;
        a1[v11 + 15] = *(_RTL_SRWLOCK *)Ptr;
        if ( Ptr == (unsigned __int16 *)&v9[1] )
          goto LABEL_7;
        *(_QWORD *)Ptr = v7;
        v7 = Ptr;
      }
      __int2c();
LABEL_7:
      while ( 1 )
      {
        v13 = (PVOID *)v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *v13 = a1[v11 + 15].Ptr;
        a1[v11 + 15].Ptr = v13;
      }
    }
  }
  else
  {
    if ( (((unsigned __int16)v10 - 1) & (unsigned __int16)v10) == 0 )
    {
      v9[1].Ptr = (PVOID)a1[v11 + 15];
      a1[v11 + 15].Ptr = &v9[1];
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive(a1 + 14);
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
