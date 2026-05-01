/*
 * XREFs of ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x18007AF68
 * Callers:
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x18007548C (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x180079428 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 */

__int64 __fastcall HampActResetExternalResourcePriority(struct _RM_HAM_ACTIVITY_HOST **a1)
{
  int v2; // eax
  int v3; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx

  HampHostAcquireLockExclusiveEx(a1[10], 0);
  v2 = *((_DWORD *)a1 + 136);
  if ( (v2 & 1) != 0 )
  {
    v3 = -1073740682;
  }
  else if ( *((_BYTE *)a1 + 548) == 4 )
  {
    v3 = -1073741275;
  }
  else if ( (v2 & 8) != 0 )
  {
    v3 = -1058275327;
  }
  else
  {
    v4 = a1[10];
    *((_DWORD *)a1 + 136) = v2 | 1;
    HampHostReleaseLockExclusiveEx(v4);
    v3 = HampRmContextResetExternalResourcePriority(a1[11]);
    HampHostAcquireLockExclusiveEx(a1[10], 0);
    *((_DWORD *)a1 + 136) &= ~1u;
    if ( v3 >= 0 )
      v3 = 0;
  }
  HampHostReleaseLockExclusiveEx(a1[10]);
  return (unsigned int)v3;
}
