/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C00E0610
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C0123830 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        struct _UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  int v11; // ebx
  char *v12; // rdi
  __int64 v13; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // r8
  unsigned __int16 v19; // r9
  __int64 v20; // [rsp+28h] [rbp-80h]
  int v21; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x22u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x23u,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
      -1073741811);
    return 3221225485LL;
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v12 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v12[73] || v12[75] )
    {
      v11 = -1073741637;
      v19 = 37;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v12 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( !a5 )
        {
          p_DestinationString = a2;
LABEL_24:
          if ( v11 >= 0 )
          {
            v11 = RIMCreateDev(v12, 0, 0LL, (__int64)&v24);
            if ( v11 >= 0 )
            {
              v17 = v24;
              *(_DWORD *)(v24 + 184) |= 1u;
              v11 = rimOnPnpArrived(v12, v17, a4);
              if ( v11 >= 0 )
              {
                rimDoRimDevChange(v12, v17, 2LL);
                v18 = a6;
                if ( a6 )
                {
                  if ( a5 )
                  {
                    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                      v18 = (_QWORD *)MmUserProbeAddress;
                    *v18 = *(_QWORD *)(v17 + 16);
                  }
                  else
                  {
                    *a6 = *(_QWORD *)(v17 + 16);
                  }
                }
              }
              if ( v11 < 0 )
                RIMFreeDev(v12, v17);
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_40;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v13 = *(unsigned int *)&a2->Length;
        v21 = *(_DWORD *)&a2->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&a2->Length;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (ULONG64)Buffer + (unsigned __int16)v13 + 2;
        v16 = (_BYTE **)MmUserProbeAddress;
        if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v21) )
        {
          if ( (v13 & 1) != 0 )
            goto LABEL_18;
          if ( v15 > (unsigned __int64)Buffer )
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
              v11 = -1073741801;
            }
            v12 = (char *)Object;
            goto LABEL_24;
          }
        }
        if ( (v13 & 1) == 0 )
        {
LABEL_19:
          **v16 = 0;
          goto LABEL_20;
        }
LABEL_18:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, Buffer);
        v16 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_19;
      }
      v11 = -1073741637;
      v19 = 36;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v19,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
LABEL_40:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v12 + 96));
    ObfDereferenceObject(v12);
  }
  LODWORD(v20) = v11;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x26u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v20);
  return (unsigned int)v11;
}
