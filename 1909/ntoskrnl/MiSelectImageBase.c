/*
 * XREFs of MiSelectImageBase @ 0x14064904C
 * Callers:
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140648DF4 (MiRelocateImageAgain.c)
 * Callees:
 *     MiGetImageBitMapInfo @ 0x140097C3C (MiGetImageBitMapInfo.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     MiSetControlAreaSystemVa @ 0x14015BDD4 (MiSetControlAreaSystemVa.c)
 *     MiObtainRelocationBits @ 0x14064932C (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x140649408 (MiSelectRelocationStartHint.c)
 *     MiBytesToMapSystemImage @ 0x1406A6310 (MiBytesToMapSystemImage.c)
 *     MiGetImageWowSubsystemIndex @ 0x1406E29A4 (MiGetImageWowSubsystemIndex.c)
 *     MiSelectSystemImageAddress @ 0x140712F0C (MiSelectSystemImageAddress.c)
 *     MiImageCanUseHighOverflowArea @ 0x1408984BC (MiImageCanUseHighOverflowArea.c)
 *     MiSelectOverflowDllBase @ 0x1408984E4 (MiSelectOverflowDllBase.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 *a5)
{
  __int64 v5; // rsi
  int v7; // ebx
  int v8; // r10d
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rdi
  unsigned int v12; // ebp
  unsigned __int64 v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned int v16; // r14d
  __int64 v17; // r8
  __int64 started; // rax
  __int64 v19; // rax
  int v20; // eax
  int ImageWowSubsystemIndex; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+90h] [rbp+18h]

  v31 = a3;
  v5 = *(_QWORD *)a1;
  v7 = 0;
  v8 = a4;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = a2;
  v11 = 0LL;
  v30 = v9;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
  {
    if ( (*(_BYTE *)(v9 + 51) & 0x10) != 0 && (*(_WORD *)(v9 + 44) & 0x2000) != 0 )
    {
      v12 = 2;
      goto LABEL_6;
    }
    if ( *(_QWORD *)(a1 + 32) < 0x100000000uLL )
    {
      v12 = 1;
LABEL_6:
      *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v12 << 20)) & 0x300000;
      v9 = *(_QWORD *)(a1 + 56);
      v30 = v9;
      goto LABEL_7;
    }
    v12 = 0;
LABEL_5:
    v30 = v9;
    if ( v12 == 4 )
      goto LABEL_7;
    goto LABEL_6;
  }
  ImageWowSubsystemIndex = MiGetImageWowSubsystemIndex(a1);
  if ( ImageWowSubsystemIndex != -1 )
  {
    v12 = ImageWowSubsystemIndex + 3;
    goto LABEL_5;
  }
  v12 = 4;
LABEL_7:
  LODWORD(v13) = *(_DWORD *)(a1 + 8);
  if ( !a3 )
  {
    if ( !dword_1404645B0 )
      goto LABEL_9;
    v26 = ((unsigned int)MiUserHotPatchReserveSize >> 12) + ((MiUserHotPatchReserveSize & 0xFFF) != 0);
    if ( !v26 )
      goto LABEL_9;
    if ( v26 + (unsigned int)v13 >= (unsigned int)v13 )
    {
      LODWORD(v13) = v26 + v13;
      goto LABEL_9;
    }
    return 3221225503LL;
  }
  v23 = MiBytesToMapSystemImage((unsigned int)((_DWORD)v13 << 12));
  if ( !v23 )
    return 3221225503LL;
  a3 = v31;
  v13 = v23 >> 12;
LABEL_9:
  v14 = -1LL;
  if ( v8 == 1 )
  {
    LOWORD(v16) = 0;
    v11 = *(_QWORD *)(a1 + 32);
    goto LABEL_27;
  }
  v15 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(v10 + 40);
  v16 = (unsigned int)(v13 + 15) >> 4;
  if ( !a3 )
  {
    v17 = 0x2000LL;
    if ( (*(_WORD *)(v9 + 44) & 0x2000) != 0 )
    {
      LOBYTE(v17) = v12 != 4;
      if ( dword_1405711A0 && (unsigned int)MiImageCanUseHighOverflowArea(a1, v15, v17) )
        LOBYTE(v17) = 0;
      if ( (_BYTE)v17 )
      {
        MiGetImageBitMapInfo(v12, v29, &v28, &v27);
        started = MiSelectRelocationStartHint(v29, (unsigned __int16)v16, v27, 0LL);
        v14 = started;
        if ( started == -1 )
        {
          v9 = v30;
        }
        else
        {
          v19 = MiObtainRelocationBits(v29, (unsigned __int16)v16, started);
          v9 = v30;
          v14 = v19;
          if ( v19 != -1 )
            v11 = v28 - ((v19 + (unsigned __int16)v16) << 16);
        }
      }
    }
    if ( v14 != -1 )
      goto LABEL_18;
    v20 = *(_DWORD *)(v5 + 92);
    if ( (v20 & 0x800000) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v7 = 1;
      goto LABEL_20;
    }
    if ( v12 )
    {
      if ( (*(_WORD *)(v9 + 44) & 0x2000) != 0 )
      {
        v11 = MiSelectOverflowDllBase(a1, v15, v12);
      }
      else
      {
        v25 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
        v11 = v15 - v25;
        if ( v15 < 0x1000000 )
          v11 = v25 + 0x10000;
      }
    }
    else
    {
      v11 = ((unsigned int)ExGenRandom(1) % (131073LL - (unsigned __int16)v16) + 2146828288) << 16;
    }
LABEL_27:
    v7 = 1;
LABEL_18:
    *(_DWORD *)(v5 + 88) = v14;
    *(_WORD *)(v5 + 92) = v16;
LABEL_19:
    v20 = *(_DWORD *)(v5 + 92);
LABEL_20:
    *(_DWORD *)(v5 + 92) = (v7 << 23) | v20 & 0xFF7FFFFF;
    *a5 = v11;
    return 0LL;
  }
  v24 = MiSelectSystemImageAddress(a3, (unsigned int)v13);
  v11 = v24;
  if ( v24 )
  {
    *(_WORD *)(v5 + 92) = v16;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v24 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, v31);
    goto LABEL_19;
  }
  return 3221225626LL;
}
