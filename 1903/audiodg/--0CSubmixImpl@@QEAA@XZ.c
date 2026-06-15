/*
 * XREFs of ??0CSubmixImpl@@QEAA@XZ @ 0x140010D30
 * Callers:
 *     ??0CStreamGroup@@QEAA@XZ @ 0x140010CE4 (--0CStreamGroup@@QEAA@XZ.c)
 *     ??0CProcessSubmix@@QEAA@XZ @ 0x140010F54 (--0CProcessSubmix@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CSubmixImpl *__fastcall CSubmixImpl::CSubmixImpl(CSubmixImpl *this)
{
  CSubmixImpl *result; // rax

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 28) = 10;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10;
  *((_DWORD *)this + 42) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 176), 0, 0);
  *((_QWORD *)this + 27) = 0LL;
  result = this;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_BYTE *)this + 296) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_WORD *)this + 156) = 0;
  return result;
}
