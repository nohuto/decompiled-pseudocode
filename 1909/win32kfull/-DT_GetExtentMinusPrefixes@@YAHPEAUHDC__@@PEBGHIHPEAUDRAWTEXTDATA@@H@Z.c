/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A53C
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A40C (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025A8D8 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     GetPrefixCount @ 0x1C025ACD8 (GetPrefixCount.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        HDC a1,
        WCHAR *a2,
        __int64 a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  unsigned int v8; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // r14
  __int64 v14; // r8
  struct _POINTL v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]

  v8 = a3;
  v16 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v17 = ThreadWin32Thread;
  GetPrefixCount(a2, v8, 0LL, 0LL);
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK(ThreadWin32Thread) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, v8, 0, a4, v14, 1, a7);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, a2, v8, &v16);
  else
    GreGetTextExtentW(a1, a2, v8, (struct tagSIZE *)&v16, 1);
  return (unsigned int)v16.x;
}
