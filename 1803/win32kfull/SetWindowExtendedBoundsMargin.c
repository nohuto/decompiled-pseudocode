/*
 * XREFs of SetWindowExtendedBoundsMargin @ 0x1C00708E8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowExtendedBoundsMargin(__int64 a1, _WORD *a2)
{
  _QWORD *v5; // rbx
  _BYTE v6[32]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v7; // [rsp+60h] [rbp-18h]
  __int16 v8; // [rsp+62h] [rbp-16h]
  __int16 v9; // [rsp+64h] [rbp-14h]
  __int16 v10; // [rsp+66h] [rbp-12h]
  __int64 v11; // [rsp+90h] [rbp+18h]

  if ( !(unsigned int)IsProcessDwm(**(_QWORD **)(gptiCurrent + 416LL)) )
    return 3221225485LL;
  if ( !(unsigned int)GetWindowCompositionInfo(a1, (__int64)v6) )
    return 3221225480LL;
  LOWORD(v11) = *a2;
  WORD1(v11) = a2[4];
  WORD2(v11) = a2[2];
  HIWORD(v11) = a2[6];
  if ( *a2 == v7 && a2[4] == v8 && a2[2] == v9 && a2[6] == v10 )
    return 0LL;
  v5 = (_QWORD *)Win32AllocPool(8LL, 2020832085LL);
  if ( !v5 )
    return 3221225495LL;
  *v5 = v11;
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
