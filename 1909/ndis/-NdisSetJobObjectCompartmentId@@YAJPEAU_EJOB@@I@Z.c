/*
 * XREFs of ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C011A27C
 * Callers:
 *     ndisNsiSetAllJobInformation @ 0x1C00AC0F0 (ndisNsiSetAllJobInformation.c)
 * Callees:
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C000A8AC (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0020FB0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00210A0 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ndisIfSetCompartmentJobObject @ 0x1C0067EA4 (ndisIfSetCompartmentJobObject.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00ABC74 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C00ABD00 (NdisGetJobObjectCompartmentId.c)
 */

__int64 __fastcall NdisSetJobObjectCompartmentId(PVOID *a1, unsigned int a2)
{
  _QWORD *JobProperty; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // rdi
  unsigned int JobObjectCompartmentId; // eax
  int StateObject; // ebx
  __int64 v8; // rcx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  JobProperty = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    JobObjectCompartmentId = NdisGetJobObjectCompartmentId((__int64)a1);
    v3 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisCmValidateCompartmentChange(JobObjectCompartmentId, a2);
    if ( !v3 )
    {
      StateObject = -1073741275;
      goto LABEL_17;
    }
    StateObject = ndisCmCreateStateObject((struct _NDIS_CM_STATE **)&Object);
    if ( StateObject < 0 )
      goto LABEL_15;
    *(_DWORD *)Object = a2;
    ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v3);
  }
  JobProperty = (_QWORD *)PsGetJobProperty(a1, 1833133134LL);
  do
  {
    StateObject = PsSetJobProperty(a1, 1833133134LL, Object);
    if ( StateObject != -1073741771 )
      break;
    StateObject = PsSetJobProperty(a1, 1833133134LL, 0LL);
  }
  while ( StateObject == -1073741771 );
  if ( StateObject < 0 )
  {
LABEL_15:
    if ( v3 )
      ndisCmDereferenceCompartment(v3);
    goto LABEL_17;
  }
  if ( JobProperty )
  {
    v8 = JobProperty[1];
    if ( v8 )
      StateObject = ndisIfSetCompartmentJobObject(v8, a1, 1);
  }
  if ( v3 )
  {
    StateObject = ndisIfSetCompartmentJobObject((__int64)v3, a1, 0);
    goto LABEL_15;
  }
LABEL_17:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( JobProperty )
    ObfDereferenceObject(JobProperty);
  return (unsigned int)StateObject;
}
