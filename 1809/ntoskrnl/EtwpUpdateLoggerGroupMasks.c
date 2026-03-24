/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x140725D9C
 * Callers:
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406CB854 (EtwpStopLoggerInstance.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     EtwpGetFlagExtension @ 0x14065AF88 (EtwpGetFlagExtension.c)
 *     EtwpUpdateGroupMasks @ 0x140725E48 (EtwpUpdateGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  unsigned __int16 *FlagExtension; // rax
  unsigned __int16 v5; // cx
  int v7; // edx
  _DWORD v8[8]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( !a2 )
    return EtwpUpdateGroupMasks(a1, v8);
  FlagExtension = EtwpGetFlagExtension(a2, 1);
  if ( !FlagExtension )
  {
    v7 = v8[0];
    if ( *(int *)(a2 + 72) >= 0 )
      v7 = *(_DWORD *)(a2 + 72);
    v8[0] = v7;
    return EtwpUpdateGroupMasks(a1, v8);
  }
  v5 = 4 * *FlagExtension - 4;
  if ( v5 <= 0x20u )
  {
    memmove(v8, FlagExtension + 2, v5);
    return EtwpUpdateGroupMasks(a1, v8);
  }
  return 3221225485LL;
}
