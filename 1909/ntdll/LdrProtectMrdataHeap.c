/*
 * XREFs of LdrProtectMrdataHeap @ 0x1800484A8
 * Callers:
 *     RtlpProtectReadOnlyHeap @ 0x18010456C (RtlpProtectReadOnlyHeap.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 */

signed __int64 __fastcall LdrProtectMrdataHeap(int a1)
{
  signed __int64 result; // rax
  int v3; // ebx
  int v4; // ebx

  result = LdrControlFlowGuardEnforced();
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v3 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( a1 )
  {
    if ( v3 )
    {
      v4 = v3 - 1;
      goto LABEL_7;
    }
LABEL_14:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !v3 )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
  if ( v3 == -1 )
    goto LABEL_14;
  v4 = v3 + 1;
LABEL_7:
  *(_DWORD *)LdrpMrdataHeapUnprotected = v4;
  if ( a1 )
  {
    if ( !v4 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
  }
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
