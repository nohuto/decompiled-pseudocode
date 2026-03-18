/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x14018B604
 * Callers:
 *     KiSetHardwareSpeculationControlFeatures @ 0x14018B490 (KiSetHardwareSpeculationControlFeatures.c)
 *     KiDetermineRetpolineEnablement @ 0x14019C1FC (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401806F0 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14018B5D0 (HviGetEnlightenmentInformation.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018B7F0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

char __fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, char a2, _OWORD *a3, unsigned __int64 a4)
{
  char v4; // r10
  char v5; // r15
  int v7; // edi
  _BYTE *v8; // r14
  bool v10; // si
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rax
  __int128 v29; // [rsp+20h] [rbp-40h]
  unsigned __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-28h]
  _QWORD v32[2]; // [rsp+40h] [rbp-20h] BYREF

  v4 = *(_BYTE *)(a1 + 141);
  v5 = *(_BYTE *)(a1 + 64);
  v31 = 0LL;
  v7 = 0;
  v30 = 0LL;
  v8 = (_BYTE *)a4;
  LOBYTE(a4) = *(_BYTE *)(a1 + 67);
  v32[0] = 0LL;
  v32[1] = 0LL;
  v10 = 0;
  __asm { cpuid }
  *(_QWORD *)&v29 = 0x4800000000LL;
  *((_QWORD *)&v29 + 1) = 4LL;
  HIDWORD(v30) = _RBX;
  v31 = __PAIR64__(_RDX, _RCX);
  if ( (unsigned int)_RAX < 7 )
  {
    v19 = 0LL;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v30 = __PAIR64__(_RBX, _RAX);
    v19 = (unsigned int)_RDX;
    LODWORD(v31) = _RCX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v21 = __readmsr(0x10Au);
      _RDX = (unsigned __int64)HIDWORD(v21) << 32;
      _RCX = v21 & 2;
      if ( (v21 & 2) != 0 )
      {
        v7 = 512;
        LODWORD(v29) = 512;
      }
      v10 = (_DWORD)_RCX != 0;
      if ( (v21 & 2) != 0 )
      {
        v7 |= 1u;
        v10 = 1;
        LODWORD(v29) = v7;
      }
      if ( (v21 & 0x10) != 0 )
      {
        v7 |= 0x100u;
        v10 = 1;
        LODWORD(v29) = v7;
      }
      if ( (v21 & 4) != 0 )
      {
        v7 |= 0x200u;
        v10 = 1;
        LODWORD(v29) = v7;
      }
    }
  }
  if ( v4 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    HIDWORD(v30) = _RBX;
    v31 = __PAIR64__(_RDX, _RCX);
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      LODWORD(v30) = _RAX;
      v31 = __PAIR64__(_RDX, _RCX);
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v7 |= 4u;
      v10 = 1;
      LODWORD(v29) = v7;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v7 |= 0x10u;
      v10 = 1;
      LODWORD(v29) = v7;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v7 |= 0x40u;
      v10 = 1;
      LODWORD(v29) = v7;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v7 |= 0x80u;
      LODWORD(v29) = v7;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v7 |= 0x180u;
      LODWORD(v29) = v7;
    }
    if ( (v7 & 0x80u) != 0 )
      goto LABEL_10;
  }
  else
  {
    if ( (v19 & 0x4000000) != 0 )
    {
      v7 |= 0x14u;
      v10 = 1;
      LODWORD(v29) = v7;
    }
    if ( (v19 & 0x8000000) != 0 )
    {
      v7 |= 0x44u;
      v10 = 1;
      LODWORD(v29) = v7;
    }
    if ( (int)v19 < 0 )
    {
      v7 |= 0x80u;
      LODWORD(v29) = v7;
LABEL_10:
      v10 = 1;
    }
  }
  if ( (a2 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v7 |= 0x20u;
    LODWORD(v29) = v7;
  }
  if ( v4 == 2 && v5 == 6 )
  {
    if ( (_BYTE)a4 == 0x8E
      || (unsigned __int8)(a4 - 78) <= 0x19u && (_RCX = 50397313LL, _bittest((const int *)&_RCX, a4 - 78))
      || (_BYTE)a4 == 0x9E )
    {
      v7 |= 0x200u;
      LODWORD(v29) = v7;
    }
    LOBYTE(a4) = a4 - 55;
    if ( (unsigned __int8)a4 <= 0x3Eu )
    {
      _RCX = 0x4080404800680001LL;
      if ( _bittest64(&_RCX, a4) )
      {
        v7 |= 0x200u;
        LODWORD(v29) = v7;
      }
    }
  }
  if ( !(unsigned __int8)HviIsHypervisorMicrosoftCompatible(_RCX, _RDX, v19, a4) )
  {
    LOBYTE(v20) = HviIsAnyHypervisorPresent();
    if ( !(_BYTE)v20 )
      goto LABEL_21;
LABEL_63:
    if ( (KiFeatureSettings & 0x8000) == 0 )
      goto LABEL_25;
    goto LABEL_21;
  }
  HviGetEnlightenmentInformation(v32);
  v30 = 0LL;
  v31 = 0LL;
  HviGetHypervisorFeatures(&v30);
  LOBYTE(v20) = 0;
  if ( (v30 & 0x100000000000LL) == 0 || (v32[0] & 0x1000) != 0 )
    goto LABEL_63;
LABEL_21:
  LOBYTE(v20) = v7 & 0x14;
  if ( (v7 & 0x14) == 0x14 )
  {
    v20 = *(_DWORD *)(a1 + 1740);
    if ( (v20 & 2) != 0 )
    {
      v7 |= 0x400u;
      LODWORD(v29) = v7;
    }
    if ( (v20 & 4) != 0 )
    {
      v7 |= 0x800u;
      LODWORD(v29) = v7;
      if ( (KiFeatureSettings & 0x4000) != 0 )
      {
        v7 |= 1u;
        LODWORD(v29) = v7;
      }
    }
  }
LABEL_25:
  if ( (KiFeatureSettings & 0x10000) != 0 )
    LODWORD(v29) = v7 & 0xFFFFF7FE;
  *a3 = v29;
  if ( v8 )
    *v8 = v10;
  return v20;
}
