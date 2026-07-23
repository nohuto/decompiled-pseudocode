/*
 * XREFs of HvHiveStartMemoryBacked @ 0x14073DCFC
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     HvpFillFileName @ 0x1405A5BD4 (HvpFillFileName.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1405A5FA8 (HvpAdjustHiveFreeDisplay.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14073E1CC (HvpBuildMapForMemoryBackedHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407FBD80 (HvIsInPlaceBaseBlockValid.c)
 */

__int64 __fastcall HvHiveStartMemoryBacked(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned __int16 *a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        int *a12,
        __int64 a13)
{
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdx
  char v18; // r9
  int v19; // ebx
  __int64 v20; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rcx
  int v28; // eax
  _DWORD *v29; // rsi
  int v30; // r15d
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // r10d
  int v36; // r11d
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a13;
  if ( (_DWORD)a2 == 2
    || (unsigned int)a2 >= 5
    || (a3 & 0xFF617CEC) != 0
    || (unsigned int)a4 > 2
    || (unsigned int)(a7 - 1) > 7
    || !a5 && (((_DWORD)a2 - 1) & 0xFFFFFFFC) == 0 )
  {
    __fastfail(5u);
  }
  if ( a11 )
    *a11 = 0;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  v15 = 4LL;
  if ( (_DWORD)a4 )
  {
    v28 = 4;
    if ( (_DWORD)a4 == 1 )
      v28 = 1;
    *(_DWORD *)(BugCheckParameter2 + 164) = v28;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 164) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 160) = a3;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 136) = a7;
  *(_DWORD *)(BugCheckParameter2 + 208) = 2;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  LOBYTE(a4) = (a3 & 1) == 0;
  v16 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(BugCheckParameter2 + 192) = MEMORY[0xFFFFF78000000014];
  *(_BYTE *)(BugCheckParameter2 + 190) = 1;
  if ( !(_DWORD)a2 )
  {
    LODWORD(a2) = (unsigned __int8)a4;
    v29 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                      *(unsigned int *)(BugCheckParameter2 + 132),
                      a2,
                      825314627LL);
    if ( v29 )
    {
      if ( (((a7 << 9) - 1) & (unsigned int)v29) != 0 )
      {
        (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
          v29,
          *(unsigned int *)(BugCheckParameter2 + 132));
        LOBYTE(v34) = 1;
        v29 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                          4096LL,
                          v34,
                          842091843LL);
        if ( !v29 )
        {
          v42 = 112;
          goto LABEL_55;
        }
        *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
        if ( a12 )
          *a12 = 842091843;
      }
      else if ( a12 )
      {
        *a12 = 825314627;
      }
      memset(v29, 0, 0x1000uLL);
      v29[9] = -1;
      *v29 = 1718052210;
      v29[1] = 1;
      v29[2] = 1;
      v29[7] = 0;
      v29[8] = 1;
      v29[10] = 0;
      v29[11] = 1;
      v29[127] = 0;
      HvpFillFileName((__int64)v29, a8);
      v29[36] = 0;
      v30 = a3 & 0x80000;
      if ( v30 )
        v29[36] = 2;
      v29[5] = 1;
      v31 = v30 != 0 ? 6 : 3;
      v29[6] = v31;
      *(_DWORD *)(BugCheckParameter2 + 212) = v31;
      v29[41] = 1836346738;
      *(_DWORD *)(BugCheckParameter2 + 168) = 1;
      *(_DWORD *)(BugCheckParameter2 + 180) = 1;
      *(_DWORD *)(BugCheckParameter2 + 172) = 1;
      *(_QWORD *)(v29 + 3) = v16;
      if ( a9 )
      {
        *((_OWORD *)v29 + 7) = *a9;
        *((_OWORD *)v29 + 8) = *a9;
      }
      if ( a10 )
        *(_OWORD *)(v29 + 37) = *a10;
      *(_QWORD *)(BugCheckParameter2 + 64) = v29;
      v29[1022] = 0;
      return 0LL;
    }
    v42 = 96;
