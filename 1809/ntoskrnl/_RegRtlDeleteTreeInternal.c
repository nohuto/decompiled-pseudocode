/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x14070EEDC
 * Callers:
 *     _PnpSetPropertyWorker @ 0x1406E7470 (_PnpSetPropertyWorker.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFreeResolveContext @ 0x1406FB038 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406FB1A0 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgInitResolveContext @ 0x1406FB580 (PiDevCfgInitResolveContext.c)
 *     PipHardwareConfigActivateService @ 0x1407065F0 (PipHardwareConfigActivateService.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14070E158 (PpDevCfgProcessDeviceOperations.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteTree @ 0x14073D2F4 (_PnpCtxRegDeleteTree.c)
 *     PiDqDeleteUserObject @ 0x14082BE9C (PiDqDeleteUserObject.c)
 *     PiDevCfgMigrateService @ 0x14082EBA8 (PiDevCfgMigrateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082FB98 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408333E0 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F76AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F7CF4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F83AC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F9D10 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408FAB94 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FCB04 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FD834 (_CmRemovePanelDeviceWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140901CE8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400CABD0 (IoGetStackLimits.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C8B4C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x1406FDFC0 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, __int64 a3, char a4)
{
  ULONG v4; // r14d
  unsigned int *PoolWithTag; // rdi
  unsigned int v8; // r15d
  signed int v10; // ebx
  unsigned int v12; // edx
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r9
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 HighLimit; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-10h] BYREF

  v4 = 0;
  Handle = 0LL;
  PoolWithTag = 0LL;
  v8 = 0;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_3;
  }
  v10 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v10 < 0 )
    goto LABEL_3;
  if ( (unsigned int)RegRtlQueryInfoKey(Handle, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
  {
    v13 = 0;
  }
  else
  {
    v12 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      v12 = -1;
      if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
        v12 = HighLimit + 1;
      v10 = (int)HighLimit + 1 < (unsigned int)HighLimit ? 0xC0000095 : 0;
      if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
        goto LABEL_3;
    }
    v13 = -1;
    v14 = 2LL * v12;
    if ( v14 <= 0xFFFFFFFF )
      v13 = 2 * v12;
    v10 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_3;
  }
  if ( v13 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4C474552u);
    if ( !PoolWithTag )
    {
      v10 = -1073741801;
      goto LABEL_3;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LODWORD(HighLimit) = v13 >> 1;
        v15 = RegRtlEnumKey(Handle, v4, PoolWithTag, (unsigned int *)&HighLimit);
        if ( v15 == -2147483622 || v15 == -1073741444 )
          goto LABEL_15;
        if ( v15 == -1073741789 )
          break;
        if ( v15 )
          goto LABEL_15;
        LOBYTE(v16) = a4;
        *((_WORD *)PoolWithTag + ((unsigned __int64)v13 >> 1) - 1) = 0;
        if ( (unsigned int)RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3, v16) )
          ++v4;
        else
          v4 = 0;
      }
      v18 = 2LL * (unsigned int)HighLimit;
      v13 = -1;
      if ( v18 <= 0xFFFFFFFF )
        v13 = 2 * HighLimit;
      v10 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v18 > 0xFFFFFFFF )
        break;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4C474552u);
      if ( !PoolWithTag )
      {
        v10 = -1073741801;
        break;
      }
    }
LABEL_15:
    if ( v10 < 0 )
      goto LABEL_3;
    v17 = RegRtlDeleteKeyTransacted(a1, a2, a3);
    if ( v17 != -1073741535 )
      break;
    if ( v4 || v8 >= 0xA )
      goto LABEL_18;
    ++v8;
    v4 = 0;
  }
  if ( v17 >= 0 )
    goto LABEL_3;
LABEL_18:
  v10 = v17;
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
