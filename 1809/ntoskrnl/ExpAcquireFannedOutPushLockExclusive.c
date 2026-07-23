/*
 * XREFs of ExpAcquireFannedOutPushLockExclusive @ 0x14016765C
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140119050 (ExAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 */

int __fastcall ExpAcquireFannedOutPushLockExclusive(unsigned __int64 a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
{
  __int64 v4; // r9
  unsigned int v6; // ecx
  __int64 v8; // rbp
  unsigned __int64 *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned __int64 *v16; // rcx

  v4 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v6, v4);
  v8 = (a1 >> 4) & 0x1FF;
  v9 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v6 - 2))
                                      + 8 * (v4 ^ (unsigned int)(1 << v6))
                                      + 8)
                          + 8 * v8);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, a2, a3);
  v10 = 1;
  LODWORD(v11) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v12) = v11;
  if ( (unsigned int)v11 > 1 )
  {
    v13 = ((unsigned int)a1 >> 13) & 0x3FFFF;
    do
    {
      _BitScanReverse(&v14, v13);
      v11 = *(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v10) + 8LL * (v14 - 2));
      if ( _interlockedbittestandset64(
             (volatile signed __int32 *)(*(_QWORD *)(v11 + 8LL * (v13 ^ (1 << v14)) + 8) + 8 * v8),
             0LL) )
      {
        v12 = (unsigned int)(v12 - 1);
        _BitScanReverse(&v15, v13);
        v11 = *(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v12) + 8LL * (v15 - 2));
        v16 = (unsigned __int64 *)(*(_QWORD *)(v11 + 8LL * (v13 ^ (1 << v15)) + 8) + 8 * v8);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
          LODWORD(v11) = ExfAcquirePushLockExclusiveEx(v16, a2, a3);
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < (unsigned int)v12 );
  }
  return v11;
}
