/*
 * XREFs of PopWriteHiberPages @ 0x14059A908
 * Callers:
 *     PopWriteSecurePages @ 0x1402F7BA8 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x1402F7C50 (PopWriteSecurePagesCallback.c)
 *     PopWriteHeaderPages @ 0x14059AB38 (PopWriteHeaderPages.c)
 *     PopWriteChecksumPages @ 0x1405AD568 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x1405AD600 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _PopInternalError @ 0x1402EDD54 (_PopInternalError.c)
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x14059A470 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1405ACB94 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x1405AD050 (PopRecordHibernateDiagnosticInfo.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405CADC0 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  unsigned int i; // esi
  unsigned __int64 v17; // rbx
  int v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 IoLocation; // [rsp+40h] [rbp-C0h] BYREF
  ULONG MaxDataSize[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  _QWORD v28[40]; // [rsp+70h] [rbp-90h] BYREF

  v25 = a1;
  v6 = a1;
  memset(v28, 0, 0x138uLL);
  result = (unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  IoLocation = 0LL;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = off_140424600[0]();
  ++PopWatchdogTimerCount;
  if ( *(int *)(v6 + 188) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_140443410 )
    {
      PopCheckpointSystemSleep(22);
      if ( (unsigned int)(*(_DWORD *)(v6 + 184) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v6);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)(unsigned int)(v20 + 8));
      PopRecordHibernateDiagnosticInfo(v6);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140443410, *(unsigned int *)(v6 + 184), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA20EDuLL);
    result = *(_QWORD *)(v6 + 160);
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
      v28[0] = 0LL;
      HIDWORD(v28[5]) = a2 & 0xFFF;
      LOWORD(v28[1]) = 8 * (((v13 + (unsigned __int64)v12 + 4095) >> 12) + 6);
      LODWORD(v28[5]) = v12;
      v28[4] = a2 & 0xFFFFFFFFFFFFF000uLL;
      v28[3] = a2;
      WORD1(v28[1]) = 1;
      if ( v14 )
      {
        v15 = 0LL;
        for ( i = 0; i < v14; v15 = i )
        {
          ++i;
          v28[v15 + 6] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v15 << 12))).QuadPart >> 12;
        }
        v6 = v25;
      }
      v17 = __rdtsc();
      v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*(_QWORD *)(v6 + 168) + 64LL))(&IoLocation, v28);
      v19 = __rdtsc();
      dword_140443730 += v14;
      qword_140443558 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v17;
      result = v26;
      v11 -= v26;
      v10 += v26;
      a2 += v26;
      if ( v18 < 0 )
      {
        *(_DWORD *)(v6 + 188) = v18;
        return result;
      }
      result = v27;
    }
  }
  return result;
}
