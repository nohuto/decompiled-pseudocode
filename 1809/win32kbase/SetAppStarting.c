/*
 * XREFs of SetAppStarting @ 0x1C007E170
 * Callers:
 *     xxxInitProcessInfo @ 0x1C009B0FC (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetAppStarting(__int64 a1)
{
  struct _DEVOBJ_EXTENSION *v1; // rbx
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  v1 = 0LL;
  result = gppiStarting;
  *(_QWORD *)(a1 + 376) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    result = IsSetRITTimerSupported();
    if ( (int)result >= 0 )
    {
      result = SetRITTimer(
                 WPP_MAIN_CB.DeviceObjectExtension,
                 (unsigned int)(gdwHungAppTimeout + 30000),
                 CheckAppStarting,
                 1LL);
      v1 = (struct _DEVOBJ_EXTENSION *)result;
    }
    WPP_MAIN_CB.DeviceObjectExtension = v1;
  }
  return result;
}
