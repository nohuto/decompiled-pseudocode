/*
 * XREFs of ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800A6C90
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800A6884 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800A6130 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 *     ??$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800A7268 (--$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@.c)
 */

unsigned __int64 *__fastcall std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdx
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // kr00_8
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  bool v19; // zf
  __int64 v20; // r15
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 *result; // rax
  __int64 v25; // [rsp+68h] [rbp+10h]

  v5 = a3 - 56;
  v6 = (__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0x4924924924924925LL) >> 64) >> 5;
  v7 = a3 - 56 - a2;
  v8 = a2 + 56 * ((v6 >> 63) + v6);
  if ( v7 / 56 <= 40 )
  {
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a3 - 56, v8) )
      goto LABEL_27;
    ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    v11 = a2;
  }
  else
  {
    v9 = v7 / 56 + 1;
    v10 = 56 * (v9 / 8);
    v25 = 112 * (v9 / 8);
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v10 + a2, a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(112 * (v9 / 8) + a2, 56 * (v9 / 8) + a2) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(56 * (v9 / 8) + a2, a2) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v8 - v10) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v10 + v8, v8) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v8 - v10) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v5 - v10, v5 - v25) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a3 - 56, v5 - v10) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v5 - v10, v5 - v25) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, 56 * (v9 / 8) + a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v5 - v10, v8) )
      goto LABEL_27;
    ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    v11 = 56 * (v9 / 8) + a2;
  }
  if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v11) )
    ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
LABEL_27:
  v12 = v8 + 56;
  if ( a2 < v8 )
  {
    do
    {
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8 - 56, v8) )
        break;
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v13) )
        break;
      v8 = v14;
    }
    while ( a2 < v14 );
  }
  while ( v12 < a3
       && !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v12, v8)
       && !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v12) )
    v12 += 56LL;
  v15 = v12;
  v16 = v8;
  while ( 1 )
  {
    while ( v15 < a3 )
    {
      if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v15) )
      {
        if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v15, v8) )
          break;
        v17 = v12;
        v12 += 56LL;
        std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
          v17,
          v15);
      }
      v15 += 56LL;
    }
    v18 = v15;
    v19 = v16 == a2;
    if ( v16 > a2 )
    {
      v20 = v16 - 56;
      do
      {
        if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v20, v8) )
        {
          if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v20) )
            break;
          v8 -= 56LL;
          std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
            v8,
            v21);
        }
        v16 -= 56LL;
        v20 -= 56LL;
      }
      while ( a2 < v16 );
      v19 = v16 == a2;
    }
    if ( v19 )
      break;
    v16 -= 56LL;
    if ( v15 != a3 )
    {
      v22 = v16;
LABEL_59:
      v15 += 56LL;
      goto LABEL_60;
    }
    v8 -= 56LL;
    if ( v16 != v8 )
      std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        v16,
        v8);
    v12 -= 56LL;
    v18 = v8;
    v22 = v12;
LABEL_60:
    std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
      v18,
      v22);
  }
  if ( v15 != a3 )
  {
    if ( v12 != v15 )
      std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        v8,
        v12);
    v12 += 56LL;
    v18 = v8;
    v8 += 56LL;
    v22 = v15;
    goto LABEL_59;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v12;
  return result;
}
