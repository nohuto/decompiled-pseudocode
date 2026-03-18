/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C01372D0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C014964C (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0149910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0054C20 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     DeviceTypeToRimInputType @ 0x1C006C2A0 (DeviceTypeToRimInputType.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     RIMFreeDev @ 0x1C014DE64 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(char *a1, __int64 a2, int a3, _OWORD *a4, int a5, _QWORD *a6)
{
  _QWORD *v8; // r15
  int v9; // edx
  int v11; // edx
  int v12; // ebx
  CDeviceIdentity **v13; // rdi
  int v14; // edx
  unsigned int v15; // eax
  unsigned int *v16; // rax
  __int64 v17; // rcx
  WCHAR *v18; // rdx
  ULONG64 v19; // r8
  _BYTE **v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // r9d
  __int64 v25; // [rsp+48h] [rbp-130h] BYREF
  PVOID Object; // [rsp+50h] [rbp-128h] BYREF
  int v27; // [rsp+58h] [rbp-120h]
  int v28; // [rsp+60h] [rbp-118h]
  __int64 p_DestinationString; // [rsp+68h] [rbp-110h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-108h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp-E8h]
  __int64 v33[18]; // [rsp+A0h] [rbp-D8h] BYREF

  v25 = a2;
  v28 = a3;
  v8 = a6;
  v32 = a6;
  memset(v33, 0, sizeof(v33));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 39, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 40, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
    }
    return 3221225485LL;
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v12 >= 0 )
  {
    v13 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v13 + 81) || *((_BYTE *)v13 + 82) )
    {
      v12 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 42;
        goto LABEL_47;
      }
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v13 + 21)) != 0 )
      {
        *(_QWORD *)&SourceString.Length = 0LL;
        SourceString.Buffer = 0LL;
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( !a5 )
        {
          p_DestinationString = v25;
          *(_OWORD *)v33 = *a4;
          *(_OWORD *)&v33[2] = a4[1];
          *(_OWORD *)&v33[4] = a4[2];
          *(_OWORD *)&v33[6] = a4[3];
          *(_OWORD *)&v33[8] = a4[4];
          *(_OWORD *)&v33[10] = a4[5];
          *(_OWORD *)&v33[12] = a4[6];
          *(_OWORD *)&v33[14] = a4[7];
          *(_OWORD *)&v33[16] = a4[8];
          v15 = a3;
LABEL_28:
          if ( v12 >= 0 )
          {
            v12 = RIMCreateDev(v13, v15, p_DestinationString, 0, 1, (__int64)v33, (struct _UNICODE_STRING **)&v25);
            if ( v12 >= 0 )
            {
              if ( a5 )
              {
                v21 = v25;
                if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                  v8 = (_QWORD *)MmUserProbeAddress;
                *v8 = *(_QWORD *)(v25 + 16);
              }
              else
              {
                v21 = v25;
                if ( (v33[1] & 0x400000000LL) != 0 )
                  v22 = *(_QWORD *)(v25 + 24);
                else
                  v22 = *(_QWORD *)(v25 + 16);
                *a6 = v22;
              }
              if ( v13[80] || *((_DWORD *)v13 + 216) )
                *(_DWORD *)(v21 + 184) |= 0x20000u;
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_48;
        }
        v16 = (unsigned int *)v25;
        if ( v25 >= MmUserProbeAddress )
          v16 = (unsigned int *)MmUserProbeAddress;
        v17 = *v16;
        v27 = v17;
        *(_DWORD *)&SourceString.Length = v17;
        v18 = (WCHAR *)*((_QWORD *)v16 + 1);
        SourceString.Buffer = v18;
        if ( ((unsigned __int8)v18 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
        v20 = (_BYTE **)MmUserProbeAddress;
        if ( v19 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v27) )
        {
          if ( (v17 & 1) != 0 )
            goto LABEL_22;
          if ( v19 > (unsigned __int64)v18 )
          {
LABEL_24:
            DestinationString.MaximumLength = SourceString.Length;
            DestinationString.Length = SourceString.Length;
            DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
            if ( DestinationString.Buffer )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = (__int64)&DestinationString;
            }
            else
            {
              v12 = -1073741801;
            }
            v13 = (CDeviceIdentity **)Object;
            v15 = a3;
            goto LABEL_28;
          }
        }
        if ( (v17 & 1) == 0 )
        {
LABEL_23:
          **v20 = 0;
          goto LABEL_24;
        }
LABEL_22:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v18, v19);
        v20 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_23;
      }
      v12 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 41;
LABEL_47:
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, v23, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
LABEL_48:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v13 + 13));
    ObfDereferenceObject(v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v11, 1, 43, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v12);
  }
  return (unsigned int)v12;
}
