/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x1C0113298
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0051A08 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0112CA0 (RIMFindMonitorForDigitizer.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0113408 (RIMSetPointerDeviceInputSpace.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x1C0111F10 (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0112364 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     rimSetDeviceDisplayConfig @ 0x1C0114428 (rimSetDeviceDisplayConfig.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01535E8 (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct CEResource *v11; // rdx
  _DWORD *v12; // r9
  struct INPUT_SPACE_REGION *v13; // [rsp+20h] [rbp-28h] BYREF
  PERESOURCE *v14; // [rsp+28h] [rbp-20h] BYREF
  struct INPUT_SPACE *v15; // [rsp+30h] [rbp-18h] BYREF
  PERESOURCE *v16; // [rsp+38h] [rbp-10h] BYREF

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 60);
      v10 = *((_QWORD *)a1 + 42);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10);
      else
        RIMEndAllActiveContacts(v10, a2, 0LL);
    }
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v15, a2);
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v13, v11);
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)&v15,
           (struct CLockedInputSpaceRegion *)&v13) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)&v15, (struct CLockedInputSpaceRegion *)&v13);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("Input configuration couldn't find a valid config");
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v15, v13);
    CEResourceLockExclusive::~CEResourceLockExclusive(&v14);
    CEResourceLockExclusive::~CEResourceLockExclusive(&v16);
  }
  if ( *((_DWORD *)a1 + 298) && a4 && *((_DWORD *)a1 + 302) != 4 && *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v12 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 200LL * v4);
      if ( v12[4] == *((_DWORD *)a1 + 431) && v12[5] == *((_DWORD *)a1 + 432) && v12[7] == *((_DWORD *)a1 + 434) )
        break;
      if ( ++v4 >= *(_DWORD *)a4 )
        return;
    }
    rimSetDeviceDisplayConfig(a1, a2, a3);
  }
}
