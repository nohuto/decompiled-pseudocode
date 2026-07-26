/*
 * XREFs of ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008070
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0007390 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C000FE40 (ndisInvokeNextReceiveHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisCallReceiveHandler(
        _QWORD *a1,
        void (__fastcall *a2)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v11; // rax
  void *v12; // rcx

  if ( byte_1C009FE30 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v11 = a1[110];
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 52) & 1) != 0 )
          PktMonClientNblLogNdis(a1 + 107, a4, a3, 1LL);
      }
    }
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v12 = (void *)a1[99]) != 0LL )
    ndisVerifierNdisDispatch->NdisFilterReceiveNetBufferListsHandler(a3, a4, a5, a6, a7, v12, a2);
  else
    a2(a3, a4, a5, a6, a7);
}
