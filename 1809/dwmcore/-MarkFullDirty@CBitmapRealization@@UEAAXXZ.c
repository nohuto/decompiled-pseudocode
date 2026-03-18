/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x18006E460
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802284E0 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 33);
  if ( v1 )
    *(_BYTE *)(v1 + 205) = 0;
  **((_DWORD **)this + 24) = 0;
  *((_BYTE *)this + 184) = 1;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 16) + 40LL))((char *)this - 128);
}
