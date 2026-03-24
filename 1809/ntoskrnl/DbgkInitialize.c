/*
 * XREFs of DbgkInitialize @ 0x1409AEA1C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1 @ 0x1409AEA4C (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x1409AEA9C (DbgkpInitializePhase0.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
