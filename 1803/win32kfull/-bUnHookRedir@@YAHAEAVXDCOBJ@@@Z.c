/*
 * XREFs of ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C026D8E0
 * Callers:
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F1EC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009ABC8 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026DAC0 (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C026DB24 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 */

__int64 __fastcall bUnHookRedir(struct XDCOBJ *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  struct SURFACE *v4; // rcx
  signed __int32 v5; // ett
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int64 result; // rax
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF
  __int64 v19; // [rsp+40h] [rbp+18h] BYREF

  if ( !gpRedirDev )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  v4 = *(struct SURFACE **)(v2 + 504);
  v19 = v3;
  _m_prefetchw((const void *)(v3 + 40));
  do
    v5 = *(_DWORD *)(v3 + 40);
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 40), v5 & 0xFF7FFFFF, v5) );
  *(_QWORD *)(v3 + 3512) = 0LL;
  bUndoMakeOpaque(v4);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v18 = v7;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v18, (struct PDEVOBJ *)&v19, (struct PDEVOBJ *)&v18);
  v8 = v19;
  v9 = (_OWORD *)(v7 + 80);
  v10 = 11LL;
  v11 = (_OWORD *)(v19 + 80);
  do
  {
    *v9 = *v11;
    v9[1] = v11[1];
    v9[2] = v11[2];
    v9[3] = v11[3];
    v9[4] = v11[4];
    v9[5] = v11[5];
    v9[6] = v11[6];
    v9 += 8;
    v12 = v11[7];
    v11 += 8;
    *(v9 - 1) = v12;
    --v10;
  }
  while ( v10 );
  v13 = 8LL;
  *v9 = *v11;
  *((_QWORD *)v9 + 2) = *((_QWORD *)v11 + 2);
  v14 = v7 + 1536;
  v15 = (_OWORD *)(v8 + 1536);
  do
  {
    *(_OWORD *)v14 = *v15;
    *(_OWORD *)(v14 + 16) = v15[1];
    *(_OWORD *)(v14 + 32) = v15[2];
    *(_OWORD *)(v14 + 48) = v15[3];
    *(_OWORD *)(v14 + 64) = v15[4];
    *(_OWORD *)(v14 + 80) = v15[5];
    *(_OWORD *)(v14 + 96) = v15[6];
    v14 += 128LL;
    v16 = v15[7];
    v15 += 8;
    *(_OWORD *)(v14 - 16) = v16;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)v14 = *v15;
  *(_OWORD *)(v14 + 16) = v15[1];
  *(_OWORD *)(v14 + 32) = v15[2];
  *(_OWORD *)(v14 + 48) = v15[3];
  *(_OWORD *)(v14 + 64) = v15[4];
  *(_OWORD *)(v14 + 80) = v15[5];
  *(_OWORD *)(v14 + 96) = v15[6];
  *(_QWORD *)(v14 + 112) = *((_QWORD *)v15 + 14);
  memmove((void *)(v7 + 3552), (const void *)(v8 + 3552), gdwDirectDrawContext);
  result = 1LL;
  *(_QWORD *)(v7 + 80) = v7;
  return result;
}
