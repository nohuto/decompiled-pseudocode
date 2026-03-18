/*
 * XREFs of Isoch_ProcessSegment @ 0x1C002EFE4
 * Callers:
 *     Isoch_CalculateBytesTransferred @ 0x1C002D624 (Isoch_CalculateBytesTransferred.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDDL @ 0x1C0032CE8 (WPP_RECORDER_SF_DDDDL.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C0032F2C (WPP_RECORDER_SF_DDL.c)
 */

char __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rbx
  char v11; // si
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
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  unsigned __int64 v27; // rbx
  int v28; // edx
  int v29; // ebx
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+98h] [rbp+10h]
  __int64 v38; // [rsp+A8h] [rbp+20h]

  v7 = *(_QWORD *)(a4 + 24);
  v11 = 0;
  v38 = *(_QWORD *)(a4 + 16);
  v37 = *a2;
  v12 = *(_DWORD *)(a4 + 44) & 0xFFFFFFF0;
  v13 = 16LL * a5;
  v14 = v12 + v38 - 16;
  v15 = v13 + v7;
  v16 = v13 + v38;
  if ( v13 + v38 > v14 )
    return v11;
  while ( 1 )
  {
    if ( v15 == *(_QWORD *)a3 )
      v11 = 1;
    v17 = (unsigned __int16)*(_DWORD *)(v16 + 12) >> 10;
    if ( v17 == 1 || v17 == 5 )
      break;
    if ( v17 == 6 )
      goto LABEL_56;
    if ( v17 != 7 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v18 = 32;
      goto LABEL_10;
    }
    if ( v11 )
      goto LABEL_43;
    *a7 = 0;
LABEL_41:
    v16 += 16LL;
    v15 += 16LL;
    if ( v16 > v14 )
      return v11;
  }
  if ( !v11 )
  {
    v24 = *(_DWORD *)(v16 + 8) & 0x1FFFF;
    goto LABEL_39;
  }
  v17 = *(unsigned __int8 *)(a3 + 11);
  if ( v17 > 0x1A )
  {
    if ( v17 == 27 )
      goto LABEL_40;
    if ( v17 == 28 )
    {
      *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
      goto LABEL_40;
    }
    if ( v17 != 31 && v17 != 36 )
      goto LABEL_31;
    goto LABEL_33;
  }
  if ( v17 == 26 )
    goto LABEL_33;
  if ( v17 < 2 )
    goto LABEL_31;
  if ( v17 <= 4 || v17 == 6 )
  {
LABEL_33:
    v25 = *(_DWORD *)(a3 + 8);
    v26 = *(_DWORD *)(v16 + 8);
    if ( (v26 & 0x1FFFFu) < (v25 & 0xFFFFFFu) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDDL(
        *(_QWORD *)(a1[7] + 80LL),
        *(unsigned __int8 *)(a1[6] + 135LL),
        v17,
        *(_DWORD *)(a3 + 8) & 0xFFFFFF,
        v32,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        v26,
        *(_BYTE *)(a3 + 8),
        *(_BYTE *)(a3 + 11));
      v25 = *(_DWORD *)(a3 + 8);
      v26 = *(_DWORD *)(v16 + 8);
    }
    v23 = v25 & 0xFFFFFF;
    v22 = v26 & 0x1FFFF;
LABEL_26:
    v24 = v22 - v23;
LABEL_39:
    *a7 += v24;
    goto LABEL_40;
  }
  if ( v17 == 20 )
    goto LABEL_40;
  if ( v17 == 23 )
  {
    if ( !*(_BYTE *)(a1[5] + 319LL) )
      goto LABEL_40;
    v20 = *(_DWORD *)(a3 + 8);
    v21 = *(_DWORD *)(v16 + 8);
    if ( (v21 & 0x1FFFFu) < (v20 & 0xFFFFFFu) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(a1[7] + 80LL),
        2u,
        0xEu,
        0x1Eu,
        (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids);
      v20 = *(_DWORD *)(a3 + 8);
      v21 = *(_DWORD *)(v16 + 8);
    }
    v22 = v21 & 0x1FFFF;
    v23 = v20 & 0xFFFFFF;
    goto LABEL_26;
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 31;
LABEL_10:
    v19 = *(unsigned __int8 *)(a1[6] + 135LL);
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_DDL(
      *(_QWORD *)(a1[7] + 80LL),
      v19,
      v17,
      v18,
      v32,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(a1[7] + 144LL),
      v17);
  }
LABEL_40:
  if ( !v11 )
    goto LABEL_41;
LABEL_43:
  v27 = v16;
  if ( v16 >= v14 )
    goto LABEL_56;
  while ( 2 )
  {
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v27 + 12)) >> 2 == 1
      || (unsigned __int8)HIBYTE(*(_WORD *)(v27 + 12)) >> 2 == 5 )
    {
LABEL_50:
      v27 += 16LL;
      if ( v27 >= v14 )
        goto LABEL_56;
      continue;
    }
    break;
  }
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v27 + 12)) >> 2 == 6 )
    goto LABEL_56;
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v27 + 12)) >> 2 != 7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v28) = 2;
      WPP_RECORDER_SF_DDL(
        *(_QWORD *)(a1[7] + 80LL),
        v28,
        (unsigned __int8)HIBYTE(*(_WORD *)(v27 + 12)) >> 2,
        34,
        v32,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        (unsigned __int8)HIBYTE(*(_WORD *)(v27 + 12)) >> 2);
    }
    goto LABEL_50;
  }
  v29 = *(unsigned __int16 *)(v27 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v30 = a1[7];
    LODWORD(v36) = v29 + 1;
    LODWORD(v35) = *((_DWORD *)a2 + 12);
    LODWORD(v34) = *(_DWORD *)(v30 + 144);
    LODWORD(v33) = *(unsigned __int8 *)(a1[6] + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v30 + 80),
      5u,
      0xEu,
      0x21u,
      (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
      v33,
      v34,
      v35,
      v36);
  }
  *(_DWORD *)(v37 + 100) = v29 + 1;
  *((_DWORD *)a2 + 12) = v29 + 1;
LABEL_56:
  if ( v11 )
    *a6 = (__int64)(v16 - v38) >> 4;
  return v11;
}
