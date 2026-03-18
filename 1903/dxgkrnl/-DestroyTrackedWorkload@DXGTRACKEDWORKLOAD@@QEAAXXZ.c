/*
 * XREFs of ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0297004
 * Callers:
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C0121E94 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0296D40 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C564 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C029788C (-RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(DXGTRACKEDWORKLOAD *this)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx
  char *v7; // rcx
  char *v8; // rbx
  __int64 v9; // [rsp+30h] [rbp-C8h] BYREF
  char v10; // [rsp+38h] [rbp-C0h]
  _BYTE v11[8]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v12[64]; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v13[88]; // [rsp+88h] [rbp-70h] BYREF

  if ( *((_BYTE *)this + 96) )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
      (DXGDEVICEACCESSLOCKSHARED *)&v9,
      *((struct DXGDEVICE **)this + 2));
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v11, *((_QWORD *)this + 2), 0, v2, 0);
    COREDEVICEACCESS::AcquireShared((__int64)v11, 0xFFFFFFFF, 0LL);
    if ( *((_QWORD *)this + 7) )
    {
      v5 = WdLogNewEntry5_WdAssertion(v4, v3);
      *(_QWORD *)(v5 + 24) = 892LL;
      WdLogEvent5_WdAssertion(v5);
    }
    DXGDEVICE::RemoveTrackedWorkloadFromList(*((DXGDEVICE **)this + 2), this);
    if ( *((_QWORD *)this + 143) )
    {
      KeSetEvent((PRKEVENT)((char *)this + 1120), 0, 0);
      KeWaitForSingleObject(*((PVOID *)this + 143), Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)this + 143));
      *((_QWORD *)this + 143) = 0LL;
    }
    v6 = (void *)*((_QWORD *)this + 9);
    if ( v6 )
    {
      operator delete[](v6);
      *((_QWORD *)this + 9) = 0LL;
    }
    v7 = (char *)*((_QWORD *)this + 3);
    if ( v7 )
    {
      v8 = v7 - 8;
      `vector destructor iterator'(
        v7,
        112LL,
        *((_QWORD *)v7 - 1),
        (void (__fastcall *)(char *))DXGTRACKEDWORKLOAD::WorkloadInstance::~WorkloadInstance);
      operator delete[](v8);
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_BYTE *)this + 96) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v13);
    COREACCESS::~COREACCESS((COREACCESS *)v12);
    if ( v9 )
    {
      if ( v10 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v9 + 104));
        KeLeaveCriticalRegion();
      }
    }
  }
}
