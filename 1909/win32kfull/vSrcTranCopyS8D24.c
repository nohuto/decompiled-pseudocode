/*
 * XREFs of vSrcTranCopyS8D24 @ 0x1C0278040
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00C7E20 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ulBlendPixelCT @ 0x1C0275798 (ulBlendPixelCT.c)
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
  __int64 v14; // r12
  unsigned __int8 *v15; // rsi
  unsigned __int8 *v16; // rdi
  unsigned int v17; // r13d
  unsigned int near **v18; // r8
  unsigned __int8 *v20; // r14
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // r12
  unsigned __int8 v23; // cl
  unsigned int *v24; // rcx
  unsigned int v25; // edx
  _BYTE *v26; // rbx
  unsigned int v27; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v29; // [rsp+40h] [rbp-98h]
  unsigned int near **v30; // [rsp+48h] [rbp-90h]
  unsigned __int8 *v31; // [rsp+50h] [rbp-88h]
  HSEMAPHORE v32; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v33[120]; // [rsp+60h] [rbp-78h] BYREF

  v12 = a2;
  memset(v33, 0, 0x40uLL);
  v27 = a9 & 0xFFFFFF;
  v32 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v14 = (unsigned int)(3 * (a6 - a5));
  v28 = 3 * (a6 - a5);
  v15 = (unsigned __int8 *)(v12 + a1);
  v16 = (unsigned __int8 *)(3 * a5 + a4);
  v17 = *v16 | (*(unsigned __int16 *)(v16 + 1) << 8);
  v29 = v17;
  v18 = pvFillOpaqTableCT(4u, a9, v17, a11, (struct _BLENDINFO *)v33, 1);
  v30 = v18;
  while ( a8 )
  {
    v20 = v15;
    v31 = v15;
    v21 = v16;
    v22 = &v16[v14];
    while ( v21 < v22 )
    {
      v23 = *v20;
      if ( *v20 )
      {
        if ( v23 == 114 )
        {
          v24 = &v27;
        }
        else
        {
          v25 = *v21 | (*(unsigned __int16 *)(v21 + 1) << 8);
          a10 = v25;
          if ( v25 == v17 )
          {
            v24 = (unsigned int *)v18 + v23;
          }
          else
          {
            a9 = ulBlendPixelCT((__int64)v33, v25, (unsigned __int8 *)off_1C031F0F0 + 4 * v23);
            v24 = &a9;
            v18 = v30;
          }
        }
        *v21 = *(_BYTE *)v24;
        v26 = v21 + 1;
        *v26 = *((_BYTE *)v24 + 1);
        v26[1] = *((_BYTE *)v24 + 2);
        v21 = v26 + 2;
      }
      else
      {
        v21 += 3;
      }
      v31 = ++v20;
    }
    --a8;
    v15 += a3;
    v16 += a7;
    v14 = v28;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v32);
}
