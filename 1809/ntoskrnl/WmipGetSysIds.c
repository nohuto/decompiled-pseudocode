/*
 * XREFs of WmipGetSysIds @ 0x1408B3E50
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1406A8E70 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipFindSMBiosStructure @ 0x1408B3A24 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408B3B68 (WmipFindSysIdTable.c)
 *     WmipParseSysIdTable @ 0x1408B4114 (WmipParseSysIdTable.c)
 */

__int64 __fastcall WmipGetSysIds(_QWORD *a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rdi
  int SMBiosStructure; // edi
  __int64 v9; // r14
  unsigned int v10; // eax
  PVOID v11; // rax
  void *v12; // rsi
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rdi
  _OWORD *PoolWithTag; // rax
  int v17; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+34h] [rbp-64h] BYREF
  int v19; // [rsp+38h] [rbp-60h]
  _BYTE v20[4]; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned int NumberOfBytes; // [rsp+44h] [rbp-54h] BYREF
  int NumberOfBytes_4; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-40h] BYREF

  v7 = a1;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !WmipSysIdRead )
  {
    if ( (int)WmipFindSysIdTable(&NumberOfBytes_4, v20, &v21) < 0 )
    {
      SMBiosStructure = WmipFindSMBiosStructure(1, &v24, &BaseAddress, &NumberOfBytes);
      v19 = SMBiosStructure;
      if ( SMBiosStructure >= 0 )
      {
        WmipSysId1394 = 0LL;
        WmipSysId1394Count = 0;
        v15 = v24;
        if ( *(_BYTE *)(v24 + 1) <= 8u )
        {
          WmipSysIdUuid = 0LL;
          WmipSysIdUuidCount = 0;
        }
        else
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x73696D57u);
          if ( PoolWithTag )
          {
            *PoolWithTag = *(_OWORD *)(v15 + 8);
            WmipSysIdUuidCount = 1;
            WmipSysIdUuid = (__int64)PoolWithTag;
            v19 = 0;
          }
          else
          {
            ExFreePoolWithTag(0LL, 0);
            v19 = -1073741823;
          }
        }
        if ( BaseAddress )
          MmUnmapIoSpace(BaseAddress, NumberOfBytes);
        ExReleaseResourceLite(&WmipSMBiosLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        SMBiosStructure = v19;
      }
    }
    else
    {
      v17 = 0;
      v18 = 0;
      SMBiosStructure = WmipParseSysIdTable(NumberOfBytes_4, v21, 0, (unsigned int)&v17, 0LL, (__int64)&v18);
      if ( SMBiosStructure >= 0 )
      {
        v9 = (unsigned int)(16 * v17);
        v10 = v9 + 8 * v18;
        if ( v10 )
        {
          v11 = ExAllocatePoolWithTag(PagedPool, v10, 0x73696D57u);
          v12 = v11;
          if ( !v11 )
          {
            KeReleaseMutex(&WmipSMMutex, 0);
            return 3221225626LL;
          }
          v14 = (__int64)v11 + v9;
          SMBiosStructure = WmipParseSysIdTable(
                              NumberOfBytes_4,
                              v21,
                              (_DWORD)v11,
                              (unsigned int)&v17,
                              v14,
                              (__int64)&v18);
          if ( SMBiosStructure < 0 )
          {
            ExFreePoolWithTag(v12, 0);
          }
          else
          {
            WmipSysIdUuid = (__int64)v12;
            WmipSysIdUuidCount = v17;
            WmipSysId1394 = v14;
            WmipSysId1394Count = v18;
          }
        }
      }
    }
    WmipSysIdRead = SMBiosStructure != -1073741670;
    WmipSysIdStatus = SMBiosStructure;
    v7 = a1;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  result = (unsigned int)WmipSysIdStatus;
  if ( WmipSysIdStatus >= 0 )
  {
    *v7 = WmipSysIdUuid;
    *a2 = WmipSysIdUuidCount;
    *a3 = WmipSysId1394;
    *a4 = WmipSysId1394Count;
  }
  return result;
}
