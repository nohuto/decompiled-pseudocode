/*
 * XREFs of ACPIWriteEventLogEntry @ 0x1C00548E8
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000FC40 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FE30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00117F0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0015320 (ACPIBuildProcessDevicePhasePrx.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0022A70 (PciConfigSpaceHandlerWorker.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E608 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C0055C60 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     LogInErrorLog @ 0x1C0067724 (LogInErrorLog.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIWriteEventLogEntry(int a1, __int16 **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int16 **v5; // r14
  int v7; // ebp
  const WCHAR **v8; // rdi
  __int64 v9; // r15
  const WCHAR *v10; // rdx
  unsigned int v11; // ebp
  _WORD *ErrorLogEntry; // rax
  _WORD *v13; // rdi
  unsigned __int16 v14; // ax
  _WORD *v15; // rcx
  __int64 v16; // r8
  __int16 *v17; // rdx
  __int16 v18; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( a3 )
  {
    v8 = (const WCHAR **)a2;
    v9 = a3;
    do
    {
      v10 = *v8;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, v10);
      ++v8;
      v7 += DestinationString.Length + 2;
      --v9;
    }
    while ( v9 );
  }
  v11 = v7 + 48;
  if ( v11 > 0xF0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xBu,
        (__int64)&WPP_1a8b24fe31bd334c7b268e6564f98bf2_Traceguids);
    return (unsigned int)-1073741823;
  }
  else
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, v11);
    v13 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      memset(ErrorLogEntry, 0, v11);
      v13[1] = 0;
      v13[2] = v4;
      *((_DWORD *)v13 + 3) = a1;
      if ( (_DWORD)v4 )
      {
        v14 = 48;
        v13[3] = 48;
      }
      else
      {
        v14 = v13[3];
      }
      v15 = (_WORD *)((char *)v13 + v14);
      if ( (_DWORD)v4 )
      {
        v16 = v4;
        do
        {
          v17 = *v5;
          do
          {
            v18 = *v17++;
            *v15++ = v18;
          }
          while ( v18 );
          ++v5;
          --v16;
        }
        while ( v16 );
      }
      IoWriteErrorLogEntry(v13);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0xAu,
          (__int64)&WPP_1a8b24fe31bd334c7b268e6564f98bf2_Traceguids);
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
