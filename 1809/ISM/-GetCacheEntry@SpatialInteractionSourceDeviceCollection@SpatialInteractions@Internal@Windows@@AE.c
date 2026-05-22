/*
 * XREFs of ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AA37C
 * Callers:
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AEFB0 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AFFC0 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B1490 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKEEGPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B20D0 (-SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inte.c)
 *     std::_Func_impl_no_alloc__lambda_823ab1d729c06df67326f685fa511bbd__void_::_Do_call @ 0x1800B80C0 (std--_Func_impl_no_alloc__lambda_823ab1d729c06df67326f685fa511bbd__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
        struct _RTL_CRITICAL_SECTION *a1,
        int a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r9
  _QWORD *p_Type; // rax
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  signed __int64 v14; // [rsp+30h] [rbp+8h]

  LODWORD(v14) = 0;
  v3 = a1 + 11;
  HIDWORD(v14) = a2;
  EnterCriticalSection(a1 + 11);
  DebugInfo = a1[12].DebugInfo;
  p_Type = &DebugInfo->Type;
  CriticalSection = DebugInfo->CriticalSection;
  if ( BYTE1(CriticalSection->LockSemaphore) )
    goto LABEL_8;
  do
  {
    if ( (signed __int64)CriticalSection->SpinCount >= v14 )
    {
      p_Type = &CriticalSection->DebugInfo;
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->DebugInfo;
    }
    else
    {
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->OwningThread;
    }
  }
  while ( !BYTE1(CriticalSection->LockSemaphore) );
  if ( p_Type == (_QWORD *)DebugInfo || v14 < p_Type[4] )
LABEL_8:
    p_Type = &a1[12].DebugInfo->Type;
  if ( p_Type == (_QWORD *)DebugInfo )
  {
    v9 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  else
  {
    v10 = p_Type[6];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = p_Type[6];
    }
    *a3 = p_Type[5];
    v11 = (volatile signed __int32 *)a3[1];
    a3[1] = v10;
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0;
  }
  return v9;
}
