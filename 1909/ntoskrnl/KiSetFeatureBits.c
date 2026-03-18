/*
 * XREFs of KiSetFeatureBits @ 0x1405A09A4
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFA0 (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140180DE0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     HvlSetHardwareMbecAvailable @ 0x140284C70 (HvlSetHardwareMbecAvailable.c)
 *     KiGetProcessorSignature @ 0x14059FEDC (KiGetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x1405A101C (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x1405A2304 (KiSetProcessorSignature.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 */

char __fastcall KiSetFeatureBits(__int64 a1)
{
  char v2; // bl
  unsigned __int8 v3; // cl
  char v4; // dl
  __int64 v5; // r8
  unsigned int ProcessorSignature; // eax
  ULONG_PTR v22; // r15
  unsigned int v33; // r12d
  ULONG_PTR v34; // r13
  char v35; // r11
  __int64 v36; // r8
  __int64 v37; // r15
  char v40; // r12
  unsigned int v41; // r9d
  unsigned int v42; // r13d
  int v46; // r11d
  unsigned int v47; // r10d
  unsigned int v53; // ecx
  unsigned int v54; // esi
  char IsHyperThreadingEnabled; // al
  bool v56; // zf
  int v57; // eax
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v68; // rax
  char v69; // r10
  __int64 v74; // r8
  __int64 v75; // rsi
  unsigned __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int8 v82; // dl
  char v87; // al
  char v88; // bl
  char v89; // al
  unsigned __int8 v90; // cl
  __int64 v91; // rax
  int v92; // eax
  unsigned __int64 v93; // rax
  unsigned int v109; // ecx
  unsigned int v110; // eax
  unsigned __int64 v125; // rax
  char v130; // r8
  unsigned int v132; // [rsp+30h] [rbp-78h]
  bool v133; // [rsp+38h] [rbp-70h]
  unsigned int v134; // [rsp+40h] [rbp-68h]
  unsigned int v135; // [rsp+44h] [rbp-64h]
  unsigned int v136; // [rsp+48h] [rbp-60h]
  __int16 v137; // [rsp+4Ch] [rbp-5Ch]
  int v138; // [rsp+50h] [rbp-58h]

  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(_BYTE *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v5 = (unsigned __int8)(v4 - 1) <= 1u;
  v133 = (unsigned __int8)(v4 - 1) <= 1u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(a1, ProcessorSignature);
    goto LABEL_3;
  }
  if ( v4 == 2 )
  {
    if ( v2 != 6 )
      goto LABEL_3;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
    if ( v3 <= 0x27u )
    {
      if ( v3 < 0x26u && v3 != 15 && v3 != 23 )
      {
        if ( v3 == 26 )
          goto LABEL_87;
        if ( v3 != 28 && v3 != 29 )
        {
          if ( v3 > 0x1Du && (v3 <= 0x1Fu || v3 == 37) )
            goto LABEL_87;
          goto LABEL_88;
        }
      }
    }
    else
    {
      if ( v3 > 0x3Au )
      {
        if ( v3 == 60 )
        {
LABEL_87:
          KiLastBranchFromBaseMSR = 1664;
          KiLastBranchToBaseMSR = 1728;
          goto LABEL_88;
        }
        if ( v3 > 0x44u )
        {
          if ( v3 <= 0x46u )
            goto LABEL_87;
          if ( v3 == 77 )
            goto LABEL_110;
        }
LABEL_88:
        if ( KiLastBranchFromBaseMSR )
          KiLastBranchTOSMSR = 457;
        goto LABEL_3;
      }
      if ( v3 == 58 || v3 == 42 )
        goto LABEL_87;
      if ( v3 <= 0x2Bu )
        goto LABEL_88;
      if ( v3 <= 0x2Fu )
        goto LABEL_87;
      if ( v3 <= 0x34u || v3 > 0x37u )
        goto LABEL_88;
    }
LABEL_110:
    KiLastBranchFromBaseMSR = 64;
    KiLastBranchToBaseMSR = 96;
    goto LABEL_88;
  }
  if ( v4 == 1 )
  {
    KiLastBranchFromBaseMSR = 475;
    KiLastBranchToBaseMSR = 476;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
  }
LABEL_3:
  _RAX = 0LL;
  __asm { cpuid }
  v135 = _RDX;
  v132 = _RAX;
  LOBYTE(v5) = *(_BYTE *)(a1 + 141);
  if ( (_BYTE)v5 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    v135 = _RDX;
LABEL_5:
    *(_QWORD *)(a1 + 25256) = __readmsr(0x8Bu);
    goto LABEL_6;
  }
  if ( (_BYTE)v5 == 1 )
  {
    LOBYTE(v5) = 1;
    goto LABEL_5;
  }
LABEL_6:
  _RAX = 1LL;
  __asm { cpuid }
  v22 = (unsigned int)_RDX;
  v138 = _RDX;
  v137 = _RCX;
  v136 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v134 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v33 = _RDX;
  v34 = (unsigned int)_RCX;
  if ( *(_DWORD *)(a1 + 36) )
    goto LABEL_7;
  if ( (_BYTE)v5 == 1 )
  {
    v88 = *(_BYTE *)(a1 + 64);
    v89 = *(_BYTE *)(a1 + 67);
    v90 = *(_BYTE *)(a1 + 66);
    if ( v88 == 15 && (v89 == 107 || v89 == 104) && v90 == 1 )
    {
      v91 = KiCacheErrataMonitor | 1;
    }
    else
    {
      if ( v88 != 16 || (v89 || v90 > 2u) && (v89 != 2 || v90 > 2u && v90 != 10) && (v89 != 4 || v90) )
        goto LABEL_91;
      v91 = KiCacheErrataMonitor | 2;
    }
    KiCacheErrataMonitor = v91;
  }
LABEL_91:
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v87 = *(_BYTE *)(a1 + 141);
    if ( v87 == 1 )
    {
      if ( *(_BYTE *)(a1 + 64) == 23 )
        KiAccessBitErrata = 1;
    }
    else if ( v87 == 2 && *(_BYTE *)(a1 + 64) == 6 )
    {
      if ( (LOBYTE(_RCX) = *(_BYTE *)(a1 + 67), (unsigned __int8)_RCX <= 0x36u)
        && (_RDX = 0x6000C010000000LL, _bittest64(&_RDX, _RCX))
        || (LOBYTE(_RCX) = _RCX - 55, (unsigned __int8)_RCX <= 0x16u)
        && (v92 = 4718593, _bittest(&v92, _RCX))
        && *(_BYTE *)(a1 + 66) <= 7u )
      {
        KiAccessBitErrata = 2;
      }
    }
  }
