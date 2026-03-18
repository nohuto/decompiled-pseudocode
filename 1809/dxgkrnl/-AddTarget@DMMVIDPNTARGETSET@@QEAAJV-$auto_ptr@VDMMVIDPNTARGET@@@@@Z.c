/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00DA3F4
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DA040 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E1BA0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C00024BC (-InsertTail@-$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDelet.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00041D8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1, v2[6]);
  if ( v6 )
  {
    v12 = (v6 != v7) + 1;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 == a1 + 24 )
      goto LABEL_11;
    v9 = v8 - 8;
    if ( !v9 )
      goto LABEL_11;
    do
    {
      if ( v9 == v7 )
        break;
      v10 = *(_QWORD *)(v9 + 8);
      v9 = v10 - 8;
      if ( v10 == a1 + 24 )
        v9 = 0LL;
    }
    while ( v9 );
    if ( v9 )
    {
      v12 = 1;
    }
    else
    {
LABEL_11:
      if ( DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(
             (_QWORD *)(a1 + 8),
             v7) != 1 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v17 + 24) = 108LL;
        WdLogEvent5_WdAssertion(v17);
      }
      v12 = 3;
    }
  }
  v13 = (unsigned int)(v12 - 1);
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v14);
        WdLogEvent5_WdError(v18);
        v3 = -1073741823;
      }
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v19[3] = (*a2)[6];
      v19[4] = *a2;
      v19[5] = a1;
      WdLogEvent5_WdError(v19);
      v3 = -1071774926;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v20 + 24) = *a2;
    *(_QWORD *)(v20 + 32) = a1;
    WdLogEvent5_WdError(v20);
    v3 = -1071774952;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
