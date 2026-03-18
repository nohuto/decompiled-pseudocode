/*
 * XREFs of ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A40C
 * Callers:
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A348 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A53C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
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
  __int64 v14; // r8
  unsigned int v15; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-48h]

  v15 = a2 - 1;
  if ( (GreGetLayout(a1) & 1) == 0 )
    v15 = a2;
  if ( *((_DWORD *)a8 + 15) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
    result = CALL_LPK(ThreadWin32Thread);
    if ( (_DWORD)result )
      return xxxClientLpkDrawTextEx(a1, v15, a3, a4, a5, a6, a7, (__int64)a8, 1, a9);
  }
  else
  {
    if ( a6 )
    {
      v18 = a5;
      (*((void (__fastcall **)(HDC, _QWORD, _QWORD, const unsigned __int16 *))a8 + 6))(a1, v15, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes(a1, a4, a5, a7, v18, a8, a9) - *((_DWORD *)a8 + 14);
  }
  return result;
}
