/*
 * XREFs of SetWindowExtendedBoundsMargin @ 0x1C010F804
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?AreMarginsEqual@@YA_NAEBUFRAME_MARGIN@@0@Z @ 0x1C010F914 (-AreMarginsEqual@@YA_NAEBUFRAME_MARGIN@@0@Z.c)
 */

__int64 __fastcall SetWindowExtendedBoundsMargin(struct tagTHREADINFO **a1, _WORD *a2)
{
  _QWORD *v5; // rbx
  _BYTE v6[32]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v7[24]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v8; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)IsProcessDwm(**(_QWORD **)(gptiCurrent + 424LL)) )
    return 3221225506LL;
  if ( !(unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v6) )
    return 3221225480LL;
  LOWORD(v8) = *a2;
  WORD1(v8) = a2[4];
  WORD2(v8) = a2[2];
  HIWORD(v8) = a2[6];
  if ( AreMarginsEqual((const struct FRAME_MARGIN *)&v8, (const struct FRAME_MARGIN *)v7) )
    return 0LL;
  v5 = (_QWORD *)Win32AllocPool(8LL, 2020832085LL);
  if ( !v5 )
    return 3221225495LL;
  *v5 = v8;
  if ( (unsigned int)PostEventMessageEx(
                       a1[2],
                       *((_QWORD *)a1[2] + 54),
                       0x1Cu,
                       (InputTransform *)a1,
                       0,
                       (__int64)v5,
                       0LL,
                       0LL) )
    return 0LL;
  Win32FreePool(v5);
  return 3221225473LL;
}
