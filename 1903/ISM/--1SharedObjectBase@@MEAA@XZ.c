/*
 * XREFs of ??1SharedObjectBase@@MEAA@XZ @ 0x1800D4314
 * Callers:
 *     ??1?$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ @ 0x1800D4168 (--1-$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ.c)
 *     ??1?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ @ 0x1800D41B4 (--1-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ.c)
 *     ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x1800D4640 (--_GSharedObjectBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedObjectBase::~SharedObjectBase(SharedObjectBase *this)
{
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
