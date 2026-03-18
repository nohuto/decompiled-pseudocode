/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00E66A0
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00E64A0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00042F8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005C08 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0005CC8 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000D770 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v15);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1 + 24, *(_DWORD *)(v2 + 24));
  if ( v6 )
  {
    v10 = DMMVIDPNTARGETMODE::operator!=(v6, v2) + 1;
  }
  else if ( Set<DMMVIDPNTARGETMODE>::FindByValue(a1 + 24, v2) )
  {
    v10 = 1;
  }
  else
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail(
           a1 + 32,
           v2) != 1 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9, v7);
      *(_QWORD *)(v16 + 24) = 108LL;
      WdLogEvent5_WdAssertion(v16);
    }
    v10 = 3;
  }
  v11 = (unsigned int)(v10 - 1);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v13 = *a2 + 32;
        if ( a1 )
        {
          if ( *(_QWORD *)(*a2 + 40) )
          {
            v19 = WdLogNewEntry5_WdAssertion(v12, v7);
            WdLogEvent5_WdAssertion(v19);
          }
          *(_QWORD *)(v13 + 8) = a1;
        }
        else
        {
          v18 = WdLogNewEntry5_WdError(v12, v7, v8);
          *(_QWORD *)(v18 + 24) = v13;
          *(_QWORD *)(v18 + 32) = *(_QWORD *)(v13 + 8);
          WdLogEvent5_WdError(v18);
        }
        *a2 = 0LL;
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v12, v7, v8);
        WdLogEvent5_WdError(v17);
        v3 = -1073741823;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7, v8);
      v20[3] = *(unsigned int *)(*a2 + 24);
      v20[4] = *a2;
      v20[5] = a1;
      WdLogEvent5_WdError(v20);
      v3 = -1071774940;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdTrace(v11, v7);
    v3 = -1071774956;
    *(_QWORD *)(v21 + 24) = *a2;
    *(_QWORD *)(v21 + 32) = a1;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
