/*
 * XREFs of ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C004F024
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C004EDF0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C002FED0 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundCapture(_OWORD *a1)
{
  __int64 v2; // rdx
  _DWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _DWORD v11[34]; // [rsp+20h] [rbp-88h] BYREF

  memset(a1, 0, 0x78uLL);
  v2 = gpqForeground;
  if ( gpqForeground )
    v2 = *(_QWORD *)(gpqForeground + 112);
  if ( v2 )
  {
    v4 = INPUTDEST_FROM_PWND(v11, v2);
    v5 = *((_OWORD *)v4 + 1);
    *a1 = *(_OWORD *)v4;
    v6 = *((_OWORD *)v4 + 2);
    a1[1] = v5;
    v7 = *((_OWORD *)v4 + 3);
    a1[2] = v6;
    v8 = *((_OWORD *)v4 + 4);
    a1[3] = v7;
    v9 = *((_OWORD *)v4 + 5);
    a1[4] = v8;
    v10 = *((_OWORD *)v4 + 6);
    a1[5] = v9;
    *(_QWORD *)&v9 = *((_QWORD *)v4 + 14);
    a1[6] = v10;
    *((_QWORD *)a1 + 14) = v9;
  }
  return a1;
}
