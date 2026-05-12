/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C001B018
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C006C338 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x1C001B408 (RtlStringCchPrintfExW.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C001B58C (RaidUnitGet1667DeviceRegistryValue.c)
 *     PortGetDeviceType @ 0x1C006BC7C (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006C3C0 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  NTSTATUS v4; // edi
  wchar_t *Pool; // rax
  wchar_t *v6; // rsi
  wchar_t *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *DeviceType; // rax
  size_t v11; // rdx
  wchar_t *v12; // rcx
  size_t v13; // rdx
  size_t v14; // r15
  __int64 result; // rax
  NTSTATUS v16; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp+40h] BYREF
  size_t pcchRemaining; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x4CuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v6 = Pool;
  if ( !Pool )
  {
    v4 = -1073741801;
    goto LABEL_9;
  }
  v7 = Pool;
  ppszDestEnd = Pool;
  v8 = *(_DWORD *)(a1 + 1568);
  v9 = 38LL;
  pcchRemaining = 38LL;
  if ( (v8 & 1) != 0 )
  {
    v16 = RtlStringCchPrintfExW(v6, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
    goto LABEL_14;
  }
  if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0x14 && !IsSMREnabled )
    goto LABEL_8;
  DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
  v4 = RtlStringCchPrintfExW(v6, v11, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
  v12 = ppszDestEnd + 1;
  v13 = pcchRemaining - 1;
  ++ppszDestEnd;
  --pcchRemaining;
  if ( v4 >= 0 )
  {
    v4 = RtlStringCchPrintfExW(v12, v13, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
    v14 = pcchRemaining;
    v7 = ++ppszDestEnd;
    if ( v4 >= 0 )
    {
      RaidUnitGet1667DeviceRegistryValue(a1);
      if ( !*(_BYTE *)(a1 + 128) )
        goto LABEL_7;
      v16 = RtlStringCchPrintfExW(v7, v14 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
LABEL_14:
      v4 = v16;
      v7 = ppszDestEnd + 1;
LABEL_7:
      if ( v4 >= 0 )
      {
LABEL_8:
        LOBYTE(v9) = 1;
        *v7 = 0;
        RaFixupIds(v6, v9);
      }
    }
  }
LABEL_9:
  result = (unsigned int)v4;
  *a2 = v6;
  return result;
}
