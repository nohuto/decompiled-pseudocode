/*
 * XREFs of RIMVirtCreateDev @ 0x1C014B864
 * Callers:
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C005836C (WPP_RECORDER_SF_S.c)
 *     rimCreateDev @ 0x1C005921C (rimCreateDev.c)
 *     RIMFreeSpecificDevWorker @ 0x1C005B1DC (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x1C005C110 (rimDereferenceDev.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0092BB0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A4E50 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ApiSetIsLegacyTouchPadDevice @ 0x1C00A731C (ApiSetIsLegacyTouchPadDevice.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C00A8A00 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C00A8A20 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BD3F8 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C00BD518 (RIMMarkSiblingMouseDevice.c)
 *     RIMGetDeviceParent @ 0x1C0141278 (RIMGetDeviceParent.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0141D9C (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtCreateHidDesc @ 0x1C01423CC (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C018BD8C (FindRimDevByName.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  char v8; // si
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r8
  unsigned int v14; // eax
  struct _KEVENT *v15; // rax
  int v16; // edx
  int v17; // r9d
  __int64 HidDesc; // rax
  int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  CompositionObject *v24; // rsi
  char *v25; // rbx
  int IsLegacyTouchPadDevice; // ebx
  __int64 v27; // rcx
  int v28; // edx
  CDeviceIdentity *v29; // rcx
  CDeviceIdentity *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  CompositionObject *v37; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11 = Win32AllocPool(*(unsigned __int16 *)(a3 + 2), 0x70707352u);
    Dev[13].Buffer = (PWSTR)v11;
    if ( !v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_S(
          (_DWORD)gRimLog,
          v12,
          1,
          23,
          (__int64)&WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids,
          *(_QWORD *)(a3 + 8));
      }
      goto LABEL_57;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  v14 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  LODWORD(Dev[11].Buffer) = v14;
  if ( a4 )
  {
    LODWORD(Dev[11].Buffer) = v14 | 0x2020;
    LODWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1272);
    HIDWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1276);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(a5 + 1280);
    HIDWORD(Dev[82].Buffer) = *(_DWORD *)(a5 + 1284);
    *(_QWORD *)&Dev[83].Length = FindRimDevByName((PCUNICODE_STRING)(a5 + 1288));
    v15 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v15;
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 24;
LABEL_56:
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids);
        goto LABEL_57;
      }
      goto LABEL_57;
    }
  }
  else
  {
    v15 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v15;
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 25;
        goto LABEL_56;
      }
      goto LABEL_57;
    }
  }
  KeInitializeEvent(v15, SynchronizationEvent, 0);
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc((__int64)Object, (__int64)Dev, a5);
    *(_QWORD *)&Dev[29].Length = HidDesc;
    if ( !HidDesc )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 26;
        goto LABEL_56;
      }
LABEL_57:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 8LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev, v13);
      rimDereferenceDev((__int64)Dev, v35, v36);
      return 3221225495LL;
    }
  }
  if ( !LOBYTE(Dev[3].Length) )
  {
    Dev[29].Length = *(_WORD *)(a5 + 72);
    Dev[29].MaximumLength = *(_WORD *)(a5 + 76);
    *(&Dev[29].MaximumLength + 1) = *(_WORD *)(a5 + 80);
    LODWORD(Dev[29].Buffer) = *(_DWORD *)(a5 + 84);
    LOWORD(Dev[55].Buffer) = *(_WORD *)(a5 + 88);
    WORD1(Dev[55].Buffer) = *(_WORD *)(a5 + 92);
    WORD2(Dev[55].Buffer) = *(_WORD *)(a5 + 96);
    if ( a4 )
    {
      LOWORD(Dev[55].Buffer) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v13)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, 27, (__int64)&WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids);
      }
      v37 = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse((__int64)Dev, &v37, v20) )
      {
        v24 = v37;
        if ( v37 )
          v25 = (char *)v37 + 88;
        else
          v25 = 0LL;
        if ( v25[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
        RIMMarkSiblingMouseDevice((__int64)Dev, *(unsigned __int16 *)(*((_QWORD *)v25 + 58) + 40LL), v23);
        CompositionObject::Release(v24);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart(v22);
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice((__int64)Dev);
        EtwTraceLegacyTouchPadDetectionStop(v27);
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v28, 1, 28, (__int64)&WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids);
        }
      }
    }
  }
  if ( LOBYTE(Dev[3].Length) == 1 )
  {
    LOBYTE(Dev[29].Length) = *(_BYTE *)(a5 + 72);
    HIBYTE(Dev[29].Length) = *(_BYTE *)(a5 + 76);
    Dev[29].MaximumLength = *(_WORD *)(a5 + 80);
    *(&Dev[29].MaximumLength + 1) = *(_WORD *)(a5 + 84);
    *(&Dev[29].MaximumLength + 2) = *(_WORD *)(a5 + 88);
    LOWORD(Dev[29].Buffer) = *(_WORD *)(a5 + 92);
    HIDWORD(Dev[29].Buffer) = *(_DWORD *)(a5 + 96);
    Dev[30].Length = *(_WORD *)(a5 + 100);
    Dev[30].MaximumLength = *(_WORD *)(a5 + 104);
    *(&Dev[30].MaximumLength + 1) = *(_WORD *)(a5 + 108);
    *(&Dev[30].MaximumLength + 2) = *(_WORD *)(a5 + 112);
    LOWORD(Dev[30].Buffer) = *(_WORD *)(a5 + 116);
    WORD1(Dev[30].Buffer) = *(_WORD *)(a5 + 120);
    HIDWORD(Dev[30].Buffer) = *(_DWORD *)(a5 + 124);
    *(_DWORD *)&Dev[31].Length = *(_DWORD *)(a5 + 128);
    *(_DWORD *)(&Dev[31].MaximumLength + 1) ^= (*(_DWORD *)(&Dev[31].MaximumLength + 1) ^ *(_DWORD *)(a5 + 132)) & 1;
  }
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_57;
  *(_QWORD *)&Dev[21].Length = Object;
  v30 = Object[53];
  if ( v30 )
  {
    do
    {
      v29 = v30;
      v30 = (CDeviceIdentity *)*((_QWORD *)v30 + 5);
    }
    while ( v30 );
    *((_QWORD *)v29 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v29, *(struct RawInputManagerDeviceObject **)&Dev[2].Length, v13);
  if ( !Object[80] || *((_DWORD *)Object + 216) || a4 == 0 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1LL);
  if ( (LODWORD(Dev[12].Buffer) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout((struct RIMDEV *)Dev, v31, v32);
  *(_DWORD *)(&Dev[82].MaximumLength + 1) = -1;
  LODWORD(Dev[82].Buffer) = 0;
  if ( !Object[80] && !*((_DWORD *)Object + 216) && a4 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2LL);
  *a6 = Dev;
  return 0LL;
}
