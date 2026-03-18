/*
 * XREFs of FindOldMonitor @ 0x1C00CDC10
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxComputeProposedPerMonRect @ 0x1C00CDB6C (xxxComputeProposedPerMonRect.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00CDDB4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall FindOldMonitor(__int64 a1, _DWORD *a2, __int128 *a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // r13d
  __int128 v8; // xmm0
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // edi
  struct tagMONITORPOS *i; // r15
  int v13; // eax
  int v14; // ecx
  unsigned int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh]
  int v20; // [rsp+38h] [rbp-C8h]
  int v21; // [rsp+3Ch] [rbp-C4h]
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __m128i v23; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[72]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[41]; // [rsp+B8h] [rbp-48h] BYREF

  v22 = a1;
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v6 = -1;
  v7 = 0;
  v26[5] = v25;
  if ( a3 )
    v8 = *a3;
  else
    v8 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  v17 = v8;
  v9 = HIDWORD(v8) - DWORD1(v8);
  v10 = DWORD2(v8) - v8;
  if ( DWORD2(v8) == (_DWORD)v8 )
  {
    v10 = 1;
    DWORD2(v17) = DWORD2(v8) + 1;
  }
  if ( !v9 )
  {
    ++HIDWORD(v17);
    v9 = 1;
  }
  v11 = 0;
  for ( i = (struct tagMONITORPOS *)(a2 + 2); (signed int)v11 < *a2; ++v11 )
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v25, i);
    v23 = *GetMonitorRectForDpi(&v24, (__int64)v26, (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL) >> 8) & 0x1FF);
    if ( (unsigned int)IntersectRect(&v18, (int *)&v17, v23.m128i_i32) )
    {
      v13 = v20 - v18;
      v14 = v21 - v19;
      v20 = v13;
      v21 -= v19;
      if ( v13 == v10 && v14 == v9 )
        return v11;
      v16 = v14 * v13;
      if ( v16 > v7 )
      {
        v7 = v16;
        v6 = v11;
      }
    }
    i = (struct tagMONITORPOS *)((char *)i + 48);
  }
  return v6;
}
