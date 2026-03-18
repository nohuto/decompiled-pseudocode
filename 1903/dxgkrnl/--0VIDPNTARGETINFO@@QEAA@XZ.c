/*
 * XREFs of ??0VIDPNTARGETINFO@@QEAA@XZ @ 0x1C001B9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

VIDPNTARGETINFO *__fastcall VIDPNTARGETINFO::VIDPNTARGETINFO(VIDPNTARGETINFO *this)
{
  *(_DWORD *)this = -1;
  *((_WORD *)this + 2) = 0;
  *((_BYTE *)this + 6) = 0;
  *((_QWORD *)this + 1) = 0LL;
  return this;
}
