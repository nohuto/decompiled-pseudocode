/*
 * XREFs of ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007330
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800073AC (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APP.c)
 * Callees:
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800081FC (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180008264 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppGetActivationState(
        struct _HAM_APPLICATION *a1,
        enum _HAM_EXTERNAL_APPLICATION_STATE *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  int v6; // r9d

  HampAppAcquireLockShared(a1);
  v6 = *((_DWORD *)a1 + 152) >> 3;
  *(_DWORD *)a2 = *((_DWORD *)a1 + 152) & 7;
  *(_DWORD *)a3 = (unsigned __int16)v6;
  HampAppReleaseLockShared(a1);
  if ( *(_DWORD *)a2 == 4 )
    *(_DWORD *)a2 = 3;
}
