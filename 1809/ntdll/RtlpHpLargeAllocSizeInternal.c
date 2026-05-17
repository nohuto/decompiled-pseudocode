/*
 * XREFs of RtlpHpLargeAllocSizeInternal @ 0x180066A8C
 * Callers:
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSizeInternal(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a3 )
  {
    v3 = *(_DWORD *)(a2 + 32) & 1;
    if ( v3 )
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *a3 = v3;
  }
  return (*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(a2 + 24);
}
