/*
 * XREFs of ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A8E60
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02A8FEC (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02A921C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead8(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  struct _PLGRUN *v8; // r10
  unsigned __int8 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbp
  int v13; // ecx
  unsigned __int8 *v14; // rsi
  int v15; // r12d
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int8 *v19; // rax
  int v20; // r13d
  ULONG v21; // eax

  v8 = a2;
  v10 = &a3[a6];
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
        v19 = v14 + 4;
        if ( v17 < 32 )
          v18 = v17;
        v20 = 0;
        if ( v17 < 32 )
        {
          v19 = v14;
          v20 = v13;
        }
        v14 = v19;
        if ( (dword_1C02EC6B0[v18] & v15) != 0 )
        {
          v21 = *v10;
          if ( a5 )
            v21 = a5->pulXlate[*v10];
          *(_DWORD *)v8 = v21;
          prunPumpDDA(a1, v8);
        }
        vAdvXDDA(a1);
        ++v10;
        v13 = v20 + 1;
        v17 = v18 + 1;
        --v16;
      }
      while ( v16 );
    }
  }
  else if ( a5 )
  {
    if ( a6 != a7 )
    {
      v12 = (unsigned int)(a7 - a6);
      do
      {
        *(_DWORD *)v8 = a5->pulXlate[*v10];
        prunPumpDDA(a1, v8);
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
      *(_DWORD *)v8 = *v10;
      prunPumpDDA(a1, v8);
      vAdvXDDA(a1);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return v8;
}
