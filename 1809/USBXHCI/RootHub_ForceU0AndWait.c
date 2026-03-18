/*
 * XREFs of RootHub_ForceU0AndWait @ 0x1C001DF08
 * Callers:
 *     RootHub_ForceU3 @ 0x1C001E2A0 (RootHub_ForceU3.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  unsigned int v3; // esi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int *v7; // rdi
  __int64 v8; // rcx
  int Ulong; // ebx
  int v10; // ebx
  unsigned int *v11; // rdx
  int v12; // ebx
  int v13; // edi
  __m128i *v14; // rcx
  int v15; // ebx
  int v16; // r14d
  unsigned int v17; // ebx
  int i; // ecx
  int v19; // edx
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  unsigned int *v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+88h] [rbp+10h]

  v3 = 0;
  v4 = *(_QWORD *)(a1[1] + 88LL);
  v5 = (unsigned int)(a2 - 1);
  v6 = 10 * v5;
  v7 = (unsigned int *)(a1[5] + 16 * v5);
  v8 = a1[6];
  v29 = v7;
  if ( *(_BYTE *)(v8 + 80 * v5 + 13) == 2 )
  {
    if ( !*(_BYTE *)(v8 + 80 * v5 + 23) )
      return v3;
    DynamicLock_Acquire(*(_QWORD *)(v8 + 80 * v5 + 24));
    Ulong = XilRegister_ReadUlong(v4, v7 + 1);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF1u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      Ulong);
    v10 = Ulong & 0xFFFEFFFF;
    LODWORD(v21) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF2u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v21);
    v11 = v7 + 1;
  }
  else
  {
    DynamicLock_Acquire(*(_QWORD *)(v8 + 80 * v5 + 24));
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF3u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
    v12 = XilRegister_ReadUlong(v4, v7 + 1);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF4u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v12);
    v12 &= 0xFFFF0000;
    LODWORD(v23) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF5u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v23);
    XilRegister_WriteUlong(v4, v7 + 1, v12);
    LODWORD(v24) = XilRegister_ReadUlong(v4, v7 + 1);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF6u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v24);
    v13 = XilRegister_ReadUlong(v4, v7);
    LODWORD(v25) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF7u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v25);
    v14 = (__m128i *)a1[1];
    if ( (_mm_srli_si128(v14[17], 8).m128i_u8[0] & 0x40) != 0 )
    {
      if ( (v13 & 0x400000) != 0 )
      {
        ++v14[27].m128i_i32[0];
        v14 = (__m128i *)a1[1];
      }
      v15 = 239124992;
    }
    else
    {
      v15 = 234930688;
    }
    v10 = v13 & v15 | 0x10000;
    LODWORD(v26) = v10;
    WPP_RECORDER_SF_d(
      v14[4].m128i_i64[1],
      4u,
      0xBu,
      0xF8u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v26);
    v7 = v29;
    v11 = v29;
  }
  XilRegister_WriteUlong(v4, v11, v10);
  DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v6 + 24));
  v16 = 3200;
  v17 = XilRegister_ReadUlong(v4, v7);
  LODWORD(v22) = 0;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xF9u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v22,
    v17);
  if ( v17 == -1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    for ( i = 0; ; i = v30 )
    {
      v19 = (v17 >> 5) & 0xF;
      if ( !v19 )
        break;
      if ( ((v19 - 5) & 0xFFFFFFFA) == 0 && v19 != 9 || (v17 & 0x203) != 0x203 || (v17 & 0x20000) != 0 || v19 == 4 )
        return (unsigned int)-1073741823;
      if ( ((v19 - 9) & 0xFFFFFFFD) == 0 )
      {
        v3 = -1073741823;
        LODWORD(v27) = (v17 >> 5) & 0xF;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          2u,
          0xBu,
          0xFAu,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v27);
        return v3;
      }
      if ( (v17 & 0x10) != 0 )
        return (unsigned int)-1073741823;
      if ( !v16 )
        return (unsigned int)-1073741823;
      --v16;
      v30 = i + 10;
      KeStallExecutionProcessor(0xAu);
      v17 = XilRegister_ReadUlong(v4, v7);
      LODWORD(v28) = v17;
      LODWORD(v27) = v30;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF9u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v27,
        v28);
      if ( v17 == -1 )
        return (unsigned int)-1073741823;
    }
  }
  return v3;
}
