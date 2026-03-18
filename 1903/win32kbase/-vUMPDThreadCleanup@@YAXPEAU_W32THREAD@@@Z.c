/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0059910
 * Callers:
 *     GdiThreadCallout @ 0x1C0059760 (GdiThreadCallout.c)
 * Callees:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C00147C0 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct _W32THREAD *v2; // rcx
  struct UMPDOBJ *v3; // rcx
  __int64 v4; // rcx

  while ( 1 )
  {
    if ( a1 && (v2 = (struct _W32THREAD *)*((_QWORD *)a1 + 5), v2 != (struct _W32THREAD *)((char *)a1 + 40)) )
      v3 = (struct _W32THREAD *)((char *)v2 - 40);
    else
      v3 = 0LL;
    if ( !v3 )
      break;
    UMPDOBJ::vRelease(v3, 1);
  }
  if ( (int)IsUMPDCachedResourceCleanupSupported() >= 0 )
    UMPDCachedResourceCleanupWrap(a1);
  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
