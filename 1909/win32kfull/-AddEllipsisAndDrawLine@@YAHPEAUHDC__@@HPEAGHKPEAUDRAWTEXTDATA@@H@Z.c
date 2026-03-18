/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A110
 * Callers:
 *     DrawTextExWorker @ 0x1C025AA5C (DrawTextExWorker.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A348 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025A8D8 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        HDC a1,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  HDC v6; // rbx
  unsigned __int16 *v7; // r15
  unsigned __int16 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int16 *v10; // r14
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 ThreadWin32Thread; // rax
  int v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h]
  HDC v20; // [rsp+50h] [rbp-B0h]
  _QWORD v21[3]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v22; // [rsp+70h] [rbp-90h] BYREF

  memset(v21, 0, sizeof(v21));
  v6 = a1;
  v7 = a3;
  v8 = 0LL;
  v20 = a1;
  v19 = a2;
  v18 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3);
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(v6, v7, &v18, a6, a5, a6, v17) )
  {
    v9 = v18;
    if ( v18 + 4 > 128 )
    {
      result = UserRtlAllocMem((unsigned int)(2 * (v18 + 4)));
      v8 = (unsigned __int16 *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v21, (__int64)Win32FreePool);
      v10 = v8;
    }
    else
    {
      v10 = &v22;
    }
    v12 = v9;
    memmove(v10, v7, 2 * v9);
    v13 = v9 + 3;
    *(_QWORD *)&v10[v12] = 0x2E002E002ELL;
    v7 = v10;
    v6 = v20;
    v18 = v13;
  }
  else
  {
    v13 = v18;
  }
  DT_DrawJustifiedLine(v6, v19, v7, v13, a5, a6, v17);
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
    *(_QWORD *)(ThreadWin32Thread + 16) = v21[0];
    UserRtlFreeMem(v8);
    return (unsigned int)v18;
  }
  return v13;
}
