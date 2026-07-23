/*
 * XREFs of VmpInvalidateOutstandingFaults @ 0x14030CC88
 * Callers:
 *     VmpFlushTbVaRange @ 0x14030C834 (VmpFlushTbVaRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpInvalidateOutstandingFaults(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // r8d
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  bool v14; // cf
  unsigned __int64 v15; // rdx
  _QWORD *v16; // r9
  unsigned __int64 v17; // rax
  bool v18; // cf
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD **v21; // rdx
  _QWORD *i; // rdx

  v3 = (volatile LONG *)(a1 + 64);
  v6 = a2 + a3 - 1;
  v7 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_QWORD *)(a1 + 56);
  v9 = a1 + 48;
  v10 = *(_QWORD *)v9;
  if ( (v8 & 1) != 0 && v10 )
    v10 ^= v9;
  v11 = v8 & 1;
  v12 = 0LL;
  while ( v10 )
  {
    v13 = *(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFLL;
    v14 = a2 < v13;
    if ( a2 > v13 )
    {
      v15 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v10;
      v12 = (_QWORD *)v10;
      if ( !v14 )
      {
        if ( v11 && v15 )
          v15 ^= v10;
        v16 = 0LL;
        if ( v15 )
        {
          do
          {
            v17 = *(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFLL;
            v18 = a2 < v17;
            if ( a2 > v17 )
            {
              v19 = *(_QWORD *)(v15 + 8);
            }
            else
            {
              v19 = *(_QWORD *)v15;
              if ( !v18 )
                v16 = (_QWORD *)v15;
            }
            if ( v11 && v19 )
              v15 ^= v19;
            else
              v15 = v19;
          }
          while ( v15 );
          if ( v16 )
            v12 = v16;
        }
        break;
      }
    }
    if ( v11 && v15 )
      v10 ^= v15;
    else
      v10 = v15;
  }
  while ( v12 && (v12[3] & 0xFFFFFFFFFFFFFuLL) <= v6 )
  {
    ++v7;
    v20 = v12;
    v12[3] |= 0x10000000000000uLL;
    v21 = (_QWORD **)v12[1];
    if ( v21 )
    {
      v12 = (_QWORD *)v12[1];
      for ( i = *v21; i; i = (_QWORD *)*i )
        v12 = i;
    }
    else
    {
      while ( 1 )
      {
        v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v12 || (_QWORD *)*v12 == v20 )
          break;
        v20 = v12;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return v7;
}
