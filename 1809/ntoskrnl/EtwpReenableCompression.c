/*
 * XREFs of EtwpReenableCompression @ 0x1403158FC
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x140015480 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400154CC (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 */

char __fastcall EtwpReenableCompression(__int64 a1)
{
  __int32 v1; // eax
  bool v3; // zf
  int i; // eax
  __int64 *v5; // rdx
  __int64 *j; // rcx
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v1) = 0;
  v3 = *(_DWORD *)(a1 + 1164) == 2;
  v8 = 0;
  if ( !v3 )
  {
    LOBYTE(v1) = KeGetEffectiveIrql();
    if ( (unsigned __int8)v1 < 2u )
    {
      v1 = _InterlockedExchange((volatile __int32 *)(a1 + 1152), 1);
      if ( v1 != 1 )
      {
        EtwpLockBufferList(a1, &v8);
        for ( i = EtwpQueryUsedProcessorCount(a1); i && v5; --i )
        {
          if ( *((_DWORD *)v5 + 3) == 4 )
            *((_WORD *)v5 + 10) |= 0x80u;
          v5 = (__int64 *)*v5;
        }
        for ( j = *(__int64 **)(a1 + 72); i && j; j = (__int64 *)*j )
        {
          --i;
          if ( *((_DWORD *)j + 3) == 4 )
            *((_WORD *)j + 10) |= 0x80u;
        }
        LOBYTE(v1) = EtwpUnlockBufferList(a1, &v8);
      }
    }
  }
  return v1;
}
