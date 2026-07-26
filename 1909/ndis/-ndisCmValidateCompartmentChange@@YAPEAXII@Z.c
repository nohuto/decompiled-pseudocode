/*
 * XREFs of ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0020FB0
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000A6E4 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00ABD60 (NdisSetSessionCompartmentId.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C011A27C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ndisIfReferenceCompartmentForUser @ 0x1C0020380 (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00204B8 (ndisIfDereferenceCompartmentForUser.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C0021060 (NdisGetProcessObjectCompartmentId.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ndisIfGetCompartmentNamespaceGuid @ 0x1C0067D10 (ndisIfGetCompartmentNamespaceGuid.c)
 */

_DWORD *__fastcall ndisCmValidateCompartmentChange(unsigned int a1, unsigned int a2)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessObjectCompartmentId; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // rdi
  __int64 v9; // rax
  char v10[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessObjectCompartmentId = NdisGetProcessObjectCompartmentId(CurrentProcess);
  v6 = ProcessObjectCompartmentId;
  if ( ProcessObjectCompartmentId != a1
    && ProcessObjectCompartmentId != 1
    && ((int)ndisIfGetCompartmentNamespaceGuid(ProcessObjectCompartmentId) < 0
     || (int)ndisIfGetCompartmentNamespaceGuid(a1) < 0
     || v12 != v14) )
  {
    return 0LL;
  }
  *(_QWORD *)v10 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, a2, (struct _NDIS_IF_COMPARTMENT_BLOCK **)v10);
  v7 = *(_DWORD **)v10;
  if ( *(_QWORD *)v10 && v6 != a2 && v6 != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(v6) < 0 || (int)ndisIfGetCompartmentNamespaceGuid(a2) < 0 )
      goto LABEL_16;
    v9 = v11 - v13;
    if ( v11 == v13 )
      v9 = v12 - v14;
    if ( v9 )
    {
LABEL_16:
      ndisIfDereferenceCompartmentForUser(v7);
      return 0LL;
    }
  }
  return v7;
}
