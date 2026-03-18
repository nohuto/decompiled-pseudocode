/*
 * XREFs of KiDetectKvaLeakage @ 0x1405A101C
 * Callers:
 *     KiSetFeatureBits @ 0x1405A09A4 (KiSetFeatureBits.c)
 * Callees:
 *     HvlGetImplementedPhysicalBits @ 0x14018BEC8 (HvlGetImplementedPhysicalBits.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall KiDetectKvaLeakage(__int64 a1)
{
  char v1; // r8
  __int64 v4; // rcx
  char v9; // r9
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  ULONG_PTR v26; // rdx
  int v28[6]; // [rsp+30h] [rbp-20h] BYREF

  v1 = *(_BYTE *)(a1 + 141);
  _RAX = 0LL;
  if ( v1 == 2 )
  {
    if ( *(_BYTE *)(a1 + 64) == 6 )
    {
      LOBYTE(_RAX) = *(_BYTE *)(a1 + 67);
      if ( (unsigned __int8)_RAX <= 0x36u )
      {
        v4 = 0x6000C010000000LL;
        if ( _bittest64(&v4, _RAX) )
          return _RAX;
      }
    }
  }
  else if ( v1 != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return _RAX;
  }
  _RAX = 0LL;
  __asm { cpuid }
  v9 = 0;
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_14;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) != 0 )
  {
    _RAX = __readmsr(0x10Au);
    v9 = _RAX;
  }
  if ( (v9 & 1) == 0
    || (LOBYTE(_RAX) = KeFeatureBits2 & 0x28, KiMicrocodeTrackerEnabled = 1, (KeFeatureBits2 & 0x28) == 8) )
  {
LABEL_14:
    v14 = *(_DWORD *)(a1 + 36);
    if ( v14 && !KiKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
    KiKvaLeakage = 1;
    if ( v1 != 2 || (KeFeatureBits2 & 0x10) != 0 )
    {
      if ( !v14 )
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
            goto LABEL_30;
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
LABEL_30:
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
