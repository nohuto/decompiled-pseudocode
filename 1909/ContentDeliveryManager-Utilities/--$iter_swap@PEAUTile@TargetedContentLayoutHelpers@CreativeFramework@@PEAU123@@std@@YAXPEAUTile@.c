/*
 * XREFs of ??$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800A73F8
 * Callers:
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800A6E20 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180032360 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800A82CC (--4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        __int64 a1,
        __int64 a2)
{
  __int128 v4; // xmm0
  void *v5[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+40h] [rbp-28h]
  char v8; // [rsp+50h] [rbp-18h]

  v6 = 7LL;
  v5[2] = 0LL;
  LOWORD(v5[0]) = 0;
  std::wstring::_Assign_rv(v5, (_QWORD *)a1);
  v4 = *(_OWORD *)(a1 + 32);
  v8 = *(_BYTE *)(a1 + 48);
  v7 = v4;
  CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(a1, a2);
  CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(a2, v5);
  if ( v6 >= 8 )
    operator delete(v5[0]);
}
