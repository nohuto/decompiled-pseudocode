/*
 * XREFs of PopSpoilBatteryEstimate @ 0x14071D5D8
 * Callers:
 *     PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x1406E3AF0 (PopSpoilEstimatesOnPowerStateTransitionWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x14071D4F8 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x1401763CC (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG __fastcall PopSpoilBatteryEstimate(int a1, unsigned __int8 a2)
{
  unsigned int v4; // r8d
  const char *v5; // r9
  ULONG result; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( a1 < 2 )
  {
    v4 = (unsigned __int8)(1 << a1);
    if ( a2 )
      _InterlockedOr(&PopEstimateSpoilerMask, v4);
    else
      _InterlockedAnd(&PopEstimateSpoilerMask, ~v4);
    PopBatteryQueueWork(4u);
    v5 = "indefinitely";
    if ( !a2 )
      v5 = "temporarily";
    result = DbgPrintEx(0x92u, 3u, "Battery estimates spoiled %s by %d; mask=%x\n", v5, a1, PopEstimateSpoilerMask);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v12 = 0;
      v15 = 0;
      v7 = a2;
      v10 = &v7;
      v13 = &v8;
      v8 = a1;
      v11 = 4;
      v14 = 4;
      return TlgWrite(&pCallbackContext, &unk_140370078, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
