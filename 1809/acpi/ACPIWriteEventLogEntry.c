/*
 * XREFs of ACPIWriteEventLogEntry @ 0x1C0052F38
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00152A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015480 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018130 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001E8C0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C00541F0 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     LogInErrorLog @ 0x1C0065734 (LogInErrorLog.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIWriteEventLogEntry(int a1, __int16 **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int16 **v5; // r14
  int v7; // ebp
  PCWSTR *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // ebp
  _WORD *ErrorLogEntry; // rax
  _WORD *v12; // rdi
  unsigned __int16 v13; // ax
  _WORD *v14; // rcx
  __int64 v15; // r8
  __int16 *v16; // rdx
  __int16 v17; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( a3 )
  {
    v8 = (PCWSTR *)a2;
    v9 = a3;
    do
    {
      RtlInitUnicodeString(&DestinationString, *v8++);
      v7 += DestinationString.Length + 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = v7 + 48;
  if ( v10 > 0xF0 )
  {
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
    ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, v10);
    v12 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      memset(ErrorLogEntry, 0, v10);
      v12[1] = 0;
      v12[2] = v4;
      *((_DWORD *)v12 + 3) = a1;
      if ( (_DWORD)v4 )
      {
        v13 = 48;
        v12[3] = 48;
      }
      else
      {
        v13 = v12[3];
      }
      v14 = (_WORD *)((char *)v12 + v13);
      if ( (_DWORD)v4 )
      {
        v15 = v4;
        do
        {
          v16 = *v5;
          do
          {
            v17 = *v16++;
            *v14++ = v17;
          }
          while ( v17 );
          ++v5;
          --v15;
        }
        while ( v15 );
      }
      IoWriteErrorLogEntry(v12);
    }
    else
    {
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
