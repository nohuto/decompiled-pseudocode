/*
 * XREFs of HvlDmaUnmapDeviceLogicalRange @ 0x140273BD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceLogicalRange(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int v6; // esi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned int v9; // r15d
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-40h]
  _QWORD v15[4]; // [rsp+30h] [rbp-30h] BYREF

  LODWORD(v14) = 65716;
  v6 = 0;
  v7 = 0LL;
  memset(v15, 0, sizeof(v15));
  v15[0] = -1LL;
  if ( *(_BYTE *)(a1 + 4) )
    LODWORD(v15[2]) = v15[2] & 0xFFFFFFF0 | 1;
  else
    LODWORD(v15[2]) &= 0xFFFFFFF0;
  v8 = *a3;
  v9 = 4095;
  HIDWORD(v15[2]) = *(_DWORD *)a1;
  if ( v8 )
  {
    v10 = 0;
    do
    {
      v15[3] = a2;
      if ( v9 <= v8 )
        LODWORD(v8) = v9;
      v9 = v8;
      v10 ^= ((unsigned __int16)v10 ^ (unsigned __int16)v8) & 0xFFF;
      HIDWORD(v14) = v10;
      v11 = HvcallpExtendedFastHypercall(v14, (__int64)v15, 32LL);
      v12 = WORD2(v11) & 0xFFF;
      v7 += v12;
      a2 += v12 << 12;
      *a3 -= v12;
      v6 = HvlpHvToNtStatus((unsigned __int16)v11);
    }
    while ( v6 >= 0 && v8 );
  }
  *a3 = v7;
  return (unsigned int)v6;
}
