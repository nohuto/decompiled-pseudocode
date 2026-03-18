/*
 * XREFs of ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C006F3E0
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C006EF3C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C006F4AC (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 */

struct tagWND *__fastcall TrackZorder(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        HWND *a5,
        HWND *a6)
{
  __int64 v7; // rsi
  HWND v8; // rax

  v7 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)a1);
  if ( !v7 )
    return 0LL;
  v8 = *a6;
  if ( *a6 )
    v8 = *(HWND *)(gpKernelHandleTable + 24LL * (unsigned __int16)v8);
  if ( TrackBackground(a1, (struct tagWND *)v7, a2, a3, a4, (struct tagWND *)v8) )
  {
    *a6 = *(HWND *)a1;
  }
  else
  {
    if ( ((*(_BYTE *)(*(_QWORD *)(v7 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v7 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
      a5 = a6;
    if ( *a5 )
      *((_QWORD *)a1 + 1) = *a5;
    *a5 = *(HWND *)a1;
  }
  return (struct tagWND *)v7;
}
