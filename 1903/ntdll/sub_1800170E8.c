/*
 * XREFs of sub_1800170E8 @ 0x1800170E8
 * Callers:
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall sub_1800170E8(__int64 a1, _BYTE *a2)
{
  int v4; // ecx
  int v5; // eax
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 220);
    if ( v4 && (result = NtCurrentTeb(), v4 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 216);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 904));
      v5 = *(_DWORD *)(a1 + 20);
      *a2 = -1;
      if ( (v5 & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 640));
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 320));
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 512));
            if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
          }
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 220) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 216) = 1;
    }
  }
  return result;
}
