/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140094CEC
 * Callers:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x140125E20 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1402C44FC (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x140094D1C (MiDeleteControlArea.c)
 *     MiQueueControlAreaDelete @ 0x1402A2E68 (MiQueueControlAreaDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea((PVOID)a1);
  }
  return result;
}
