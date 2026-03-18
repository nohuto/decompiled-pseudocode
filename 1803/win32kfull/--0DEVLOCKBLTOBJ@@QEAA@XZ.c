/*
 * XREFs of ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0099254
 * Callers:
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C00C9504 (GreGradientFill.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

DEVLOCKBLTOBJ *__fastcall DEVLOCKBLTOBJ::DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return this;
}
