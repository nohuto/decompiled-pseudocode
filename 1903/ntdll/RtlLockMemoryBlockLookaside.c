/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x180073930
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x180073800 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x1800739A0 (RtlLockMemoryZone.c)
 *     sub_180073ADC @ 0x180073ADC (sub_180073ADC.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(__int64 a1)
{
  int v2; // edi
  __int64 v4; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  v2 = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( v2 >= 0 )
  {
    v2 = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( v2 < 0 )
    {
      v4 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v2 = sub_180073ADC();
      if ( v2 >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      v4 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)v2;
}
