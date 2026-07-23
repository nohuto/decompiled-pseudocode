/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x14017D8C4
 * Callers:
 *     KiSetHardwareSpeculationControlFeatures @ 0x14017D720 (KiSetHardwareSpeculationControlFeatures.c)
 *     KiDetermineRetpolineEnablement @ 0x14019321C (KiDetermineRetpolineEnablement.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401B4664 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401B46BC (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14017D890 (HviGetEnlightenmentInformation.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14017DD10 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiIsBranchConfusionPresent @ 0x1401B4620 (KiIsBranchConfusionPresent.c)
 *     KiIsRfdsPresent @ 0x1401B4738 (KiIsRfdsPresent.c)
 *     KiIsSrsoPresent @ 0x1401B4854 (KiIsSrsoPresent.c)
 *     KiIsTsaPresent @ 0x1401B4918 (KiIsTsaPresent.c)
 */

bool *__fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, char a2, __int64 a3, bool *a4)
{
  int v4; // r15d
  __int64 v5; // rdi
  bool v8; // r14
  bool IsAnyHypervisorPresent; // r13
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v29; // rcx
  int v30; // eax
  ULONG_PTR v31; // rbx
  char v32; // cl
  char v33; // al
  __int64 v34; // rdi
  bool *result; // rax
  char v36; // [rsp+20h] [rbp-60h]
  char v37; // [rsp+21h] [rbp-5Fh]
  __int128 v38; // [rsp+28h] [rbp-58h]
  __int64 v41; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v42[4]; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0LL;
  LOBYTE(v4) = *(_BYTE *)(a1 + 67);
  v36 = *(_BYTE *)(a1 + 141);
  v8 = 0;
  IsAnyHypervisorPresent = 1;
  v37 = *(_BYTE *)(a1 + 64);
  *(_QWORD *)&v38 = 0LL;
  *((_QWORD *)&v38 + 1) = 72LL;
  if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetEnlightenmentInformation(v42);
    HviGetHypervisorFeatures(&v41);
    if ( (v41 & 0x100000000000LL) != 0 )
      IsAnyHypervisorPresent = (v42[0] & 0x1000) != 0;
  }
  else
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v19 = 0LL;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v19 = (unsigned int)_RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v20 = __readmsr(0x10Au);
      _RDX = (unsigned __int64)HIDWORD(v20) << 32;
      if ( (v20 & 2) != 0 )
      {
        v5 = 512LL;
        *(_QWORD *)&v38 = 512LL;
      }
      v8 = (v20 & 2) != 0;
      if ( (v20 & 2) != 0 )
      {
        v5 |= 1uLL;
        v8 = 1;
        *(_QWORD *)&v38 = v5;
      }
      if ( (v20 & 0x10) != 0 )
      {
        v5 |= 0x100uLL;
        v8 = 1;
        *(_QWORD *)&v38 = v5;
      }
      if ( (v20 & 4) != 0 )
      {
        v5 |= 0x200uLL;
        v8 = 1;
        *(_QWORD *)&v38 = v5;
      }
    }
  }
  if ( v36 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v5 |= 4uLL;
      v8 = 1;
      *(_QWORD *)&v38 = v5;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v5 |= 0x10uLL;
      v8 = 1;
      *(_QWORD *)&v38 = v5;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v5 |= 0x40uLL;
      v8 = 1;
      *(_QWORD *)&v38 = v5;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v5 |= 0x80uLL;
      *(_QWORD *)&v38 = v5;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v5 |= 0x180uLL;
      *(_QWORD *)&v38 = v5;
    }
    if ( (v38 & 0x80u) != 0LL )
      goto LABEL_38;
  }
  else
  {
    if ( (v19 & 0x4000000) != 0 )
    {
      v5 |= 0x14uLL;
      v8 = 1;
      *(_QWORD *)&v38 = v5;
    }
    if ( (v19 & 0x8000000) != 0 )
    {
      v5 |= 0x44uLL;
      v8 = 1;
      *(_QWORD *)&v38 = v5;
    }
    if ( (int)v19 < 0 )
    {
      v5 |= 0x80uLL;
      *(_QWORD *)&v38 = v5;
LABEL_38:
      v8 = 1;
    }
  }
  if ( (a2 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v5 |= 0x20uLL;
    *(_QWORD *)&v38 = v5;
  }
  if ( v36 == 2 && v37 == 6 )
  {
    if ( (unsigned __int8)(v4 - 78) <= 0x19u
      && (_RDX = 50397313LL, _bittest((const int *)&_RDX, (unsigned __int8)(v4 - 78)))
      || (_BYTE)v4 == 0x8E
      || (_BYTE)v4 == 0x9E )
    {
      v5 |= 0x200uLL;
      *(_QWORD *)&v38 = v5;
    }
    if ( (unsigned __int8)(v4 - 55) <= 0x37u && (v29 = 0x80404800680001LL, _bittest64(&v29, (unsigned int)(v4 - 55)))
      || (_BYTE)v4 == 117 )
    {
      v5 |= 0x200uLL;
      *(_QWORD *)&v38 = v5;
    }
  }
  if ( (!IsAnyHypervisorPresent || (KiFeatureSettings & 0x8000) != 0) && (v38 & 0x14) == 0x14 )
  {
    v30 = *(_DWORD *)(a1 + 1740);
    if ( (v30 & 2) != 0 )
    {
      v5 |= 0x400uLL;
      *(_QWORD *)&v38 = v5;
    }
    if ( (v30 & 4) != 0 )
    {
      v5 |= 0x800uLL;
      *(_QWORD *)&v38 = v5;
      if ( (KiFeatureSettings & 0x4000) != 0 )
      {
        v5 |= 1uLL;
        *(_QWORD *)&v38 = v5;
      }
    }
  }
  if ( v36 == 1 && (v38 & 0x54) == 0x54 )
  {
    v5 |= 0x4000uLL;
    *(_QWORD *)&v38 = v5;
  }
  v31 = KeFeatureBits2;
  if ( (KeFeatureBits2 & 0x20000) != 0 && (KiFeatureSettings & 0x400000) == 0 )
  {
    v5 |= 0x2000uLL;
    *(_QWORD *)&v38 = v5;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1, _RDX, v19, 512LL) )
  {
    v5 |= 0x8000uLL;
    *(_QWORD *)&v38 = v5;
  }
  if ( (unsigned int)KiIsTsaPresent(a1) )
  {
    v5 |= 0x2000000uLL;
    *(_QWORD *)&v38 = v5;
  }
  if ( v36 != 1 || (v31 & 0x2000000) != 0 )
  {
    v5 |= 8uLL;
    *(_QWORD *)&v38 = v5;
  }
  BYTE12(v38) = 0;
  if ( v36 == 2 )
  {
    if ( (v31 & 0x4000000) == 0 && (IsAnyHypervisorPresent || (v38 & 1) != 0) )
    {
      v5 |= 0x10000uLL;
      *(_QWORD *)&v38 = v5;
    }
    if ( (v5 & 0x10000) != 0 )
    {
      if ( (v31 & 0x8000000) != 0 )
      {
        v5 |= 0x20000uLL;
        *(_QWORD *)&v38 = v5;
      }
      if ( KiTsxSupported )
      {
        BYTE12(v38) = 3;
      }
      else if ( (v31 & 0x8000000) != 0
             || *(_BYTE *)(a1 + 64) == 6
             && ((v32 = *(_BYTE *)(a1 + 67), v32 == -105) && ((v33 = *(_BYTE *)(a1 + 66), v33 == 2) || v33 == 5)
              || v32 == -102 && (unsigned __int8)(*(_BYTE *)(a1 + 66) - 3) <= 1u)
             || (BYTE12(v38) = 1, IsAnyHypervisorPresent) )
      {
        BYTE12(v38) = 2;
      }
    }
  }
  if ( (unsigned int)KiIsSrsoPresent(a1) )
  {
    v5 |= 0x200000uLL;
    *(_QWORD *)&v38 = v5;
  }
  if ( v36 == 1 )
  {
    v5 |= 0x400000uLL;
    *(_QWORD *)&v38 = v5;
  }
  if ( (unsigned int)KiIsRfdsPresent() )
  {
    v34 = v5 | 0x800000;
    *(_QWORD *)&v38 = v34;
    if ( (v31 & 0x1000000000LL) != 0 )
      *(_QWORD *)&v38 = v34 | 0x1000000;
  }
  *(_OWORD *)a3 = v38;
  *(_QWORD *)(a3 + 16) = 4LL;
  result = a4;
  if ( a4 )
    *a4 = v8;
  return result;
}
