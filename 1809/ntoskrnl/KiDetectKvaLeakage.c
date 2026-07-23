/*
 * XREFs of KiDetectKvaLeakage @ 0x1405720E4
 * Callers:
 *     KiSetFeatureBits @ 0x1405717EC (KiSetFeatureBits.c)
 * Callees:
 *     HvlGetImplementedPhysicalBits @ 0x14017D800 (HvlGetImplementedPhysicalBits.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401B4664 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401B46BC (KiIsKvaShadowNeededForTsa.c)
 *     KiIsFbClearSupported @ 0x1401B4DC4 (KiIsFbClearSupported.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall KiDetectKvaLeakage(__int64 a1)
{
  __int64 v3; // rcx
  char v8; // r8
  char v13; // dl
  char v14; // dl
  __int64 v15; // rdx
  int v16; // ecx
  ULONG_PTR v26; // rdx
  int v28[6]; // [rsp+30h] [rbp-20h] BYREF

  LODWORD(_RAX) = KiIsKvaShadowNeededForBranchConfusion(a1);
  if ( (_DWORD)_RAX )
    goto LABEL_20;
  _RAX = KiIsKvaShadowNeededForTsa(a1);
  if ( (_DWORD)_RAX )
    goto LABEL_20;
  LODWORD(_RAX) = *(unsigned __int8 *)(a1 + 141);
  if ( (_BYTE)_RAX == 2 )
  {
    if ( *(_BYTE *)(a1 + 64) == 6 )
    {
      LOBYTE(_RAX) = *(_BYTE *)(a1 + 67);
      if ( (unsigned __int8)_RAX <= 0x36u )
      {
        v3 = 0x6000C010000000LL;
        if ( _bittest64(&v3, _RAX) )
          return _RAX;
      }
    }
  }
  else if ( (_BYTE)_RAX != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return _RAX;
  }
  _RAX = 0LL;
  __asm { cpuid }
  v8 = 0;
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_19;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) != 0 )
  {
    _RAX = __readmsr(0x10Au);
    v8 = _RAX;
  }
  if ( (v8 & 1) == 0 )
    goto LABEL_19;
  KiMicrocodeTrackerEnabled = 1;
  LOBYTE(_RAX) = 0;
  v13 = (KeFeatureBits2 & 0x28) == 8;
  if ( (KeFeatureBits2 & 0x380000) != 0x380000 )
  {
    LOBYTE(_RAX) = KiIsFbClearSupported();
    v13 = _RAX | v14;
  }
  if ( v13 )
  {
LABEL_19:
    if ( *(_DWORD *)(a1 + 36) && !KiKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
LABEL_20:
    KiKvaLeakage = 1;
    if ( *(_BYTE *)(a1 + 141) != 2 || (KeFeatureBits2 & 0x10) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 36) )
        KiImplementedPhysicalBits = -1;
    }
    else
    {
      LOBYTE(_RAX) = HvlGetImplementedPhysicalBits(v28);
      if ( (_BYTE)_RAX )
      {
        v16 = v28[0];
      }
      else
      {
        v15 = 0LL;
        _RAX = 0LL;
        v16 = 46;
        while ( *(_DWORD *)((char *)&KiCpuTable + _RAX) != *(unsigned __int8 *)(a1 + 141)
             || *(_DWORD *)((char *)&KiCpuTable + _RAX + 4) != *(_DWORD *)(a1 + 1736) )
        {
          ++v15;
          _RAX = 20 * v15;
          if ( *((_DWORD *)&KiCpuTable + 5 * v15 + 2) == 19 )
            goto LABEL_34;
        }
        LOBYTE(_RAX) = 5 * v15;
        v16 = *((_DWORD *)&KiCpuTable + 5 * v15 + 3);
        if ( !v16 )
        {
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX < 0x80000008 )
          {
            LOBYTE(_RAX) = 36;
          }
          else
          {
            _RAX = 2147483656LL;
            __asm { cpuid }
          }
          v16 = (unsigned __int8)_RAX;
        }
      }
LABEL_34:
      v26 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v26 )
      {
        LOBYTE(_RAX) = KiImplementedPhysicalBits;
        if ( v16 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
          KeBugCheckEx(0x5Du, 0x4C315446uLL, v26, v16, KiImplementedPhysicalBits);
      }
      else
      {
        KiImplementedPhysicalBits = v16;
      }
    }
  }
  return _RAX;
}
