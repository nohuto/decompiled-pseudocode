/*
 * XREFs of ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800FB594
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18001D950 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x1800FB164 (--1-$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ.c)
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800FD2E0 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

PropertyChangedContext *__fastcall PropertyChangedContext::`scalar deleting destructor'(PropertyChangedContext *this)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 5);
  if ( v2 )
    CloseThreadpoolWork(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
  operator delete(this);
  return this;
}
