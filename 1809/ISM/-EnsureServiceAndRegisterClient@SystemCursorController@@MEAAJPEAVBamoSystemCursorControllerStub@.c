/*
 * XREFs of ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x180091C70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x180092F7C (-_Erase@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices.c)
 *     ??$?0PEAVSystemCursorController@@AEAK@?$_Ref_count_obj@VSystemCursorService@@@std@@QEAA@$$QEAPEAVSystemCursorController@@AEAK@Z @ 0x1800935B0 (--$-0PEAVSystemCursorController@@AEAK@-$_Ref_count_obj@VSystemCursorService@@@std@@QEAA@$$QEAPEA.c)
 *     ?Initialize@SystemCursorService@@QEAAJXZ @ 0x1800953C4 (-Initialize@SystemCursorService@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursorController::EnsureServiceAndRegisterClient(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoSystemCursorControllerClientProxy *a3)
{
  __int64 v6; // rcx
  char *v7; // rbx
  volatile signed __int32 *v8; // rbx
  struct BamoSystemCursorControllerClientProxy *v9; // rcx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  SystemCursorService *v12; // r14
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  int v15; // eax
  const char *v16; // r9
  volatile signed __int32 *v17; // r14
  volatile signed __int32 *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v21; // [rsp+70h] [rbp+8h] BYREF
  SystemCursorController *v22; // [rsp+78h] [rbp+10h] BYREF
  void *v23; // [rsp+80h] [rbp+18h]

  try
  {
    v6 = *((_QWORD *)this + 8);
    if ( v6 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    *((_DWORD *)this + 18) = 0;
    v7 = (char *)this + 80;
    std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Erase(
      (char *)this + 80,
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL));
    *(_QWORD *)(*(_QWORD *)v7 + 8LL) = *(_QWORD *)v7;
    **(_QWORD **)v7 = *(_QWORD *)v7;
    *(_QWORD *)(*(_QWORD *)v7 + 16LL) = *(_QWORD *)v7;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    v8 = (volatile signed __int32 *)*((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = 0LL;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v9 = (struct BamoSystemCursorControllerClientProxy *)*((_QWORD *)this + 8);
    if ( v9 != a3 )
    {
      if ( a3 )
      {
        (**(void (__fastcall ***)(struct BamoSystemCursorControllerClientProxy *))a3)(a3);
        v9 = (struct BamoSystemCursorControllerClientProxy *)*((_QWORD *)this + 8);
      }
      *((_QWORD *)this + 8) = a3;
      if ( v9 )
        (*(void (__fastcall **)(struct BamoSystemCursorControllerClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    v21 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 32);
    *((_DWORD *)this + 18) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL)
                                                                           + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                                       + 36);
    v22 = this;
    v23 = operator new(0xD8uLL);
    v10 = std::_Ref_count_obj<SystemCursorService>::_Ref_count_obj<SystemCursorService>(v23, &v22, &v21);
    v11 = (volatile signed __int32 *)v10;
    v12 = (SystemCursorService *)(v10 + 16);
    if ( v10 != -16 )
    {
      v13 = *(_QWORD *)(v10 + 32);
      if ( v13 )
        LODWORD(v13) = *(_DWORD *)(v13 + 8);
      if ( !(_DWORD)v13 )
      {
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          _InterlockedIncrement(v11 + 3);
        }
        *((_QWORD *)v12 + 1) = v12;
        v14 = (volatile signed __int32 *)*((_QWORD *)v12 + 2);
        *((_QWORD *)v12 + 2) = v11;
        if ( v14 && _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
      }
    }
    v15 = SystemCursorService::Initialize(v12);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)v15);
      JUMPOUT(0x180091F2BLL);
    }
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    *((_QWORD *)this + 12) = v12;
    v17 = (volatile signed __int32 *)*((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = v11;
    v18 = v11 + 2;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        v18 = v11 + 2;
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          v18 = v11 + 2;
        }
      }
    }
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v18, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller.cpp",
      v16);
  }
  return 0LL;
}
