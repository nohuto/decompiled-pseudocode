/*
 * XREFs of ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180091960
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18001CF90 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x180049CF8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     ?UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180095044 (-UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoS.c)
 *     ??0AnimationDataProvider@@QEAA@XZ @ 0x18009B8D8 (--0AnimationDataProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
SystemCursorController *__fastcall SystemCursorController::SystemCursorController(
        SystemCursorController *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  char *v3; // rbx
  char *v4; // rdi
  volatile signed __int32 *v5; // rbx
  __int64 i; // rbx
  volatile signed __int32 *v8; // [rsp+40h] [rbp+8h] BYREF
  char *v9; // [rsp+50h] [rbp+18h]

  v8 = (volatile signed __int32 *)this;
  *(_QWORD *)this = &BamoSystemCursorControllerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemCursorController::`vftable'{for `ISystemCursorControllerPrincipal'};
  v3 = (char *)this + 16;
  v9 = (char *)this + 16;
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((SystemCursorController *)((char *)this + 16), a2);
  *(_QWORD *)v3 = &BamoImpl::BamoSystemCursorControllerPrincipalImpl::`vftable';
  *((_DWORD *)v3 + 10) = 0;
  *(_QWORD *)this = &SystemCursorController::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemCursorController::`vftable'{for `ISystemCursorControllerPrincipal'};
  *((_QWORD *)this + 8) = 0LL;
  v9 = (char *)this + 80;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v4 = (char *)operator new(0x28uLL);
  v9 = v4;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj<AnimationDataProvider>::`vftable';
  AnimationDataProvider::AnimationDataProvider((AnimationDataProvider *)(v4 + 16));
  *((_QWORD *)this + 14) = v4 + 16;
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  Microsoft::BamoImpl::InternalLock::InternalLock(&v8, *((struct Microsoft::BamoImpl::ConnectionIndirector **)this + 4));
  *((_DWORD *)this + 14) = 1065353216;
  for ( i = *((_QWORD *)this + 6); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_BYTE *)(i + 32) )
      BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCache(
        (SystemCursorController *)((char *)this + 16),
        (struct Microsoft::BamoImpl::BamoStubImpl *)i);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v8);
  return this;
}
