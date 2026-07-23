/*
 * XREFs of KiCopyXStateArea @ 0x1402944F0
 * Callers:
 *     KxContextToKframes @ 0x14008A770 (KxContextToKframes.c)
 *     KeContextFromKframes @ 0x1400A27B8 (KeContextFromKframes.c)
 *     PspGetContext @ 0x140620FC8 (PspGetContext.c)
 *     PspSetContext @ 0x140621390 (PspSetContext.c)
 *     KeCopyContextFromUch @ 0x1408473C8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140847684 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x140847838 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x140847AA4 (KeCopyContextToUmsContext.c)
 *     KiCopyUchToStagingArea @ 0x140848114 (KiCopyUchToStagingArea.c)
 *     KiRestoreUchFromUmsContext @ 0x140848260 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __fastcall KiCopyXStateArea(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  _OWORD *v8; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  unsigned int v12; // edi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r12
  unsigned int v15; // r13d
  unsigned __int64 v16; // r14
  _DWORD *v17; // r15
  unsigned __int64 v18; // rax
  unsigned int *v19; // r14
  unsigned __int64 v20; // r15

  if ( a2 )
  {
    v4 = 0;
    v6 = a2 & MEMORY[0xFFFFF780000003D8] & *(_QWORD *)(a3 + 512);
    *(_QWORD *)(a1 + 512) = v6 | *(_QWORD *)(a1 + 512) & ~a2;
    if ( (v6 & 2) != 0 )
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 24);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      *(_QWORD *)(a1 + 520) = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
      v7 = *(_QWORD *)(a3 + 520);
      if ( (v6 & 1) != 0 )
      {
        *(_OWORD *)a1 = *(_OWORD *)a3;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(a1 + 48) = *(_OWORD *)(a3 + 48);
        *(_OWORD *)(a1 + 64) = *(_OWORD *)(a3 + 64);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 80);
        *(_OWORD *)(a1 + 96) = *(_OWORD *)(a3 + 96);
        *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 112);
        *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 128);
        *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 144);
      }
      if ( (v6 & 2) != 0 )
      {
        v8 = (_OWORD *)(a1 + 160);
        v9 = 2LL;
        v10 = (_OWORD *)(a3 + 160);
        do
        {
          *v8 = *v10;
          v8[1] = v10[1];
          v8[2] = v10[2];
          v8[3] = v10[3];
          v8[4] = v10[4];
          v8[5] = v10[5];
          v8[6] = v10[6];
          v8 += 8;
          v11 = v10[7];
          v10 += 8;
          *(v8 - 1) = v11;
          --v9;
        }
        while ( v9 );
      }
      v12 = 576;
      v13 = v6 >> 2;
      v14 = v7 >> 2;
      v15 = 2;
      v16 = MEMORY[0xFFFFF780000005F8] >> 2;
      v17 = (_DWORD *)0xFFFFF78000000404LL;
      do
      {
        v18 = v13;
        if ( (v14 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v12 = (v12 + 63) & 0xFFFFFFC0;
          if ( (v13 & 1) != 0 )
          {
            memmove((void *)(a1 + (unsigned int)*(v17 - 1)), (const void *)(a3 + v12), (unsigned int)*v17);
            v18 = v13;
          }
          v12 += *v17;
        }
        v13 >>= 1;
        v14 >>= 1;
        v16 >>= 1;
        if ( v18 < 2 )
          break;
        ++v15;
        v17 += 2;
      }
      while ( v15 < 0x40 );
    }
    else
    {
      v19 = (unsigned int *)0xFFFFF780000003F4LL;
      do
      {
        v20 = v6;
        if ( (v6 & 1) != 0 )
          memmove((void *)(*(v19 - 1) + a1), (const void *)(*(v19 - 1) + a3), *v19);
        v6 >>= 1;
        if ( v20 < 2 )
          break;
        ++v4;
        v19 += 2;
      }
      while ( v4 < 0x40 );
    }
  }
}
