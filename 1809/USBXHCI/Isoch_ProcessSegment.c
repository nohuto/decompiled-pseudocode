/*
 * XREFs of Isoch_ProcessSegment @ 0x1C002A564
 * Callers:
 *     Isoch_CalculateBytesTransferred @ 0x1C0028CA4 (Isoch_CalculateBytesTransferred.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDDL @ 0x1C002E038 (WPP_RECORDER_SF_DDDDL.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C002E27C (WPP_RECORDER_SF_DDL.c)
 */

bool __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rbx
  bool v11; // si
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rbx
  int v24; // edx
  int v25; // ebx
  __int64 v26; // rcx
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+98h] [rbp+10h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v7 = *(_QWORD *)(a4 + 24);
  v11 = 0;
  v34 = *(_QWORD *)(a4 + 16);
  v33 = *a2;
  v12 = *(_DWORD *)(a4 + 44) & 0xFFFFFFF0;
  v13 = 16LL * a5;
  v14 = v12 + v34 - 16;
  v15 = v13 + v7;
  v16 = v13 + v34;
  if ( v13 + v34 > v14 )
    return v11;
  while ( 1 )
  {
    v11 = v15 == *(_QWORD *)a3;
    v17 = (unsigned __int16)*(_DWORD *)(v16 + 12) >> 10;
    if ( v17 == 1 || v17 == 5 )
      break;
    if ( v17 == 6 )
      goto LABEL_47;
    if ( v17 != 7 )
    {
      v18 = 32;
LABEL_7:
      v19 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_DDL(
        *(_QWORD *)(a1[7] + 80LL),
        v19,
        v17,
        v18,
        v28,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        v17);
      goto LABEL_33;
    }
    if ( v15 == *(_QWORD *)a3 )
      goto LABEL_36;
    *a7 = 0;
LABEL_34:
    v16 += 16LL;
    v15 += 16LL;
    if ( v16 > v14 )
      return v11;
  }
  if ( v15 != *(_QWORD *)a3 )
  {
    v22 = *(_DWORD *)(v16 + 8) & 0x1FFFF;
    goto LABEL_32;
  }
  v17 = *(unsigned __int8 *)(a3 + 11);
  if ( v17 > 0x1A )
  {
    if ( v17 == 27 )
      goto LABEL_33;
    if ( v17 == 28 )
    {
      *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
      goto LABEL_33;
    }
    if ( v17 != 31 && v17 != 36 )
      goto LABEL_27;
  }
  else if ( v17 != 26 )
  {
    if ( v17 < 2 )
      goto LABEL_27;
    if ( v17 > 4 && v17 != 6 )
    {
      if ( v17 == 20 )
        goto LABEL_33;
      if ( v17 == 23 )
      {
        if ( !*(_BYTE *)(a1[5] + 255LL) )
          goto LABEL_33;
        v20 = *(_DWORD *)(a3 + 8);
        v21 = *(_DWORD *)(v16 + 8);
        if ( (v21 & 0x1FFFFu) >= (v20 & 0xFFFFFFu) )
          goto LABEL_22;
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(a1[7] + 80LL),
          2u,
          0xEu,
          0x1Eu,
          (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids);
        goto LABEL_21;
      }
LABEL_27:
      v18 = 31;
      goto LABEL_7;
    }
  }
  v20 = *(_DWORD *)(a3 + 8);
  v21 = *(_DWORD *)(v16 + 8);
  if ( (v21 & 0x1FFFFu) >= (v20 & 0xFFFFFFu) )
    goto LABEL_22;
  WPP_RECORDER_SF_DDDDL(
    *(_QWORD *)(a1[7] + 80LL),
    *(unsigned __int8 *)(a1[6] + 135LL),
    v17,
    *(_DWORD *)(a3 + 8) & 0xFFFFFF,
    v28,
    *(_BYTE *)(a1[6] + 135LL),
    *(_DWORD *)(a1[7] + 144LL),
    v21,
    *(_BYTE *)(a3 + 8),
    *(_BYTE *)(a3 + 11));
LABEL_21:
  v20 = *(_DWORD *)(a3 + 8);
  v21 = *(_DWORD *)(v16 + 8);
LABEL_22:
  v22 = (v21 & 0x1FFFF) - (v20 & 0xFFFFFF);
LABEL_32:
  *a7 += v22;
LABEL_33:
  if ( !v11 )
    goto LABEL_34;
LABEL_36:
  v23 = v16;
  if ( v16 >= v14 )
    goto LABEL_47;
  while ( 2 )
  {
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v23 + 12)) >> 2 == 1
      || (unsigned __int8)HIBYTE(*(_WORD *)(v23 + 12)) >> 2 == 5 )
    {
LABEL_42:
      v23 += 16LL;
      if ( v23 >= v14 )
        goto LABEL_47;
      continue;
    }
    break;
  }
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v23 + 12)) >> 2 == 6 )
    goto LABEL_47;
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v23 + 12)) >> 2 != 7 )
  {
    v24 = *(unsigned __int8 *)(a1[6] + 135LL);
    LOBYTE(v24) = 2;
    WPP_RECORDER_SF_DDL(
      *(_QWORD *)(a1[7] + 80LL),
      v24,
      (unsigned __int8)HIBYTE(*(_WORD *)(v23 + 12)) >> 2,
      34,
      v28,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(a1[7] + 144LL),
      (unsigned __int8)HIBYTE(*(_WORD *)(v23 + 12)) >> 2);
    goto LABEL_42;
  }
  v25 = *(unsigned __int16 *)(v23 + 2) + 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v26 = a1[7];
    LODWORD(v32) = v25;
    LODWORD(v31) = *((_DWORD *)a2 + 12);
    LODWORD(v30) = *(_DWORD *)(v26 + 144);
    LODWORD(v29) = *(unsigned __int8 *)(a1[6] + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v26 + 80),
      5u,
      0xEu,
      0x21u,
      (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
      v29,
      v30,
      v31,
      v32);
  }
  *(_DWORD *)(v33 + 100) = v25;
  *((_DWORD *)a2 + 12) = v25;
LABEL_47:
  if ( v11 )
    *a6 = (__int64)(v16 - v34) >> 4;
  return v11;
}
