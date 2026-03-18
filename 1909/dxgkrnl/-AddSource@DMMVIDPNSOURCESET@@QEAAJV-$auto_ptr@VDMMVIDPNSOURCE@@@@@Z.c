/*
 * XREFs of ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00E2FD8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C010144C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00043F8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0004414 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCESET::AddSource(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v18);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDPNTARGET>::FindById(a1, v2[6]);
  if ( v6 )
  {
    v14 = (v6 != v9) + 1;
  }
  else
  {
    v7 = a1 + 24;
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 == a1 + 24 )
      goto LABEL_11;
    v11 = v10 - 8;
    if ( !v11 )
      goto LABEL_11;
    do
    {
      if ( v11 == v9 )
        break;
      v12 = *(_QWORD *)(v11 + 8);
      v11 = v12 - 8;
      if ( v12 == v7 )
        v11 = 0LL;
    }
    while ( v11 );
    if ( v11 )
    {
      v14 = 1;
    }
    else
    {
LABEL_11:
      if ( DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(
             (_QWORD *)(a1 + 8),
             v9) != 1 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v13, v7);
        *(_QWORD *)(v19 + 24) = 108LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v14 = 3;
    }
  }
  v15 = (unsigned int)(v14 - 1);
  if ( (_DWORD)v15 )
  {
    v16 = (unsigned int)(v15 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v16, v7, v8);
        WdLogEvent5_WdError(v20);
        v3 = -1073741823;
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v16, v7, v8);
      v21[3] = (*a2)[6];
      v21[4] = *a2;
      v21[5] = a1;
      WdLogEvent5_WdError(v21);
      v3 = -1071774927;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v15, v7, v8);
    *(_QWORD *)(v22 + 24) = *a2;
    *(_QWORD *)(v22 + 32) = a1;
    WdLogEvent5_WdError(v22);
    v3 = -1071774953;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
