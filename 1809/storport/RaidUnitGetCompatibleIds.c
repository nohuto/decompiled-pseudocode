/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C001D800
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C006DE84 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C00144B8 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x1C001DD4C (RtlStringCchPrintfExW.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C001DED0 (RaidUnitGet1667DeviceRegistryValue.c)
 *     McTemplateK0zqjuuussssq @ 0x1C0027D28 (McTemplateK0zqjuuussssq.c)
 *     PortGetDeviceType @ 0x1C006B318 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006DF14 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  NTSTATUS v3; // esi
  __int64 v5; // r9
  int v6; // esi
  __int64 v7; // rcx
  void *v8; // r8
  __int64 v9; // r10
  void *v10; // rdi
  wchar_t *v11; // r14
  wchar_t *Pool; // rax
  wchar_t *v13; // rdi
  int v14; // eax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *DeviceType; // rax
  size_t v19; // r10
  wchar_t *v20; // rcx
  size_t v21; // rdx
  size_t v22; // r15
  __int64 result; // rax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp+48h] BYREF
  size_t pcchRemaining; // [rsp+C0h] [rbp+50h] BYREF

  v3 = 0;
  if ( !(unsigned int)RaUnitIsSMRDisabled(a1) || (*(_DWORD *)(a1 + 1824) & 1) != 0 )
  {
    Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x4CuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
    v11 = Pool;
    if ( !Pool )
    {
      v3 = -1073741801;
      goto LABEL_26;
    }
    v13 = Pool;
    ppszDestEnd = Pool;
    v14 = *(_DWORD *)(a1 + 1824);
    pcchRemaining = 38LL;
    if ( (v14 & 1) != 0 )
    {
      v15 = RtlStringCchPrintfExW(v13, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
    }
    else
    {
      if ( (unsigned int)RaUnitIsSMRDisabled(a1) )
        goto LABEL_24;
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, v16, v17);
      v3 = RtlStringCchPrintfExW(v11, v19, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
      v20 = ppszDestEnd + 1;
      v21 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v3 < 0 )
        goto LABEL_26;
      v3 = RtlStringCchPrintfExW(v20, v21, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
      v22 = pcchRemaining;
      v13 = ++ppszDestEnd;
      if ( v3 < 0 )
        goto LABEL_26;
      RaidUnitGet1667DeviceRegistryValue(a1);
      if ( !*(_BYTE *)(a1 + 128) )
      {
LABEL_23:
        if ( v3 < 0 )
          goto LABEL_26;
LABEL_24:
        LOBYTE(v16) = 1;
        *v13 = 0;
        RaFixupIds(v11, v16);
        goto LABEL_26;
      }
      v15 = RtlStringCchPrintfExW(v13, v22 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
    }
    v3 = v15;
    v13 = ppszDestEnd + 1;
    goto LABEL_23;
  }
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(v5 + 4808);
  if ( v6 > 1 )
  {
    v7 = *(_QWORD *)(a1 + 152);
    v8 = 0LL;
    if ( v7 )
    {
      v8 = (void *)(v7 + 90);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 144);
      if ( v9 && (*(_DWORD *)(*(_QWORD *)(v5 + 544) + 184LL) & 0x40) != 0 )
        v8 = (void *)(v9 + 41);
    }
    if ( byte_1C00617E3 < 0 )
    {
      v10 = &unk_1C0054E5C;
      if ( v8 )
        v10 = v8;
      McTemplateK0zqjuuussssq(
        *(_DWORD *)(a1 + 96) >> 8,
        v5 + 5256,
        a1 + 186,
        *(_QWORD *)(v5 + 4864),
        *(_DWORD *)(v5 + 56),
        v5 + 5256,
        *(_DWORD *)(a1 + 96),
        BYTE1(*(_DWORD *)(a1 + 96)),
        BYTE2(*(_DWORD *)(a1 + 96)),
        a1 + 160,
        a1 + 169,
        a1 + 186,
        (__int64)v10,
        v6);
    }
  }
  v11 = ppszDestEnd;
  v3 = -1073741637;
LABEL_26:
  result = (unsigned int)v3;
  *a2 = v11;
  return result;
}
