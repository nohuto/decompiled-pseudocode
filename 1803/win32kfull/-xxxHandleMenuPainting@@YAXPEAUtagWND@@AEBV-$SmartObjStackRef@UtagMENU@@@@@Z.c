/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01E44E4
 * Callers:
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00E2444 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[4]; // [rsp+20h] [rbp-88h] BYREF
  HDC v12[10]; // [rsp+40h] [rbp-68h] BYREF

  v2 = a2[2];
  if ( !v2 )
    v2 = (__int64 *)**a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v11;
  v11[1] = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
  xxxBeginPaint(a1, (__int64)v12);
  v6 = (__int64)a2[2];
  if ( !v6 )
    v6 = **a2;
  xxxMenuDraw(v12[0], v6, (__int64)a1);
  xxxEndPaint(a1, v12);
  return ThreadUnlock1(v8, v7, v9);
}
