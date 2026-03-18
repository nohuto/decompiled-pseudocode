/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00B6B0C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00B59E8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ldevUnloadImage @ 0x1C0048B20 (ldevUnloadImage.c)
 *     DxDdCleanupDxGraphics @ 0x1C00B6BA0 (DxDdCleanupDxGraphics.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00B6C4C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1, __int64 a2)
{
  struct PDEV *v2; // rbx
  struct tagGRAPHICS_DEVICE *v3; // r8
  struct tagGRAPHICS_DEVICE *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  struct _LDEV *v7; // [rsp+30h] [rbp+8h]
  struct PDEV *v8; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = gppdevList;
    if ( !gppdevList )
      break;
    PDEV::InitializeClientReferenceCount(gppdevList);
    *((_DWORD *)v2 + 3) = 1;
    v8 = v2;
    PDEVOBJ::vUnreferencePdev(&v8, 2, v5);
  }
  v3 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    do
    {
      v4 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v3 + 16);
      if ( (*((_DWORD *)v3 + 40) & 0x4000000) != 0 )
      {
        v6 = *((_QWORD *)v3 + 35);
        if ( v6 )
        {
          LOBYTE(a2) = 1;
          ((void (__fastcall *)(__int64, __int64, _QWORD))qword_1C02151A0)(v6, a2, *((_QWORD *)v3 + 36));
        }
      }
      v3 = v4;
    }
    while ( v4 );
  }
  DxDdCleanupDxGraphics();
  while ( 1 )
  {
    v7 = gpldevDrivers;
    if ( !gpldevDrivers )
      break;
    *((_DWORD *)gpldevDrivers + 7) = 1;
    ldevUnloadImage((__int64)v7);
  }
}
