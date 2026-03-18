/*
 * XREFs of CreateCacheDC @ 0x1C003D880
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003C510 (GetMonitorDC.c)
 *     InitUserScreen @ 0x1C00761B4 (InitUserScreen.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     GreGetBounds @ 0x1C001BE60 (GreGetBounds.c)
 */

__int64 __fastcall CreateCacheDC(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // r9d
  __int64 v8; // rcx
  __int64 DisplayDC; // r14
  __int64 StyleWindow; // rdx
  unsigned int v11; // eax
  __int64 v13; // rdx

  v6 = Win32AllocPool(96LL, 0x63647355u);
  if ( !v6 )
    return 0LL;
  if ( a3 )
    v8 = *(_QWORD *)(a3 + 232);
  else
    v8 = *(_QWORD *)(gpDispInfo + 40);
  DisplayDC = GreCreateDisplayDC(v8, 0, 2LL, v7);
  if ( !DisplayDC )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() < 0 )
      StyleWindow = 0LL;
    else
      StyleWindow = GetStyleWindow(a1, 2848LL);
    v11 = a2 & 0xFFFFBFFF;
    if ( StyleWindow )
      v11 = a2;
    a2 = v11;
  }
  else
  {
    StyleWindow = 0LL;
  }
  *(_QWORD *)v6 = *(_QWORD *)(gpDispInfo + 24);
  *(_QWORD *)(gpDispInfo + 24) = v6;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 8) = DisplayDC;
  *(_DWORD *)(v6 + 64) = a2;
  *(_QWORD *)(v6 + 16) = a1;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = StyleWindow;
  *(_QWORD *)(v6 + 88) = a3;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000002, 0, 0);
    *(_QWORD *)(v6 + 72) = gptiCurrent;
    *(_QWORD *)(a1 + 248) = v6;
    if ( (a2 & 0x4000) != 0 && (int)IsUpdateRedirectedDCESupported() >= 0 )
      UpdateRedirectedDCE(v6, 0LL);
  }
  else
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000012, 0, 0);
    *(_QWORD *)(v6 + 72) = 0LL;
    ++gnDCECount;
  }
  if ( (a2 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 136);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v13 + 40) = v6;
    *(_DWORD *)(v6 + 64) |= 0x1000u;
    if ( (int)IsRevalidateDCESupported() >= 0 )
      RevalidateDCE(v6);
  }
  if ( *(_QWORD *)(gpDispInfo + 32) )
    GreGetBounds(*(_QWORD *)(v6 + 8), 0LL, 1);
  return *(_QWORD *)(v6 + 8);
}
