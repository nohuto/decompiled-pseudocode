/*
 * XREFs of ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18006A7AC
 * Callers:
 *     ?clear@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DD1C (-clear@-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMes.c)
 *     ?erase@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18006E4C0 (-erase@-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BFAC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DragNDropProcessor::MessageInfo::~MessageInfo(DragNDropProcessor::MessageInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &DragNDropProcessor::MessageInfo::`vftable';
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    DestroyInteractionContext(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((char *)this + 24);
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((char *)this + 16);
}
