/*
 * XREFs of ??0VIDPNSOURCEINFO@@QEAA@XZ @ 0x1C001B9C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

VIDPNSOURCEINFO *__fastcall VIDPNSOURCEINFO::VIDPNSOURCEINFO(VIDPNSOURCEINFO *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 3) = -1;
  memset((char *)this + 16, 0, 0x20uLL);
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  memset((char *)this + 64, 0, 0xA0uLL);
  return this;
}
