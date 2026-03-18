/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x1407198C8
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x14012E428 (RtlStringCbCopyExW.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCE40 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x1405C3710 (_CmValidateDeviceName.c)
 *     PiGetRelatedDevice @ 0x14066FCAC (PiGetRelatedDevice.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceParent @ 0x1406F3110 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x1406F3284 (_CmIsRootDevice.c)
 */

__int64 __fastcall PiCMGetRelatedDeviceInstance(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v8; // r12d
  wchar_t *PoolWithTag; // rsi
  unsigned int v10; // r13d
  wchar_t *v11; // r15
  __int64 v12; // rcx
  signed int inited; // ebx
  unsigned int v14; // eax
  unsigned int v15; // edi
  int v16; // r12d
  int DeviceParent; // eax
  signed int v18; // eax
  char *v20; // rax
  unsigned int v21; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  PCWSTR v23[5]; // [rsp+70h] [rbp-1h] BYREF

  v8 = a4;
  memset(v23, 0, sizeof(v23));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PoolWithTag = 0LL;
  v10 = 0;
  v11 = 0LL;
  *a6 = 0;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v23);
  if ( inited < 0 )
    goto LABEL_22;
  if ( v23[2] && *(PCWSTR *)((char *)v23 + 4) == (PCWSTR)0x100000000LL )
  {
    if ( a3 && v8 >= 0x14 )
    {
      v14 = v8 - 20;
      v15 = 0;
      v16 = 2;
      if ( v14 >= 2 )
        v15 = v14;
      if ( v15 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
        if ( !PoolWithTag )
          inited = -1073741670;
      }
      if ( inited < 0 )
        goto LABEL_34;
      inited = CmValidateDeviceName(v12, v23[2]);
      if ( inited < 0 )
        goto LABEL_34;
      switch ( HIDWORD(v23[3]) )
      {
        case 1:
          v21 = v15 >> 1;
          DeviceParent = CmGetDeviceParent(*(__int64 *)&PiPnpRtlCtx, v23[2], PoolWithTag, &v21);
          v10 = v21;
          inited = DeviceParent;
LABEL_15:
          v8 = a4;
          goto LABEL_16;
        case 2:
LABEL_24:
          inited = RtlInitUnicodeStringEx(&DestinationString, v23[2]);
          if ( inited < 0 )
            goto LABEL_34;
          v21 = 400;
          v20 = (char *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
          v11 = (wchar_t *)v20;
          if ( !v20 )
          {
            inited = -1073741670;
            goto LABEL_34;
          }
          inited = PiGetRelatedDevice((__int64)&DestinationString, v20, &v21, v16);
          if ( inited < 0 )
          {
LABEL_34:
            v18 = PiCMReturnBufferResultData(inited, 2 * v10, 0, 0LL, 0, (int)v23[4], a3, a4, a6);
            goto LABEL_18;
          }
          inited = RtlStringCbCopyExW(PoolWithTag, v15, v11, 0LL, 0LL, 0x800u);
          if ( inited == -2147483643 )
            inited = -1073741789;
          v10 = (v21 >> 1) + 1;
          goto LABEL_15;
        case 3:
          if ( CmIsRootDevice(v23[2]) )
          {
            inited = -1073741810;
            goto LABEL_34;
          }
          v16 = 3;
          goto LABEL_24;
      }
    }
    inited = -1073741811;
    goto LABEL_34;
  }
  inited = -1073741811;
LABEL_16:
  if ( inited < 0 )
    goto LABEL_34;
  v18 = PiCMReturnBufferResultData(inited, 2 * v10, 0, PoolWithTag, 2 * v10, (int)v23[4], a3, v8, a6);
LABEL_18:
  inited = v18;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x34706E50u);
LABEL_22:
  PiCMReleaseObjectInputData((__int64)v23);
  return (unsigned int)inited;
}
