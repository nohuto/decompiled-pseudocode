/*
 * XREFs of PktMonClientNblLogNdis @ 0x1C00C97B0
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EA20 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFSendNetBufferLists @ 0x1C000F5D0 (NdisFSendNetBufferLists.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0010E80 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00112C0 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C008BE20 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00AEAD0 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientNblLogNdis(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int16 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+32h] [rbp-26h]
  __int16 v11; // [rsp+36h] [rbp-22h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]
  int v15; // [rsp+48h] [rbp-10h]
  int v16; // [rsp+4Ch] [rbp-Ch]

  v10 = 0;
  v11 = 0;
  v16 = 0;
  if ( byte_1C00E5E20 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 12) & 1) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
      {
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v8 = *a1;
          v9 = 32;
          v14 = *((_DWORD *)a1 + 4);
          v12 = a2;
          v13 = 1;
          v15 = a4;
          (*((void (__fastcall **)(PVOID, __int64, __int16 *, _QWORD))*(&ProviderBindingContext + 1) + 5))(
            ProviderBindingContext,
            v8,
            &v9,
            0LL);
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
      }
    }
  }
}
