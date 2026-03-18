/*
 * XREFs of ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BF58
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BE28 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C022C2E8 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C01E1E54 (xxxClientLpkDrawTextEx.c)
 *     GetPrefixCount @ 0x1C022C6B0 (GetPrefixCount.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        HDC a1,
        WCHAR *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // r14
  __int64 v13; // r8
  struct tagSIZE v15; // [rsp+58h] [rbp-40h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]

  v15 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  v16 = ThreadWin32Thread;
  GetPrefixCount(a2, a3, 0LL, 0LL);
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK(ThreadWin32Thread) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, a3, 0, a4, v13, 1, a7);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, a2, a3, &v15);
  else
    GreGetTextExtentW(a1, a2, a3, &v15, 1);
  return (unsigned int)v15.cx;
}
