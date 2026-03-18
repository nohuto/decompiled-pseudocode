/*
 * XREFs of bSetXform @ 0x1C0222A4C
 * Callers:
 *     bGrabXform @ 0x1C02226AC (bGrabXform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     vCalcXformVertical @ 0x1C02240F8 (vCalcXformVertical.c)
 *     fs__NewTransformation @ 0x1C02B27B0 (fs__NewTransformation.c)
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall bSetXform(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  bool v10; // cc
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int fixed; // eax
  unsigned int v20; // r10d
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // r11d
  int v30; // eax
  unsigned int v31; // r11d
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r11d
  unsigned int v36; // r11d
  int v37; // eax
  int v38; // r10d
  int v39; // eax
  __int128 v40; // xmm1
  __int64 v41; // rcx
  __int16 v42; // ax
  __int16 *v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int128 v48; // [rsp+20h] [rbp-30h] BYREF
  __int128 v49; // [rsp+30h] [rbp-20h]
  int v50; // [rsp+40h] [rbp-10h]

  v5 = *(_OWORD *)(a1 + 80);
  v6 = *(_OWORD *)(a1 + 96);
  v50 = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  v10 = *(_DWORD *)(a1 + 52) <= 0x7FFFu;
  v48 = v5;
  v49 = v6;
  if ( !v10 )
    *(_DWORD *)(a1 + 52) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 108LL) = *(_WORD *)(a1 + 44);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 110LL) = *(_WORD *)(a1 + 48);
  v12 = *(_DWORD *)(a1 + 116);
  v13 = *(_QWORD *)(a1 + 176);
  if ( (v12 & 8) != 0 )
  {
    *(_DWORD *)(v13 + 104) = 786432;
    *(_QWORD *)&v48 = 0x10000LL;
    LODWORD(v49) = 0x10000;
    HIDWORD(v48) = 0;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 52);
    if ( (v12 & 1) != 0 )
    {
      if ( v14 )
      {
        *(_DWORD *)(v13 + 104) = v14 << 16;
        v18 = CompDiv(
                (unsigned int)(*(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 52)),
                72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
        fixed = FixMul((unsigned int)v48, v18);
        v21 = *(_DWORD *)(a1 + 48);
        LODWORD(v48) = fixed;
        if ( v21 != *(_DWORD *)(a1 + 44) )
          v20 = CompDiv(
                  (unsigned int)(*(_DWORD *)(a1 + 52) * v21),
                  72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
        LODWORD(v49) = FixMul((unsigned int)v49, v20);
      }
      else
      {
        *(_DWORD *)(v13 + 104) = *(_DWORD *)(a1 + 128);
        v15 = -65536;
        v16 = *(_DWORD *)(a1 + 96);
        if ( v16 > 0 )
          v15 = 0x10000;
        LODWORD(v49) = v15;
        if ( v16 == *(_DWORD *)(a1 + 80) && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
        {
          LODWORD(v48) = v15;
        }
        else
        {
          v17 = CompDiv(
                  (unsigned int)(*(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 124)),
                  *(int *)(a1 + 48) * (__int64)(*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
          LODWORD(v48) = FixMul((unsigned int)v48, v17);
        }
      }
    }
    else
    {
      if ( v14 )
      {
        v22 = v14 << 16;
      }
      else
      {
        v22 = *(_DWORD *)(a1 + 128);
        v14 = ((v22 >> 15) + 1) >> 1;
      }
      *(_DWORD *)(v13 + 104) = v22;
      if ( (*(_DWORD *)(a1 + 116) & 2) != 0
        && (v23 = *(_DWORD *)(a1 + 84), *(_DWORD *)(a1 + 92) == -v23)
        && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
      {
        LODWORD(v48) = 0;
        LODWORD(v49) = 0;
        v24 = -65536;
        if ( v23 > 0 )
          v24 = 0x10000;
        DWORD1(v48) = v24;
        HIDWORD(v48) = -v24;
      }
      else
      {
        v25 = *(_DWORD *)(a1 + 44);
        if ( v25 * (v14 + 1) <= 0x8000 )
        {
          v27 = (unsigned int)(v25 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL));
          v26 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
        }
        else
        {
          v26 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
          v27 = (unsigned int)(v14 * v25);
        }
        v28 = CompDiv(v27, v26);
        LODWORD(v48) = FixMul((unsigned int)v48, v28);
        v30 = FixMul(HIDWORD(v48), v29);
        v32 = *(_DWORD *)(a1 + 48);
        HIDWORD(v48) = v30;
        if ( v32 != *(_DWORD *)(a1 + 44) )
        {
          if ( v32 * (v14 + 1) <= 0x8000 )
          {
            v34 = (unsigned int)(v32 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL));
            v33 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
          }
          else
          {
            v33 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
            v34 = (unsigned int)(v14 * v32);
          }
          v31 = CompDiv(v34, v33);
        }
        LODWORD(v49) = FixMul((unsigned int)v49, v31);
        DWORD1(v48) = FixMul(DWORD1(v48), v35);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    HIDWORD(v48) += FixMul((unsigned int)v48, 22272LL);
    v37 = FixMul(DWORD1(v48), v36);
    LODWORD(v49) = v37 + v38;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = &v48;
  if ( *(_DWORD *)(a1 + 308) )
  {
    v39 = v50;
    v40 = v49;
    *(_OWORD *)(a1 + 356) = v48;
    *(_OWORD *)(a1 + 372) = v40;
    *(_DWORD *)(a1 + 388) = v39;
    *(_DWORD *)(a1 + 316) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
    vCalcXformVertical(a1);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 92682;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 136LL) = *(_WORD *)(a1 + 402);
  v41 = *(_QWORD *)(a1 + 176);
  if ( a3 == -1 )
  {
    v42 = a4 != 0 ? 17 : 1;
    v43 = (__int16 *)(v41 + 152);
  }
  else
  {
    v43 = (__int16 *)(v41 + 152);
    if ( a3 == 1 )
      v42 = a4 != 0 ? 19 : 3;
    else
      v42 = 0;
  }
  *v43 = v42;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 164LL) = (*(_DWORD *)(a1 + 120) & 1) != 0 ? a5 : 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 128LL) = 0LL;
  v44 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    *(_WORD *)(v44 + 138) = 20;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 20;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = a2;
  }
  else
  {
    *(_WORD *)(v44 + 138) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 156LL) = 0;
  v45 = *(_DWORD *)(a1 + 120);
  if ( (v45 & 4) != 0 )
  {
    if ( (v45 & 8) != 0 && (v46 = *(_QWORD *)(a1 + 176), (*(_BYTE *)(v46 + 152) & 1) != 0) && *(_DWORD *)(v46 + 148) )
      *(_DWORD *)(v46 + 160) = 1;
    else
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 160LL) = 0;
  }
  if ( (unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), 1LL)
    && (unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), 0LL) )
  {
    return 0LL;
  }
  if ( a2 && (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 116) |= 0x80u;
  else
    *(_DWORD *)(a1 + 116) &= ~0x80u;
  return 1LL;
}
