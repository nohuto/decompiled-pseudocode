/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14087C9EC
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x1402E7740 (PopDirectedDripsDiagTraceBroadcastRootDevice.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1402E77D4 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PopDiagQueryDevicePropertyString @ 0x140871708 (PopDiagQueryDevicePropertyString.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14087CB40 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagCreateDeviceDiagnostic(__int64 a1, int a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  int DevicePropertyString; // eax
  int v7; // r8d
  _QWORD *v8; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x67446F50u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x78uLL);
    v5[2] = a1;
    v5[3] = *(_QWORD *)(a1 + 32);
    DevicePropertyString = PopDiagQueryDevicePropertyString(
                             *(PDEVICE_OBJECT *)(a1 + 32),
                             DevicePropertyFriendlyName,
                             (__int64)(v5 + 5));
    v7 = DevicePropertyString;
    if ( (int)(DevicePropertyString + 0x80000000) < 0 || DevicePropertyString == -1073741772 )
    {
      v7 = PopDiagQueryDevicePropertyString(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyHardwareID, (__int64)(v5 + 7));
      if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741772 )
      {
        v7 = PopDiagQueryDevicePropertyString(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyClassName, (__int64)(v5 + 9));
        if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741772 )
        {
          v7 = PopDiagQueryDevicePropertyString(
                 *(PDEVICE_OBJECT *)(a1 + 32),
                 DevicePropertyClassGuid,
                 (__int64)(v5 + 11));
          if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741772 )
          {
            *((_DWORD *)v5 + 26) = a2;
            *(_QWORD *)(a1 + 776) = v5;
            v8 = (_QWORD *)qword_14040F708;
            if ( *(__int64 **)qword_14040F708 != &PopDirectedDripsDiagList )
              __fastfail(3u);
            *v5 = &PopDirectedDripsDiagList;
            v7 = 0;
            v5[1] = v8;
            *v8 = v5;
            qword_14040F708 = (__int64)v5;
          }
        }
      }
    }
    if ( v7 < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v5);
      return 0LL;
    }
  }
  return v5;
}
