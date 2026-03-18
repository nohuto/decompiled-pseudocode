/*
 * XREFs of ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0297AAC
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E03CC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C011869C (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0297C20 (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C0297C84 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 */

__int64 __fastcall bUnHookRedir(struct XDCOBJ *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  struct SURFACE *v4; // rcx
  signed __int32 v5; // ett
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int64 result; // rax
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  if ( !gpRedirDev )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  v4 = *(struct SURFACE **)(v2 + 496);
  v15 = v3;
  _m_prefetchw((const void *)(v3 + 40));
  do
    v5 = *(_DWORD *)(v3 + 40);
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 40), v5 & 0xFF7FFFFF, v5) );
  *(_QWORD *)(v3 + 3520) = 0LL;
  bUndoMakeOpaque(v4);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v14 = v7;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v14, (struct PDEVOBJ *)&v15, (struct PDEVOBJ *)&v14);
  v8 = v15;
  memmove((void *)(v7 + 88), (const void *)(v15 + 88), 0x598uLL);
  v9 = 8LL;
  v10 = v7 + 1544;
  v11 = (_OWORD *)(v8 + 1544);
  do
  {
    *(_OWORD *)v10 = *v11;
    *(_OWORD *)(v10 + 16) = v11[1];
    *(_OWORD *)(v10 + 32) = v11[2];
    *(_OWORD *)(v10 + 48) = v11[3];
    *(_OWORD *)(v10 + 64) = v11[4];
    *(_OWORD *)(v10 + 80) = v11[5];
    *(_OWORD *)(v10 + 96) = v11[6];
    v10 += 128LL;
    v12 = v11[7];
    v11 += 8;
    *(_OWORD *)(v10 - 16) = v12;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v10 = *v11;
  *(_OWORD *)(v10 + 16) = v11[1];
  *(_OWORD *)(v10 + 32) = v11[2];
  *(_OWORD *)(v10 + 48) = v11[3];
  *(_OWORD *)(v10 + 64) = v11[4];
  *(_OWORD *)(v10 + 80) = v11[5];
  *(_OWORD *)(v10 + 96) = v11[6];
  *(_QWORD *)(v10 + 112) = *((_QWORD *)v11 + 14);
  result = 1LL;
  *(_QWORD *)(v7 + 88) = v7;
  return result;
}
