/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C010CCC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  int v9; // ebx
  CDeviceIdentity **v10; // rdi
  __int64 v11; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v13; // r8
  _BYTE **v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  unsigned __int16 v17; // r9
  __int64 v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x1Eu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v10 + 81) || *((_BYTE *)v10 + 82) )
    {
      v9 = -1073741637;
      v17 = 32;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v10 + 21)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( !a4 )
        {
          p_DestinationString = a2;
LABEL_22:
          if ( v9 >= 0 )
          {
            v9 = RIMCreateDev(v10, a3, (__int64)p_DestinationString, 1, 0, 0LL, &v23);
            if ( v9 >= 0 )
            {
              v15 = v23;
              *(_DWORD *)(v23 + 184) |= 1u;
              v9 = rimOnPnpArrived(v10, v15, (void *)0xFFFFFFFFFFFFFFFFLL);
              if ( v9 >= 0 )
              {
                if ( a4 )
                {
                  v16 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v16 = (_QWORD *)MmUserProbeAddress;
                  *v16 = *(_QWORD *)(v15 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v15 + 16);
                }
              }
              if ( v9 < 0 )
                RIMFreeDev(v10, v15);
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_37;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v11 = *(unsigned int *)&a2->Length;
        v20 = *(_DWORD *)&a2->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&a2->Length;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (ULONG64)Buffer + (unsigned __int16)v11 + 2;
        v14 = (_BYTE **)MmUserProbeAddress;
        if ( v13 < MmUserProbeAddress && (unsigned __int16)v11 <= HIWORD(v20) )
        {
          if ( (v11 & 1) != 0 )
            goto LABEL_16;
          if ( v13 > (unsigned __int64)Buffer )
          {
LABEL_18:
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
            goto LABEL_22;
          }
        }
        if ( (v11 & 1) == 0 )
        {
LABEL_17:
          **v14 = 0;
          goto LABEL_18;
        }
LABEL_16:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, Buffer, v13);
        v14 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_17;
      }
      v9 = -1073741637;
      v17 = 31;
    }
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, v17, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
LABEL_37:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v10 + 13));
    ObfDereferenceObject(v10);
  }
  LODWORD(v19) = v9;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x21u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v19);
  return (unsigned int)v9;
}
