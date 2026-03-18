/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00AD764
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002B778 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00AD6B0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00172F0 (PopThreadGuardedObject.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  if ( (int)IsXEPATHOBJ_vDestructSupported() >= 0 )
    XEPATHOBJ_vDestructWrap(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
