/*
 * XREFs of INPUTDEST_FROM_BASEWND @ 0x1C01312E4
 * Callers:
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C0151230 (HandleBaseWindowDestruction.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_BASEWND(_DWORD *a1, __int64 a2)
{
  memset(a1, 0, 0xB0uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 9) = a2;
    a1[21] = 1;
  }
  return a1;
}
