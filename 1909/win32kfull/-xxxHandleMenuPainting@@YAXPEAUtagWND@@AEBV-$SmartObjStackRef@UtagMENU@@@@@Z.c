/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221930
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxEndPaint @ 0x1C00E01C0 (xxxEndPaint.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  HDC v16[10]; // [rsp+40h] [rbp-68h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  memset(v16, 0, 0x48uLL);
  v6 = a2[2];
  if ( !v6 )
    v6 = (__int64 *)**a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
  v13 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
  v14 = v6;
  if ( v6 )
    HMLockObject(v6);
  xxxBeginPaint(a1, (__int64)v16);
  v8 = (__int64)a2[2];
  if ( !v8 )
    v8 = **a2;
  xxxMenuDraw(v16[0], v8, (ULONG_PTR)a1);
  xxxEndPaint(a1, v16);
  return ThreadUnlock1(v10, v9, v11);
}
