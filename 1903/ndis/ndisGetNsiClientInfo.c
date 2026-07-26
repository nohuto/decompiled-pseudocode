/*
 * XREFs of ndisGetNsiClientInfo @ 0x1C00367B8
 * Callers:
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00200C0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064070 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064E60 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065530 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065A00 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065C80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z @ 0x1C012FB08 (-ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z.c)
 *     ?ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z @ 0x1C0135A98 (-ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C00120E0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003686C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368CC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 */

void __fastcall ndisGetNsiClientInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *ThreadProperty; // rax
  unsigned int ThreadSessionId; // eax
  KIRQL v5; // r8

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    *(_DWORD *)(a1 + 4) = *ThreadProperty;
    *(_DWORD *)a1 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
  if ( !*(_DWORD *)(a1 + 4) )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(CurrentThread);
    *(_DWORD *)(a1 + 4) = NdisGetSessionCompartmentId(ThreadSessionId);
  }
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  *(_GUID *)(a1 + 8) = ndisIfFindCompartmentBlock(*(_DWORD *)(a1 + 4))->LoopbackInfo.NamespaceGuid;
  KeReleaseSpinLock(&ndisIfListLock, v5);
}
