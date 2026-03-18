/*
 * XREFs of ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE340
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0001BD4 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0001E8C (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
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
  struct _PLGRUN *v8; // r11
  unsigned __int8 *v10; // rbx
  unsigned int v11; // r10d
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // ecx
  unsigned __int8 *v15; // r14
  int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rbp
  unsigned __int8 *v20; // rax
  int v21; // r13d
  ULONG v22; // eax

  v8 = a2;
  v10 = &a3[a6];
  if ( a4 )
  {
    v14 = a8 & 0x1F;
    v15 = &a4[4 * ((__int64)a8 >> 5)];
    v16 = *(_DWORD *)v15;
    if ( a6 != a7 )
    {
      v17 = a8 & 0x1F;
      v18 = (unsigned int)(a7 - a6);
      do
      {
        if ( v17 >= 32 )
          v16 = *((_DWORD *)v15 + 1);
        v19 = 0LL;
        v20 = v15 + 4;
        if ( v17 < 32 )
          v19 = v17;
        v21 = 0;
        if ( v17 < 32 )
        {
          v20 = v15;
          v21 = v14;
        }
        v15 = v20;
        if ( (dword_1C02F0EE0[v19] & v16) != 0 )
        {
          v22 = *v10;
          if ( a5 )
            v22 = a5->pulXlate[*v10];
          *(_DWORD *)v8 = v22;
          prunPumpDDA(a1, v8);
        }
        vAdvXDDA(a1);
        ++v10;
        v14 = v21 + 1;
        v17 = v19 + 1;
        --v18;
      }
      while ( v18 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = a7 - a6;
    if ( a5 )
    {
      v13 = v11;
      do
      {
        *(_DWORD *)v8 = a5->pulXlate[*v10];
        prunPumpDDA(a1, v8);
        vAdvXDDA(a1);
        ++v10;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v12 = v11;
      do
      {
        *(_DWORD *)v8 = *v10;
        prunPumpDDA(a1, v8);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  return v8;
}
