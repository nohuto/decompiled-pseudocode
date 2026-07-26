/*
 * XREFs of ndisFakeFilterSendHandler @ 0x1C005BFA0
 * Callers:
 *     <none>
 * Callees:
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005C4D0 (ndisInvokeNextSendCompleteHandler.c)
 */

__int64 __fastcall ndisFakeFilterSendHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3)
{
  struct _NET_BUFFER_LIST *i; // rcx
  __int64 v6; // r8
  void *v7; // rax
  void (*v8)(void); // rcx
  __int64 v9; // r8

  if ( byte_1C009FE30 && (*(_DWORD *)(a1 + 852) & 2) != 0 )
    PktMonClientNblDropNdis(a1 + 800, (__int64)a2, a3, 2LL, *(_DWORD *)(a1 + 96));
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = *(_DWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
  {
    v7 = *(void **)(v6 + 480);
    v8 = *(void (**)(void))(v6 + 472);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32);
    v7 = *(void **)(v9 + 2592);
    v8 = *(void (**)(void))(v9 + 2632);
  }
  return ndisInvokeNextSendCompleteHandler(a2, v7, v8);
}
