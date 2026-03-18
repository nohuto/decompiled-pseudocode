/*
 * XREFs of ??0CRIMBase@@IEAA@K@Z @ 0x1C0007730
 * Callers:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C0007640 (--0CBaseInput@@IEAA@K@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00077C0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

CRIMBase *__fastcall CRIMBase::CRIMBase(CRIMBase *this, int a2)
{
  char *v3; // rbx

  *(_QWORD *)this = &CRIMBase::`vftable';
  *((_QWORD *)this + 1) = -1LL;
  v3 = (char *)this + 152;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = -1LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 36) = a2;
  *((_DWORD *)this + 14) = 64;
  memset((char *)this + 152, 0, 0x380uLL);
  `vector constructor iterator'(
    v3,
    0x40uLL,
    0xEuLL,
    (void *(*)(void *))CRIMBase::SensorDispatcherObject::SensorDispatcherObject);
  return this;
}
