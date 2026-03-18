/*
 * XREFs of SmInitSystem @ 0x140A19D78
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140A19DE0 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140A19E64 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_14058C4F0) >= 0 )
    {
      dword_14058C4F8 |= 1u;
      dword_14058C4FC = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
