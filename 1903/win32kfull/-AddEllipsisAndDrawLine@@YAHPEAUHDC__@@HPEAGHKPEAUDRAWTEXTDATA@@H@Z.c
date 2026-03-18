/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A850
 * Callers:
 *     DrawTextExWorker @ 0x1C025B19C (DrawTextExWorker.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025AA88 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025B018 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        HDC a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  HDC v6; // rbx
  unsigned __int16 *v7; // r15
  unsigned __int16 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int16 *v10; // r14
  __int64 result; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 ThreadWin32Thread; // rax
  int v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h]
  HDC v22; // [rsp+50h] [rbp-B0h]
  _QWORD v23[3]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v24; // [rsp+70h] [rbp-90h] BYREF

  memset(v23, 0, sizeof(v23));
  v6 = a1;
  v7 = a3;
  v8 = 0LL;
  v22 = a1;
  v21 = a2;
  v20 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  if ( (a5 & 0x8000) != 0 && (unsigned int)NeedsEndEllipsis(v6, v7, &v20, a6, a5, a6, v19) )
  {
    v9 = v20;
    if ( v20 + 4 > 128 )
    {
      result = UserRtlAllocMem((unsigned int)(2 * (v20 + 4)));
      v8 = (unsigned __int16 *)result;
      if ( !result )
        return result;
      PushW32ThreadLock(result, v23, (__int64)Win32FreePool, v12);
      v10 = v8;
    }
    else
    {
      v10 = &v24;
    }
    v13 = v9;
    memmove(v10, v7, 2 * v9);
    v14 = v9 + 3;
    *(_QWORD *)&v10[v13] = 0x2E002E002ELL;
    v7 = v10;
    v6 = v22;
    v20 = v14;
  }
  else
  {
    v14 = v20;
  }
  DT_DrawJustifiedLine(v6, v21, v7, v14, a5, a6, v19);
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
    *(_QWORD *)(ThreadWin32Thread + 16) = v23[0];
    UserRtlFreeMem(v8);
    return (unsigned int)v20;
  }
  return v14;
}
