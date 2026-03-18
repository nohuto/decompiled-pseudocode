/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@2@@Z @ 0x1C026F308
 * Callers:
 *     MonitorAPIProcessTerminating @ 0x1C0114760 (MonitorAPIProcessTerminating.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C026F39C (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct OPM::CMutex *a4)
{
  __int64 v5; // rdi
  int v8; // ebp
  unsigned int v9; // ebx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v11, a4);
  v9 = 0;
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = 0LL;
  --*(_DWORD *)(a1 + 8);
  (**(void (__fastcall ***)(__int64, __int64))a2)(a2, 1LL);
  if ( v8 < 0 )
    v9 = v8;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v11);
  return v9;
}
