/*
 * XREFs of ?DisplayID_GetPrimaryUseCase@@YAJPEAUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0056C2C
 * Callers:
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C0172608 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetPrimaryUseCase(struct DisplayIDObj *a1, enum DISPLAY_USE_CASE *a2)
{
  if ( !a1 || !*((_DWORD *)a1 + 5) || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  if ( (**(_BYTE **)a1 & 0xF0) != 0x20 )
    return 3221225659LL;
  *(_BYTE *)a2 = *(_BYTE *)(*(_QWORD *)a1 + 2LL) & 0xF;
  return 0LL;
}
