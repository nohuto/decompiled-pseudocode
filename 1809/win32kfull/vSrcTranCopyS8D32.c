/*
 * XREFs of vSrcTranCopyS8D32 @ 0x1C00E4400
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00E4718 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  unsigned __int8 *v14; // r13
  unsigned int *v15; // r12
  unsigned int v16; // r15d
  unsigned int v17; // edi
  char *v18; // r14
  int v19; // edx
  unsigned __int8 *v20; // r11
  unsigned int *i; // rax
  unsigned __int8 v22; // cl
  unsigned int v23; // edi
  __int64 v24; // rsi
  int v25; // r9d
  unsigned int v26; // r10d
  int v27; // r9d
  unsigned int v28; // r10d
  int v29; // r9d
  _QWORD v30[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v31[15]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v33; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  memset(v31, 0, 0x40uLL);
  v33 = a6 - a5;
  v30[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v14 = (unsigned __int8 *)(v12 + a1);
  v15 = (unsigned int *)(a4 + 4LL * a5);
  v16 = *v15;
  v17 = a9;
  v18 = (char *)pvFillOpaqTableCT(4u, a9, *v15, a11, (struct _BLENDINFO *)v31, 1);
  v30[1] = v18;
  v19 = a8;
  while ( v19 )
  {
    v20 = v14;
    for ( i = v15; i < &v15[v33]; ++i )
    {
      v22 = *v20;
      if ( *v20 )
      {
        if ( v22 == 114 )
        {
          *i = v17;
        }
        else
        {
          v23 = *i;
          v24 = 4LL * v22;
          if ( *i == v16 )
          {
            *i = *(_DWORD *)&v18[v24];
          }
          else
          {
            v25 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & v31[3]) << SLOBYTE(v31[0])) >> SBYTE4(v31[0]))
                                     + v31[6]);
            v26 = v31[3] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v25
                                                                             + (((HIDWORD(v31[4]) - v25)
                                                                               * alAlpha[*((unsigned __int8 *)off_1C030C100
                                                                                         + v24)]
                                                                               + 0x80000) >> 20))
                                                              + v31[7]) << SBYTE4(v31[0])) >> SLOBYTE(v31[0]));
            v27 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & HIDWORD(v31[3])) << SLOBYTE(v31[1])) >> SBYTE4(v31[1]))
                                     + v31[6]);
            v28 = HIDWORD(v31[3]) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v27
                                                                                      + (((LODWORD(v31[5]) - v27)
                                                                                        * alAlpha[*((unsigned __int8 *)off_1C030C100
                                                                                                  + v24
                                                                                                  + 1)]
                                                                                        + 0x80000) >> 20))
                                                                       + v31[7]) << SBYTE4(v31[1])) >> SLOBYTE(v31[1])) | v26;
            v29 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & v31[4]) << SLOBYTE(v31[2])) >> SBYTE4(v31[2]))
                                     + v31[6]);
            *i = v31[4] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v29
                                                                            + (((HIDWORD(v31[5]) - v29)
                                                                              * alAlpha[*((unsigned __int8 *)off_1C030C100
                                                                                        + v24
                                                                                        + 2)]
                                                                              + 0x80000) >> 20))
                                                             + v31[7]) << SBYTE4(v31[2])) >> SLOBYTE(v31[2])) | v28;
          }
          v17 = a9;
        }
      }
      ++v20;
    }
    v19 = --a8;
    v14 += a3;
    v15 = (unsigned int *)((char *)v15 + a7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v30);
}
