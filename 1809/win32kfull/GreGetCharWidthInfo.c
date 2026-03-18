/*
 * XREFs of GreGetCharWidthInfo @ 0x1C011DB08
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C011DAB0 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  float v7; // xmm1_4
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+80h] [rbp+20h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v12 = 0;
    v11 = 0LL;
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v13, 0, 2u);
    v5 = v11;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
    if ( v5 && *(_QWORD *)(*(_QWORD *)(v5 + 96) + 3080LL) )
    {
      v6 = *(_DWORD *)(v5 + 696);
      if ( (*(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        *a2 = v6;
        a2[1] = *(_DWORD *)(v5 + 700);
        a2[2] = *(_DWORD *)(v5 + 704);
      }
      else
      {
        v7 = *(float *)(v5 + 680);
        v15 = 0;
        bFToL((float)(16 * v6) * v7, &v15, 0);
        *a2 = v15;
        v8 = 16 * *(_DWORD *)(v5 + 700);
        v15 = 0;
        bFToL((float)v8 * v7, &v15, 0);
        a2[1] = v15;
        v9 = 16 * *(_DWORD *)(v5 + 704);
        v15 = 0;
        bFToL((float)v9 * v7, &v15, 0);
        a2[2] = v15;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return v3;
}