LABEL_7:
  KiDetectKvaLeakage(a1, _RDX, v5, 1LL);
  _m_prefetchw((const void *)a1);
  v35 = 1;
  if ( *(_BYTE *)(a1 + 141) == 1 )
    v33 |= 0x100000u;
  v36 = v136;
  *(_DWORD *)(a1 + 212) = HIBYTE(v136);
  *(_DWORD *)(a1 + 232) = (v136 >> 5) & 0x7F8;
  if ( (v22 & 0x789F3FD) != 0x789F3FD
    || (v33 & 0x800) == 0
    || (v33 & 0x100000) == 0
    || (v137 & 0x2000) == 0
    || (v34 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v22, v33, v34, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v37 = *(_QWORD *)(a1 + 25248) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 25248) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  _RDX = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  _RCX = 373LL;
  __writemsr(0x175u, 0LL);
  if ( (v33 & 0x2000000) != 0 )
  {
    _RCX = 3221225600LL;
    v93 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v93);
    __writemsr(0xC0000080, v93);
  }
  *(_WORD *)(a1 + 142) = 257;
  v40 = *(_BYTE *)(a1 + 141);
  if ( (unsigned __int8)(v40 - 2) > 1u )
  {
    v54 = v134;
    if ( v40 == 1 && v134 >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      v36 = (unsigned int)_RCX;
      _RCX = (unsigned __int16)_RCX >> 12;
      if ( (_DWORD)_RCX )
      {
        v36 = 1LL;
        LOBYTE(v36) = 1 << _RCX;
        *(_BYTE *)(a1 + 142) = 1 << _RCX;
      }
      else
      {
        _BitScanReverse((unsigned int *)&_RCX, 2 * (unsigned __int8)v36 + 1);
        *(_BYTE *)(a1 + 142) = 1 << _RCX;
        LOBYTE(v36) = 1 << _RCX;
      }
      if ( v134 >= 0x8000001E && (v34 & 0x400000) != 0 )
      {
        _RAX = 2147483678LL;
        __asm { cpuid }
        LODWORD(_RBX) = (unsigned int)_RBX >> 8;
        _RCX = (unsigned __int8)(_RBX + 1);
        *(_BYTE *)(a1 + 143) = _RCX;
        _RDX = (unsigned __int8)v36 % (unsigned int)(unsigned __int8)(_RBX + 1);
        *(_BYTE *)(a1 + 142) = (unsigned __int8)v36 / (unsigned __int8)(_RBX + 1);
      }
    }
    v42 = v132;
  }
  else
  {
    v41 = 0;
    v42 = v132;
    if ( v132 >= 0x1F )
    {
      _RAX = 31LL;
      __asm { cpuid }
      if ( (_DWORD)_RBX )
        v41 = 31;
    }
    else
    {
      _RDX = v135;
    }
    if ( v41 )
      goto LABEL_27;
    _RAX = 11LL;
    if ( v132 >= 0xB )
    {
      __asm { cpuid }
      if ( (_DWORD)_RBX )
        v41 = 11;
    }
    if ( v41 )
    {
LABEL_27:
      *(_DWORD *)(a1 + 212) = _RDX;
      v46 = 0;
      v47 = 1;
      do
      {
        _RAX = v41;
        __asm { cpuid }
        v36 = (unsigned int)_RAX;
        ++v46;
        v53 = (unsigned int)_RCX >> 8;
        if ( v53 )
        {
          v36 = _RAX & 0x1F;
          if ( v53 == 1 )
            *(_BYTE *)(a1 + 143) = 1 << (_RAX & 0x1F);
          else
            v47 = 1 << (_RAX & 0x1F);
        }
      }
      while ( (_WORD)_RBX );
      _RCX = *(unsigned __int8 *)(a1 + 143);
      _RDX = v47 % *(unsigned __int8 *)(a1 + 143);
      *(_BYTE *)(a1 + 142) = v47 / *(unsigned __int8 *)(a1 + 143);
      v42 = v132;
      v35 = 1;
    }
    else
    {
      if ( v132 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
        *(_BYTE *)(a1 + 142) = 1 << _RCX;
      }
      if ( (v138 & 0x10000000) != 0 )
      {
        v36 = HIWORD(v136);
        _BitScanReverse(&v109, 2 * BYTE2(v136) - 1);
        v110 = 1 << v109;
        _RCX = *(unsigned __int8 *)(a1 + 142);
        _RDX = v110 % *(unsigned __int8 *)(a1 + 142);
        *(_BYTE *)(a1 + 143) = v110 / *(unsigned __int8 *)(a1 + 142);
      }
    }
    v54 = v134;
  }
  if ( v40 == 1 )
  {
    v37 |= 0x200000uLL;
  }
  else if ( v40 == 2 )
  {
    v37 |= 0x1000000uLL;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(_RCX, _RDX, v36);
    v35 = 1;
    v56 = IsHyperThreadingEnabled == 0;
    v57 = *(unsigned __int8 *)(a1 + 143);
    if ( v56 )
    {
      *(_DWORD *)(a1 + 220) = -(v57 * *(unsigned __int8 *)(a1 + 142));
      goto LABEL_40;
    }
  }
  else
  {
    v57 = *(unsigned __int8 *)(a1 + 143);
  }
  *(_DWORD *)(a1 + 220) = -v57;
