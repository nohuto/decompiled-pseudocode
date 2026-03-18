/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0009C00
 * Callers:
 *     ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00FCFD0 (-ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNS.c)
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0148330 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0005A00 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET *a2, __int64 a3)
{
  struct DMMVIDPNSOURCEMODESET *v3; // rbx
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  v3 = a2;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((DMMVIDPNSOURCE **)v3 + 14) == this )
  {
    if ( v3 == *((struct DMMVIDPNSOURCEMODESET **)this + 15) )
    {
      v11 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v11 + 24) = v3;
      *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v11);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 15, 0LL);
      if ( *((_DWORD *)v3 + 24) != 1 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12, a2);
        WdLogEvent5_WdAssertion(v13);
      }
    }
    if ( *((_DWORD *)v3 + 24) == 1
      && DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
           *((_QWORD *)this + 14),
           (__int64)v3) )
    {
      v7 = (_QWORD *)((char *)v3 + 8);
      v8 = *((_QWORD *)v3 + 1);
      if ( *(struct DMMVIDPNSOURCEMODESET **)(v8 + 8) != (struct DMMVIDPNSOURCEMODESET *)((char *)v3 + 8)
        || (a2 = (struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)v3 + 2), *(_QWORD **)a2 != v7) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)a2 = v8;
      *(_QWORD *)(v8 + 8) = a2;
      *v7 = 0LL;
      *((_QWORD *)v3 + 2) = 0LL;
      --*(_QWORD *)(v6 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNSOURCEMODESET *)((char *)v3 + 88), (__int64)a2, a3);
    return 0LL;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v10[3] = *((_QWORD *)v3 + 14);
    v10[4] = v3;
    v10[5] = this;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
}
