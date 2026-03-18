/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C00B3970
 * Callers:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00B3A10 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C0178630 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00B39A8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRIMBase::~CRIMBase(CRIMBase *this)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector destructor iterator'(
    (char *)this + 152,
    0x40uLL,
    0x10uLL,
    (void (*)(void *))CRIMBase::SensorDispatcherObject::~SensorDispatcherObject);
}
