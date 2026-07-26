/*
 * XREFs of ?NdisPDDrainCompletedItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C007ACD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDDrainCompletedItems(
        struct PD_QUEUE_HANDLE__ *a1,
        struct _SINGLE_LIST_ENTRY ***a2,
        unsigned int a3)
{
  int v3; // eax
  struct _SINGLE_LIST_ENTRY **p_Next; // r10
  unsigned int v6; // r9d
  int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rax
  struct _SINGLE_LIST_ENTRY *v10; // rcx
  bool v11; // zf
  struct _SINGLE_LIST_ENTRY *v12; // [rsp+8h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a1 + 33);
  p_Next = &v12;
  v12 = 0LL;
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 13);
  v8 = v7 & (v3 - v6);
  if ( v8 < a3 )
    a3 = v8;
  for ( ; a3; --a3 )
  {
    v9 = v6;
    v6 = v7 & (v6 + 1);
    v10 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v9 + 24);
    *p_Next = v10;
    p_Next = &v10->Next;
  }
  v11 = v12 == 0LL;
  *((_DWORD *)a1 + 15) = v6;
  if ( !v11 )
  {
    *p_Next = 0LL;
    **a2 = v12;
    *a2 = p_Next;
  }
}
