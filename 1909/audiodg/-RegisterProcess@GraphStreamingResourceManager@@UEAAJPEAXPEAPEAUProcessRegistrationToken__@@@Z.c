/*
 * XREFs of ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x14000E750
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x14000D1BC (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x14000D240 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E578 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterProcess(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // rsi
  void *v4; // r14
  GraphStreamingResourceManager *v5; // rdi
  DWORD ProcessId; // r12d
  __int64 Node; // rax
  __int64 v8; // rbx
  int v9; // edi
  __int64 result; // rax
  unsigned int *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-98h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-90h] BYREF
  char v14; // [rsp+40h] [rbp-88h]
  int v15; // [rsp+48h] [rbp-80h] BYREF
  char *v16; // [rsp+50h] [rbp-78h]
  _QWORD v17[4]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v18; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v19; // [rsp+80h] [rbp-48h] BYREF
  int v23; // [rsp+E8h] [rbp+20h] BYREF

  v17[3] = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  ProcessId = GetProcessId(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 16);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v16 = (char *)v5 + 56;
  Node = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 56,
           ProcessId,
           &v15,
           (unsigned int *)&v23,
           &v18);
  v8 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
LABEL_4:
    *v3 = (struct ProcessRegistrationToken__ *)v8;
    v8 = 0LL;
    v9 = 0;
    goto LABEL_5;
  }
  try
  {
    v17[1] = 0LL;
    v17[2] = 0LL;
    v17[0] = 1LL;
    v8 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
           (__int64)v5 + 56,
           ProcessId,
           (__int64)v17);
    v12 = v8;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v11 = (unsigned int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v23 = *v11;
    v9 = v23;
    v8 = v12;
    if ( v23 >= 0 )
    {
      v5 = this;
      v3 = a3;
      v4 = a2;
      goto LABEL_3;
    }
LABEL_5:
    if ( v8 )
      ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
        v16,
        v8);
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)v9;
  }
LABEL_3:
  v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*((_QWORD *)v5 - 1) + 32LL))((__int64)v5 - 8, v4, v8 + 16);
  if ( v9 < 0 )
    goto LABEL_5;
  goto LABEL_4;
}
