/*
 * XREFs of xxxSwitchWndProc @ 0x1C01F61A0
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E5510 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     xxxCancelCoolSwitch @ 0x1C010ABE4 (xxxCancelCoolSwitch.c)
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, HICON a4)
{
  unsigned int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  struct tagWND *v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+58h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v7 = a2;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, a3, a4, 672, 1, &v12) )
    return v12;
  **((_QWORD **)a1 + 35) = a1;
  switch ( v7 )
  {
    case 1u:
      zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 17) + 88LL));
      break;
    case 0x10u:
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
      xxxCancelCoolSwitch();
      break;
    case 0x14u:
    case 0x3Au:
      v13 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v13;
      v14 = a1;
      HMLockObject(a1);
      xxxPaintSwitchWindow(a1);
      ThreadUnlock1(v10, v9, v11);
      return 0LL;
  }
  return xxxDefWindowProc(a1, v7, a3, a4);
}
