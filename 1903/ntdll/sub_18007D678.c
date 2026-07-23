/*
 * XREFs of sub_18007D678 @ 0x18007D678
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     TpAllocTimer @ 0x180031BA0 (TpAllocTimer.c)
 */

void __fastcall sub_18007D678(_TP_POOL *a1)
{
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-50h] BYREF
  PTP_TIMER Timer; // [rsp+88h] [rbp+18h] BYREF

  if ( (dword_180163534 & 0x40) != 0 )
  {
    Timer = 0LL;
    if ( a1 )
    {
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = a1;
      CallbackEnviron.Version = 3;
      CallbackEnviron.Size = 72;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_LOW;
      if ( TpAllocTimer(&Timer, (PTP_TIMER_CALLBACK)sub_1800678D0, 0LL, &CallbackEnviron) >= 0 )
      {
        ::Timer = Timer;
        dword_180166364 = 1;
      }
    }
  }
}
