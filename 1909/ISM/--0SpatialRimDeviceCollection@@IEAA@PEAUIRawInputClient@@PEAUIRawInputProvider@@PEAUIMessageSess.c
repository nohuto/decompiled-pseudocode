/*
 * XREFs of ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18001EC18
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18001F044 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18001152C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180015168 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F46C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180059A70 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=9
SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::SpatialRimDeviceCollection(
        SpatialRimDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3,
        struct IMessageSession *a4)
{
  __int64 v7; // rcx
  wil::details **v8; // r14
  void *v9; // rdx
  wil::details *Event; // rbp
  unsigned int v11; // r8d
  const char *v12; // r9
  wil::details *v13; // rsi
  DWORD LastError; // ebx
  void *v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 8) = 0;
  memset_0((char *)this + 88, 0, 0x218uLL);
  memset_0((char *)this + 624, 0, 0x800uLL);
  *((_DWORD *)this + 668) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_DWORD *)this + 672) = 0;
  *((_QWORD *)this + 337) = 0LL;
  *((_QWORD *)this + 340) = 0LL;
  *((_QWORD *)this + 341) = 0LL;
  *((_BYTE *)this + 2736) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 343) = 0LL;
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &SpatialRimDeviceCollection::`vftable'{for `HIDDeviceCollection'};
  *((_QWORD *)this + 345) = &SpatialRimDeviceCollection::`vftable'{for `Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks'};
  *((_QWORD *)this + 346) = a4;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 346);
  *((_QWORD *)this + 347) = 0LL;
  *((_DWORD *)this + 696) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2792), 0, 0);
  *((_QWORD *)this + 354) = 0LL;
  *((_QWORD *)this + 355) = 0LL;
  *((_BYTE *)this + 2848) = 0;
  *((_DWORD *)this + 714) = 0;
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 359) = 0LL;
  *((_QWORD *)this + 358) = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(
                              v7,
                              0LL,
                              0LL);
  *((_QWORD *)this + 360) = 0LL;
  *((_QWORD *)this + 361) = 0LL;
  *((_QWORD *)this + 362) = 0LL;
  *((_DWORD *)this + 714) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 357,
    8LL);
  v8 = (wil::details **)((char *)this + 2920);
  *((_QWORD *)this + 365) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v9, v11, v12);
    JUMPOUT(0x18001EDECLL);
  }
  GetLastError();
  v13 = *v8;
  if ( *v8 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v13, v16);
    SetLastError(LastError);
  }
  *v8 = Event;
  *((_QWORD *)this + 3) = a3;
  return this;
}
