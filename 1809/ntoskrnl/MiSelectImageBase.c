/*
 * XREFs of MiSelectImageBase @ 0x1406509BC
 * Callers:
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MiGetImageBitMapInfo @ 0x1400D95B0 (MiGetImageBitMapInfo.c)
 *     MiSetControlAreaSystemVa @ 0x14013A29C (MiSetControlAreaSystemVa.c)
 *     MiSelectBitMapForImage @ 0x140650C58 (MiSelectBitMapForImage.c)
 *     MiObtainRelocationBits @ 0x140650C9C (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x140650D84 (MiSelectRelocationStartHint.c)
 *     MiBytesToMapSystemImage @ 0x14065339C (MiBytesToMapSystemImage.c)
 *     MiSelectSystemImageAddress @ 0x140684A28 (MiSelectSystemImageAddress.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rbp
  int v9; // esi
  int v10; // r10d
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned int v14; // r14d
  unsigned int v15; // edi
  unsigned __int64 v16; // r15
  unsigned int started; // eax
  unsigned int v18; // eax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v28[10]; // [rsp+28h] [rbp-50h] BYREF
  int v29; // [rsp+88h] [rbp+10h]
  unsigned int v30; // [rsp+90h] [rbp+18h] BYREF

  v5 = *(_QWORD *)a2;
  v9 = 0;
  v29 = MiSelectBitMapForImage(a2);
  MiGetImageBitMapInfo(v29, v28, &v27, &v30);
  *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v29 << 22)) & 0xC00000;
  LODWORD(v12) = *(_DWORD *)(a2 + 8);
  if ( a3 )
  {
    v21 = MiBytesToMapSystemImage((unsigned int)((_DWORD)v12 << 12));
    if ( v21 )
    {
      v12 = v21 >> 12;
      goto LABEL_3;
    }
    return 3221225503LL;
  }
  if ( dword_140439F34 )
  {
    v25 = ((unsigned int)MiUserHotPatchReserveSize >> 12) + ((MiUserHotPatchReserveSize & 0xFFF) != 0);
    if ( v25 )
    {
      if ( v25 + (unsigned int)v12 >= (unsigned int)v12 )
      {
        LODWORD(v12) = v25 + v12;
        goto LABEL_3;
      }
      return 3221225503LL;
    }
  }
LABEL_3:
  v13 = *(_QWORD *)(a2 + 32);
  v14 = -1;
  if ( v10 == 1 )
  {
    LOWORD(v15) = 0;
    goto LABEL_10;
  }
  v15 = (unsigned int)(v12 + 15) >> 4;
  v16 = v13 - *(_QWORD *)(a1 + 40);
  if ( a3 )
  {
    v22 = MiSelectSystemImageAddress(a3, (unsigned int)v12);
    v13 = v22;
    if ( v22 )
    {
      *(_WORD *)(v5 + 92) = v15;
      *(_DWORD *)(v5 + 88) = (unsigned __int64)(v22 + 0x800000000000LL) >> 16;
      MiSetControlAreaSystemVa(v5, a3);
      goto LABEL_11;
    }
    return 3221225626LL;
  }
  else
  {
    if ( (*(_WORD *)(v11 + 44) & 0x2000) != 0 )
    {
      started = MiSelectRelocationStartHint(v28, (unsigned __int16)v15, v30, 0LL);
      v14 = started;
      if ( started != -1 )
      {
        v18 = MiObtainRelocationBits(v28, (unsigned __int16)v15, started, 0LL);
        v14 = v18;
        if ( v18 != -1 )
        {
          v13 = v27 - (((unsigned __int16)v15 + (unsigned __int64)v18) << 16);
          if ( v13 == v16 )
          {
            v26 = MiObtainRelocationBits(v28, (unsigned __int16)v15, v18 + (unsigned __int16)v15, 1LL);
            if ( v26 != -1 )
              v14 = v26;
            v13 = v27 - (((unsigned __int16)v15 + (unsigned __int64)v14) << 16);
          }
          if ( v14 != -1 )
            goto LABEL_10;
        }
      }
    }
    v9 = 1;
    if ( (*(_DWORD *)(v5 + 92) & 0x2000000) != 0 )
    {
      v13 = *(_QWORD *)(a2 + 32);
      goto LABEL_11;
    }
    v20 = (unsigned int)ExGenRandom(1);
    if ( v29 == 2 )
    {
      v13 = ((unsigned int)v20 % (131073 - (unsigned __int64)(unsigned __int16)v15) + 2146828288) << 16;
LABEL_10:
      *(_DWORD *)(v5 + 88) = v14;
      *(_WORD *)(v5 + 92) = v15;
LABEL_11:
      *(_DWORD *)(v5 + 92) = (v9 << 25) | *(_DWORD *)(v5 + 92) & 0xFDFFFFFF;
      *a5 = v13;
      return 0LL;
    }
    v23 = (unsigned __int16)v15 << 16;
    if ( v16 <= 0x7FFFFFFEFFFFLL && v23 + v16 > v16 && v23 + v16 <= 0x7FFFFFFF0000LL )
    {
      v24 = ((unsigned int)(v20 % 0xFE) + 1) << 16;
      if ( v16 > v24 )
      {
        v13 = v16 - v24;
        goto LABEL_10;
      }
      v13 = v24 + v16;
      if ( v24 + v16 >= v16 && v13 + v23 >= v13 && v13 + v23 <= 0x7FFFFFFF0000LL )
        goto LABEL_10;
    }
    return 3221225595LL;
  }
}
