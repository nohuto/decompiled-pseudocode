/*
 * XREFs of ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800BE990
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180049E1C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800BE498 (--1CSerialWorkQueue@@QEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::`scalar deleting destructor'(CAudioSrv *this, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 11);
  if ( v4 )
    (**v4)(v4, 1LL);
  *((_QWORD *)this + 11) = 0LL;
  CSerialWorkQueue::~CSerialWorkQueue((struct _TP_POOL **)this + 26);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *(_QWORD *)this = &IAudioService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x178);
  return this;
}