LABEL_55:
    v25 = -1073741670;
    goto LABEL_57;
  }
  if ( (_DWORD)a2 == 4 )
  {
    *(_QWORD *)(BugCheckParameter2 + 64) = a5;
    v32 = a5[5];
    v33 = a5[6] - 4096;
    *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
    *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
    *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
    *(_DWORD *)(BugCheckParameter2 + 212) = v33 + (v32 << 12);
    *(_DWORD *)(BugCheckParameter2 + 272) = a5[10];
    *(_DWORD *)(BugCheckParameter2 + 208) = 1;
    if ( a12 )
      *a12 = 0;
    return 0LL;
  }
  if ( (_DWORD)a2 != 3 )
  {
    if ( *a5 == 1718052210
      && !a5[7]
      && a5[8] == 1
      && a5[5] <= 1u
      && (unsigned int)(a5[6] - 3) <= 3
      && a5[10] <= 0x7FFFE000u
      && (unsigned int)HvpHeaderCheckSum(a5) == a5[127] )
    {
      v19 = 858869059;
      LOBYTE(v17) = v18;
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
              *(unsigned int *)(BugCheckParameter2 + 132),
              v17,
              858869059LL);
      *(_QWORD *)(BugCheckParameter2 + 64) = v20;
      if ( v20 )
      {
        if ( (((a7 << 9) - 1) & (unsigned int)v20) == 0 )
        {
LABEL_25:
          if ( a12 )
            *a12 = v19;
          v21 = *(_OWORD **)(BugCheckParameter2 + 64);
          v22 = a5;
          do
          {
            *v21 = *v22;
            v21[1] = v22[1];
            v21[2] = v22[2];
            v21[3] = v22[3];
            v21[4] = v22[4];
            v21[5] = v22[5];
            v21[6] = v22[6];
            v21 += 8;
            v23 = v22[7];
            v22 += 8;
            *(v21 - 1) = v23;
            --v15;
          }
          while ( v15 );
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
          v24 = a5[1];
          *(_DWORD *)(BugCheckParameter2 + 168) = v24;
          *(_DWORD *)(BugCheckParameter2 + 180) = v24;
          *(_DWORD *)(BugCheckParameter2 + 172) = v24;
          *(_DWORD *)(BugCheckParameter2 + 212) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                                - 4096
                                                + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
          v25 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
          if ( v25 >= 0 )
          {
            if ( (int)HvpBuildMapForMemoryBackedHive(BugCheckParameter2) >= 0 )
            {
              v26 = *(_QWORD *)(BugCheckParameter2 + 64);
              if ( (*(_DWORD *)(v26 + 144) & 1) != 0 )
              {
                if ( a11 )
                {
                  *a11 = 1;
                  v26 = *(_QWORD *)(BugCheckParameter2 + 64);
                }
              }
              *(_DWORD *)(v26 + 144) &= ~1u;
              HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
              return 0LL;
            }
            v25 = -1073741492;
            SetFailureLocation(a13, 0, 25, -1073741492, 240);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 64),
              *(unsigned int *)(BugCheckParameter2 + 132));
            *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
            return (unsigned int)v25;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
            *(_QWORD *)(BugCheckParameter2 + 64),
            *(unsigned int *)(BugCheckParameter2 + 132));
          *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
          v42 = 224;
LABEL_57:
          SetFailureLocation(a13, 0, 25, v25, v42);
          return (unsigned int)v25;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
          v20,
          *(unsigned int *)(BugCheckParameter2 + 132));
        v19 = 875646275;
        LOBYTE(v40) = 1;
        v41 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v40, 875646275LL);
        *(_QWORD *)(BugCheckParameter2 + 64) = v41;
        if ( v41 )
        {
          *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
          goto LABEL_25;
        }
        v42 = 208;
      }
      else
      {
        v42 = 192;
      }
      goto LABEL_55;
    }
    v42 = 176;
LABEL_67:
    v25 = -1073741492;
    goto LABEL_57;
  }
  if ( !(unsigned __int8)HvIsInPlaceBaseBlockValid(a5, a2, 2LL, a4) )
  {
    v42 = 128;
    goto LABEL_67;
  }
  v37 = a5[5];
  v38 = a5[6];
  *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
  *(_QWORD *)(BugCheckParameter2 + 64) = a5;
  *(_DWORD *)(BugCheckParameter2 + 208) = v36;
  *(_DWORD *)(BugCheckParameter2 + 212) = v38 - 4096 + (v37 << 12);
  a5[1022] = v35;
  v39 = a5[1];
  *(_DWORD *)(BugCheckParameter2 + 168) = v39;
  *(_DWORD *)(BugCheckParameter2 + 180) = v39;
  *(_DWORD *)(BugCheckParameter2 + 172) = v39;
  v25 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
  if ( v25 >= 0 )
  {
    v25 = HvpBuildMapForMemoryBackedHive(BugCheckParameter2);
    if ( v25 >= 0 )
    {
      if ( a12 )
        *a12 = 0;
      return 0LL;
    }
    SetFailureLocation(a13, 0, 25, v25, 160);
  }
  else
  {
    SetFailureLocation(a13, 0, 25, v25, 144);
  }
  return (unsigned int)v25;
}
