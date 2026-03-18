/*
 * XREFs of INPUTDEST_FROM_BASEWND @ 0x1C015BBDC
 * Callers:
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015B5A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C0182190 (HandleBaseWindowDestruction.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_BASEWND(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  memset(a1, 0, 0x78uLL);
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 1;
    a1[29] = *(_DWORD *)(*(_QWORD *)(v4 + 416) + 1080LL);
  }
  return a1;
}
