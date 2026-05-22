/*
 * XREFs of ??1SharedObjectBase@@MEAA@XZ @ 0x1800D40D4
 * Callers:
 *     ??1?$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ @ 0x1800D3F28 (--1-$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ.c)
 *     ??1?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ @ 0x1800D3F74 (--1-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ.c)
 *     ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x1800D4400 (--_GSharedObjectBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedObjectBase::~SharedObjectBase(SharedObjectBase *this)
{
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
