/*
 * XREFs of LdrProtectMrdataHeap @ 0x1800605F4
 * Callers:
 *     RtlpProtectReadOnlyHeap @ 0x180106E8C (RtlpProtectReadOnlyHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 */

signed __int64 __fastcall LdrProtectMrdataHeap(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // ebx
  signed __int64 result; // rax

  if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( a1 )
    {
      if ( !v6 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v7 = v6 - 1;
    }
    else
    {
      if ( !v6 )
        RtlProtectHeap(LdrpMrdataHeap, 0LL);
      if ( v6 == -1 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v7 = v6 + 1;
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7;
    if ( a1 )
    {
      if ( !v7 )
      {
        LOBYTE(v5) = 1;
        RtlProtectHeap(LdrpMrdataHeap, v5);
      }
    }
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return result;
}
