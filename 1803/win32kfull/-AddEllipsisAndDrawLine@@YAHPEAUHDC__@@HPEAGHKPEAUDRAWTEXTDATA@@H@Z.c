/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BB50
 * Callers:
 *     DrawTextExWorker @ 0x1C022C45C (DrawTextExWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BD64 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C022C2E8 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        HDC a1,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  unsigned __int16 *v7; // rsi
  __int64 v9; // rdi
  unsigned __int16 *v10; // rbp
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 ThreadWin32Thread; // rax
  int v16; // [rsp+30h] [rbp-198h]
  int v17; // [rsp+40h] [rbp-188h] BYREF
  int v18; // [rsp+48h] [rbp-180h]
  _QWORD v19[4]; // [rsp+50h] [rbp-178h] BYREF
  unsigned __int16 v20; // [rsp+70h] [rbp-158h] BYREF

  v7 = 0LL;
  v18 = a2;
  v17 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(a1, a3, &v17, a6, a5, a6, v16) )
  {
    v9 = v17;
    if ( v17 + 4 > 128 )
    {
      result = UserRtlAllocMem((unsigned int)(2 * (v17 + 4)));
      v7 = (unsigned __int16 *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v19, (__int64)Win32FreePool);
      v10 = v7;
    }
    else
    {
      v10 = &v20;
    }
    v12 = v9;
    memmove(v10, a3, 2 * v9);
    v13 = v9 + 3;
    *(_QWORD *)&v10[v12] = 0x2E002E002ELL;
    a3 = v10;
    v17 = v13;
  }
  else
  {
    v13 = v17;
  }
  DT_DrawJustifiedLine(a1, v18, a3, v13, a5, a6, v16);
  if ( v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
    *(_QWORD *)(ThreadWin32Thread + 16) = v19[0];
    UserRtlFreeMem(v7);
    return (unsigned int)v17;
  }
  return v13;
}
