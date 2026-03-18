/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800CA4B0
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x180261E70 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
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
