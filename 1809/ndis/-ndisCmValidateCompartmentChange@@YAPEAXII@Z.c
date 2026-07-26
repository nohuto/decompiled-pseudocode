/*
 * XREFs of ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C001446C
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C00010C0 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C006C130 (NdisSetSessionCompartmentId.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00F8008 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     ndisIfReferenceCompartmentForUser @ 0x1C0013E38 (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00140B4 (ndisIfDereferenceCompartmentForUser.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C0014500 (NdisGetProcessObjectCompartmentId.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ndisIfGetCompartmentNamespaceGuid @ 0x1C0042948 (ndisIfGetCompartmentNamespaceGuid.c)
 */

unsigned int *__fastcall ndisCmValidateCompartmentChange(unsigned int a1, unsigned int a2)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessObjectCompartmentId; // eax
  unsigned int v6; // ebx
  unsigned int *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]

  CurrentProcess = PsGetCurrentProcess();
  ProcessObjectCompartmentId = NdisGetProcessObjectCompartmentId(CurrentProcess);
  v6 = ProcessObjectCompartmentId;
  if ( ProcessObjectCompartmentId != a1 && ProcessObjectCompartmentId != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(ProcessObjectCompartmentId, &v12) < 0
      || (int)ndisIfGetCompartmentNamespaceGuid(a1, &v14) < 0 )
    {
      return 0LL;
    }
    v9 = v12 - v14;
    if ( v12 == v14 )
      v9 = v13 - v15;
    if ( v9 )
      return 0LL;
  }
  v11 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, a2, &v11);
  v7 = (unsigned int *)v11;
  if ( v11 && v6 != a2 && v6 != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(v6, &v12) < 0 || (int)ndisIfGetCompartmentNamespaceGuid(a2, &v14) < 0 )
      goto LABEL_18;
    v10 = v12 - v14;
    if ( v12 == v14 )
      v10 = v13 - v15;
    if ( v10 )
    {
LABEL_18:
      ndisIfDereferenceCompartmentForUser(v7);
      return 0LL;
    }
  }
  return v7;
}
