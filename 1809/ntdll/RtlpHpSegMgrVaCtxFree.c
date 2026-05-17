/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x18010DBE0
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x180066270 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180066388 (RtlpHpQueryVA.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // r9
  int v13; // eax
  unsigned __int64 v14; // r8
  unsigned __int16 *v15; // rcx
  unsigned __int16 *v16; // rcx
  unsigned __int16 *v18; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v18, 0LL);
  v8 = (a2 - v5) % *a3;
  v9 = (a2 - v5) / *a3;
  RtlAcquireSRWLockExclusive(a1 + 112, v8, v10, v11);
  v12 = v18;
  v13 = v18[1] ^ (1 << v9);
  v18[1] = v13;
  v14 = (unsigned __int64)*v12 >> 15;
  if ( (unsigned __int16)v13 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v12 + 1) != -1LL )
    {
      while ( 1 )
      {
        v15 = *(unsigned __int16 **)(a1 + 8 * v14 + 120);
        if ( !v15 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v14 + 120) = *(_QWORD *)v15;
        if ( v15 == v12 + 4 )
          break;
        *(_QWORD *)v15 = v7;
        v7 = v15;
      }
      while ( 1 )
      {
        v16 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v16 = *(_QWORD *)(a1 + 8 * v14 + 120);
        *(_QWORD *)(a1 + 8 * v14 + 120) = v16;
      }
    }
  }
  else
  {
    if ( (((unsigned __int16)v13 - 1) & (unsigned __int16)v13) == 0 )
    {
      *((_QWORD *)v12 + 1) = *(_QWORD *)(a1 + 8 * v14 + 120);
      *(_QWORD *)(a1 + 8 * v14 + 120) = v12 + 4;
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
