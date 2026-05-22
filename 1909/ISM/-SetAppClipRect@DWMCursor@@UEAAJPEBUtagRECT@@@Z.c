/*
 * XREFs of ?SetAppClipRect@DWMCursor@@UEAAJPEBUtagRECT@@@Z @ 0x180009F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::SetAppClipRect(DWMCursor *this, const struct tagRECT *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rdx

  v2 = (__int128)*a2;
  v3 = 1LL;
  *(_OWORD *)((char *)this + 120) = v2;
  if ( *((_DWORD *)this + 32) != *((_DWORD *)this + 30) + 1 || *((_DWORD *)this + 33) != *((_DWORD *)this + 31) + 1 )
    LOBYTE(v3) = 0;
  return (*(__int64 (__fastcall **)(DWMCursor *, __int64))(*(_QWORD *)this + 72LL))(this, v3);
}
