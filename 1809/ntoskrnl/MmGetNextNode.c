/*
 * XREFs of MmGetNextNode @ 0x140061FC0
 * Callers:
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     ExpQueueWorkItem @ 0x1400B7260 (ExpQueueWorkItem.c)
 *     KiChooseTargetProcessor @ 0x1400C4310 (KiChooseTargetProcessor.c)
 *     ExpTryQueueWorkItem @ 0x1400D17AC (ExpTryQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x1400FCC14 (PoAllProcessorsDeepIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)qword_14043B110 + *a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1);
}
