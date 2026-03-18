/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00B7460 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     DeviceTypeToRimInputType @ 0x1C0058340 (DeviceTypeToRimInputType.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        int a5,
        _QWORD *a6)
{
  struct _UNICODE_STRING *v7; // r14
  int v10; // edx
  int v11; // ebx
  CDeviceIdentity **v12; // rdi
  int v13; // edx
  __int64 v14; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v16; // r8
  _BYTE **v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // r8
  int v20; // r9d
  int v21; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 34, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        35,
        (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
        13);
    }
    return 3221225485LL;
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v12 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v12 + 81) || *((_BYTE *)v12 + 82) )
    {
      v11 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 37;
        goto LABEL_45;
      }
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v12 + 21)) != 0 )
      {
        *(_QWORD *)&SourceString.Length = 0LL;
        SourceString.Buffer = 0LL;
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( !a5 )
        {
          p_DestinationString = v7;
LABEL_28:
          if ( v11 >= 0 )
          {
            v11 = RIMCreateDev(v12, a3, (__int64)p_DestinationString, 1, 0, 0LL, &v24);
            if ( v11 >= 0 )
            {
              v18 = v24;
              *(_DWORD *)(v24 + 184) |= 1u;
              v11 = rimOnPnpArrived(v12, v18, a4);
              if ( v11 >= 0 )
              {
                rimDoRimDevChange((__int64)v12, v18, 2LL);
                v19 = a6;
                if ( a6 )
                {
                  if ( a5 )
                  {
                    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                      v19 = (_QWORD *)MmUserProbeAddress;
                    *v19 = *(_QWORD *)(v18 + 16);
                  }
                  else
                  {
                    *a6 = *(_QWORD *)(v18 + 16);
                  }
                }
              }
              if ( v11 < 0 )
                RIMFreeDev(v12, v18);
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_46;
        }
        if ( (unsigned __int64)v7 >= MmUserProbeAddress )
          v7 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v14 = *(unsigned int *)&v7->Length;
        v21 = *(_DWORD *)&v7->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v7->Length;
        Buffer = v7->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (ULONG64)Buffer + (unsigned __int16)v14 + 2;
        v17 = (_BYTE **)MmUserProbeAddress;
        if ( v16 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v21) )
        {
          if ( (v14 & 1) != 0 )
            goto LABEL_22;
          if ( v16 > (unsigned __int64)Buffer )
          {
LABEL_24:
            DestinationString.MaximumLength = SourceString.Length;
            DestinationString.Length = SourceString.Length;
            DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
            if ( DestinationString.Buffer )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
            }
            else
            {
              v11 = -1073741801;
            }
            v12 = (CDeviceIdentity **)Object;
            goto LABEL_28;
          }
        }
        if ( (v14 & 1) == 0 )
        {
LABEL_23:
          **v17 = 0;
          goto LABEL_24;
        }
LABEL_22:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, Buffer, v16);
        v17 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_23;
      }
      v11 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 36;
LABEL_45:
        LOBYTE(v13) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, v20, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
LABEL_46:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v12 + 13));
    ObfDereferenceObject(v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v10, 1, 38, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v11);
  }
  return (unsigned int)v11;
}
