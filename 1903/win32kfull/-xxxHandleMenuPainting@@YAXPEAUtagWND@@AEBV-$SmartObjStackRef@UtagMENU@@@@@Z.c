/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221E70
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     xxxEndPaint @ 0x1C01040B0 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  HDC v17[10]; // [rsp+40h] [rbp-68h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v17, 0, 0x48uLL);
  v7 = a2[2];
  if ( !v7 )
    v7 = (__int64 *)**a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v14 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
  v15 = v7;
  if ( v7 )
    HMLockObject(v7);
  xxxBeginPaint(a1, (__int64)v17);
  v9 = (__int64)a2[2];
  if ( !v9 )
    v9 = **a2;
  xxxMenuDraw(v17[0], v9, (ULONG_PTR)a1);
  xxxEndPaint(a1, v17);
  return ThreadUnlock1(v11, v10, v12);
}
