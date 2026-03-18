/*
 * XREFs of ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BACB0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02BB20C (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02BB428 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
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
  __int64 v11; // rbp
  __int64 v12; // r14
  int v13; // ecx
  unsigned __int8 *v14; // r14
  int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // r15
  int v19; // eax
  unsigned __int8 *v20; // rax
  ULONG v21; // eax
  int v23; // [rsp+78h] [rbp+30h]

  v10 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v13 = a8 & 0x1F;
    v14 = &a4[4 * ((__int64)a8 >> 5)];
    v15 = *(_DWORD *)v14;
    if ( a6 != a7 )
    {
      v16 = (unsigned int)(a7 - a6);
      v17 = a8 & 0x1F;
      do
      {
        if ( v17 >= 32 )
          v15 = *((_DWORD *)v14 + 1);
        v18 = 0LL;
        if ( v17 < 32 )
          v18 = v17;
        v19 = 0;
        if ( v17 < 32 )
          v19 = v13;
        v23 = v19;
        v20 = v14 + 4;
        if ( v17 < 32 )
          v20 = v14;
        v14 = v20;
        if ( (dword_1C02DEFF0[v18] & v15) != 0 )
        {
          v21 = *v10;
          if ( pxlo )
            v21 = XLATEOBJ_iXlate(pxlo, v21);
          *(_DWORD *)a2 = v21;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v17 = v18 + 1;
        ++v10;
        v13 = v23 + 1;
        --v16;
      }
      while ( v16 );
    }
  }
  else if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v12 = (unsigned int)(a7 - a6);
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int)(a7 - a6);
    do
    {
      *(_DWORD *)a2 = *v10;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(a1);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return a2;
}
