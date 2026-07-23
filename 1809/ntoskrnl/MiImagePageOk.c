/*
 * XREFs of MiImagePageOk @ 0x14002CFA8
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 */

__int64 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r11
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 Address; // rax
  char v9; // r10
  __int64 v10; // r11
  int v11; // edx

  v2 = a1;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0 )
    return 1LL;
  v3 = *(_QWORD *)(a2 + 16);
  if ( (v3 & 0x400) == 0 || ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 3 )
    return 1LL;
  if ( qword_14043B180 && (v3 & 0x10) == 0 )
    v3 &= ~qword_14043B180;
  v4 = v3 >> 16;
  v5 = *(_QWORD *)v4;
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 56LL) & 0x20) == 0 )
    return 1LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 96) + 40LL);
  if ( !v6 || (v6 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v6 & 3) == 2 )
    return 1LL;
  if ( ((*(_DWORD *)(v5 + 92) & 0x180000) == 0 || (MiFlags & 0x4000) == 0
                                               && !(unsigned int)MiIsPfnFromSlabAllocation(a2))
    && (v2 >= 0xFFFF800000000000uLL && (MiFlags & 0x10000) == 0
     || (Address = MiLocateAddress(v2)) != 0
     && (v11 = *(_DWORD *)(Address + 48), (v11 & 7) == 2)
     && ((v11 & 0xF8) == 8
      || (*(_DWORD *)(Address + 64) & 0x8000000) != 0 && (v9 & 4) == 0
      || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v10 + 34) & 2) != 0)) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
