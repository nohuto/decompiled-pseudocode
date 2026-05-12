/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C001DAA8
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C006DE84 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C00144B8 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x1C001DD4C (RtlStringCchPrintfExW.c)
 *     PortGetDeviceType @ 0x1C006B318 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006DF14 (RaFixupIds.c)
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
  ULONG v16; // r8d
  wchar_t *v17; // r10
  size_t v18; // rdx
  NTSTATUS v19; // ebx
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // r11
  __int64 result; // rax
  NTSTATUS v24; // eax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+40h] BYREF
  wchar_t **v26; // [rsp+98h] [rbp+48h]
  size_t pcchRemaining; // [rsp+A0h] [rbp+50h] BYREF

  v26 = a2;
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
      v24 = RtlStringCchPrintfExW(
              v6,
              0xDDuLL,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
              v11,
              v10,
              v8 + 32);
      LOWORD(v16) = 0;
      v17 = ppszDestEnd + 1;
      v18 = pcchRemaining - 1;
      ++ppszDestEnd;
      v19 = v24;
      if ( v24 >= 0 )
      {
        v19 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
        v17 = ppszDestEnd + 1;
        LOWORD(v16) = 0;
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
      LOWORD(v16) = 0;
      v17 = ppszDestEnd + 1;
      v18 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v19 = v15;
      if ( v15 >= 0 )
      {
        v19 = RtlStringCchPrintfExW(
                v17,
                v18,
                &ppszDestEnd,
                &pcchRemaining,
                0,
                L"SCSI\\%hs%8.8hs%16.16hs",
                *DeviceType,
                v11,
                v10);
        v17 = ppszDestEnd + 1;
        v18 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
        LOWORD(v16) = 0;
      }
      if ( v19 >= 0 )
      {
        v20 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *DeviceType, v11);
        v18 = pcchRemaining;
        LOWORD(v16) = 0;
        v19 = v20;
        if ( v20 < 0 )
        {
          v17 = ppszDestEnd;
        }
        else
        {
          ++ppszDestEnd;
          --pcchRemaining;
          v19 = RtlStringCchPrintfExW(
                  ppszDestEnd,
                  pcchRemaining,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%8.8hs%16.16hs%1.1hs",
                  v11,
                  v10,
                  v9);
          v17 = ppszDestEnd + 1;
          v18 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          LOWORD(v16) = 0;
        }
        if ( v19 >= 0 )
        {
          v21 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v11, v10, v9);
          LOWORD(v16) = 0;
          v17 = ++ppszDestEnd;
          v19 = v21;
          if ( v21 >= 0 && !(unsigned int)RaUnitIsSMRDisabled(a1) )
          {
            v19 = RtlStringCchPrintfExW(v17, v22 - 1, &ppszDestEnd, &pcchRemaining, v16, L"%hs", DeviceType[1]);
            v17 = ppszDestEnd + 1;
            LOWORD(v16) = 0;
          }
        }
      }
      v2 = v26;
    }
    LOBYTE(v18) = 1;
    *v17 = v16;
    RaFixupIds(v6, v18);
  }
  else
  {
    v19 = -1073741801;
  }
  result = (unsigned int)v19;
  *v2 = v6;
  return result;
}
