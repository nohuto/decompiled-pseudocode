/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x14073C69C
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     _PnpSetPropertyWorker @ 0x140708F64 (_PnpSetPropertyWorker.c)
 *     PiDevCfgFreeResolveContext @ 0x140717804 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140717978 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgInitResolveContext @ 0x140717D94 (PiDevCfgInitResolveContext.c)
 *     PipHardwareConfigActivateService @ 0x14072E1CC (PipHardwareConfigActivateService.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073B468 (PpDevCfgProcessDeviceOperations.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073C69C (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteTree @ 0x140754FAC (_PnpCtxRegDeleteTree.c)
 *     PiDqDeleteUserObject @ 0x140864B74 (PiDqDeleteUserObject.c)
 *     PiDevCfgMigrateService @ 0x1408678DC (PiDevCfgMigrateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086C244 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934804 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140936FC4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140938F98 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140939C9C (_CmRemovePanelDeviceWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14093E878 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400A2DA0 (IoGetStackLimits.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C3B98 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x140717270 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14071CA28 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073C69C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14078B5D0 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, __int64 a3, char a4)
{
  ULONG v4; // r14d
  unsigned int *PoolWithTag; // rsi
  unsigned int v8; // r15d
  int v10; // ebx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
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
  if ( (unsigned int)RegRtlQueryInfoKey(Handle, 0LL, &HighLimit, 0LL, 0LL, 0LL) )
  {
    LODWORD(v13) = 0;
    goto LABEL_12;
  }
  v12 = HighLimit;
  if ( !(_DWORD)HighLimit
    || ((int)HighLimit + 1 < (unsigned int)HighLimit ? (v10 = -1073741675, v12 = -1) : (v10 = 0, v12 = HighLimit + 1),
        v10 >= 0) )
  {
    v13 = 2LL * v12;
    if ( v13 > 0xFFFFFFFF )
    {
      v10 = -1073741675;
      goto LABEL_3;
    }
    v10 = 0;
LABEL_12:
    if ( (_DWORD)v13 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x4C474552u);
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
        LODWORD(HighLimit) = (unsigned int)v13 >> 1;
        v14 = RegRtlEnumKey(Handle, v4, PoolWithTag, (unsigned int *)&HighLimit);
        if ( v14 != -2147483622 && v14 != -1073741444 )
          break;
LABEL_14:
        if ( v10 < 0 )
          goto LABEL_3;
        v16 = RegRtlDeleteKeyTransacted(a1, a2, a3);
        if ( v16 != -1073741535 )
        {
          if ( v16 >= 0 )
            goto LABEL_3;
LABEL_17:
          v10 = v16;
          goto LABEL_3;
        }
        if ( v4 || v8 >= 0xA )
          goto LABEL_17;
        ++v8;
        v4 = 0;
      }
      if ( v14 == -1073741789 )
      {
        v13 = 2LL * (unsigned int)HighLimit;
        if ( v13 > 0xFFFFFFFF )
        {
          v10 = -1073741675;
          break;
        }
        v10 = 0;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x4C474552u);
        if ( !PoolWithTag )
        {
          v10 = -1073741801;
          goto LABEL_14;
        }
      }
      else
      {
        if ( v14 )
          goto LABEL_14;
        LOBYTE(v15) = a4;
        *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v13 >> 1) - 1) = 0;
        if ( (unsigned int)RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3, v15) )
          ++v4;
        else
          v4 = 0;
      }
    }
  }
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
