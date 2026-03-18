/*
 * XREFs of HvlpTryConfigureInterface @ 0x14019CD08
 * Callers:
 *     HvlRestoreEnlightenment @ 0x140284BFC (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x14078A70C (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x140A22F58 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     HviGetHypervisorFeatures @ 0x14018BF20 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018C180 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 (*v4)(); // r8
  bool v5; // di
  unsigned __int64 v6; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 result; // rax
  unsigned __int64 QuadPart; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  HviGetHypervisorFeatures(v10);
  v2 = (v10[0] >> 44) & 1LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 240);
    v4 = *(__int64 (**)())(v3 + 2904);
    v5 = (*(_DWORD *)(v3 + 116) & 0x200) != 0;
  }
  else
  {
    v4 = 0LL;
    v5 = 0;
  }
  if ( v4 )
    goto LABEL_15;
  if ( !HviIsHypervisorMicrosoftCompatible() )
    return 3224702976LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  HviGetHypervisorFeatures(v11);
  if ( (v11[0] & 0x20) == 0 )
    return 3224702976LL;
  __writemsr(0x40000000u, (18363LL - (KernelVersionBump != 1)) | ((BYTE1(CmNtCSDVersion) | 0x1040A0000LL) << 16));
  v6 = __readmsr(0x40000001u) | 1;
  if ( (_BYTE)v2 || v5 )
  {
    QuadPart = v6 & 0xFFFFFFFFFFFFF000uLL;
    v4 = (__int64 (*)())((__int64 (__fastcall *)(unsigned __int64, __int64))qword_140424460)(
                          v6 & 0xFFFFFFFFFFFFF000uLL,
                          1LL);
    if ( v4 )
      goto LABEL_14;
  }
  else
  {
    if ( !a1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HvlpHypercallCodeVa);
      v4 = (__int64 (*)())HvlpHypercallCodeVa;
      QuadPart = PhysicalAddress.QuadPart;
      goto LABEL_13;
    }
    v4 = (__int64 (*)())((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *))qword_140424458)(
                          a1,
                          1LL,
                          &QuadPart);
    if ( v4 )
    {
      PhysicalAddress.QuadPart = QuadPart;
LABEL_13:
      v6 = PhysicalAddress.QuadPart ^ (LOWORD(PhysicalAddress.LowPart) ^ (unsigned __int16)v6) & 0xFFF;
LABEL_14:
      __writemsr(0x40000001u, v6);
LABEL_15:
      HvcallCodeVa = v4;
      result = 0LL;
      _InterlockedExchange64((volatile __int64 *)&HvlpHypercallCodeVa, (__int64)v4);
      return result;
    }
  }
  return 3221225626LL;
}
