/*
 * XREFs of ?OnDeviceRemoved@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800BBE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800BC364 (-clear@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::OnDeviceRemoved(
        RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  _BYTE *v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v14; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+68h] [rbp+10h]

  v14 = 0LL;
  Ptr = this[9].Ptr;
  if ( !Ptr )
    goto LABEL_12;
  v3 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD **))(*(_QWORD *)Ptr + 24LL))(
         Ptr,
         &GUID_981351b4_74ca_46e5_83e7_55640c3aae9d,
         &v14);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 250LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)v5);
    goto LABEL_14;
  }
  if ( !v14 )
  {
LABEL_12:
    v4 = -2147418113;
    v5 = 2147549183LL;
    v6 = 251LL;
    goto LABEL_13;
  }
  AcquireSRWLockExclusive(this + 24);
  v15 = this + 24;
  v7 = this[17].Ptr;
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (_BYTE *)i[4];
    v9[104] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 120LL))(v9);
    v10 = (*(__int64 (__fastcall **)(_QWORD *, RTL_SRWLOCK *, _QWORD *))(*v14 + 56LL))(v14, this, i + 4);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x101,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v10);
  }
  std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::clear(&this[17]);
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    &this[16].Ptr,
    8LL);
  v4 = 0;
  if ( this != (RTL_SRWLOCK *)-192LL )
    ReleaseSRWLockExclusive(this + 24);
LABEL_14:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
  }
  return v4;
}
