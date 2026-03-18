/*
 * XREFs of RootHub_ForceU0AndWait @ 0x1C0021948
 * Callers:
 *     RootHub_ForceU3 @ 0x1C0021D18 (RootHub_ForceU3.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned int *v8; // rdi
  int Ulong; // eax
  int v10; // ebx
  unsigned int v11; // ebx
  unsigned int *v12; // rdx
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // edi
  __m128i *v19; // rcx
  int v20; // ebx
  int v21; // r8d
  __int64 v22; // rbx
  int v23; // edi
  int i; // r13d
  unsigned int v25; // eax
  unsigned int v26; // ebx
  int v27; // edx
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+80h] [rbp+8h]
  unsigned int *v32; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v4 = *(_QWORD *)(a1[1] + 88LL);
  v5 = a1[5];
  v6 = a1[6];
  v31 = v4;
  v7 = 88LL * (unsigned int)(a2 - 1);
  v32 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + v5);
  v8 = v32 + 1;
  if ( *(_BYTE *)(v6 + v7 + 13) == 2 )
  {
    if ( !*(_BYTE *)(v6 + v7 + 23) )
      return v3;
    DynamicLock_Acquire(*(_QWORD *)(v6 + v7 + 24));
    Ulong = XilRegister_ReadUlong(v4, v8);
    v10 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF1u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        Ulong);
    v11 = v10 & 0xFFFEFFFF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF2u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v29);
    }
    v12 = v32 + 1;
  }
  else
  {
    DynamicLock_Acquire(*(_QWORD *)(v6 + v7 + 24));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF3u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    v13 = XilRegister_ReadUlong(v4, v8);
    v14 = v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF4u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v13);
    v15 = v14 & 0xFFFF0000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF5u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v29);
    }
    XilRegister_WriteUlong(v31, v8, v15);
    v16 = XilRegister_ReadUlong(v31, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v16;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF6u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v29);
    }
    v17 = XilRegister_ReadUlong(v31, v32);
    v18 = v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF7u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v29);
    }
    v19 = (__m128i *)a1[1];
    if ( (_mm_srli_si128(v19[21], 8).m128i_u8[0] & 0x40) != 0 )
    {
      if ( (v18 & 0x400000) != 0 )
      {
        ++v19[31].m128i_i32[1];
        v19[29].m128i_i8[8] = 1;
      }
      v20 = 239124992;
    }
    else
    {
      v20 = 234930688;
    }
    v11 = v18 & v20 | 0x10000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF8u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v29);
    }
    v12 = v32;
  }
  v21 = v11;
  v22 = v31;
  XilRegister_WriteUlong(v31, v12, v21);
  DynamicLock_Release(*(_QWORD *)(a1[6] + v7 + 24));
  v23 = 6400;
  for ( i = 0; ; i += 10 )
  {
    v25 = XilRegister_ReadUlong(v22, v32);
    v26 = v25;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v30) = v25;
      LODWORD(v29) = i;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF9u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v29,
        v30);
    }
    if ( v26 == -1 )
      return (unsigned int)-1073741823;
    v27 = (v26 >> 5) & 0xF;
    if ( !v27 )
      return v3;
    if ( ((v27 - 5) & 0xFFFFFFFA) == 0 && v27 != 9 || (v26 & 0x203) != 0x203 || (v26 & 0x20000) != 0 || v27 == 4 )
      return (unsigned int)-1073741823;
    if ( ((v27 - 9) & 0xFFFFFFFD) == 0 )
      break;
    if ( (v26 & 0x10) != 0 || !v23 )
      return (unsigned int)-1073741823;
    --v23;
    KeStallExecutionProcessor(0xAu);
    v22 = v31;
  }
  v3 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = (v26 >> 5) & 0xF;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      0xBu,
      0xFAu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v29);
  }
  return v3;
}
