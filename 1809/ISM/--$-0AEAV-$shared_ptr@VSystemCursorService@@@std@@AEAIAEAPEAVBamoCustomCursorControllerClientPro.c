/*
 * XREFs of ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800936CC
 * Callers:
 *     ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x180091F40 (-AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCust.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Ref_count_obj<CustomCursorApplication>::_Ref_count_obj<CustomCursorApplication>(
        __int64 a1,
        __int64 *a2,
        int *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v5; // rsi
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx
  void (__fastcall ***v8)(_QWORD); // r14
  int v9; // ebp
  __int64 v11; // [rsp+28h] [rbp-50h]
  volatile signed __int32 *v12; // [rsp+30h] [rbp-48h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CustomCursorApplication>::`vftable';
  v5 = a1 + 16;
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = (volatile signed __int32 *)a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = *a4;
  v9 = *a3;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( v6 )
  {
    _InterlockedAdd(v6 + 3, 1u);
    v7 = v11;
  }
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v5 + 8) = v6;
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 24) = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                           v7,
                           0LL,
                           0LL);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_DWORD *)(v5 + 16) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)(v5 + 16),
    8LL);
  *(_DWORD *)(v5 + 80) = v9;
  *(_QWORD *)(v5 + 88) = v8;
  if ( v8 )
    (**v8)(v8);
  *(_QWORD *)(v5 + 96) = 0LL;
  *(_QWORD *)(v5 + 104) = 0LL;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
