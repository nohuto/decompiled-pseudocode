/*
 * XREFs of xxxSwitchWndProc @ 0x1C01E02C0
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01D0830 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     xxxCancelCoolSwitch @ 0x1C0124534 (xxxCancelCoolSwitch.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, a3, a4, 672, 1, &v11) )
    return v11;
  **((_QWORD **)a1 + 33) = a1;
  switch ( a2 )
  {
    case 1u:
      zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 14) + 88LL));
      break;
    case 0x10u:
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
      xxxCancelCoolSwitch();
      break;
    case 0x14u:
    case 0x3Au:
      v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v12;
      v12[1] = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
      xxxPaintSwitchWindow(a1);
      ThreadUnlock1(v10, v9);
      return 0LL;
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
