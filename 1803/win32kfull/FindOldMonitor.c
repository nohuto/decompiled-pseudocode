/*
 * XREFs of FindOldMonitor @ 0x1C007223C
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C005AA38 (xxxComputeProposedPerMonRect.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00721C4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall FindOldMonitor(__int64 a1, int *a2, int *a3)
{
  unsigned int v6; // r13d
  struct tagMONITORPOS *v7; // r12
  unsigned int v8; // edi
  int v9; // r15d
  int v10; // esi
  __int64 v11; // r8
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+28h] [rbp-D8h] BYREF
  int v18; // [rsp+2Ch] [rbp-D4h]
  int v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+34h] [rbp-CCh]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[72]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v25[77]; // [rsp+A8h] [rbp-58h] BYREF

  v21 = a1;
  memset(v24, 0, sizeof(v24));
  memset(v25, 0, 0x260uLL);
  v16 = 0;
  v6 = -1;
  v25[5] = v24;
  if ( !a3 )
    a3 = (int *)(*(_QWORD *)(a1 + 40) + 88LL);
  v7 = (struct tagMONITORPOS *)(a2 + 2);
  v8 = 0;
  v9 = a3[2] - *a3;
  v10 = a3[3] - a3[1];
  if ( *a2 <= 0 )
    return v6;
  while ( 1 )
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v24, v7);
    v11 = *(_DWORD *)(*(_QWORD *)(v21 + 40) + 288LL) >> 8;
    LOWORD(v11) = v11 & 0x1FF;
    v22 = *(_OWORD *)GetMonitorRectForDpi(v23, v25, v11);
    if ( (unsigned int)IntersectRect(&v17, a3, (int *)&v22) )
      break;
LABEL_5:
    v7 = (struct tagMONITORPOS *)((char *)v7 + 56);
    if ( (int)++v8 >= *a2 )
      return v6;
  }
  v13 = v19 - v17;
  v14 = v20 - v18;
  v19 = v13;
  v20 -= v18;
  if ( v13 != v9 || v14 != v10 )
  {
    v15 = v14 * v13;
    if ( v15 > v16 )
    {
      v16 = v15;
      v6 = v8;
    }
    goto LABEL_5;
  }
  return v8;
}
