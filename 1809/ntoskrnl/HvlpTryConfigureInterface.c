/*
 * XREFs of HvlpTryConfigureInterface @ 0x14017C468
 * Callers:
 *     HvlRestoreEnlightenment @ 0x140271308 (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x1409E0548 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14017DD10 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 (*v4)(); // r8
  bool v5; // di
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 QuadPart; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+48h] [rbp-20h] BYREF

  HviGetHypervisorFeatures(&v10);
  v2 = (v10 >> 44) & 1;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 240);
    v4 = *(__int64 (**)())(v3 + 2880);
    v5 = (*(_DWORD *)(v3 + 116) & 0x200) != 0;
  }
  else
  {
    v4 = 0LL;
    v5 = 0;
  }
  if ( v4 )
    goto LABEL_16;
  if ( !(unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
    return 3224702976LL;
  HviGetHypervisorFeatures(v11);
  if ( (v11[0] & 0x20) == 0 )
    return 3224702976LL;
  __writemsr(0x40000000u, ((unsigned __int64)BYTE1(CmNtCSDVersion) << 16) | 0x1040A00004563LL);
  v7 = __readmsr(0x40000001u) | 1;
  if ( (_BYTE)v2 || v5 )
  {
    QuadPart = v7 & 0xFFFFFFFFFFFFF000uLL;
    v4 = (__int64 (*)())((__int64 (__fastcall *)(unsigned __int64, __int64))qword_1403FF460)(
                          v7 & 0xFFFFFFFFFFFFF000uLL,
                          1LL);
    if ( v4 )
      goto LABEL_15;
  }
  else
  {
    if ( !a1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HvlpHypercallCodeVa);
      v4 = (__int64 (*)())HvlpHypercallCodeVa;
      QuadPart = PhysicalAddress.QuadPart;
      goto LABEL_14;
    }
    v4 = (__int64 (*)())((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *))qword_1403FF458)(
                          a1,
                          1LL,
                          &QuadPart);
    if ( v4 )
    {
      PhysicalAddress.QuadPart = QuadPart;
LABEL_14:
      v7 = PhysicalAddress.QuadPart ^ (LOWORD(PhysicalAddress.LowPart) ^ (unsigned __int16)v7) & 0xFFF;
LABEL_15:
      __writemsr(0x40000001u, v7);
LABEL_16:
      HvcallCodeVa = v4;
      result = 0LL;
      _InterlockedExchange64((volatile __int64 *)&HvlpHypercallCodeVa, (__int64)v4);
      return result;
    }
  }
  return 3221225626LL;
}
