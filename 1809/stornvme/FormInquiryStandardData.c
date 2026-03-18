/*
 * XREFs of FormInquiryStandardData @ 0x1C00058C0
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbScsiAddress @ 0x1C000516C (GetSrbScsiAddress.c)
 *     NVMeCopyFirmwareRevision @ 0x1C0005A68 (NVMeCopyFirmwareRevision.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  void *v6; // r14
  __int64 v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int v18; // [rsp+30h] [rbp-29h] BYREF
  int v19; // [rsp+34h] [rbp-25h] BYREF
  int v20; // [rsp+38h] [rbp-21h] BYREF
  _OWORD Src[4]; // [rsp+40h] [rbp-19h] BYREF

  v4 = 60;
  memset(Src, 0, 0x3CuLL);
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v5 = *(_QWORD *)(a1 + 1528);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(void **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(void **)(a2 + 24);
    v7 = 16LL;
  }
  GetSrbScsiAddress(a2, &v20, &v19, &v18);
  LOWORD(Src[0]) &= 0x7F00u;
  BYTE3(Src[0]) = BYTE3(Src[0]) & 0xE0 | 0x12;
  BYTE2(Src[0]) = 6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v18 + 1640) + 66LL) )
    BYTE5(Src[0]) |= 1u;
  v8 = *(_OWORD *)(v5 + 24);
  BYTE7(Src[0]) |= 2u;
  BYTE4(Src[0]) = 55;
  LODWORD(Src[2]) = 538976288;
  Src[1] = v8;
  *((_QWORD *)&Src[0] + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v5, &Src[2], 4LL);
  if ( (*(_BYTE *)(v5 + 256) & 1) != 0 )
    WORD5(Src[3]) = -16129;
  if ( *(_DWORD *)(a2 + v7) < 0x3Cu )
    v4 = *(_DWORD *)(a2 + v7);
  if ( v4 && v6 )
  {
    memmove(v6, Src, v4);
    *(_DWORD *)(a2 + v7) = v4;
    *(_BYTE *)(a2 + 3) = 1;
    v14 = 0;
  }
  else
  {
    LOBYTE(v11) = 36;
    LOBYTE(v9) = 48;
    NVMeSetSenseData(a2, v9, v10, v11);
    v14 = -1056964602;
  }
  v15 = *(_DWORD *)(a1 + 172);
  if ( v15 )
  {
    LOBYTE(v13) = v18;
    LOBYTE(v12) = v19;
    v16 = *(unsigned __int16 *)(a1 + 262) * (unsigned int)*(unsigned __int16 *)(a1 + 264) % v15;
    LOBYTE(v16) = v20;
    StorPortSetDeviceQueueDepth(
      a1,
      v16,
      v12,
      v13,
      *(unsigned __int16 *)(a1 + 262) * (unsigned int)*(unsigned __int16 *)(a1 + 264) / v15);
  }
  return v14;
}
