/*
 * XREFs of ??0CRIMBase@@IEAA@K@Z @ 0x1C0060140
 * Callers:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C00600F4 (--0CBaseInput@@IEAA@K@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00601CC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

CRIMBase *__fastcall CRIMBase::CRIMBase(CRIMBase *this, int a2)
{
  char *v3; // rbx
  unsigned __int64 v4; // r8

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
  memset((char *)this + 152, 0, 0x400uLL);
  `vector constructor iterator'(
    v3,
    0x40uLL,
    v4,
    (void *(*)(void *))CRIMBase::SensorDispatcherObject::SensorDispatcherObject);
  return this;
}
