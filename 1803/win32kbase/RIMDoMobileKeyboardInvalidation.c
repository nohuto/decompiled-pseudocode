/*
 * XREFs of RIMDoMobileKeyboardInvalidation @ 0x1C00E1508
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00E3AD0 (RIMOnPowerNotification.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C00F6688 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01040A8 (rimInvalidateHidKeyboardDeviceKeys.c)
 */

ULONG __fastcall RIMDoMobileKeyboardInvalidation(_BYTE *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  ULONG result; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x100) == 0 )
  {
    v4 = *(_QWORD *)(a2 + 488);
    if ( *(_DWORD *)(v4 + 292) )
    {
      if ( a1[568] )
      {
        v5 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 464) + 44LL);
        *(_DWORD *)(a2 + 256) = 0;
        *(_QWORD *)(a2 + 264) = v5;
        rimInvalidateHidKeyboardDeviceKeys(a1, a2, v4, 0LL);
        if ( a1[568] )
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x15u,
            0x4Cu,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
            a1,
            a2);
          return DbgPrintRIMAlways(
                   "pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys failed!\n",
                   a1,
                   (const void *)a2);
        }
        else
        {
          return rimSignalReadComplete(a1, a2);
        }
      }
    }
  }
  return result;
}
