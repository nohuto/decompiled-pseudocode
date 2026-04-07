/*
 * XREFs of ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18001BED4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CWindowList::FindPrecedingVisibleWindowVisual(CWindowList *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  char v14; // [rsp+68h] [rbp-20h]

  v2 = 0LL;
  v3 = a2;
  if ( a2->Flink != a2 )
  {
    v13 = -1LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    Buffer[1] = 0LL;
    v14 = 0;
    Buffer[0] = a2[7].Blink;
    v4 = (struct _LIST_ENTRY *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v4 )
      v5 = v4 + 5;
    else
      v5 = (struct _LIST_ENTRY *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
    while ( v3 != v5 )
    {
      Blink = v3[24].Blink;
      if ( Blink && Blink[1].Blink )
      {
        v7 = v3[25].Blink;
        if ( !v7 )
          return v3[24].Blink;
        v2 = v3[25].Blink;
        if ( !v7[1].Blink )
          return v3[24].Blink;
        return v2;
      }
      v3 = v3->Blink;
    }
  }
  return v2;
}
