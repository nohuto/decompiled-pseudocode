/*
 * XREFs of ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0055530
 * Callers:
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BBB50 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005D18 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0021E24 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::RemoveTarget(
        DMMVIDEOPRESENTTARGETSET ***this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  DMMVIDEOPRESENTTARGETSET **v11; // rdx
  DMMVIDEOPRESENTTARGETSET *v12; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = Set<DMMVIDEOPRESENTTARGET>::FindByValue((__int64)this, (__int64)a2);
  if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
         (__int64)(this + 1),
         v5) )
  {
    v8 = (_QWORD *)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v9 + 8) != v7 + 8 || (v10 = *(_QWORD **)(v7 + 16), (_QWORD *)*v10 != v8) )
LABEL_8:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    this[5] = (DMMVIDEOPRESENTTARGETSET **)((char *)this[5] - 1);
  }
  v11 = this[15];
  v12 = (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 512);
  if ( *v11 != (DMMVIDEOPRESENTTARGETSET *)(this + 14) )
    goto LABEL_8;
  *(_QWORD *)v12 = this + 14;
  *((_QWORD *)a2 + 65) = v11;
  *v11 = v12;
  this[15] = (DMMVIDEOPRESENTTARGETSET **)v12;
  ReferenceCounted::Release((struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 64), (__int64)v11, v6);
}
