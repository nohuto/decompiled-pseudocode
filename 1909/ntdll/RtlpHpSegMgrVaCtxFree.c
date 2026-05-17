/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x18010B714
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x180050284 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180050790 (RtlpHpQueryVA.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int16 *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // rcx
  unsigned __int16 *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v15, 0LL);
  v8 = (a2 - v5) / *a3;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
  v9 = v15;
  v10 = v15[1] ^ (1 << v8);
  v15[1] = v10;
  v11 = (unsigned __int64)*v9 >> 15;
  if ( (unsigned __int16)v10 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v9 + 1) != -1LL )
    {
      while ( 1 )
      {
        v12 = *(unsigned __int16 **)(a1 + 8 * v11 + 120);
        if ( !v12 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v11 + 120) = *(_QWORD *)v12;
        if ( v12 == v9 + 4 )
          break;
        *(_QWORD *)v12 = v7;
        v7 = v12;
      }
      while ( 1 )
      {
        v13 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v13 = *(_QWORD *)(a1 + 8 * v11 + 120);
        *(_QWORD *)(a1 + 8 * v11 + 120) = v13;
      }
    }
  }
  else
  {
    if ( (((unsigned __int16)v10 - 1) & (unsigned __int16)v10) == 0 )
    {
      *((_QWORD *)v9 + 1) = *(_QWORD *)(a1 + 8 * v11 + 120);
      *(_QWORD *)(a1 + 8 * v11 + 120) = v9 + 4;
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
