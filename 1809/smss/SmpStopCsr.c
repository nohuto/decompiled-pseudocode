/*
 * XREFs of SmpStopCsr @ 0x140001020
 * Callers:
 *     SmpApiCallback @ 0x140003860 (SmpApiCallback.c)
 *     SmpStartCsr @ 0x140004B30 (SmpStartCsr.c)
 * Callees:
 *     SmpTerminateCSR @ 0x14000105C (SmpTerminateCSR.c)
 *     SmpLookupControlBlock @ 0x14000433C (SmpLookupControlBlock.c)
 *     SmpDestroyControlBlock @ 0x1400048D8 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140004968 (SmpReleaseControlBlock.c)
 */

__int64 __fastcall SmpStopCsr(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // rax
  void *v3; // rdi
  unsigned int v4; // ebx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (void *)SmpLookupControlBlock(v1);
  v3 = v2;
  if ( v2 )
  {
    v4 = SmpDestroyControlBlock(v2);
    SmpReleaseControlBlock(v3);
  }
  else
  {
    return (unsigned int)SmpTerminateCSR(v1);
  }
  return v4;
}
