/*
 * XREFs of ??$ActivateInstance@UITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801FB3C0
 * Callers:
 *     ?CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801FED48 (-CreateTileLoadOptions@DefaultIconManager@@CAJHPEAPEAUITileImageResourceOptions@UnifiedTile@Shel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<WindowsInternal::Shell::UnifiedTile::ITileImageResourceOptions>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_60054b2a_6e3a_4f47_988a_2c737abb1d37.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_60054b2a_6e3a_4f47_988a_2c737abb1d37.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_60054b2a_6e3a_4f47_988a_2c737abb1d37.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_60054b2a_6e3a_4f47_988a_2c737abb1d37,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
