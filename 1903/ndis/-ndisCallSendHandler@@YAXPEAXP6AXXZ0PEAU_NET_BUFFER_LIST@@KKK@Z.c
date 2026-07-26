/*
 * XREFs of ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EA20
 * Callers:
 *     ndisFilterSendNetBufferLists @ 0x1C000E550 (ndisFilterSendNetBufferLists.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C00407FC (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C00C97B0 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisCallSendHandler(
        _QWORD *a1,
        void (__fastcall *a2)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v11; // rax
  void *v12; // rcx

  if ( byte_1C00E5E20 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v11 = a1[105];
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 12) & 1) != 0 )
          PktMonClientNblLogNdis(a1 + 104, a4, a3, 2LL);
      }
    }
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v12 = (void *)a1[98]) != 0LL )
    ndisVerifierNdisDispatch->NdisFilterSendNetBufferListsHandler(a3, a4, a5, a7, v12, a2);
  else
    a2(a3, a4, a5, a7);
}