LABEL_40:
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) > 2u || v54 < 0x80000008 )
  {
    if ( *(_BYTE *)(a1 + 141) == 1 )
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
  v63 = __readcr4();
  if ( (v37 & 1) != 0 )
    v63 |= 0x100000uLL;
  v64 = v63 | 0x10000;
  if ( (v37 & 0x10000000) == 0 )
    v64 = v63;
  if ( KeSmapEnabled )
    v64 |= 0x200000uLL;
  v65 = v64 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v65 = v64;
  v66 = v65;
  if ( *(_DWORD *)(a1 + 36) && (v37 & 0x40000000000LL) != 0 && KiFlushPcid )
    v66 = v65 | 0x20000;
  __writecr4(v66);
  LOBYTE(_RAX) = KeSmapEnabled;
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v66 & 0x20000) != 0 )
  {
    v68 = __readcr3();
    _RAX = v68 | 2;
    __writecr3(_RAX);
  }
  v69 = *(_BYTE *)(a1 + 141);
  if ( v69 == 2 && v42 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
      {
        LOBYTE(_RAX) = 0;
        v37 |= 0x100000000000uLL;
      }
    }
  }
  v74 = v37 | 0x20000;
  if ( !v133 )
    v74 = v37;
  v75 = v74;
  if ( v69 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
      {
        v80 = __readmsr(0x48Bu);
        v81 = v74 | 0x4000000;
        if ( (v80 & 0x200000000LL) == 0 )
          v81 = v74;
        v74 = v81;
        if ( (v81 & 1) != 0 && (v80 & 0x40000000000000LL) != 0 )
          HvlSetHardwareMbecAvailable();
      }
      _RAX = __readmsr(0x3Au);
      v82 = _RAX;
      v75 = v74 | 0x8000000;
      if ( (_RAX & 5) != 5 )
        v75 = v74;
      if ( (_RAX & 4) != 0 )
      {
        LOBYTE(_RAX) = v35 | KiVirtFlags;
        KiVirtFlags |= v35;
      }
      if ( (v82 & (unsigned __int8)v35) != 0 )
      {
        LOBYTE(_RAX) = KiVirtFlags | 2;
        KiVirtFlags |= 2u;
      }
    }
  }
  else if ( v69 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      v75 = v74 | 0x4000000;
      if ( (_RDX & 1) == 0 )
        v75 = v74;
      if ( (_RDX & 0x20000) != 0 )
        HvlSetHardwareMbecAvailable();
    }
    _RAX = __readmsr(0xC0010114);
    if ( (_RAX & 0x10) == 0 )
    {
      v75 |= 0x8000000uLL;
      KiVirtFlags |= v35;
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v125 = __readmsr(0x3Au);
      _RAX = v125 & 0x40001;
      if ( _RAX == 262145 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v130 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v35) != 0 )
        {
          v75 |= 0x10000000000uLL;
          LODWORD(_RAX) = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
          if ( (v130 & 2) != 0 )
          {
            v75 |= 0x80000000000uLL;
            LODWORD(_RAX) = _RAX | 4;
            MEMORY[0xFFFFF7800000036C] = _RAX;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == v35 )
  {
    LOBYTE(_RAX) = *(_BYTE *)(a1 + 64);
    if ( (char)_RAX > 15 && (_BYTE)_RAX != 17 )
    {
      LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
      if ( !(_BYTE)_RAX )
      {
        _RAX = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, _RAX);
      }
    }
  }
  *(_QWORD *)(a1 + 25248) = v75;
  return _RAX;
}
