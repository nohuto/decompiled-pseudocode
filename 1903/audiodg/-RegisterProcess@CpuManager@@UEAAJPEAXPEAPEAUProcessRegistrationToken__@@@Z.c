/*
 * XREFs of ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x14002DE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x14002CD48 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E598 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x14002E894 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CpuManager::RegisterProcess(CpuManager *this, void *a2, struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r15
  void *v4; // r12
  CpuManager *v5; // r14
  DWORD ProcessId; // r13d
  int v7; // esi
  char v8; // di
  __int64 Node; // rax
  __int64 v10; // rbx
  unsigned int *v12; // rbx
  int v13; // [rsp+30h] [rbp-98h] BYREF
  __int64 v14; // [rsp+38h] [rbp-90h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-88h] BYREF
  char v16; // [rsp+48h] [rbp-80h]
  int v17; // [rsp+50h] [rbp-78h] BYREF
  char *v18; // [rsp+58h] [rbp-70h]
  _QWORD v19[3]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v21; // [rsp+80h] [rbp-48h] BYREF

  v19[2] = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v14 = 0LL;
  ProcessId = GetProcessId(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 16);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_14;
  v8 = 1;
  v18 = (char *)v5 + 56;
  Node = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 56,
           ProcessId,
           &v17,
           (unsigned int *)&v13,
           &v20);
  v10 = Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
LABEL_9:
    *v3 = (struct ProcessRegistrationToken__ *)v10;
    v10 = 0LL;
    v8 = 0;
    v7 = 0;
    goto LABEL_10;
  }
  try
  {
    v19[1] = 0LL;
    v19[0] = 1LL;
    v10 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::SetAt(
            (char *)v5 + 56,
            ProcessId,
            v19);
    v14 = v10;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v12 = (unsigned int *)v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v13 = *v12;
    v7 = v13;
    v5 = this;
    v10 = v14;
    v8 = 1;
    if ( v13 < 0 )
      goto LABEL_10;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, void *, __int64))(*(_QWORD *)v5 + 80LL))(v5, v4, v10 + 16);
  if ( v7 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v10 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v18,
      v10);
  if ( v8 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_14:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
