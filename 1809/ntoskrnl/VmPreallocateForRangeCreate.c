/*
 * XREFs of VmPreallocateForRangeCreate @ 0x1408B16A0
 * Callers:
 *     <none>
 * Callees:
 *     VmpAllocateMemoryRanges @ 0x1408B1834 (VmpAllocateMemoryRanges.c)
 */

__int64 __fastcall VmPreallocateForRangeCreate(unsigned __int64 *a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v3; // rdi
  __int64 MemoryRanges; // rax

  v1 = 0;
  v3 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15];
  if ( !v3 )
    NT_ASSERT("0");
  MemoryRanges = VmpAllocateMemoryRanges(1LL);
  if ( MemoryRanges )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v3 + 80));
    *a1 = v3 ^ MemoryRanges;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
