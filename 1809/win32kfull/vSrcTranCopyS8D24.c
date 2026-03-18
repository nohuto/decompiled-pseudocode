/*
 * XREFs of vSrcTranCopyS8D24 @ 0x1C025F060
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00E4718 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ulBlendPixelCT @ 0x1C025C7C4 (ulBlendPixelCT.c)
 */

void __fastcall vSrcTranCopyS8D24(
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
  __int64 v12; // rbx
  char v14; // r12
  __int64 v15; // r13
  _BYTE *v16; // r14
  unsigned __int8 *v17; // rdi
  unsigned int near **v18; // rcx
  _BYTE *v20; // rsi
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // r13
  unsigned int *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  _BYTE *v26; // rbx
  unsigned int v27; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v29; // [rsp+40h] [rbp-98h]
  unsigned int v30; // [rsp+44h] [rbp-94h]
  unsigned int near **v31; // [rsp+48h] [rbp-90h]
  _BYTE *v32; // [rsp+50h] [rbp-88h]
  HSEMAPHORE v33; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v34[120]; // [rsp+60h] [rbp-78h] BYREF

  v12 = a2;
  memset(v34, 0, 0x40uLL);
  v14 = a9;
  v27 = a9 & 0xFFFFFF;
  v33 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v15 = (unsigned int)(3 * (a6 - a5));
  v29 = 3 * (a6 - a5);
  v16 = (_BYTE *)(v12 + a1);
  v17 = (unsigned __int8 *)(3 * a5 + a4);
  v28 = *v17 | (*(unsigned __int16 *)(v17 + 1) << 8);
  v30 = v28;
  v18 = pvFillOpaqTableCT(4u, a9, v28, a11, (struct _BLENDINFO *)v34, 1);
  v31 = v18;
  while ( a8 )
  {
    v20 = v16;
    v32 = v16;
    v21 = v17;
    v22 = &v17[v15];
    while ( v21 < v22 )
    {
      if ( *v20 )
      {
        if ( *v20 == 114 )
        {
          v23 = &v27;
          LOBYTE(v24) = v14;
        }
        else
        {
          v25 = *v21 | (*(unsigned __int16 *)(v21 + 1) << 8);
          a10 = v25;
          v24 = 4LL * (unsigned __int8)*v20;
          if ( v25 == v28 )
          {
            v23 = (unsigned int *)((char *)v18 + v24);
            LOBYTE(v24) = *(_BYTE *)v23;
          }
          else
          {
            LODWORD(v24) = ulBlendPixelCT((__int64)v34, v25, (unsigned __int8 *)off_1C030C100 + v24);
            a9 = v24;
            v23 = &a9;
          }
        }
        *v21 = v24;
        v26 = v21 + 1;
        *v26 = *((_BYTE *)v23 + 1);
        v26[1] = *((_BYTE *)v23 + 2);
        v21 = v26 + 2;
        v18 = v31;
      }
      else
      {
        v21 += 3;
      }
      v32 = ++v20;
    }
    --a8;
    v16 += a3;
    v17 += a7;
    v15 = v29;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v33);
}
