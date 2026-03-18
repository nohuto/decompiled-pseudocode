/*
 * XREFs of vSrcOpaqCopyS4D32 @ 0x1C0121780
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C0121960 (-pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS4D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r14
  _DWORD *v15; // rdi
  unsigned __int8 *v16; // rbx
  _DWORD *v17; // r10
  unsigned __int8 *v19; // r8
  _DWORD *v20; // rdx
  int i; // r9d
  unsigned __int64 v22; // rax
  _DWORD *v23; // rdx
  _QWORD v24[3]; // [rsp+48h] [rbp-40h] BYREF

  v12 = a3;
  v24[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v15 = pvFillOpaqTable(4u, a9, a10, a11);
  v24[1] = v15;
  v16 = (unsigned __int8 *)(a2 / 2 + a1);
  v17 = (_DWORD *)(a4 + 4LL * a5);
  while ( a8 )
  {
    v19 = v16;
    v20 = v17;
    if ( ((a5 + 1) & 0xFFFFFFFE) != a5 )
    {
      *v17 = v15[*v16 & 0xF];
      v20 = v17 + 1;
      v19 = v16 + 1;
    }
    for ( i = 0; i < (int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2; ++i )
    {
      v22 = *v19++;
      *v20 = v15[v22 >> 4];
      v23 = v20 + 1;
      *v23 = v15[v22 & 0xF];
      v20 = v23 + 1;
    }
    if ( a6 != (a6 & 0xFFFFFFFE) )
      *v20 = v15[(unsigned __int64)*v19 >> 4];
    --a8;
    v16 += v12;
    v17 = (_DWORD *)((char *)v17 + a7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v24);
}
