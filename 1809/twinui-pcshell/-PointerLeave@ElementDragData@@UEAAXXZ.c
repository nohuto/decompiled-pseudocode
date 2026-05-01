/*
 * XREFs of ?PointerLeave@ElementDragData@@UEAAXXZ @ 0x18031F5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180126EA4 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18031ED10 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgRefl.c)
 */

void __fastcall ElementDragData::PointerLeave(ElementDragData *this)
{
  __int64 v2; // rcx
  LPVOID v3[11]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (ElementDragData *)((char *)this + 184),
    (wil::ActivityThreadWatcher *)v3);
  if ( *((_DWORD *)this + 124) != 3 )
  {
    v2 = *((_QWORD *)this + 5);
    *(_OWORD *)((char *)this + 92) = 0LL;
    *((_DWORD *)this + 27) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 464LL))(v2);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(v3);
}
