/*
 * XREFs of SetWindowExtendedBoundsMargin @ 0x1C008BF7C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SetWindowExtendedBoundsMargin(__int64 a1, _WORD *a2)
{
  _QWORD *v5; // rbx
  _WORD v6[28]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+90h] [rbp+18h]

  if ( !(unsigned int)IsProcessDwm(**(_QWORD **)(gptiCurrent + 416LL)) )
    return 3221225506LL;
  memset(v6, 0, 0x28uLL);
  if ( !(unsigned int)GetWindowCompositionInfo(a1, v6) )
    return 3221225480LL;
  LOWORD(v7) = *a2;
  WORD1(v7) = a2[4];
  WORD2(v7) = a2[2];
  HIWORD(v7) = a2[6];
  if ( *a2 == v6[16] && a2[4] == v6[17] && a2[2] == v6[18] && a2[6] == v6[19] )
    return 0LL;
  v5 = (_QWORD *)Win32AllocPool(8LL, 2020832085LL);
  if ( !v5 )
    return 3221225495LL;
  *v5 = v7;
  if ( (unsigned int)PostEventMessageEx(
                       *(struct tagTHREADINFO **)(a1 + 16),
                       *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
                       0x1Cu,
                       a1,
                       0,
                       (__int64)v5,
                       0LL,
                       0LL) )
    return 0LL;
  Win32FreePool(v5);
  return 3221225473LL;
}
