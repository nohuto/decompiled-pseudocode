/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5F00 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        int a5,
        _QWORD *a6)
{
  int v11; // ebx
  CDeviceIdentity **v12; // rdi
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

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x22u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x23u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, -1073741811);
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
      v19 = 37;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v12 + 21)) != 0 )
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
            v11 = RIMCreateDev(v12, a3, (__int64)p_DestinationString, 1, 0, 0LL, &v24);
            if ( v11 >= 0 )
            {
              v17 = v24;
              *(_DWORD *)(v24 + 184) |= 1u;
              v11 = rimOnPnpArrived(v12, v17, a4);
              if ( v11 >= 0 )
              {
                rimDoRimDevChange((__int64)v12, v17, 2u);
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
            v12 = (CDeviceIdentity **)Object;
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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, Buffer, v15);
        v16 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_19;
      }
      v11 = -1073741637;
      v19 = 36;
    }
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, v19, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
LABEL_40:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v12 + 13));
    ObfDereferenceObject(v12);
  }
  LODWORD(v20) = v11;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x26u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v20);
  return (unsigned int)v11;
}
