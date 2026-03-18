/*
 * XREFs of ExFastReferenceHandleTableEntry @ 0x140006480
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0B80 (PspReferenceCidTableEntry.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5224 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExFastReferenceHandleTableEntry(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax

  _m_prefetchw(a2);
  *a3 = *a2;
  a3[1] = a2[1];
  v6 = *a3;
  if ( (*a3 & 0x1FFFE) == 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( (v6 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(a1, a2, v6);
      _m_prefetchw(a2);
      *a3 = *a2;
      a3[1] = a2[1];
      goto LABEL_7;
    }
    v8 = *(_OWORD *)a3;
    v9 = _InterlockedCompareExchange128(a2, *((signed __int64 *)&v8 + 1), v6 - 2, (signed __int64 *)&v8);
    v7 = v8;
    *(_OWORD *)a3 = v8;
    if ( v9 )
      break;
LABEL_7:
    v6 = *a3;
    if ( (*a3 & 0x1FFFE) == 0 )
      return 0xFFFFFFFFLL;
  }
  v10 = v7;
  v11 = v7 >> 1;
  if ( (_WORD)v11 != 16 )
    return 0LL;
  *a3 = v10 ^ ((unsigned int)v10 ^ (2 * (_DWORD)v11 - 2)) & 0x1FFFE;
  return 32752LL;
}
