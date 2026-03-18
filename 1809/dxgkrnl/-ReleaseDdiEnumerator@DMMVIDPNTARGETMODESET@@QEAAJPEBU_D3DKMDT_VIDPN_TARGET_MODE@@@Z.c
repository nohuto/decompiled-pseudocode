/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DC5E8
 * Callers:
 *     ?ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D8E30 (-ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D93E0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DB3D0 (-ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000A6D0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2)
{
  union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *p_AdditionalSignalInfo; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_8:
    WdLogEvent5_WdError(v7);
    return 3223192337LL;
  }
  p_AdditionalSignalInfo = (union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo;
  if ( *(_DWORD *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo != 305419896 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = p_AdditionalSignalInfo;
    goto LABEL_8;
  }
  v4 = *(_QWORD *)&p_AdditionalSignalInfo[2].AdditionalSignalInfo;
  if ( v4
    && !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
          (__int64)this + 32,
          v4) )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = p_AdditionalSignalInfo;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    return 3223192368LL;
  }
  else
  {
    operator delete(p_AdditionalSignalInfo);
    return 0LL;
  }
}
