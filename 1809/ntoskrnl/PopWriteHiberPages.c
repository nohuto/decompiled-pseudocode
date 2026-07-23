/*
 * XREFs of PopWriteHiberPages @ 0x14056AC48
 * Callers:
 *     PopWriteSecurePages @ 0x1402DC2AC (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x1402DC354 (PopWriteSecurePagesCallback.c)
 *     PopWriteHeaderPages @ 0x14056AA20 (PopWriteHeaderPages.c)
 *     PopWriteChecksumPages @ 0x14057E6A8 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x14057E740 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     _PopInternalError @ 0x1402D3928 (_PopInternalError.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x14056B930 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x14057DCE4 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x14057E190 (PopRecordHibernateDiagnosticInfo.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406269DC (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  unsigned int i; // edi
  unsigned __int64 v17; // rbx
  int v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 NumberOfPhysicalPages; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 IoLocation; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int16 v29; // [rsp+78h] [rbp-88h]
  __int16 v30; // [rsp+7Ah] [rbp-86h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  unsigned __int64 v32; // [rsp+90h] [rbp-70h]
  unsigned int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  _QWORD v35[34]; // [rsp+A0h] [rbp-60h]

  result = (unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v24 = a1;
  v9 = a1;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = off_1403FF600[0]();
  ++PopWatchdogTimerCount;
  if ( *(int *)(v9 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_1404188D0 )
    {
      PopCheckpointSystemSleep(0x16u);
      if ( (unsigned int)(*(_DWORD *)(v9 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v9);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v20 + 8);
      PopRecordHibernateDiagnosticInfo(v9);
      IoAddTriageDumpDataBlock((int)&PopHibernateDiagnosticInfo, 128);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_1404188D0, *(unsigned int *)(v9 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA2002uLL);
    result = *(_QWORD *)(v9 + 160);
    v10 = a4 << 12;
    v27 = result;
    v11 = a3 << 12;
    while ( v11 )
    {
      IoLocation = PopGetIoLocation(result, v10, &v22);
      v12 = v11;
      if ( v11 > v22 )
        v12 = v22;
      v13 = a2 & 0xFFF;
      v14 = ((unsigned __int64)v12 + v13 + 4095) >> 12;
      if ( v14 > 0x10 )
      {
        v21 = v14 - 16;
        v14 = 16LL;
        v12 -= v21 << 12;
      }
      v26 = v12;
      v28 = 0LL;
      v34 = a2 & 0xFFF;
      v29 = 8 * (((v13 + (unsigned __int64)v12 + 4095) >> 12) + 6);
      v33 = v12;
      v32 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v31 = a2;
      v30 = 1;
      if ( v14 )
      {
        v15 = 0LL;
        for ( i = 0; i < v14; v15 = i )
        {
          ++i;
          v35[v15] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v15 << 12))).QuadPart >> 12;
        }
        v9 = v24;
      }
      v17 = __rdtsc();
      v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*(_QWORD *)(v9 + 168) + 64LL))(&IoLocation, &v28);
      v19 = __rdtsc();
      dword_140418E10 += v14;
      qword_140418C38 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v17;
      result = v26;
      v11 -= v26;
      v10 += v26;
      a2 += v26;
      if ( v18 < 0 )
      {
        *(_DWORD *)(v9 + 188) = v18;
        return result;
      }
      result = v27;
    }
  }
  return result;
}
