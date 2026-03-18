/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0071358
 * Callers:
 *     GdiThreadCallout @ 0x1C00711D0 (GdiThreadCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C00710E0 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00713AC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v3; // rcx

  while ( 1 )
  {
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(a1);
    if ( !ThreadCurrentObj )
      break;
    UMPDOBJ::vRelease(ThreadCurrentObj, 1);
  }
  if ( (int)IsUMPDCachedResourceCleanupSupported() >= 0 )
    UMPDCachedResourceCleanupWrap(a1);
  v3 = *((_QWORD *)a1 + 9);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
