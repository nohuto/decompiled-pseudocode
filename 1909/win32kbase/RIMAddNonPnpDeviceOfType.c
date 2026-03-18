/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C01352A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     DeviceTypeToRimInputType @ 0x1C0058340 (DeviceTypeToRimInputType.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  struct _UNICODE_STRING *v6; // r14
  int v8; // edx
  int v9; // ebx
  CDeviceIdentity **v10; // rdi
  int v11; // edx
  __int64 v12; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v14; // r8
  _BYTE **v15; // rax
  __int64 v16; // r14
  _QWORD *v17; // rdx
  int v18; // r9d
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 30, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v10 + 81) || *((_BYTE *)v10 + 82) )
    {
      v9 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 32;
        goto LABEL_40;
      }
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v10 + 21)) != 0 )
      {
        *(_QWORD *)&SourceString.Length = 0LL;
        SourceString.Buffer = 0LL;
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( !a4 )
        {
          p_DestinationString = v6;
LABEL_24:
          if ( v9 >= 0 )
          {
            v9 = RIMCreateDev(v10, a3, (__int64)p_DestinationString, 1, 0, 0LL, &v23);
            if ( v9 >= 0 )
            {
              v16 = v23;
              *(_DWORD *)(v23 + 184) |= 1u;
              v9 = rimOnPnpArrived(v10, v16, (void *)0xFFFFFFFFFFFFFFFFLL);
              if ( v9 >= 0 )
              {
                if ( a4 )
                {
                  v17 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v17 = (_QWORD *)MmUserProbeAddress;
                  *v17 = *(_QWORD *)(v16 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v16 + 16);
                }
              }
              if ( v9 < 0 )
                RIMFreeDev(v10, v16);
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_41;
        }
        if ( (unsigned __int64)v6 >= MmUserProbeAddress )
          v6 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v12 = *(unsigned int *)&v6->Length;
        v20 = *(_DWORD *)&v6->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v6->Length;
        Buffer = v6->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (ULONG64)Buffer + (unsigned __int16)v12 + 2;
        v15 = (_BYTE **)MmUserProbeAddress;
        if ( v14 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v20) )
        {
          if ( (v12 & 1) != 0 )
            goto LABEL_18;
          if ( v14 > (unsigned __int64)Buffer )
          {
LABEL_20:
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
              v9 = -1073741801;
            }
            v10 = (CDeviceIdentity **)Object;
            goto LABEL_24;
          }
        }
        if ( (v12 & 1) == 0 )
        {
LABEL_19:
          **v15 = 0;
          goto LABEL_20;
        }
LABEL_18:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, Buffer, v14);
        v15 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_19;
      }
      v9 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 31;
LABEL_40:
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, v18, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
LABEL_41:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v10 + 13));
    ObfDereferenceObject(v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v8, 1, 33, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v9);
  }
  return (unsigned int)v9;
}
