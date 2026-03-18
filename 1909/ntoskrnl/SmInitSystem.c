/*
 * XREFs of SmInitSystem @ 0x140A19F08
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140A19F70 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140A19FF4 (SmGlobalsInitialize.c)
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
