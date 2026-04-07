/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001A620
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180019E60 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v2; // edi
  int v3; // eax
  int v4; // r13d
  int v5; // r12d
  int v6; // r15d
  __int32 v7; // r14d
  char v8; // bl
  char v9; // bl
  __int64 v10; // rdx
  int v11; // r10d
  int v12; // r9d
  __int64 v13; // rdx
  double v14; // xmm1_8
  int v15; // r8d
  int v16; // edx
  int v17; // r11d
  int v18; // ecx
  int v19; // r12d
  __int32 v20; // esi
  int v21; // r14d
  int v22; // r15d
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r12d
  int v29; // edx
  int v30; // r8d
  int v31; // eax
  int v32; // ecx
  CTopLevelWindow *v33; // r14
  __int64 v34; // rsi
  _DWORD *v35; // rbx
  char *v36; // rdi
  __int64 v37; // rcx
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // [rsp+20h] [rbp-E0h]
  __int32 v47; // [rsp+24h] [rbp-DCh]
  __int64 v49; // [rsp+28h] [rbp-D8h]
  int v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh]
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+40h] [rbp-C0h]
  __int128 v56; // [rsp+50h] [rbp-B0h]
  __m128i v57; // [rsp+60h] [rbp-A0h]
  __int32 v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+84h] [rbp-7Ch]
  _DWORD v61[130]; // [rsp+88h] [rbp-78h] BYREF

  v1 = *(__m128i *)((char *)this + 620);
  v2 = *((_DWORD *)this + 146);
  v3 = _mm_cvtsi128_si32(v1);
  v4 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v5 = *((_DWORD *)this + 151) - v3;
  v53 = v3;
  v57 = v1;
  v6 = *((_DWORD *)this + 152) - v1.m128i_i32[1];
  v50 = *((_DWORD *)this + 153) - v4;
  v7 = *((_DWORD *)this + 154) - _mm_srli_si128(v1, 8).m128i_i32[1];
  v56 = 0uLL;
  v8 = *(_BYTE *)(*((_QWORD *)this + 90) + 599LL);
  IsOpenThemeDataPresent();
  v9 = v8 & 0x10;
  if ( (v2 & 0x20) != 0 )
  {
    if ( v9 || (v2 & 0x40) != 0 )
      v10 = 16LL;
    else
      v10 = 24LL;
  }
  else if ( v9 || (v2 & 0x40) != 0 )
  {
    v10 = 0LL;
    if ( (v2 & 2) != 0 )
      v10 = 32LL;
  }
  else if ( (v2 & 2) != 0 )
  {
    v10 = 40LL;
  }
  else
  {
    v10 = 8LL;
  }
  v11 = 0;
  v12 = 0;
  v13 = *(_QWORD *)(v10 + CTopLevelWindow::s_rgpwfWindowFrames);
  if ( v13 )
  {
    v14 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    v11 = (int)((double)(*(_DWORD *)(*(_QWORD *)(v13 + 1496) + 24LL) - 1) * v14);
    v12 = (int)((double)(*(_DWORD *)(*(_QWORD *)(v13 + 1640) + 24LL) - 1) * v14);
  }
  v15 = 0;
  v16 = 0;
  if ( *((_DWORD *)this + 147) - v11 >= 0 )
    v15 = *((_DWORD *)this + 147) - v11;
  v17 = v15 + v53;
  if ( *((_DWORD *)this + 148) - v11 >= 0 )
    v16 = *((_DWORD *)this + 148) - v11;
  v47 = v16 + v57.m128i_i32[1];
  v57.m128i_i32[1] += v16;
  v18 = 0;
  if ( *((_DWORD *)this + 150) - v11 >= 0 )
    v18 = *((_DWORD *)this + 150) - v11;
  v19 = v5 - v15;
  v20 = v18 + v57.m128i_i32[3];
  v46 = v19;
  v21 = v7 - v18;
  v22 = v6 - v16;
  if ( v19 < 0 )
  {
    v23 = 0;
    v46 = 0;
  }
  else
  {
    v23 = v19;
  }
  if ( v22 < 0 )
    v22 = 0;
  if ( v21 < 0 )
    v21 = 0;
  v58 = v12 + v20;
  v24 = *((_QWORD *)this + 55);
  if ( v24 )
  {
    v51 = *(_DWORD *)(v24 + 24);
    LODWORD(v56) = v51;
  }
  else
  {
    v51 = 0;
  }
  v25 = *((_QWORD *)this + 56);
  if ( v25 )
  {
    v52 = *(_DWORD *)(v25 + 24);
    DWORD1(v56) = v52;
  }
  else
  {
    v52 = 0;
  }
  v26 = *((_QWORD *)this + 57);
  if ( v26 )
  {
    v54 = *(_DWORD *)(v26 + 28);
    DWORD2(v56) = v54;
  }
  else
  {
    v54 = 0;
  }
  v27 = *((_QWORD *)this + 58);
  if ( v27 )
  {
    v28 = *(_DWORD *)(v27 + 28);
    HIDWORD(v56) = v28;
  }
  else
  {
    v28 = (unsigned __int128)0LL >> 96;
  }
  v61[11] = v47;
  v61[2] = v23;
  *(_OWORD *)((char *)this + 652) = v56;
  v29 = *((_DWORD *)this + 152);
  v30 = *((_DWORD *)this + 151);
  v31 = *((_DWORD *)this + 154);
  v61[3] = v50;
  v61[9] = v50;
  v61[15] = v50;
  v32 = *((_DWORD *)this + 153);
  v61[19] = v31;
  v61[25] = v31;
  v61[20] = v46;
  v61[5] = v29;
  v61[18] = v32;
  v61[24] = v32;
  v61[35] = v29;
  v61[47] = v29;
  v61[32] = v46;
  v61[41] = v47;
  v59 = v17;
  v60 = 0x7FFFFFFF;
  v61[0] = v4;
  v61[1] = 0x7FFFFFFF;
  v61[4] = v30;
  v61[6] = v4;
  v61[7] = 0x7FFFFFFF;
  v61[8] = 0x7FFFFFFF;
  v61[10] = 0x7FFFFFFF;
  v61[12] = v4;
  v61[13] = 0x7FFFFFFF;
  v61[14] = v22;
  v61[16] = v17;
  v61[17] = 0x7FFFFFFF;
  v61[21] = 0x7FFFFFFF;
  v61[22] = 0x7FFFFFFF;
  v61[23] = v47;
  v61[26] = v22;
  v61[27] = 0x7FFFFFFF;
  v61[28] = v17;
  v61[29] = 0x7FFFFFFF;
  v61[30] = 0x7FFFFFFF;
  v61[31] = v20;
  v61[33] = v21;
  v61[34] = v30;
  v61[36] = 0x7FFFFFFF;
  v61[37] = v20;
  v61[38] = 0x7FFFFFFF;
  v61[39] = v21;
  v61[40] = 0x7FFFFFFF;
  v61[42] = 0x7FFFFFFF;
  v61[43] = v20;
  v61[44] = v22;
  v61[45] = v21;
  v61[46] = v30;
  v61[48] = v4;
  v61[49] = 0x7FFFFFFF;
  v61[50] = 0x7FFFFFFF;
  v61[51] = v50;
  v61[52] = v17;
  v61[53] = 0x7FFFFFFF;
  v61[54] = v4;
  v61[55] = 0x7FFFFFFF;
  v61[56] = v12;
  v61[57] = v12;
  v61[58] = v12 + v17;
  v61[59] = v12 + v57.m128i_i32[1];
  v61[60] = v4;
  v61[61] = 0x7FFFFFFF;
  v61[62] = 0x7FFFFFFF;
  v61[63] = v12;
  v61[64] = 0x7FFFFFFF;
  v33 = this;
  v61[65] = v57.m128i_i32[1];
  v61[77] = v57.m128i_i32[1];
  v61[95] = v57.m128i_i32[1];
  v61[110] = v51;
  v61[85] = v20;
  v61[91] = v20;
  v61[97] = v20;
  v61[109] = v20;
  v61[115] = v20;
  v61[70] = v17;
  v61[82] = v17;
  v61[116] = v52;
  v61[66] = v4;
  v61[108] = v4;
  v61[114] = v4;
  v61[72] = v12 + v57.m128i_i32[2];
  v61[127] = v20 - v28;
  v34 = 22LL;
  v61[78] = v12 + v57.m128i_i32[2];
  v61[89] = v12 + v57.m128i_i32[1];
  v61[101] = v12 + v57.m128i_i32[1];
  v35 = v61;
  v61[102] = v12 + v57.m128i_i32[2];
  v36 = (char *)this + 296;
  v61[67] = 0x7FFFFFFF;
  v61[68] = v12;
  v61[69] = v12;
  v61[71] = 0x7FFFFFFF;
  v61[73] = v58;
  v61[74] = v12;
  v61[75] = 0x7FFFFFFF;
  v61[76] = 0x7FFFFFFF;
  v61[79] = v58;
  v61[80] = v12;
  v61[81] = 0x7FFFFFFF;
  v61[83] = 0x7FFFFFFF;
  v61[84] = 0x7FFFFFFF;
  v61[86] = v12;
  v61[87] = v12;
  v61[88] = v12 + v17;
  v61[90] = 0x7FFFFFFF;
  v61[92] = 0x7FFFFFFF;
  v61[93] = v12;
  v61[94] = 0x7FFFFFFF;
  v61[96] = 0x7FFFFFFF;
  v61[98] = v12;
  v61[99] = v12;
  v61[100] = v12 + v17;
  v61[103] = v58;
  v61[104] = 0x7FFFFFFF;
  v61[105] = 0x7FFFFFFF;
  v61[106] = v17 - v51;
  v61[107] = 0x7FFFFFFF;
  v61[111] = 0x7FFFFFFF;
  v61[112] = 0x7FFFFFFF;
  v61[113] = v47 - v52;
  v61[117] = 0x7FFFFFFF;
  v61[118] = v17 - v51;
  v61[119] = v47 - v52;
  v61[120] = v4 - v54;
  v61[121] = 0x7FFFFFFF;
  v61[122] = 0x7FFFFFFF;
  v61[123] = v54;
  v61[124] = v17 - v51;
  v61[125] = v47 - v52;
  v61[126] = 0x7FFFFFFF;
  v61[128] = 0x7FFFFFFF;
  v61[129] = v28;
  do
  {
    v37 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 )
    {
      if ( *(_DWORD *)(v37 + 32) != *(v35 - 2)
        || *(_DWORD *)(v37 + 36) != *(v35 - 1)
        || *(_DWORD *)(v37 + 40) != *v35
        || *(_DWORD *)(v37 + 44) != v35[1] )
      {
        *(_DWORD *)(v37 + 96) |= 1u;
        *(_OWORD *)(v37 + 32) = *(_OWORD *)(v35 - 2);
        v45 = *(_QWORD *)(v37 + 80);
        if ( v45 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 24LL))(v45, 4096LL);
      }
      v39 = v35[2];
      if ( v39 != 0x7FFFFFFF )
      {
        v40 = *(_QWORD *)v36;
        LODWORD(v49) = v35[2];
        HIDWORD(v49) = *(_DWORD *)(*(_QWORD *)v36 + 28LL);
        if ( *(_DWORD *)(*(_QWORD *)v36 + 24LL) != v39 )
        {
          *(_DWORD *)(v40 + 96) |= 1u;
          v41 = *(_QWORD *)(v40 + 80);
          *(_QWORD *)(v40 + 24) = v49;
          if ( v41 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 24LL))(v41, 0x2000LL);
        }
      }
      v42 = v35[3];
      if ( v42 != 0x7FFFFFFF )
      {
        v43 = *(_QWORD *)v36;
        HIDWORD(v55) = v35[3];
        LODWORD(v55) = *(_DWORD *)(*(_QWORD *)v36 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)v36 + 28LL) != v42 )
        {
          *(_DWORD *)(v43 + 96) |= 1u;
          v44 = *(_QWORD *)(v43 + 80);
          *(_QWORD *)(v43 + 24) = v55;
          if ( v44 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 24LL))(v44, 0x2000LL);
        }
      }
    }
    v36 += 8;
    v35 += 6;
    --v34;
  }
  while ( v34 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v33 + 34) + 24LL))(*((_QWORD *)v33 + 34), 4096LL);
  return 0LL;
}
