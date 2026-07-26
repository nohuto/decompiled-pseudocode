/*
 * XREFs of ndisIfDeleteStackEntries @ 0x1C00679E4
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C00994C0 (ndisIMDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfDeleteStackEntries(_DWORD *a1)
{
  PVOID *v1; // rbx
  PVOID *v3; // rcx
  _DWORD *v4; // rax
  PVOID *v5; // rdx
  PVOID **v6; // rax

  v1 = (PVOID *)ndisIfStackEntryList;
  while ( v1 != &ndisIfStackEntryList )
  {
    v3 = v1;
    v1 = (PVOID *)*v1;
    v4 = v3[3];
    if ( v4 == a1 || v3[4] == a1 )
    {
      --v4[324];
      --*((_DWORD *)v3[4] + 325);
      v5 = (PVOID *)*v3;
      if ( *((PVOID **)*v3 + 1) != v3 || (v6 = (PVOID **)v3[1], *v6 != v3) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
