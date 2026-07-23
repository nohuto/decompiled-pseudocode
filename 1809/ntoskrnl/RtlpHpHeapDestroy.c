/*
 * XREFs of RtlpHpHeapDestroy @ 0x1401545C4
 * Callers:
 *     RtlpHpHeapCreate @ 0x140140BE0 (RtlpHpHeapCreate.c)
 *     ExCleanupSessionHeapManager @ 0x140154554 (ExCleanupSessionHeapManager.c)
 *     RtlHpHeapManagerCleanup @ 0x140154AF4 (RtlHpHeapManagerCleanup.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x1400080A4 (RtlpHpMetadataFree.c)
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 *     RtlpHpRegisterEnvironment @ 0x140141460 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextCleanup @ 0x140154764 (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x1401548C0 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x140154A00 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140154A48 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1402FE304 (RtlpHpLargeAllocationDestroy.c)
 */

__int64 __fastcall RtlpHpHeapDestroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // esi
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // r11
  __int128 v16; // xmm0
  bool v17; // zf
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  __int64 v22; // [rsp+68h] [rbp+28h] BYREF

  v21 = a1;
  v4 = a1 + 72;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 72);
  if ( (v6 & 1) != 0 && v7 )
    v7 ^= v4;
  v8 = v6 & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v7 )
        {
          v9 = (_QWORD *)v7;
          if ( v8 )
            v7 ^= *(_QWORD *)v7;
          else
            v7 = *(_QWORD *)v7;
          *v9 = 0LL;
        }
        v10 = *(_QWORD *)(v7 + 8);
        if ( !v10 )
          break;
        v11 = v7;
        if ( v8 )
          v7 ^= v10;
        else
          v7 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      v12 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 && v12 )
        v12 ^= v7;
      RtlpHpLargeAllocationDestroy(v7, a1);
      if ( !v12 )
        break;
      v7 = v12;
    }
    LOBYTE(v6) = *(_BYTE *)(v4 + 8);
  }
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( (v6 & 1) != 0 )
    *(_BYTE *)(v4 + 8) = 1;
  v13 = v21;
  v14 = v21 + 672;
  while ( *(_QWORD *)v14 )
  {
    RtlpHpVsSubsegmentCleanup(v13 + 640, v14 ^ *(_QWORD *)v14, a3, a4);
    RtlpHpVsSubsegmentFree(v13 + 640, v15, 1LL);
  }
  RtlpHpLfhContextCleanup(v21 + 832);
  RtlpHpSegContextCleanup(v21 + 256);
  RtlpHpSegContextCleanup(v21 + 448);
  v16 = *(_OWORD *)v21;
  v22 = *(_QWORD *)(v21 + 248) - v21;
  v17 = (*(_BYTE *)(v21 + 30) & 1) == 0;
  v19 = v16;
  v20 = *(_OWORD *)v21;
  if ( v17 )
    RtlpHpFreeVA((unsigned __int64 *)&v21, (unsigned __int64 *)&v22, BYTE1(v19) < 2u ? 16809984 : 0x8000, &v20);
  else
    RtlpHpMetadataFree(v21, &v20);
  return RtlpHpRegisterEnvironment(&v19);
}
