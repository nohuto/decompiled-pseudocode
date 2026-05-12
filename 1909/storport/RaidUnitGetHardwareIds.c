/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C001B670
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C006E9D0 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x1C001B918 (RtlStringCchPrintfExW.c)
 *     PortGetDeviceType @ 0x1C006CB7C (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006EA58 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  wchar_t **v2; // r13
  wchar_t *Pool; // rax
  __int64 v5; // r8
  wchar_t *v6; // rdi
  int v7; // ecx
  _BYTE *v8; // rax
  _BYTE *v9; // r12
  _BYTE *v10; // r15
  _BYTE *v11; // r14
  _QWORD *DeviceType; // r13
  unsigned int v13; // r10d
  ULONG dwFlags; // edx
  NTSTATUS v15; // eax
  wchar_t *v16; // r10
  size_t v17; // rdx
  NTSTATUS v18; // ebx
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  __int64 result; // rax
  NTSTATUS v22; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+40h] BYREF
  wchar_t **v24; // [rsp+98h] [rbp+48h]
  size_t pcchRemaining; // [rsp+A0h] [rbp+50h] BYREF

  v24 = a2;
  v2 = a2;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x1BAuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  pcchRemaining = 221LL;
  v6 = Pool;
  if ( Pool )
  {
    v7 = *(_DWORD *)(a1 + 1824);
    ppszDestEnd = Pool;
    v8 = *(_BYTE **)(a1 + 104);
    v9 = v8 + 32;
    v10 = v8 + 16;
    v11 = v8 + 8;
    if ( (v7 & 1) != 0 )
    {
      v22 = RtlStringCchPrintfExW(
              v6,
              0xDDuLL,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
              v11,
              v10,
              v8 + 32);
      v16 = ppszDestEnd + 1;
      v17 = pcchRemaining - 1;
      ++ppszDestEnd;
      v18 = v22;
      if ( v22 >= 0 )
      {
        v18 = RtlStringCchPrintfExW(v16, v17, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
        v16 = ppszDestEnd + 1;
      }
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(*v8 & 0x1F, 0LL, v5);
      v15 = RtlStringCchPrintfExW(
              v6,
              v13,
              &ppszDestEnd,
              &pcchRemaining,
              dwFlags,
              L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
              *DeviceType,
              v11,
              v10,
              v9);
      v16 = ppszDestEnd + 1;
      v17 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v18 = v15;
      if ( v15 >= 0 )
      {
        v18 = RtlStringCchPrintfExW(
                v16,
                v17,
                &ppszDestEnd,
                &pcchRemaining,
                0,
                L"SCSI\\%hs%8.8hs%16.16hs",
                *DeviceType,
                v11,
                v10);
        v16 = ppszDestEnd + 1;
        v17 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
      }
      if ( v18 >= 0 )
      {
        v19 = RtlStringCchPrintfExW(v16, v17, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *DeviceType, v11);
        v17 = pcchRemaining;
        v18 = v19;
        if ( v19 < 0 )
        {
          v16 = ppszDestEnd;
        }
        else
        {
          ++ppszDestEnd;
          --pcchRemaining;
          v18 = RtlStringCchPrintfExW(
                  ppszDestEnd,
                  pcchRemaining,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%8.8hs%16.16hs%1.1hs",
                  v11,
                  v10,
                  v9);
          v16 = ppszDestEnd + 1;
          v17 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
        }
        if ( v18 >= 0 )
        {
          v20 = RtlStringCchPrintfExW(v16, v17, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v11, v10, v9);
          v16 = ppszDestEnd + 1;
          v17 = pcchRemaining - 1;
          ++ppszDestEnd;
          v18 = v20;
          if ( v20 >= 0 && ((**(_BYTE **)(a1 + 104) & 0x1F) != 0x14 || IsSMREnabled) )
          {
            v18 = RtlStringCchPrintfExW(v16, v17, &ppszDestEnd, &pcchRemaining, 0, L"%hs", DeviceType[1]);
            v16 = ppszDestEnd + 1;
          }
        }
      }
      v2 = v24;
    }
    LOBYTE(v17) = 1;
    *v16 = 0;
    RaFixupIds(v6, v17);
  }
  else
  {
    v18 = -1073741801;
  }
  result = (unsigned int)v18;
  *v2 = v6;
  return result;
}
