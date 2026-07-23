/*
 * XREFs of KiRestoreUchFromUmsContext @ 0x140848260
 * Callers:
 *     KeFixUserSwitchContext @ 0x140847C68 (KeFixUserSwitchContext.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401BBE50 (KeContextToKframes.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiCopyXStateArea @ 0x1402944F0 (KiCopyXStateArea.c)
 */

__int64 __fastcall KiRestoreUchFromUmsContext(__int64 a1, __int64 *a2, __int64 a3)
{
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  int v11; // r12d
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-538h]
  __int64 v16; // [rsp+30h] [rbp-528h]
  _QWORD v17[154]; // [rsp+50h] [rbp-508h] BYREF

  memset(v17, 0, sizeof(v17));
  v6 = (_OWORD *)(a3 + 16);
  v7 = v17;
  v8 = 9LL;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    *(v7 - 1) = v6[7];
    v6 += 8;
    --v8;
  }
  while ( v8 );
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  v7[4] = v6[4];
  v16 = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 440LL) & 0x20) != 0
    && (v17[19] < *(_QWORD *)(v16 + 16) || v17[19] > *(_QWORD *)(v16 + 8)) )
  {
    return 3221225725LL;
  }
  v10 = a2[8];
  v11 = *(_DWORD *)(v10 + 24);
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    KiCopyXStateArea(a2[8], MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFDuLL, (a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  else
  {
    v12 = (_OWORD *)((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
    v13 = 4LL;
    do
    {
      *(_OWORD *)v10 = *v12;
      *(_OWORD *)(v10 + 16) = v12[1];
      *(_OWORD *)(v10 + 32) = v12[2];
      *(_OWORD *)(v10 + 48) = v12[3];
      *(_OWORD *)(v10 + 64) = v12[4];
      *(_OWORD *)(v10 + 80) = v12[5];
      *(_OWORD *)(v10 + 96) = v12[6];
      v10 += 128LL;
      *(_OWORD *)(v10 - 16) = v12[7];
      v12 += 8;
      --v13;
    }
    while ( v13 );
  }
  *(_DWORD *)(a2[8] + 24) = v11;
  *(_WORD *)a2[8] = *(_WORD *)((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) & 0x1F3F;
  *(_OWORD *)(a2[10] + 112) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
  *(_OWORD *)(a2[10] + 128) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
  *(_OWORD *)(a2[10] + 144) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
  *(_OWORD *)(a2[10] + 160) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
  *(_OWORD *)(a2[10] + 176) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
  *(_OWORD *)(a2[10] + 192) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
  *(_OWORD *)(a2[11] + 48) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x100);
  *(_OWORD *)(a2[11] + 64) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x110);
  *(_OWORD *)(a2[11] + 80) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x120);
  *(_OWORD *)(a2[11] + 96) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x130);
  *(_OWORD *)(a2[11] + 112) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
  *(_OWORD *)(a2[11] + 128) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x150);
  *(_OWORD *)(a2[11] + 144) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x160);
  *(_OWORD *)(a2[11] + 160) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x170);
  *(_OWORD *)(a2[11] + 176) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x180);
  *(_OWORD *)(a2[11] + 192) = *(_OWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x190);
  *(_DWORD *)(a2[10] + 44) = KiMxCsrMask & *(_DWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    if ( (*(_DWORD *)(a3 + 1264) & 4) != 0 )
      v14 = MEMORY[0xFFFFF780000003D8] & *(_QWORD *)(((a3 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) & 0xFFFFFFFFFFFFFFFDuLL;
    else
      v14 = 1LL;
    *(_QWORD *)(a2[8] + 512) = v14;
  }
  if ( (*(_DWORD *)(a3 + 1264) & 4) == 0 )
  {
    *(_WORD *)(a2[8] + 2) = 0;
    *(_BYTE *)(a2[8] + 4) = 0;
  }
  LOBYTE(v15) = 1;
  KeContextToKframes(a2[10], a2[11], (__int64)v17, 1048579, v15);
  return 0LL;
}
