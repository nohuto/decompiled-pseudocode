/*
 * XREFs of vSrcTranCopyS8D32 @ 0x1C00ABE10
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00AC124 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall vSrcTranCopyS8D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rsi
  _BYTE *v14; // r12
  unsigned int *v15; // r15
  unsigned int v16; // r14d
  unsigned int v17; // edi
  char *v18; // rdx
  _BYTE *v20; // r11
  unsigned int *i; // rax
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rsi
  int v25; // r9d
  unsigned int v26; // r10d
  int v27; // r9d
  unsigned int v28; // r10d
  int v29; // r9d
  char *v30; // [rsp+30h] [rbp-98h]
  HSEMAPHORE v31; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v32[15]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  memset(v32, 0, 0x40uLL);
  v34 = a6 - a5;
  v31 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v14 = (_BYTE *)(v12 + a1);
  v15 = (unsigned int *)(a4 + 4LL * a5);
  v16 = *v15;
  v17 = a9;
  v18 = (char *)pvFillOpaqTableCT(4u, a9, *v15, a11, (struct _BLENDINFO *)v32, 1);
  v30 = v18;
  while ( a8 )
  {
    v20 = v14;
    for ( i = v15; i < &v15[v34]; ++i )
    {
      v22 = (unsigned __int8)*v20;
      if ( *v20 )
      {
        if ( (_DWORD)v22 == 114 )
        {
          *i = v17;
        }
        else
        {
          v23 = *i;
          v24 = v22;
          if ( *i == v16 )
          {
            *i = *(_DWORD *)&v18[v24 * 4];
          }
          else
          {
            v25 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & v32[3]) << SLOBYTE(v32[0])) >> SBYTE4(v32[0]))
                                     + v32[6]);
            v26 = v32[3] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v25
                                                                             + (((HIDWORD(v32[4]) - v25)
                                                                               * alAlpha[LOBYTE(off_1C031C100[v24])]
                                                                               + 0x80000) >> 20))
                                                              + v32[7]) << SBYTE4(v32[0])) >> SLOBYTE(v32[0]));
            v27 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & HIDWORD(v32[3])) << SLOBYTE(v32[1])) >> SBYTE4(v32[1]))
                                     + v32[6]);
            v28 = HIDWORD(v32[3]) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v27
                                                                                      + (((LODWORD(v32[5]) - v27)
                                                                                        * alAlpha[BYTE1(off_1C031C100[v24])]
                                                                                        + 0x80000) >> 20))
                                                                       + v32[7]) << SBYTE4(v32[1])) >> SLOBYTE(v32[1])) | v26;
            v29 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & v32[4]) << SLOBYTE(v32[2])) >> SBYTE4(v32[2]))
                                     + v32[6]);
            *i = v32[4] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v29
                                                                            + (((HIDWORD(v32[5]) - v29)
                                                                              * alAlpha[BYTE2(off_1C031C100[v24])]
                                                                              + 0x80000) >> 20))
                                                             + v32[7]) << SBYTE4(v32[2])) >> SLOBYTE(v32[2])) | v28;
            v18 = v30;
          }
          v17 = a9;
        }
      }
      ++v20;
    }
    --a8;
    v14 += a3;
    v15 = (unsigned int *)((char *)v15 + a7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v31);
}
