/*
 * XREFs of EtwpReleaseStackLookasideList @ 0x14032CC0C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     <none>
 */

void EtwpReleaseStackLookasideList()
{
  _InterlockedDecrement(&dword_14046B560);
}
