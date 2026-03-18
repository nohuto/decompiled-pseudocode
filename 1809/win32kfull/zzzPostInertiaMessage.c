/*
 * XREFs of zzzPostInertiaMessage @ 0x1C0226BCC
 * Callers:
 *     ?xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C2560 (-xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     SendPTPEndInertia @ 0x1C01C2CB0 (SendPTPEndInertia.c)
 *     EditionPostInertiaMessage @ 0x1C01CEC40 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C02264B4 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

__int64 __fastcall zzzPostInertiaMessage(__int64 a1, __int64 a2, struct tagPOINT a3, struct tagPOINT a4, int a5)
{
  unsigned __int16 x; // bx
  unsigned int v7; // esi
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int16 y; // [rsp+44h] [rbp+1Ch]

  y = a3.y;
  x = a3.x;
  v7 = a1;
  if ( (unsigned int)(a1 - 571) > 1 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 136) & 0x10) != 0 )
  {
    if ( a5 )
      return xxxRouteSyntheticTouchpadToMT(a1, a3, a4, *(_QWORD *)(a2 + 8));
    return 0LL;
  }
  v9 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = *(_QWORD *)(v9 + 40);
  if ( *(char *)(v11 + 20) < 0
    || *(char *)(v11 + 19) < 0
    || __CFSHR__(*(_DWORD *)(a2 + 136), 2) && !*(_QWORD *)(v10 + 248) )
  {
    return 0LL;
  }
  v12 = *(_QWORD *)(a2 + 8);
  v13 = x | (unsigned __int64)(y << 16);
  if ( __CFSHR__(*(_DWORD *)(a2 + 136), 2) )
    return PostThreadMessage(*(_QWORD *)(v10 + 248), v7, v12, v13);
  else
    return PostMessage((struct tagWND *)v10, v7, v12, v13);
}
