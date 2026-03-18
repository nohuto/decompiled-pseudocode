/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x1C014674C
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0068E58 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0146150 (RIMFindMonitorForDigitizer.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C01468E0 (RIMSetPointerDeviceInputSpace.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00676A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMEndAllActiveContacts @ 0x1C013EDA0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C014194C (RIMSuppressAllActiveContacts.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x1C014558C (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0145AB4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     rimSetDeviceDisplayConfig @ 0x1C014779C (rimSetDeviceDisplayConfig.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0187F70 (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  struct RawInputManagerObject *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // r9
  struct INPUT_SPACE_REGION *v15[2]; // [rsp+20h] [rbp-28h] BYREF
  struct INPUT_SPACE *v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 60);
      v10 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 42);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10, v9);
      else
        RIMEndAllActiveContacts(v10, (__int64)a2, 0LL);
    }
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v16);
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v15);
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)v16,
           (struct CLockedInputSpaceRegion *)v15) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)v16, (struct CLockedInputSpaceRegion *)v15);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v16[0], v15[0]);
    ExReleaseResourceLite(*(PERESOURCE *)v15[1]);
    KeLeaveCriticalRegion();
    ExReleaseResourceLite(*(PERESOURCE *)v16[1]);
    KeLeaveCriticalRegion();
  }
  if ( *((_DWORD *)a1 + 330) && a4 && *((_DWORD *)a1 + 334) != 4 && *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v14 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 200LL * v4);
      if ( v14[4] == *((_DWORD *)a1 + 463) && v14[5] == *((_DWORD *)a1 + 464) && v14[7] == *((_DWORD *)a1 + 466) )
        break;
      if ( ++v4 >= *(_DWORD *)a4 )
        return;
    }
    rimSetDeviceDisplayConfig(a1, a2, a3);
  }
}
