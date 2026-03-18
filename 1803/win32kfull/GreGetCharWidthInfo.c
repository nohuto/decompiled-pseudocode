/*
 * XREFs of GreGetCharWidthInfo @ 0x1C0100AB8
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C0100A60 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, int *a2)
{
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  float v8; // xmm1_4
  int v9; // r8d
  int v10; // r8d
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+60h] [rbp+20h] BYREF

  v3 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v13 = 0;
    v12 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v11, 0, 2u);
    v5 = v12;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v12 + 496));
    if ( v5 && *(_QWORD *)(*(_QWORD *)(v5 + 80) + 3072LL) )
    {
      v6 = *(_DWORD *)(v5 + 680);
      if ( (*(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 352LL) & 0x802) == 0x802 )
      {
        *a2 = v6;
        a2[1] = *(_DWORD *)(v5 + 684);
        a2[2] = *(_DWORD *)(v5 + 688);
      }
      else
      {
        v8 = *(float *)(v5 + 664);
        v14 = 0;
        bFToL((float)(16 * v6) * v8, &v14, 0);
        v9 = v14;
        v14 = 0;
        *a2 = v9;
        bFToL((float)(16 * *(_DWORD *)(v5 + 684)) * v8, &v14, 0);
        v10 = v14;
        v14 = 0;
        a2[1] = v10;
        bFToL((float)(16 * *(_DWORD *)(v5 + 688)) * v8, &v14, 0);
        a2[2] = v14;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    if ( v11[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  }
  return v3;
}
