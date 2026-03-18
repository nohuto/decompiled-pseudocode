/*
 * XREFs of ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00C3208
 * Callers:
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C011DE84 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C011E034 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00C30F8 (-NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        __int64 a2,
        struct _EPROCESS *a3,
        char a4)
{
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 422) )
  {
    if ( *((_BYTE *)this + 303824) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 1696), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
      DripsBlockerTrackingHelper::NotifyProcessFreeze((DXGGLOBAL *)((char *)this + 1744), a2, a3, a4);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
    }
  }
}
