/*
 * XREFs of ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003686C
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     NdisGetThreadObjectCompartmentScope @ 0x1C00104C0 (NdisGetThreadObjectCompartmentScope.c)
 *     ndisNsiGetAllThreadInformation @ 0x1C00105F0 (ndisNsiGetAllThreadInformation.c)
 *     NdisGetThreadObjectCompartmentId @ 0x1C0010D80 (NdisGetThreadObjectCompartmentId.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0011500 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisGetSessionCompartmentId @ 0x1C00120E0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C0021328 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     ndisGetNsiClientInfo @ 0x1C00367B8 (ndisGetNsiClientInfo.c)
 *     NdisSetSessionCompartmentId @ 0x1C00ABB90 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmGetThreadSessionId(struct _ETHREAD *a1)
{
  PACCESS_TOKEN v2; // rax
  void *v3; // rsi
  NTSTATUS v5; // ebx
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN v7; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
    return PsGetCurrentProcessSessionId(a1);
  v2 = PsReferenceImpersonationToken(a1, &v8, &v7, (PSECURITY_IMPERSONATION_LEVEL)&v9);
  v3 = v2;
  if ( v2
    && (v5 = SeQueryInformationToken(v2, TokenSessionId, &TokenInformation), PsDereferenceImpersonationToken(v3),
                                                                             v5 >= 0) )
  {
    return (unsigned int)TokenInformation;
  }
  else
  {
    return PsGetThreadSessionId(a1);
  }
}
