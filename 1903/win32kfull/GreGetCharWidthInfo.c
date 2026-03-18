/*
 * XREFs of GreGetCharWidthInfo @ 0x1C0124934
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C01248D0 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
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
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v13 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)v11, 0, 2u);
    v5 = v13;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v13 + 504));
    if ( v5 && *(_QWORD *)(*(_QWORD *)(v5 + 96) + 3080LL) )
    {
      v6 = *(_DWORD *)(v5 + 696);
      if ( (*(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        *a2 = v6;
        a2[1] = *(_DWORD *)(v5 + 700);
        a2[2] = *(_DWORD *)(v5 + 704);
      }
      else
      {
        v8 = *(float *)(v5 + 680);
        v12 = 0;
        bFToL((float)(16 * v6) * v8, &v12, 0);
        v9 = v12;
        v12 = 0;
        *a2 = v9;
        bFToL((float)(16 * *(_DWORD *)(v5 + 700)) * v8, &v12, 0);
        v10 = v12;
        v12 = 0;
        a2[1] = v10;
        bFToL((float)(16 * *(_DWORD *)(v5 + 704)) * v8, &v12, 0);
        a2[2] = v12;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
    if ( v11[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  }
  return v3;
}
