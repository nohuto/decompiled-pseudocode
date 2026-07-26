/*
 * XREFs of ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000A6E4
 * Callers:
 *     ndisNsiSetAllThreadInformation @ 0x1C00AC1E0 (ndisNsiSetAllThreadInformation.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00FBC80 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C0100560 (NdisSetThreadObjectCompartmentId.c)
 * Callees:
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C000A8AC (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00204B8 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0020FB0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00210A0 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C0021328 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 */

__int64 __fastcall ndisCmSetThreadState(PETHREAD Thread, unsigned int *a2, unsigned int *a3)
{
  struct _NDIS_CM_STATE *v3; // r9
  void *v4; // r14
  char v5; // bl
  char v6; // r15
  struct _NDIS_CM_STATE *ThreadProperty; // rax
  int v11; // ebx
  void *v13; // rax
  struct _NDIS_CM_STATE *v14; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v14 = 0LL;
  v6 = 0;
  if ( a2 && *a2 )
  {
    ndisCmGetThreadState(Thread, &v15, &v16);
    v13 = ndisCmValidateCompartmentChange(v15, *a2);
    v3 = v14;
    v4 = v13;
    if ( !v13 )
    {
      v11 = -1073741275;
      goto LABEL_18;
    }
    v5 = 1;
  }
  if ( !a3 )
  {
LABEL_5:
    ThreadProperty = (struct _NDIS_CM_STATE *)PsGetThreadProperty(Thread, 0x6D43644EuLL, 1u);
    v14 = ThreadProperty;
    v3 = ThreadProperty;
    if ( ThreadProperty )
    {
      if ( a2 )
      {
        *(_DWORD *)ThreadProperty = *a2;
        ndisCmAssignCompartmentHandleToCmState(v14, v4);
        v3 = v14;
      }
      if ( a3 )
      {
        *((_DWORD *)v3 + 1) = *a3;
        v3 = v14;
      }
      if ( !*(_DWORD *)v3 && !*((_DWORD *)v3 + 1) )
      {
        ObfDereferenceObject(v3);
        v3 = 0LL;
        v6 = 1;
        v14 = 0LL;
      }
    }
    else if ( v5 )
    {
      v11 = ndisCmCreateStateObject(&v14);
      if ( v11 < 0 )
        goto LABEL_15;
      if ( a2 )
      {
        *(_DWORD *)v14 = *a2;
        ndisCmAssignCompartmentHandleToCmState(v14, v4);
      }
      if ( a3 )
        *((_DWORD *)v14 + 1) = *a3;
      v3 = v14;
LABEL_14:
      v11 = PsSetThreadProperty(Thread, 1833133134LL, v3);
LABEL_15:
      v3 = v14;
      goto LABEL_16;
    }
    v11 = 0;
    if ( !v6 )
      goto LABEL_16;
    goto LABEL_14;
  }
  if ( *a3 == -1 )
  {
    v5 = 1;
    goto LABEL_5;
  }
  if ( !*a3 )
    goto LABEL_5;
  v11 = -1073741811;
LABEL_16:
  if ( v4 )
  {
    ndisIfDereferenceCompartmentForUser((char)v4);
    v3 = v14;
  }
LABEL_18:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v11;
}
