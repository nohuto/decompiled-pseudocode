/*
 * XREFs of ndisFakeFilterSendHandler @ 0x1C008F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C00901C4 (ndisInvokeNextSendCompleteHandler.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisFakeFilterSendHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  struct _NET_BUFFER_LIST *i; // rcx
  __int64 v6; // r8
  void *v7; // rax
  void (*v8)(void); // rcx
  __int64 v9; // r8

  if ( byte_1C00E5E20 && (*(_DWORD *)(a1 + 804) & 2) != 0 )
    PktMonClientNblDropNdis(a1 + 792, (_DWORD)a2, a3, 2, *(_DWORD *)(a1 + 96), -536866815);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = *(_DWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
  {
    v7 = *(void **)(v6 + 472);
    v8 = *(void (**)(void))(v6 + 464);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32);
    v7 = *(void **)(v9 + 2576);
    v8 = *(void (**)(void))(v9 + 2616);
  }
  return ndisInvokeNextSendCompleteHandler(a2, v7, v8);
}
