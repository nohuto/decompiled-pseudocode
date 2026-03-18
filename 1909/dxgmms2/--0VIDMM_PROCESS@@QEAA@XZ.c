/*
 * XREFs of ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C0065E50
 * Callers:
 *     VidMmCreateProcess @ 0x1C0001F10 (VidMmCreateProcess.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 20) = -1;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 58) = -1;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 64) = -1;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) |= 1u;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  memset((char *)this + 128, 0, 0x50uLL);
  return this;
}
