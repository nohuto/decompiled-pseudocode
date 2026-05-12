/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1C006B2F8
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C006B294 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C00066A8 (RaidRemoveTrailingBlanks.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  char *v3; // rdi
  char v7; // al
  unsigned __int8 v8; // cl
  unsigned int v9; // esi
  bool v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 *v13; // rdx
  __int128 v14; // xmm0
  int v15; // eax
  unsigned __int16 v16; // ax
  _OWORD *v17; // rdx
  char *v18; // rcx
  __int64 result; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int128 v28; // xmm1
  size_t v29; // rdi
  size_t v30; // r8
  int v31; // ecx
  _OWORD *v32; // rcx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  _OWORD *v39; // rcx
  __int128 v40; // xmm0
  _OWORD *v41; // rdx
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  _QWORD Src[50]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = *(char **)(a1 + 104);
  memset(Src, 0, 0x18CuLL);
  v7 = *v3;
  v8 = v3[1];
  v9 = *a3;
  HIDWORD(Src[0]) = 396;
  if ( v9 > 0x18C )
    v9 = 396;
  LODWORD(Src[0]) = 40;
  LOBYTE(Src[1]) = v7 & 0x1F;
  BYTE1(Src[1]) = v8 & 0x7F;
  v10 = (v3[7] & 2) != 0;
  BYTE2(Src[1]) = v8 >> 7;
  v11 = *(_QWORD *)(a1 + 24);
  BYTE3(Src[1]) = v10;
  HIDWORD(Src[3]) = *(_DWORD *)(v11 + 4356);
  v12 = *(_QWORD *)(a1 + 152);
  if ( v12 )
  {
    if ( *(_BYTE *)(v12 + 8) )
    {
      v20 = *(_OWORD *)(v12 + 8);
      HIDWORD(Src[1]) = 40;
      *(_OWORD *)&Src[5] = v20;
    }
    v21 = *(_OWORD *)(v12 + 25);
    Src[2] = 0x7A00000039LL;
    v22 = *(_OWORD *)(v12 + 41);
    *(_OWORD *)((char *)&Src[7] + 1) = v21;
    v23 = *(_OWORD *)(v12 + 57);
    *(_OWORD *)((char *)&Src[9] + 1) = v22;
    v24 = *(_OWORD *)(v12 + 73);
    *(_OWORD *)((char *)&Src[11] + 1) = v23;
    v25 = *(_OWORD *)(v12 + 90);
    *(_OWORD *)((char *)&Src[13] + 1) = v24;
    *(_OWORD *)((char *)&Src[15] + 2) = v25;
    if ( !*(_WORD *)(a1 + 114) )
      goto LABEL_13;
    LODWORD(Src[3]) = 139;
    memset((char *)&Src[17] + 3, 0, 0x100uLL);
    v16 = *(_WORD *)(a1 + 112);
    v17 = *(_OWORD **)(a1 + 120);
    if ( v16 <= 0x100u )
    {
      v18 = (char *)&Src[17] + 3;
      goto LABEL_8;
    }
    v32 = (_OWORD *)((char *)&Src[17] + 3);
LABEL_25:
    v33 = v17[1];
    *v32 = *v17;
    v34 = v17[2];
    v32[1] = v33;
    v35 = v17[3];
    v32[2] = v34;
    v36 = v17[4];
    v32[3] = v35;
    v37 = v17[5];
    v32[4] = v36;
    v38 = v17[6];
    v32[5] = v37;
    v32[6] = v38;
    v39 = v32 + 8;
    v40 = v17[7];
    v41 = v17 + 8;
    *(v39 - 1) = v40;
    v42 = *((_QWORD *)v41 + 14);
    v43 = v41[1];
    *v39 = *v41;
    v44 = v41[2];
    v39[1] = v43;
    v45 = v41[3];
    v39[2] = v44;
    v46 = v41[4];
    v39[3] = v45;
    v47 = v41[5];
    v39[4] = v46;
    v48 = v41[6];
    v39[5] = v47;
    v39[6] = v48;
    *((_QWORD *)v39 + 14) = v42;
    *((_DWORD *)v39 + 30) = *((_DWORD *)v41 + 30);
    *((_WORD *)v39 + 62) = *((_WORD *)v41 + 62);
    *((_BYTE *)v39 + 126) = *((_BYTE *)v41 + 126);
    BYTE6(Src[40]) = 0;
    goto LABEL_9;
  }
  v13 = *(__int128 **)(a1 + 144);
  if ( !v13 || (*(_DWORD *)(*(_QWORD *)(v11 + 528) + 184LL) & 0x40) == 0 )
  {
    v14 = *((_OWORD *)v3 + 1);
    Src[5] = *((_QWORD *)v3 + 1);
    v15 = *((_DWORD *)v3 + 8);
    *(_OWORD *)((char *)&Src[6] + 1) = v14;
    *(_DWORD *)((char *)&Src[8] + 2) = v15;
    HIDWORD(Src[1]) = 40;
    Src[2] = 0x4200000031LL;
    if ( !*(_WORD *)(a1 + 114) )
    {
LABEL_13:
      LODWORD(Src[3]) = 0;
      goto LABEL_9;
    }
    LODWORD(Src[3]) = 71;
    memset((char *)&Src[8] + 7, 0, 0x100uLL);
    v16 = *(_WORD *)(a1 + 112);
    v17 = *(_OWORD **)(a1 + 120);
    if ( v16 <= 0x100u )
    {
      v18 = (char *)&Src[8] + 7;
LABEL_8:
      memmove(v18, v17, v16);
      goto LABEL_9;
    }
    v32 = (_OWORD *)((char *)&Src[8] + 7);
    goto LABEL_25;
  }
  v26 = *v13;
  v27 = *(_QWORD *)((char *)v13 + 41);
  v28 = v13[1];
  Src[2] = 0x5100000028LL;
  *(_OWORD *)&Src[5] = v26;
  *(_QWORD *)((char *)&Src[10] + 1) = v27;
  Src[9] = *((_QWORD *)v13 + 4);
  *(_OWORD *)&Src[7] = v28;
  if ( !*(_WORD *)(a1 + 114) )
    goto LABEL_13;
  v29 = *(unsigned __int16 *)(a1 + 112);
  v30 = 20LL;
  LODWORD(Src[3]) = 90;
  if ( (unsigned __int16)v29 < 0x14u )
    v30 = v29;
  memmove((char *)&Src[11] + 2, *(const void **)(a1 + 120), v30);
  v31 = 21;
  if ( v29 + 1 < 0x15 )
    v31 = v29 + 1;
  RaidRemoveTrailingBlanks((__int64)&Src[11] + 2, v31);
LABEL_9:
  memmove(a2, Src, v9);
  result = 0LL;
  *a3 = v9;
  return result;
}
