/*
 * XREFs of RIMCreateDev @ 0x1C006BB70
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01372D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0137910 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0137C70 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01508B8 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     rimCreateDev @ 0x1C0051C14 (rimCreateDev.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C005CDCC (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     rimDoRimDevChange @ 0x1C0069B2C (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C006C2CC (WPP_RECORDER_SF_S.c)
 *     RIMFreeSpecificDevWorker @ 0x1C006EC88 (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x1C00725E0 (rimDereferenceDev.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00942F0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C00A4430 (ApiSetIsMouseDeviceOnIgnoreList.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A5EA0 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ApiSetIsLegacyTouchPadDevice @ 0x1C00A819C (ApiSetIsLegacyTouchPadDevice.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C00A98C0 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C00A98E0 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BF498 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C00BF5B8 (RIMMarkSiblingMouseDevice.c)
 *     RIMFindInputDeviceForConfig @ 0x1C01436CC (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceParent @ 0x1C01438E8 (RIMGetDeviceParent.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C014440C (RIMSetDeviceIdleTimeout.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01A0FC4 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        struct _UNICODE_STRING **a7)
{
  char v9; // r14
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rbx
  struct _KEVENT *v19; // rax
  __int64 v20; // rdx
  int v21; // r9d
  __int64 v22; // r8
  __int64 v23; // rax
  char Length; // al
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  CompositionObject *v29; // rsi
  char *v30; // rbx
  int IsLegacyTouchPadDevice; // ebx
  int v32; // edx
  CDeviceIdentity *v33; // rcx
  CDeviceIdentity *v34; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  CompositionObject *v40; // rbx
  CompositionObject *v42[2]; // [rsp+30h] [rbp-38h] BYREF
  int v43; // [rsp+78h] [rbp+10h] BYREF
  int v44; // [rsp+88h] [rbp+20h] BYREF

  v9 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  v11 = a5;
  if ( (a4 || a5) && a4 == a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v16 = Win32AllocPool(*(unsigned __int16 *)(a3 + 2), 0x70707352u);
    Dev[13].Buffer = (PWSTR)v16;
    if ( !v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_S(
          (_DWORD)gRimLog,
          v17,
          1,
          11,
          (__int64)&WPP_03619aaa3eac3f95e9b05f540081c405_Traceguids,
          *(_QWORD *)(a3 + 8));
      }
      goto LABEL_73;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  LOBYTE(Dev[3].Length) = v9;
  if ( a4 )
    LODWORD(Dev[11].Buffer) |= 0x20u;
  v18 = a6;
  if ( v11 )
  {
    if ( !a6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
    LODWORD(Dev[11].Buffer) |= 0x2000u;
    Dev[24].Buffer = *(PWSTR *)(v18 + 116);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(v18 + 124);
    HIDWORD(Dev[81].Buffer) = *(_DWORD *)(v18 + 132);
    *(_QWORD *)&Dev[82].Length = *(_QWORD *)(v18 + 136);
    v19 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v19;
    if ( !v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 12;
LABEL_72:
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, v21, (__int64)&WPP_03619aaa3eac3f95e9b05f540081c405_Traceguids);
        goto LABEL_73;
      }
      goto LABEL_73;
    }
  }
  else
  {
    v19 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v19;
    if ( !v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 13;
        goto LABEL_72;
      }
      goto LABEL_73;
    }
  }
  KeInitializeEvent(v19, SynchronizationEvent, 0);
  LODWORD(Dev[11].Buffer) |= 0x8000u;
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    v23 = RIMCreateHidDesc((__int64)Object, (__int64)Dev, v18);
    *(_QWORD *)&Dev[29].Length = v23;
    if ( !v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 14;
        goto LABEL_72;
      }
LABEL_73:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 8LL) = 1;
      RIMFreeSpecificDevWorker(Object, Dev);
      rimDereferenceDev(Dev);
      return 3221225495LL;
    }
  }
  Length = Dev[3].Length;
  if ( !Length )
  {
    if ( v11 )
    {
      *(&Dev[55].MaximumLength + 1) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, Dev)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v25, 1, 15, (__int64)&WPP_03619aaa3eac3f95e9b05f540081c405_Traceguids);
      }
      v42[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse(Dev, v42) )
      {
        v29 = v42[0];
        if ( v42[0] )
          v30 = (char *)v42[0] + 88;
        else
          v30 = 0LL;
        if ( v30[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v30 + 58) + 40LL));
        CompositionObject::Release(v29);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart();
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice(Dev);
        EtwTraceLegacyTouchPadDetectionStop();
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v32, 1, 16, (__int64)&WPP_03619aaa3eac3f95e9b05f540081c405_Traceguids);
        }
      }
    }
    ApiSetIsMouseDeviceOnIgnoreList(Dev);
    Length = Dev[3].Length;
  }
  if ( Length == 1 && !v11 )
    RIMPopulateExtendedKeyboardDeviceProperties((__int64)Dev, v20, v22);
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_73;
  *(_QWORD *)&Dev[21].Length = Object;
  v34 = Object[53];
  if ( v34 )
  {
    do
    {
      v33 = v34;
      v34 = (CDeviceIdentity *)*((_QWORD *)v34 + 5);
    }
    while ( v34 );
    *((_QWORD *)v33 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v33, *(struct RawInputManagerDeviceObject **)&Dev[2].Length);
  if ( !Object[80] || *((_DWORD *)Object + 216) || v11 == 0 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1LL);
  if ( ((__int64)Dev[11].Buffer & 0x1000) != 0 )
  {
    v36 = *(_QWORD *)&Dev[29].Length;
    v44 = 0;
    v43 = 0;
    v42[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(
                         v36,
                         (_DWORD)Object,
                         (_DWORD)Dev,
                         (unsigned int)&v44,
                         (__int64)&v43,
                         (__int64)v42) )
    {
      if ( !v43 )
      {
        v40 = v42[0];
        if ( *(_DWORD *)(*((_QWORD *)v42[0] + 60) + 24LL) != 7 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
        ApiSetSetUserPTPEnabledPreference(v40, *((_QWORD *)v40 + 58), Object);
      }
    }
  }
  if ( (LODWORD(Dev[12].Buffer) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout((struct RIMDEV *)Dev);
  *(_DWORD *)(&Dev[81].MaximumLength + 1) = -1;
  LODWORD(Dev[81].Buffer) = 0;
  if ( !Object[80] && !*((_DWORD *)Object + 216) && v11 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2LL);
  *a7 = Dev;
  return 0LL;
}
