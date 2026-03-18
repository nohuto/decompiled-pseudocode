/*
 * XREFs of ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0042814
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00420A8 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0013574 (DrvGetCurrentDpiInfoFromHDev.c)
 */

void __fastcall GetMonitorDpiInfo(__int64 a1, __int64 a2, struct tagRECT *a3, struct _DPI_INFORMATION *a4)
{
  _DWORD *v4; // r8
  _OWORD *v5; // r9
  char v6; // r10
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // ecx
  _OWORD v13[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+70h] [rbp-10h]

  if ( (int)DrvGetCurrentDpiInfoFromHDev(a1, (__int64)v13) < 0 )
  {
    v12 = v4[2] - *v4;
    *(_QWORD *)&v13[0] = 0x6400000064LL;
    *((_QWORD *)&v13[0] + 1) = 0x6400000064LL;
    LODWORD(v14) = v12;
    DWORD1(v14) = v4[3] - v4[1];
    HIDWORD(v17) ^= (BYTE12(v17) ^ (unsigned __int8)(32 * v6)) & 0x20;
    DWORD2(v17) = 1;
  }
  v7 = v13[1];
  *v5 = v13[0];
  v8 = v14;
  v5[1] = v7;
  v9 = v15;
  v5[2] = v8;
  v10 = v16;
  v5[3] = v9;
  v11 = v17;
  v5[4] = v10;
  v5[5] = v11;
}
