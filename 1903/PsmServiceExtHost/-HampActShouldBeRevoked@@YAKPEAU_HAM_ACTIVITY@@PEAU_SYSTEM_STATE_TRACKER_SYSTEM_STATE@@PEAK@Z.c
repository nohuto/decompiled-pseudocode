/*
 * XREFs of ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@PEAK@Z @ 0x18007B12C
 * Callers:
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18007711C (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 * Callees:
 *     ?HampPkgGetBackgroundAccessState@@YA?AW4BACKGROUND_ACCESS_STATE@@PEAU_HAM_PACKAGE@@@Z @ 0x1800796D0 (-HampPkgGetBackgroundAccessState@@YA-AW4BACKGROUND_ACCESS_STATE@@PEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampActShouldBeRevoked(
        struct _HAM_ACTIVITY *a1,
        struct _SYSTEM_STATE_TRACKER_SYSTEM_STATE *a2,
        unsigned int *a3)
{
  char v3; // al
  unsigned int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  v3 = *((_BYTE *)a1 + 548);
  v4 = 0;
  *a3 = 0;
  if ( (unsigned __int8)(v3 - 2) <= 1u )
  {
    v7 = 0;
    if ( (*(_BYTE *)a2 & 8) != 0 && (*((_BYTE *)a1 + 120) & 2) != 0 )
    {
      *a3 = 2;
      v7 = 2;
    }
    v8 = v7;
    if ( (*(_BYTE *)a2 & 0x20) != 0 && (*((_BYTE *)a1 + 120) & 1) != 0 )
    {
      v8 = v7 | 1;
      *a3 = v7 | 1;
    }
    v9 = v8;
    if ( (*(_BYTE *)a2 & 2) == 0 && (*((_BYTE *)a1 + 120) & 0x20) != 0 )
    {
      v9 = v8 | 0x20;
      *a3 = v8 | 0x20;
    }
    if ( (*(_BYTE *)a2 & 0x10) != 0 && (*((_BYTE *)a1 + 120) & 0x40) != 0 )
      *a3 = v9 | 0x40;
    if ( (((*((_DWORD *)a1 + 28) & 0x8000) != 0) & ((HampPkgGetBackgroundAccessState(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 776LL)
                                                                                               + 88LL)) & 1) != 0)) != 0 )
      *a3 |= 0x100u;
  }
  LOBYTE(v4) = *a3 != 0;
  return v4;
}
