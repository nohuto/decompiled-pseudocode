/*
 * XREFs of MiImagePageOk @ 0x14010255C
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 */

__int64 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // r11
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v8; // r10
  unsigned __int64 Address; // rax
  char v10; // r10
  __int64 v11; // r11
  int v12; // edx

  v2 = *(_QWORD *)(a2 + 40);
  v3 = a1;
  if ( (v2 & 0x200000000000000LL) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( (v4 & 0x400) == 0 || ((v2 >> 54) & 7) == 3 )
    return 1LL;
  if ( qword_140465B00 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140465B00;
  v5 = v4 >> 16;
  v6 = *(_QWORD *)v5;
  if ( (*(_DWORD *)(*(_QWORD *)v5 + 56LL) & 0x20) == 0 )
    return 1LL;
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 40LL);
  if ( !v8 || (v8 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v8 & 3) == 2 )
    return 1LL;
  if ( ((*(_DWORD *)(v6 + 92) & 0xC0000) == 0 || (MiFlags & 0x4000) == 0 && !MiIsPfnFromSlabAllocation(a2))
    && (v3 >= 0xFFFF800000000000uLL && (MiFlags & 0x10000) == 0
     || (Address = MiLocateAddress(v3)) != 0
     && (v12 = *(_DWORD *)(Address + 48), (v12 & 0x70) == 0x20)
     && ((v12 & 0xF80) == 0x80
      || (*(_DWORD *)(Address + 64) & 0x8000000) != 0 && (v10 & 4) == 0
      || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v11 + 34) & 2) != 0)) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
