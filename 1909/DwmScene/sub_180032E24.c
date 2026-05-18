/*
 * XREFs of sub_180032E24 @ 0x180032E24
 * Callers:
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033B70 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_180033F8C @ 0x180033F8C (sub_180033F8C.c)
 *     sub_1800350C0 @ 0x1800350C0 (sub_1800350C0.c)
 *     sub_180037810 @ 0x180037810 (sub_180037810.c)
 *     sub_1800380A0 @ 0x1800380A0 (sub_1800380A0.c)
 *     sub_180038AB0 @ 0x180038AB0 (sub_180038AB0.c)
 *     sub_180044860 @ 0x180044860 (sub_180044860.c)
 *     sub_180044B40 @ 0x180044B40 (sub_180044B40.c)
 * Callees:
 *     __RTDynamicCast @ 0x180125BA6 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180032E24(__int64 *a1, _QWORD *a2)
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
