/*
 * XREFs of LdrProtectMrdataHeap @ 0x1800605F4
 * Callers:
 *     RtlpProtectReadOnlyHeap @ 0x180106E8C (RtlpProtectReadOnlyHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 */

void __fastcall LdrProtectMrdataHeap(int a1)
{
  int v2; // ebx
  int v3; // ebx

  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v2 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( a1 )
    {
      if ( !v2 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v3 = v2 - 1;
    }
    else
    {
      if ( !v2 )
        RtlProtectHeap(LdrpMrdataHeap, 0);
      if ( v2 == -1 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v3 = v2 + 1;
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v3;
    if ( a1 )
    {
      if ( !v3 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
    }
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
}
