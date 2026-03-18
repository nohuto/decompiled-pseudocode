/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C00076F8
 * Callers:
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C00076AC (--1CBaseInput@@UEAA@XZ.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C0149730 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0007810 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRIMBase::~CRIMBase(CRIMBase *this)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector destructor iterator'((char *)this + 152, 0x40uLL, 0xEuLL, (void (*)(void *))CInpPushLock::LockUninitialize);
}
