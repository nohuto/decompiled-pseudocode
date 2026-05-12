/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C001B528
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C006E9D0 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x1C001B918 (RtlStringCchPrintfExW.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C001BA9C (RaidUnitGet1667DeviceRegistryValue.c)
 *     PortGetDeviceType @ 0x1C006CB7C (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006EA58 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  NTSTATUS v4; // edi
  wchar_t *Pool; // rax
  __int64 v6; // r8
  wchar_t *v7; // rsi
  wchar_t *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  _QWORD *DeviceType; // rax
  size_t v12; // rdx
  wchar_t *v13; // rcx
  size_t v14; // rdx
  size_t v15; // r15
  __int64 result; // rax
  NTSTATUS v17; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp+40h] BYREF
  size_t pcchRemaining; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x4CuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
  {
    v4 = -1073741801;
    goto LABEL_9;
  }
  v8 = Pool;
  ppszDestEnd = Pool;
  v9 = *(_DWORD *)(a1 + 1824);
  v10 = 38LL;
  pcchRemaining = 38LL;
  if ( (v9 & 1) != 0 )
  {
    v17 = RtlStringCchPrintfExW(v7, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
    goto LABEL_14;
  }
  if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0x14 && !IsSMREnabled )
    goto LABEL_8;
  DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, 38LL, v6);
  v4 = RtlStringCchPrintfExW(v7, v12, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
  v13 = ppszDestEnd + 1;
  v14 = pcchRemaining - 1;
  ++ppszDestEnd;
  --pcchRemaining;
  if ( v4 >= 0 )
  {
    v4 = RtlStringCchPrintfExW(v13, v14, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
    v15 = pcchRemaining;
    v8 = ++ppszDestEnd;
    if ( v4 >= 0 )
    {
      RaidUnitGet1667DeviceRegistryValue(a1);
      if ( !*(_BYTE *)(a1 + 128) )
        goto LABEL_7;
      v17 = RtlStringCchPrintfExW(v8, v15 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
LABEL_14:
      v4 = v17;
      v8 = ppszDestEnd + 1;
LABEL_7:
      if ( v4 >= 0 )
      {
LABEL_8:
        LOBYTE(v10) = 1;
        *v8 = 0;
        RaFixupIds(v7, v10);
      }
    }
  }
LABEL_9:
  result = (unsigned int)v4;
  *a2 = v7;
  return result;
}
