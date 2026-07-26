/*
 * XREFs of ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x1C0122090
 * Callers:
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01218D8 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisPdAreBMsCompatible(
        const struct _NDIS_PD_BLOCK *a1,
        __int64 (__fastcall **a2)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))
{
  unsigned __int8 PDBuffersManagedByDriver; // al
  char v3; // r8

  PDBuffersManagedByDriver = a1->PDBuffersManagedByDriver;
  v3 = 1;
  if ( (PDBuffersManagedByDriver || a2[7] != NdisPDBMCreateDomain)
    && (PDBuffersManagedByDriver != 1
     || a2[7] != (__int64 (__fastcall *)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))a1->Miniport->DriverHandle->PDBMCreateDomain) )
  {
    return 0;
  }
  return v3;
}
