/*
 * XREFs of ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C018F4C8
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C002FED0 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundFocus(_OWORD *a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _DWORD v11[34]; // [rsp+20h] [rbp-88h] BYREF

  memset(a1, 0, 0x78uLL);
  v2 = gpqForeground;
  if ( gpqForeground )
    v2 = *(_QWORD *)(gpqForeground + 120);
  if ( v2 )
  {
    v3 = INPUTDEST_FROM_PWND(v11, v2);
    v4 = *((_OWORD *)v3 + 1);
    *a1 = *(_OWORD *)v3;
    v5 = *((_OWORD *)v3 + 2);
    a1[1] = v4;
    v6 = *((_OWORD *)v3 + 3);
    a1[2] = v5;
    v7 = *((_OWORD *)v3 + 4);
    a1[3] = v6;
    v8 = *((_OWORD *)v3 + 5);
    a1[4] = v7;
    v9 = *((_OWORD *)v3 + 6);
    a1[5] = v8;
    *(_QWORD *)&v8 = *((_QWORD *)v3 + 14);
    a1[6] = v9;
    *((_QWORD *)a1 + 14) = v8;
  }
  return a1;
}
