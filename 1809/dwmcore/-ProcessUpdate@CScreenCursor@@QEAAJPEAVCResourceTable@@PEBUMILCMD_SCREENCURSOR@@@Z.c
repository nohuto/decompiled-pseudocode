/*
 * XREFs of ?ProcessUpdate@CScreenCursor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCREENCURSOR@@@Z @ 0x18007BFB8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenCursor::ProcessUpdate(
        CScreenCursor *this,
        struct CResourceTable *a2,
        const struct MILCMD_SCREENCURSOR *a3)
{
  int v4; // ebx

  v4 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CScreenCursor *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 14) = v4;
  (*(void (__fastcall **)(CScreenCursor *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
