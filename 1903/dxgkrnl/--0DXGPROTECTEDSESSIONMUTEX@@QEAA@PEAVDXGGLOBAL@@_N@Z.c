/*
 * XREFs of ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0043198
 * Callers:
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0250A58 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C0250E30 (-DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkDestroyProtectedSession @ 0x1C0262220 (DxgkDestroyProtectedSession.c)
 *     DxgkQueryProtectedSessionStatus @ 0x1C0262D30 (DxgkQueryProtectedSessionStatus.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

DXGPROTECTEDSESSIONMUTEX *__fastcall DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        DXGPROTECTEDSESSIONMUTEX *this,
        struct DXGGLOBAL *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGGLOBAL *)((char *)a2 + 303944), 0);
  DXGAUTOMUTEX::Acquire(this);
  return this;
}
