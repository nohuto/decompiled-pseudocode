/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C020A3D0
 * Callers:
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[4]; // [rsp+20h] [rbp-88h] BYREF
  HDC v11[10]; // [rsp+40h] [rbp-68h] BYREF

  v2 = a2[2];
  if ( !v2 )
    v2 = (__int64 *)**a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v10;
  v10[1] = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
  xxxBeginPaint(a1, (__int64)v11);
  v6 = (__int64)a2[2];
  if ( !v6 )
    v6 = **a2;
  xxxMenuDraw(v11[0], v6, (ULONG_PTR)a1);
  xxxEndPaint(a1, v11);
  return ThreadUnlock1(v8, v7);
}
