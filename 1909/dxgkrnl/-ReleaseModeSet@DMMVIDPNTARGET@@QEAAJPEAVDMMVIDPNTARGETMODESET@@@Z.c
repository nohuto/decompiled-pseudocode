/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009DD0
 * Callers:
 *     ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0101B90 (-ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNT.c)
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0145AB0 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004968C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET *a2, __int64 a3)
{
  struct DMMVIDPNTARGETMODESET *v3; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r11
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v3 = a2;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((DMMVIDPNTARGET **)v3 + 14) == this )
  {
    if ( v3 == *((struct DMMVIDPNTARGETMODESET **)this + 14) )
    {
      v8 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v8 + 24) = v3;
      *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v8);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, 0LL);
      if ( *((_DWORD *)v3 + 24) != 1 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9, a2);
        WdLogEvent5_WdAssertion(v10);
      }
    }
    if ( *((_DWORD *)v3 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                            *((_QWORD *)this + 15),
                            v3) )
    {
      v12 = (_QWORD *)((char *)v3 + 8);
      v13 = *((_QWORD *)v3 + 1);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v13 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)v3 + 8)
        || (a2 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v3 + 2), *(_QWORD **)a2 != v12) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)a2 = v13;
      *(_QWORD *)(v13 + 8) = a2;
      *v12 = 0LL;
      *((_QWORD *)v3 + 2) = 0LL;
      --*(_QWORD *)(v11 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v3 + 88), (__int64)a2, a3);
    return 0LL;
  }
  else
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v7[3] = *((_QWORD *)v3 + 14);
    v7[4] = v3;
    v7[5] = this;
    WdLogEvent5_WdError(v7);
    return 3223192368LL;
  }
}
