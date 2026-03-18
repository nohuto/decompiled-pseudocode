/*
 * XREFs of FormInquiryStandardData @ 0x1C000EBC0
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001328 (ScsiInquiryRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004D50 (__security_check_cookie.c)
 *     memmove @ 0x1C00050C0 (memmove.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     NVMeCopyFirmwareRevision @ 0x1C0010CC8 (NVMeCopyFirmwareRevision.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int *v7; // r12
  void *v8; // r15
  __int64 v9; // r13
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r10d
  unsigned int v19; // edx
  char v21; // [rsp+30h] [rbp-39h]
  char v22; // [rsp+34h] [rbp-35h]
  __int64 v23; // [rsp+38h] [rbp-31h]
  _OWORD Src[4]; // [rsp+40h] [rbp-29h] BYREF

  v4 = 60;
  memset(Src, 0, 0x3CuLL);
  v5 = *(_QWORD *)(a1 + 1536);
  v23 = v5;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = (unsigned int *)(a2 + 60);
    v8 = *(void **)(a2 + 64);
    v9 = *(unsigned __int8 *)(v6 + a2 + 10);
    v22 = *(_BYTE *)(v6 + a2 + 8);
    v21 = *(_BYTE *)(v6 + a2 + 9);
  }
  else
  {
    v7 = (unsigned int *)(a2 + 16);
    v8 = *(void **)(a2 + 24);
    v9 = *(unsigned __int8 *)(a2 + 7);
    v22 = *(_BYTE *)(a2 + 5);
    v21 = *(_BYTE *)(a2 + 6);
  }
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 8 * v9 + 1648);
  BYTE1(Src[0]) &= ~0x80u;
  BYTE2(Src[0]) = 6;
  BYTE3(Src[0]) = BYTE3(Src[0]) & 0xE0 | 0x12;
  if ( *(_BYTE *)(v11 + 66) )
    BYTE5(Src[0]) |= 1u;
  v12 = *(_OWORD *)(v5 + 24);
  BYTE7(Src[0]) |= 2u;
  BYTE4(Src[0]) = 55;
  LODWORD(Src[2]) = 538976288;
  Src[1] = v12;
  *((_QWORD *)&Src[0] + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v5, &Src[2], 4LL);
  v15 = v23;
  LOBYTE(v15) = *(_BYTE *)(v23 + 256);
  if ( (v15 & 1) != 0 )
    WORD5(Src[3]) = -16129;
  if ( *v7 < 0x3C )
    v4 = *v7;
  if ( v4 && v8 )
  {
    memmove(v8, Src, v4);
    *v7 = v4;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v14) = 36;
    LOBYTE(v13) = 48;
    NVMeSetSenseData(a2, v13, v15, v14);
    v10 = -1056964602;
  }
  v18 = *(unsigned __int16 *)(a1 + 270);
  LOBYTE(v17) = v9;
  LOBYTE(v16) = v21;
  v19 = v18 * (unsigned int)*(unsigned __int16 *)(a1 + 272) % *(_DWORD *)(a1 + 180);
  LOBYTE(v19) = v22;
  StorPortSetDeviceQueueDepth(
    a1,
    v19,
    v16,
    v17,
    v18 * (unsigned int)*(unsigned __int16 *)(a1 + 272) / *(_DWORD *)(a1 + 180));
  return v10;
}
