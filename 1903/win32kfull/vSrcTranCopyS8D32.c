/*
 * XREFs of vSrcTranCopyS8D32 @ 0x1C00D6020
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D6330 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
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
  unsigned int v16; // r14d
  unsigned int v17; // esi
  _DWORD *v18; // r15
  int v19; // edx
  unsigned __int8 *v20; // rbx
  unsigned int *i; // rax
  unsigned __int8 v22; // cl
  unsigned int v23; // esi
  unsigned __int8 *v24; // r11
  int v25; // r9d
  int v26; // r10d
  int v27; // r9d
  unsigned int v28; // r10d
  int v29; // r9d
  _QWORD v30[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v31; // [rsp+50h] [rbp-78h] BYREF
  __int64 v32; // [rsp+60h] [rbp-68h]
  __int64 v33; // [rsp+68h] [rbp-60h]
  __int64 v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  __int128 v36; // [rsp+80h] [rbp-48h]
  unsigned int v38; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v38 = a6 - a5;
  v30[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v14 = (unsigned __int8 *)(v12 + a1);
  v15 = (unsigned int *)(a4 + 4LL * a5);
  v16 = *v15;
  v17 = a9;
  v18 = pvFillOpaqTableCT(4u, a9, *v15, a11, (struct _BLENDINFO *)&v31, 1);
  v30[1] = v18;
  v19 = a8;
  while ( v19 )
  {
    v20 = v14;
    for ( i = v15; i < &v15[v38]; ++i )
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
          if ( *i == v16 )
          {
            *i = v18[v22];
          }
          else
          {
            v24 = (unsigned __int8 *)off_1C03210F0 + 4 * v22;
            v25 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & (unsigned int)v33) << v31) >> SBYTE4(v31))
                                     + (_QWORD)v36);
            v26 = v33 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v25
                                                                          + (((HIDWORD(v34) - v25) * alAlpha[*v24]
                                                                            + 0x80000) >> 20))
                                                           + *((_QWORD *)&v36 + 1)) << SBYTE4(v31)) >> v31);
            v27 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & HIDWORD(v33)) << SBYTE8(v31)) >> SBYTE12(v31))
                                     + (_QWORD)v36);
            v28 = HIDWORD(v33) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v27
                                                                                   + ((((int)v35 - v27)
                                                                                     * alAlpha[v24[1]]
                                                                                     + 0x80000) >> 20))
                                                                    + *((_QWORD *)&v36 + 1)) << SBYTE12(v31)) >> SBYTE8(v31)) | v26;
            v29 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v23 & (unsigned int)v34) << v32) >> SBYTE4(v32))
                                     + (_QWORD)v36);
            *i = v34 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v29
                                                                         + (((HIDWORD(v35) - v29) * alAlpha[v24[2]]
                                                                           + 0x80000) >> 20))
                                                          + *((_QWORD *)&v36 + 1)) << SBYTE4(v32)) >> v32) | v28;
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
