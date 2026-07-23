/*
 * XREFs of KiSetFeatureBits @ 0x1405717EC
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiApplyProcessorErrata @ 0x1401B4A28 (KiApplyProcessorErrata.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlSetHardwareMbecAvailable @ 0x14027137C (HvlSetHardwareMbecAvailable.c)
 *     KiGetProcessorSignature @ 0x14057062C (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405707A8 (KiSetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x1405720E4 (KiDetectKvaLeakage.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 */

void __fastcall KiSetFeatureBits(unsigned __int64 a1)
{
  char v1; // bl
  __int64 v2; // rdi
  char v3; // dl
  __int64 v4; // rdx
  int ProcessorSignature; // eax
  char v6; // r8
  __int16 v22; // si
  ULONG_PTR v23; // r13
  unsigned int v24; // r15d
  ULONG_PTR v35; // r12
  unsigned int v36; // r14d
  char v37; // dl
  unsigned __int8 v38; // al
  unsigned __int8 v39; // cl
  char v40; // al
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // r8
  char v44; // r11
  __int64 v45; // rsi
  unsigned __int64 v48; // rax
  unsigned int v49; // r15d
  unsigned int v54; // r14d
  unsigned int v63; // r10d
  int v67; // r11d
  unsigned int v68; // r9d
  char v74; // al
  unsigned int v75; // ebx
  int v79; // ecx
  char IsHyperThreadingEnabled; // al
  unsigned __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  char v90; // r9
  __int64 v101; // r8
  __int64 v102; // rsi
  unsigned __int64 v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // rax
  unsigned __int64 v121; // rax
  unsigned __int64 v127; // rax
  char v133; // r8
  int v134; // eax
  unsigned int v135; // [rsp+30h] [rbp-40h]
  unsigned int v136; // [rsp+34h] [rbp-3Ch]
  bool v137; // [rsp+38h] [rbp-38h]

  v1 = *(_BYTE *)(a1 + 64);
  v2 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 67);
  v3 = *(_BYTE *)(v2 + 141);
  v137 = (unsigned __int8)(v3 - 1) <= 1u;
  if ( *(_DWORD *)(v2 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(v2, ProcessorSignature);
  }
  else
  {
    if ( v3 == 2 )
    {
      if ( v1 != 6 )
        goto LABEL_28;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( (unsigned __int8)a1 > 0x27u )
      {
        if ( (unsigned __int8)a1 > 0x3Au )
        {
          if ( (_BYTE)a1 != 60 )
          {
            if ( (unsigned __int8)a1 <= 0x44u )
              goto LABEL_12;
            if ( (unsigned __int8)a1 > 0x46u )
            {
              if ( (_BYTE)a1 != 77 )
                goto LABEL_12;
              goto LABEL_24;
            }
          }
        }
        else if ( (((_BYTE)a1 - 42) & 0xEF) != 0 )
        {
          if ( (unsigned __int8)a1 <= 0x2Bu )
            goto LABEL_12;
          if ( (unsigned __int8)a1 > 0x2Fu )
          {
            if ( (unsigned __int8)(a1 - 53) > 2u )
              goto LABEL_12;
            goto LABEL_24;
          }
        }
      }
      else
      {
        if ( (unsigned __int8)a1 > 0x25u )
          goto LABEL_24;
        v4 = 0x3FFF7F7FFFLL;
        if ( !_bittest64(&v4, a1) )
          goto LABEL_24;
        if ( (_BYTE)a1 != 26 )
        {
          if ( (unsigned __int8)(a1 - 28) > 1u )
          {
            if ( (unsigned __int8)(a1 - 30) <= 1u || (_BYTE)a1 == 37 )
              goto LABEL_11;
LABEL_12:
            if ( !KiLastBranchFromBaseMSR )
              goto LABEL_28;
            goto LABEL_13;
          }
LABEL_24:
          KiLastBranchFromBaseMSR = 64;
          KiLastBranchToBaseMSR = 96;
LABEL_13:
          KiLastBranchTOSMSR = 457;
          goto LABEL_28;
        }
      }
LABEL_11:
      KiLastBranchFromBaseMSR = 1664;
      KiLastBranchToBaseMSR = 1728;
      goto LABEL_12;
    }
    if ( v3 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_28:
  v6 = *(_BYTE *)(v2 + 141);
  _RAX = 0LL;
  __asm { cpuid }
  v135 = _RAX;
  if ( v6 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
  }
  else
  {
    if ( v6 != 1 )
      goto LABEL_33;
    v6 = 1;
  }
  *(_QWORD *)(v2 + 25256) = __readmsr(0x8Bu);
LABEL_33:
  _RAX = 1LL;
  __asm { cpuid }
  v22 = _RCX;
  v23 = (unsigned int)_RDX;
  v24 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v136 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v35 = (unsigned int)_RCX;
  v36 = _RDX;
  if ( !*(_DWORD *)(v2 + 36) )
  {
    if ( v6 == 1 )
    {
      v37 = *(_BYTE *)(v2 + 64);
      v38 = *(_BYTE *)(v2 + 67);
      v39 = *(_BYTE *)(v2 + 66);
      if ( v37 == 15 )
      {
        if ( (v38 == 107 || v38 == 104) && v39 == 1 )
          KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v37 == 16 && (__PAIR16__(v38, v39) <= 2u || v38 == 2 && (v39 <= 2u || v39 == 10) || v38 == 4 && !v39) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(v2 + 36) )
    {
      v40 = *(_BYTE *)(v2 + 141);
      if ( v40 == 1 )
      {
        if ( *(_BYTE *)(v2 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v40 == 2 && *(_BYTE *)(v2 + 64) == 6 )
      {
        if ( (LOBYTE(_RCX) = *(_BYTE *)(v2 + 67), (unsigned __int8)_RCX <= 0x36u)
          && (v41 = 0x6000C010000000LL, _bittest64(&v41, _RCX))
          || (LOBYTE(_RCX) = _RCX - 55, (unsigned __int8)_RCX <= 0x16u)
          && (v42 = 4718593, _bittest(&v42, _RCX))
          && *(_BYTE *)(v2 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(v2);
  _m_prefetchw((const void *)v2);
  v44 = 1;
  if ( *(_BYTE *)(v2 + 141) == 1 )
    v36 |= 0x100000u;
  *(_DWORD *)(v2 + 212) = HIBYTE(v24);
  *(_DWORD *)(v2 + 232) = (v24 >> 5) & 0x7F8;
  if ( (v23 & 0x789F3FD) != 0x789F3FD
    || (v36 & 0x800) == 0
    || (v36 & 0x100000) == 0
    || (v22 & 0x2000) == 0
    || (v35 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(v2 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v23, v36, v35, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v45 = *(_QWORD *)(v2 + 25248) | 0x20113DFELL;
  if ( (*(_QWORD *)(v2 + 25248) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(v2 + 209) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 208) << 8));
  _RDX = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  _RCX = 373LL;
  __writemsr(0x175u, 0LL);
  if ( (v36 & 0x2000000) != 0 )
  {
    _RCX = 3221225600LL;
    v48 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v48);
    __writemsr(0xC0000080, v48);
  }
  LOBYTE(_RCX) = *(_BYTE *)(v2 + 141);
  *(_DWORD *)(v2 + 160) = 1;
  *(_DWORD *)(v2 + 164) = 1;
  if ( (unsigned __int8)(_RCX - 2) <= 1u )
  {
    v54 = v135;
    v43 = 31LL;
    if ( v135 < 0x1F )
      goto LABEL_83;
    _RAX = 31LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      v63 = 31;
    }
    else
    {
LABEL_83:
      v63 = 11;
      if ( v135 < 0xB )
        goto LABEL_95;
      _RAX = 11LL;
      __asm { cpuid }
      if ( !(_DWORD)_RBX )
      {
LABEL_95:
        v75 = 1;
        if ( v135 >= 4 )
        {
          _RAX = 4LL;
          __asm { cpuid }
          _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
          v75 = 1 << _RCX;
          *(_DWORD *)(v2 + 160) = 1 << _RCX;
        }
        if ( (v23 & 0x10000000) != 0 )
        {
          HIDWORD(_RDX) = 0;
          _BitScanReverse((unsigned int *)&_RCX, 2 * BYTE2(v24) - 1);
          LODWORD(_RDX) = (1 << _RCX) % v75;
          *(_DWORD *)(v2 + 164) = (1 << _RCX) / v75;
        }
        goto LABEL_92;
      }
    }
    *(_DWORD *)(v2 + 212) = _RDX;
    v67 = 0;
    v68 = 1;
    do
    {
      _RAX = v63;
      __asm { cpuid }
      _RCX = (unsigned int)_RCX >> 8;
      ++v67;
      v43 = (unsigned int)_RAX;
      if ( (_DWORD)_RCX )
      {
        v43 = _RAX & 0x1F;
        if ( (_DWORD)_RCX == 1 )
        {
          LOBYTE(_RCX) = _RAX & 0x1F;
          *(_DWORD *)(v2 + 164) = 1 << (_RAX & 0x1F);
        }
        else
        {
          LOBYTE(_RCX) = _RAX & 0x1F;
          v68 = 1 << (_RAX & 0x1F);
        }
      }
    }
    while ( (_WORD)_RBX );
    v54 = v135;
    v44 = 1;
    _RDX = v68 % *(_DWORD *)(v2 + 164);
    *(_DWORD *)(v2 + 160) = v68 / *(_DWORD *)(v2 + 164);
LABEL_92:
    v49 = v136;
    goto LABEL_93;
  }
  v49 = v136;
  if ( (_BYTE)_RCX == 1 && v136 >= 0x80000008 )
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    v43 = (unsigned int)_RCX;
    _RCX = (unsigned __int16)_RCX >> 12;
    if ( !(_DWORD)_RCX )
      _BitScanReverse((unsigned int *)&_RCX, 2 * (unsigned __int8)v43 + 1);
    v54 = v135;
    *(_DWORD *)(v2 + 160) = 1 << _RCX;
    if ( v136 >= 0x8000001E && (v35 & 0x400000) != 0 )
    {
      _RAX = 2147483678LL;
      __asm { cpuid }
      v43 = (unsigned int)_RAX;
      LODWORD(_RAX) = *(_DWORD *)(v2 + 160);
      HIDWORD(_RDX) = 0;
      _RCX = (unsigned int)BYTE1(_RBX) + 1;
      *(_DWORD *)(v2 + 212) = v43;
      LODWORD(_RDX) = (unsigned int)_RAX % (unsigned int)_RCX;
      *(_DWORD *)(v2 + 164) = _RCX;
      *(_DWORD *)(v2 + 160) = (unsigned int)_RAX / (unsigned int)_RCX;
    }
  }
  else
  {
    v54 = v135;
  }
LABEL_93:
  v74 = *(_BYTE *)(v2 + 141);
  if ( v74 == 1 )
  {
    v45 |= 0x200000uLL;
  }
  else if ( v74 == 2 )
  {
    v45 |= 0x1000000uLL;
  }
  *(_BYTE *)(v2 + 142) = *(_BYTE *)(v2 + 160);
  *(_BYTE *)(v2 + 143) = *(_BYTE *)(v2 + 164);
  if ( *(_DWORD *)(v2 + 36) )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(_RCX, _RDX, v43);
    v79 = *(_DWORD *)(v2 + 164);
    v44 = 1;
    if ( !IsHyperThreadingEnabled )
      v79 *= *(_DWORD *)(v2 + 160);
  }
  else
  {
    v79 = *(_DWORD *)(v2 + 164);
  }
  *(_DWORD *)(v2 + 220) = -v79;
  if ( (unsigned __int8)(*(_BYTE *)(v2 + 141) - 1) > 2u || v49 < 0x80000008 )
  {
    if ( *(_BYTE *)(v2 + 141) == 1 )
      KiMtrrMaxRangeShift = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    KiMtrrMaxRangeShift = _RAX;
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v86 = __readcr4();
  if ( (v45 & 1) != 0 )
    v86 |= 0x100000uLL;
  v87 = v86 | 0x10000;
  if ( (v45 & 0x10000000) == 0 )
    v87 = v86;
  v88 = v87;
  if ( *(_DWORD *)(v2 + 36) && (v45 & 0x40000000000LL) != 0 && KiFlushPcid )
    v88 = v87 | 0x20000;
  __writecr4(v88);
  if ( (v88 & 0x20000) != 0 )
  {
    v89 = __readcr3();
    __writecr3(v89 | 2);
  }
  v90 = *(_BYTE *)(v2 + 141);
  if ( v90 == 2 && v54 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v45 |= 0x100000000000uLL;
    }
  }
  v101 = v45 | 0x20000;
  if ( !v137 )
    v101 = v45;
  v102 = v101;
  if ( v90 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
      {
        v108 = __readmsr(0x48Bu);
        v109 = v101 | 0x4000000;
        if ( (v108 & 0x200000000LL) == 0 )
          v109 = v101;
        v101 = v109;
        if ( (v109 & 1) != 0 && (v108 & 0x40000000000000LL) != 0 )
          HvlSetHardwareMbecAvailable();
      }
      v110 = __readmsr(0x3Au);
      v102 = v101 | 0x8000000;
      if ( (v110 & 5) != 5 )
        v102 = v101;
      if ( (v110 & 4) != 0 )
        KiVirtFlags |= v44;
      if ( ((unsigned __int8)v110 & (unsigned __int8)v44) != 0 )
        KiVirtFlags |= 2u;
    }
  }
  else if ( v90 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v102 = v101 | 0x4000000;
    }
    v121 = __readmsr(0xC0010114);
    if ( (v121 & 0x10) == 0 )
    {
      v102 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
  if ( *(_BYTE *)(v2 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v127 = __readmsr(0x3Au);
      if ( (v127 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v133 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v44) != 0 )
        {
          v102 |= 0x10000000000uLL;
          v134 = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
          if ( (v133 & 2) != 0 )
          {
            v102 |= 0x80000000000uLL;
            MEMORY[0xFFFFF7800000036C] = v134 | 4;
          }
        }
      }
    }
  }
  KiApplyProcessorErrata((_BYTE *)v2);
  *(_QWORD *)(v2 + 25248) = v102;
}
