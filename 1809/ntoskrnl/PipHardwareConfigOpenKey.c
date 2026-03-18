/*
 * XREFs of PipHardwareConfigOpenKey @ 0x14073C3D8
 * Callers:
 *     PipHardwareConfigGetIndex @ 0x14073C1B0 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C23C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipCheckComputerSupported @ 0x140822B98 (PipCheckComputerSupported.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140822ED8 (PipHardwareConfigGetLastUseTime.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CA088 (PipCheckSystemFirmwareUpdated.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1405C7AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C7C40 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PipHardwareConfigOpenKey(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int CachedContextBaseKey; // ebx
  __int64 v6; // rcx
  void *v7; // rcx
  void *v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 15, (__int64)&v10);
    if ( CachedContextBaseKey < 0
      || (!*(_QWORD *)&PiPnpRtlCtx ? (v6 = 0LL) : (v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)),
          CachedContextBaseKey = SysCtxRegOpenKey(v6, v10, (__int64)L"Current", 0, a2, (__int64)&v9),
          CachedContextBaseKey < 0) )
    {
      v7 = v9;
    }
    else
    {
      v7 = 0LL;
      *a3 = v9;
      v9 = 0LL;
    }
    if ( v7 )
      ZwClose(v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)CachedContextBaseKey;
}
