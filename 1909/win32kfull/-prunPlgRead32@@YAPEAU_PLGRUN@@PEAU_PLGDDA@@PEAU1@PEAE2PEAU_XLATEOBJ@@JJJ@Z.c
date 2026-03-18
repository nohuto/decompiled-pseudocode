/*
 * XREFs of ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0001B30
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0001BD4 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0001E8C (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 */

struct _PLGRUN *__fastcall prunPlgRead32(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  ULONG *v10; // rdi
  unsigned int v11; // r10d
  __int64 v12; // rbp
  __int64 v14; // r14
  int v15; // ecx
  unsigned __int8 *v16; // r14
  int v17; // r13d
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // r15
  int v21; // eax
  unsigned __int8 *v22; // rax
  ULONG v23; // eax
  int v24; // [rsp+78h] [rbp+30h]

  v10 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v15 = a8 & 0x1F;
    v16 = &a4[4 * ((__int64)a8 >> 5)];
    v17 = *(_DWORD *)v16;
    if ( a6 != a7 )
    {
      v18 = a8 & 0x1F;
      v19 = (unsigned int)(a7 - a6);
      do
      {
        if ( v18 >= 32 )
          v17 = *((_DWORD *)v16 + 1);
        v20 = 0LL;
        if ( v18 < 32 )
          v20 = v18;
        v21 = 0;
        if ( v18 < 32 )
          v21 = v15;
        v24 = v21;
        v22 = v16 + 4;
        if ( v18 < 32 )
          v22 = v16;
        v16 = v22;
        if ( (dword_1C02F0EE0[v20] & v17) != 0 )
        {
          v23 = *v10;
          if ( pxlo )
            v23 = XLATEOBJ_iXlate(pxlo, v23);
          *(_DWORD *)a2 = v23;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v18 = v20 + 1;
        ++v10;
        v15 = v24 + 1;
        --v19;
      }
      while ( v19 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = a7 - a6;
    if ( pxlo )
    {
      v14 = v11;
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        ++v10;
        --v14;
      }
      while ( v14 );
    }
    else
    {
      v12 = v11;
      do
      {
        *(_DWORD *)a2 = *v10;
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
