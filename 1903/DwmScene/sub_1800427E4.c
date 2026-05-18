/*
 * XREFs of sub_1800427E4 @ 0x1800427E4
 * Callers:
 *     sub_180043040 @ 0x180043040 (sub_180043040.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800D1EC8 @ 0x1800D1EC8 (sub_1800D1EC8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800427E4(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v20; // [rsp+20h] [rbp-60h]
  __int128 v21; // [rsp+20h] [rbp-60h]
  __int128 v22; // [rsp+20h] [rbp-60h]
  __int128 v23; // [rsp+20h] [rbp-60h]
  __int128 v24; // [rsp+20h] [rbp-60h]
  __int128 v25; // [rsp+20h] [rbp-60h]
  __int128 v26; // [rsp+20h] [rbp-60h]
  __int128 v27; // [rsp+20h] [rbp-60h]
  __int128 v28; // [rsp+20h] [rbp-60h]
  __int128 v29; // [rsp+20h] [rbp-60h]
  __int128 v30; // [rsp+20h] [rbp-60h]
  __int128 Src; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(Src) = 0;
  v6 = 0;
  v7 = 0;
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)&v20 = "POSITION";
    DWORD2(v20) = 0;
    HIDWORD(v20) = dword_180150A20[(int)sub_1800D1EC8(a2, 32LL) + ((a2 & 0x10000) != 0 ? 18LL : 12LL)];
    v7 = 1;
    v6 = 1;
    *a3 = v20;
    a3[1] = 0u;
    std::string::append(&Src, "Position ", 9uLL);
  }
  if ( (a2 & 2) != 0 )
  {
    *(_QWORD *)&v21 = "VERTEX_LAYOUT_SLOT_NORMAL";
    DWORD2(v21) = 0;
    HIDWORD(v21) = dword_180150A20[(int)sub_1800D1EC8(a2, 35LL) + ((a2 & 0x20000) != 0 ? 18LL : 12LL)];
    v6 = v7 + 1;
    v8 = 2LL * v7;
    a3[v8] = v21;
    a3[v8 + 1] = 1uLL;
    std::string::append(&Src, "Normal ", 7uLL);
    ++v7;
  }
  if ( (a2 & 4) != 0 )
  {
    *(_QWORD *)&v22 = "VERTEX_LAYOUT_SLOT_TANGENT";
    DWORD2(v22) = 0;
    HIDWORD(v22) = dword_180150A20[(int)sub_1800D1EC8(a2, 41LL) + ((a2 & 0x80000) != 0 ? 18LL : 12LL)];
    v6 = v7 + 1;
    v9 = 2LL * v7;
    a3[v9] = v22;
    a3[v9 + 1] = 2uLL;
    std::string::append(&Src, "Tangent ", 8uLL);
    ++v7;
  }
  if ( (a2 & 8) != 0 )
  {
    *(_QWORD *)&v23 = "VERTEX_LAYOUT_SLOT_BINORMAL";
    DWORD2(v23) = 0;
    HIDWORD(v23) = dword_180150A20[(int)sub_1800D1EC8(a2, 44LL) + 12];
    v6 = v7 + 1;
    v10 = 2LL * v7;
    a3[v10] = v23;
    a3[v10 + 1] = 3uLL;
    std::string::append(&Src, "Bitangent ", 0xAuLL);
    ++v7;
  }
  if ( (a2 & 0x10) != 0 )
  {
    *(_QWORD *)&v24 = "VERTEX_LAYOUT_SLOT_COLOR";
    DWORD2(v24) = 0;
    HIDWORD(v24) = dword_180150A20[(int)sub_1800D1EC8(a2, 38LL) + ((a2 & 0x40000) != 0 ? 18LL : 12LL)];
    v6 = v7 + 1;
    v11 = 2LL * v7;
    a3[v11] = v24;
    a3[v11 + 1] = 4uLL;
    std::string::append(&Src, "Colour ", 7uLL);
    ++v7;
  }
  v12 = a2 & 0x100000;
  if ( (a2 & 0x20) != 0 )
  {
    *(_QWORD *)&v25 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    DWORD2(v25) = 0;
    HIDWORD(v25) = dword_180150A20[(int)sub_1800D1EC8(a2, 47LL)
                                 + 6
                                 + (((unsigned __int128)-(__int128)(unsigned int)v12 >> 64) & 0xC)];
    v6 = v7 + 1;
    v13 = 2LL * v7;
    a3[v13] = v25;
    a3[v13 + 1] = 5uLL;
    std::string::append(&Src, "UV0 ", 4uLL);
    ++v7;
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_QWORD *)&v26 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    DWORD2(v26) = 1;
    HIDWORD(v26) = dword_180150A20[(int)sub_1800D1EC8(a2, 50LL) + (v12 != 0 ? 18LL : 6LL)];
    v6 = v7 + 1;
    v14 = 2LL * v7;
    a3[v14] = v26;
    a3[v14 + 1] = 6uLL;
    std::string::append(&Src, "UV1 ", 4uLL);
    ++v7;
  }
  if ( (a2 & 0x80u) != 0LL )
  {
    *(_QWORD *)&v27 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *((_QWORD *)&v27 + 1) = 0x1000000002LL;
    v6 = v7 + 1;
    v15 = 2LL * v7;
    a3[v15] = v27;
    a3[v15 + 1] = 7uLL;
    std::string::append(&Src, "UV2 ", 4uLL);
    ++v7;
  }
  if ( (a2 & 0x100) != 0 )
  {
    *(_QWORD *)&v28 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *((_QWORD *)&v28 + 1) = 0x1000000003LL;
    v6 = v7 + 1;
    v16 = 2LL * v7;
    a3[v16] = v28;
    a3[v16 + 1] = 8uLL;
    std::string::append(&Src, "UV3 ", 4uLL);
    ++v7;
  }
  if ( (a2 & 0x200) != 0 )
  {
    *(_QWORD *)&v29 = "VERTEX_LAYOUT_SLOT_BLENDWEIGHT";
    DWORD2(v29) = 0;
    HIDWORD(v29) = dword_180150A20[(int)sub_1800D1EC8(a2, 53LL) + 18];
    v6 = v7 + 1;
    v17 = 2LL * v7;
    a3[v17] = v29;
    a3[v17 + 1] = 9uLL;
    std::string::append(&Src, "JointWeights ", 0xDuLL);
    ++v7;
  }
  if ( (a2 & 0x400) != 0 )
  {
    *(_QWORD *)&v30 = "VERTEX_LAYOUT_SLOT_BLENDINDICES";
    DWORD2(v30) = 0;
    HIDWORD(v30) = dword_180150A20[(int)sub_1800D1EC8(a2, 56LL) + 18];
    v6 = v7 + 1;
    v18 = 2LL * v7;
    a3[v18] = v30;
    a3[v18 + 1] = 0xAuLL;
    std::string::append(&Src, "JointIndices ", 0xDuLL);
  }
  *(_DWORD *)a1 = v6;
  *(_OWORD *)(a1 + 8) = Src;
  *(__m128i *)(a1 + 24) = si128;
  return a1;
}
