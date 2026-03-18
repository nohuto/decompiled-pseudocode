/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408B75DC
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x140303ED0 (PopDirectedDripsDiagTraceBroadcastRootDevice.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1408B7F24 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1400CFDD0 (RtlUnicodeStringCopy.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PopDiagQueryDevicePropertyString @ 0x1408AC984 (PopDiagQueryDevicePropertyString.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1408B77B4 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 */

char *__fastcall PopDirectedDripsDiagCreateDeviceDiagnostic(__int64 a1, int a2)
{
  char *PoolWithTag; // rax
  char *v5; // rbx
  int DevicePropertyString; // eax
  int v7; // edx
  __int64 v8; // r10
  unsigned __int16 v9; // ax
  int v10; // eax
  unsigned int v11; // esi
  PVOID v12; // rax
  PVOID v13; // rbp
  _QWORD *v14; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x67696450u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    *((_QWORD *)v5 + 2) = a1;
    *((_QWORD *)v5 + 3) = *(_QWORD *)(a1 + 32);
    DevicePropertyString = PopDiagQueryDevicePropertyString(
                             *(PDEVICE_OBJECT *)(a1 + 32),
                             DevicePropertyFriendlyName,
                             (__int64)(v5 + 40));
    v7 = DevicePropertyString;
    if ( (int)(DevicePropertyString + 0x80000000) < 0 || DevicePropertyString == -1073741772 )
    {
      v7 = PopDiagQueryDevicePropertyString(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyHardwareID, (__int64)(v5 + 56));
      if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741772 )
      {
        v7 = PopDiagQueryDevicePropertyString(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyClassName, (__int64)(v5 + 72));
        if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741772 )
        {
          v7 = PopDiagQueryDevicePropertyString(
                 *(PDEVICE_OBJECT *)(a1 + 32),
                 DevicePropertyClassGuid,
                 (__int64)(v5 + 88));
          if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741772 )
          {
            v8 = *(_QWORD *)(a1 + 48);
            if ( v8 )
            {
              v9 = *(_WORD *)(a1 + 40);
              if ( v9 >= 2u )
              {
                v10 = v9 >> 1;
                v11 = 2 * v10 + 2;
                if ( !*(_WORD *)(v8 + 2LL * (unsigned int)(v10 - 1)) )
                  v11 = 2 * v10;
                if ( v11 >= 0xFFFF )
                  goto LABEL_21;
                v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x67696450u);
                v13 = v12;
                if ( !v12 )
                  goto LABEL_21;
                memset(v12, 0, v11);
                *((_QWORD *)v5 + 14) = v13;
                *((_WORD *)v5 + 52) = 0;
                *((_WORD *)v5 + 53) = v11;
                RtlUnicodeStringCopy((PUNICODE_STRING)(v5 + 104), (PCUNICODE_STRING)(a1 + 40));
              }
            }
            *((_DWORD *)v5 + 30) = a2;
            *(_QWORD *)(a1 + 776) = v5;
            v14 = (_QWORD *)qword_140436DD8;
            if ( *(__int64 **)qword_140436DD8 != &PopDirectedDripsDiagList )
              __fastfail(3u);
            *(_QWORD *)v5 = &PopDirectedDripsDiagList;
            v7 = 0;
            *((_QWORD *)v5 + 1) = v14;
            *v14 = v5;
            qword_140436DD8 = (__int64)v5;
          }
        }
      }
    }
    if ( v7 < 0 )
    {
LABEL_21:
      PopDirectedDripsDiagFreeDeviceDiagnostic(v5);
      return 0LL;
    }
  }
  return v5;
}
