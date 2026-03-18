/*
 * XREFs of ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C001A3E0
 * Callers:
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C0019FF0 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C0019A8C (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?bIs1@EFLOAT@@QEBAHXZ @ 0x1C009F684 (-bIs1@EFLOAT@@QEBAHXZ.c)
 *     ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1C00C08B0 (-bIs1Over16@EFLOAT@@QEBAHXZ.c)
 */

void __fastcall EXFORMOBJ::vComputeAccelFlags(float **this, int a2)
{
  float *v3; // rax
  float *v4; // r8
  float *v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  EFLOAT *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx

  *((_DWORD *)*this + 8) = a2;
  v3 = *this;
  v4 = *this;
  if ( !*((_DWORD *)*this + 6) && !*((_DWORD *)v3 + 7) )
  {
    *((_DWORD *)v3 + 8) |= 0x40u;
    v4 = *this;
  }
  if ( v4[1] == 0.0 && v4[2] == 0.0 )
  {
    *((_DWORD *)v4 + 8) |= 1u;
    v5 = *this;
    if ( a2 == 8 )
    {
      if ( *v5 != 16.0 )
        return;
      v6 = EFLOAT::bIs16((EFLOAT *)(v5 + 3));
    }
    else
    {
      v8 = (EFLOAT *)*this;
      if ( a2 == 32 )
      {
        if ( !(unsigned int)EFLOAT::bIs1(v8) )
          return;
        v6 = EFLOAT::bIs1((EFLOAT *)(v10 + 12));
      }
      else
      {
        if ( !(unsigned int)EFLOAT::bIs1Over16(v8) )
          return;
        v6 = EFLOAT::bIs1Over16((EFLOAT *)(v9 + 12));
      }
    }
    if ( v6 )
      *(_DWORD *)(v7 + 32) |= 2u;
  }
}
