/*
 * XREFs of PnpGetMultiSzLength @ 0x140756F4C
 * Callers:
 *     PnpAllocateMultiSZ @ 0x1406D9244 (PnpAllocateMultiSZ.c)
 *     PiSwStartCreate @ 0x140837190 (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x14083B468 (PnpCompareMultiSz.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 */

__int64 __fastcall PnpGetMultiSzLength(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  NTSTATUS v6; // r8d
  __int64 *v7; // r11
  size_t v8; // rcx
  size_t v9; // rdx
  size_t v10; // r10
  size_t v11; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = 0LL;
  do
  {
    v6 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 2 * v3), a2 - v3, &pcchLength);
    if ( v6 < 0 )
      break;
    v8 = *v7;
    v9 = -1LL;
    v10 = pcchLength;
    v11 = *v7 + pcchLength;
    if ( v11 >= *v7 )
      v9 = *v7 + pcchLength;
    v6 = v11 < *v7 ? 0xC0000095 : 0;
    *v7 = v9;
    if ( v11 < v8 )
      break;
    v3 = -1LL;
    if ( v9 + 1 >= v9 )
      v3 = v9 + 1;
    v6 = v9 + 1 < v9 ? 0xC0000095 : 0;
    *v7 = v3;
    if ( v9 + 1 < v9 )
      break;
  }
  while ( v10 );
  return (unsigned int)v6;
}
