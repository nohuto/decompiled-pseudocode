/*
 * XREFs of ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x18019AAC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152390 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::ProcessUpdate(
        CHwndBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_HWNDBITMAP *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v3 = *((_QWORD *)a3 + 1);
  if ( v3 == *((_QWORD *)this + 12) )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x194u);
  }
  else
  {
    *((_QWORD *)this + 12) = v3;
    v4 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 120) = 1;
    v5 = CWindowManager::AddHwndBitmap(*(CWindowManager **)(v4 + 80), this);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x190u);
  }
  return v7;
}
