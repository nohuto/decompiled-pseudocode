/*
 * XREFs of xxxClientThreadSetup @ 0x1C0108AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientThreadSetup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  char v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(84LL);
  v4 = KeUserModeCallback(84LL, 0LL, 0LL, &v7, &v6);
  EtwTraceEndCallback(84LL);
  EnterCrit(0LL, 1LL);
  return v4;
}
