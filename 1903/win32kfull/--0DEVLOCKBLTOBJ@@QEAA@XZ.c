/*
 * XREFs of ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C007668C
 * Callers:
 *     GreGradientFill @ 0x1C0079484 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

DEVLOCKBLTOBJ *__fastcall DEVLOCKBLTOBJ::DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 256;
  *((_QWORD *)this + 14) = 0LL;
  *((_WORD *)this + 60) = 256;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return this;
}
