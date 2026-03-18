/*
 * XREFs of ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C0241D54
 * Callers:
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C0241C90 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     CALL_LPK @ 0x1C0151E74 (CALL_LPK.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0207A40 (xxxClientLpkDrawTextEx.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C0241E84 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 */

__int64 __fastcall DT_DrawStr(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        int a5,
        int a6,
        unsigned int a7,
        struct DRAWTEXTDATA *a8,
        int a9)
{
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-48h]

  v14 = a2 - 1;
  if ( (GreGetLayout(a1) & 1) == 0 )
    v14 = a2;
  if ( *((_DWORD *)a8 + 15) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    result = CALL_LPK(ThreadWin32Thread);
    if ( (_DWORD)result )
      return xxxClientLpkDrawTextEx(a1, v14, a3, a4, a5, a6, a7, (__int64)a8, 1, a9);
  }
  else
  {
    if ( a6 )
    {
      v17 = a5;
      (*((void (__fastcall **)(HDC, _QWORD, _QWORD, const unsigned __int16 *))a8 + 6))(a1, v14, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes(a1, a4, a5, a7, v17, a8, a9) - *((_DWORD *)a8 + 14);
  }
  return result;
}
