/*
 * XREFs of vSrcTranCopyS8D24 @ 0x1C0247260
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00AC124 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ulBlendPixelCT @ 0x1C0244678 (ulBlendPixelCT.c)
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
  _BYTE *v15; // r14
  unsigned __int8 *v16; // rdi
  unsigned int v17; // r13d
  unsigned int near **v18; // rcx
  _BYTE *v20; // rsi
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // r12
  unsigned int *v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rax
  _BYTE *v26; // rbx
  unsigned int v27; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v29; // [rsp+40h] [rbp-98h]
  unsigned int near **v30; // [rsp+48h] [rbp-90h]
  _BYTE *v31; // [rsp+50h] [rbp-88h]
  HSEMAPHORE v32; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v33[120]; // [rsp+60h] [rbp-78h] BYREF

  v12 = a2;
  memset(v33, 0, 0x40uLL);
  v27 = a9 & 0xFFFFFF;
  v32 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v14 = (unsigned int)(3 * (a6 - a5));
  v28 = 3 * (a6 - a5);
  v15 = (_BYTE *)(v12 + a1);
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
      if ( *v20 )
      {
        if ( *v20 == 114 )
        {
          v23 = &v27;
        }
        else
        {
          v24 = *v21 | (*(unsigned __int16 *)(v21 + 1) << 8);
          a10 = v24;
          v25 = (unsigned __int8)*v20;
          if ( v24 == v17 )
          {
            v23 = (unsigned int *)((char *)v18 + v25 * 4);
          }
          else
          {
            a9 = ulBlendPixelCT((__int64)v33, v24, (unsigned __int8 *)&off_1C031C100[v25]);
            v23 = &a9;
          }
        }
        *v21 = *(_BYTE *)v23;
        v26 = v21 + 1;
        *v26 = *((_BYTE *)v23 + 1);
        v26[1] = *((_BYTE *)v23 + 2);
        v21 = v26 + 2;
        v18 = v30;
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
