/*
 * XREFs of sub_180032D14 @ 0x180032D14
 * Callers:
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033A60 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_180033E7C @ 0x180033E7C (sub_180033E7C.c)
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037700 @ 0x180037700 (sub_180037700.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 *     sub_1800389A0 @ 0x1800389A0 (sub_1800389A0.c)
 *     sub_180044750 @ 0x180044750 (sub_180044750.c)
 *     sub_180044A30 @ 0x180044A30 (sub_180044A30.c)
 * Callees:
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180032D14(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *a1 = v4;
    a1[1] = v5;
  }
  return a1;
}
