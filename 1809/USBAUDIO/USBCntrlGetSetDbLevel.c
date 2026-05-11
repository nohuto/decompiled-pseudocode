/*
 * XREFs of USBCntrlGetSetDbLevel @ 0x1C002D560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     log10 @ 0x1C000F8C8 (log10.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     pow @ 0x1C0010490 (pow.c)
 */

__int64 __fastcall USBCntrlGetSetDbLevel(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7)
{
  __int64 v9; // r11
  unsigned int *v10; // rsi
  __int64 v11; // r13
  int v13; // r9d
  int v14; // r15d
  int v15; // ebp
  void *v16; // r10
  int v17; // ebx
  int v18; // edi
  double v19; // xmm0_8
  float v20; // xmm2_4
  int v21; // eax
  unsigned int v22; // eax
  int v23; // edi
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // edx
  int v27; // edx
  int v28; // eax
  float v29; // xmm1_4
  unsigned int v31; // [rsp+90h] [rbp+18h] BYREF

  v9 = a1;
  v10 = (unsigned int *)(*(_QWORD *)(a2 + 128) + 32LL * a5);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( a3 < 4 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      0xAu,
      0xAu,
      (__int64)&WPP_5429d2dbdad8394cbb96feb220daa312_Traceguids);
    return 3221225990LL;
  }
  v13 = *(_DWORD *)(a2 + 76);
  v14 = a6;
  v31 = 0;
  if ( v13 == 8 )
  {
    v16 = USBHwGetSetShort;
    v15 = 256;
    v13 = 8;
    if ( *(_BYTE *)(v11 + 6) && (a6 & 0x80u) == 0 )
    {
      v17 = v10[7];
      v18 = v10[6];
      v19 = pow(10.0, (float)((float)((float)*a4 * 0.000015258789) - (float)((float)v17 * 0.000015258789)) / 20.0);
      v9 = a1;
      v16 = USBHwGetSetShort;
      v20 = v19;
      *a4 = (int)(float)((float)(v20 * (float)(v17 - v18)) + (float)v18);
      v13 = *(_DWORD *)(a2 + 76);
    }
  }
  else
  {
    v15 = 0x4000;
    v16 = USBHwGetSetByte;
  }
  if ( (v14 & 0x80) == 0 )
  {
    v21 = *a4;
    if ( *a4 <= (int)v10[7] )
    {
      if ( v21 < (int)v10[6] )
      {
        v22 = 0xFF800000 / v15;
        goto LABEL_12;
      }
    }
    else
    {
      v21 = v10[7];
    }
    v22 = v21 / v15;
LABEL_12:
    v31 = v22;
  }
  v23 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *, _BYTE))v16)(
          v9,
          *(unsigned int *)(a2 + 80),
          v10[2],
          (unsigned int)(v13 - 6),
          &v31,
          v14);
  if ( v23 >= 0 )
  {
    if ( (v14 & 0x80) != 0 )
    {
      if ( v14 == 131 && (v24 = *(_QWORD *)(v11 + 32), *(_WORD *)(v24 + 8) == 3468) )
      {
        v25 = v31;
        if ( *(_WORD *)(v24 + 10) == 1 )
          v25 = 0;
        v31 = v25;
      }
      else
      {
        LOWORD(v25) = v31;
      }
      v26 = (char)v25;
      if ( v15 == 256 )
        v26 = (__int16)v25;
      v27 = v15 * v26;
      *a4 = v27;
      if ( *(_DWORD *)(a2 + 76) == 8 && *(_BYTE *)(v11 + 6) )
      {
        v28 = *(_DWORD *)(a2 + 96);
        if ( _bittest(&v28, a5) )
        {
          v29 = log10((float)((float)(int)(v27 - v10[6]) / (float)(int)(v10[7] - v10[6])));
          *a4 = (int)(float)((float)(v29 * 20.0) * 65536.0);
        }
      }
    }
    *a7 = 4;
  }
  return (unsigned int)v23;
}
