/*
 * XREFs of sub_180094E98 @ 0x180094E98
 * Callers:
 *     sub_180094DA0 @ 0x180094DA0 (sub_180094DA0.c)
 * Callees:
 *     sub_180095530 @ 0x180095530 (sub_180095530.c)
 *     sub_180095788 @ 0x180095788 (sub_180095788.c)
 */

__int64 __fastcall sub_180094E98(unsigned int a1, double *a2, __int16 a3)
{
  unsigned int v3; // r14d
  int v5; // ebx
  char v7; // r15
  __int64 v8; // rax
  double v9; // xmm0_8
  int v10; // edi
  double v11; // xmm0_8
  int v12; // ecx
  double v13; // xmm0_8
  int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v19; // [rsp+70h] [rbp+8h] BYREF
  double v20; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v5 = a1 & 0x1F;
  v7 = a1;
  if ( (a1 & 8) != 0 && (a3 & 0x80u) != 0 )
  {
    sub_180095788(1LL);
    v5 &= ~8u;
    goto LABEL_46;
  }
  if ( (a1 & 4) != 0 && (a3 & 0x200) != 0 )
  {
    sub_180095788(4LL);
    v5 &= ~4u;
    goto LABEL_46;
  }
  if ( (a1 & 1) != 0 && (a3 & 0x400) != 0 )
  {
    sub_180095788(8LL);
    v8 = a3 & 0x6000;
    if ( (a3 & 0x6000) != 0 )
    {
      if ( v8 != 0x2000 )
      {
        if ( v8 != 0x4000 )
        {
          if ( v8 != 24576 )
          {
LABEL_24:
            v5 &= ~1u;
            goto LABEL_46;
          }
          v9 = 1.797693134862316e308;
          if ( *a2 <= 0.0 )
            goto LABEL_22;
LABEL_23:
          *a2 = v9;
          goto LABEL_24;
        }
        if ( *a2 <= 0.0 )
        {
          v9 = 1.797693134862316e308;
LABEL_22:
          v9 = -v9;
          goto LABEL_23;
        }
LABEL_20:
        v9 = INFINITY;
        goto LABEL_23;
      }
      if ( *a2 > 0.0 )
      {
        v9 = 1.797693134862316e308;
        goto LABEL_23;
      }
    }
    else if ( *a2 > 0.0 )
    {
      goto LABEL_20;
    }
    v9 = INFINITY;
    goto LABEL_22;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x800) != 0 )
  {
    v10 = (a1 >> 4) & 1;
    if ( *a2 == 0.0 )
    {
      v10 = 1;
    }
    else
    {
      v11 = sub_180095530(4LL, &v19);
      v12 = v19 - 1536;
      v20 = v11;
      if ( v19 - 1536 >= -1074 )
      {
        v14 = 0;
        LOBYTE(v14) = v11 < 0.0;
        HIWORD(v20) = BYTE6(v20) & 0xF | 0x10;
        if ( v12 < -1021 )
        {
          v15 = LODWORD(v20);
          v16 = (unsigned int)(-1021 - v12);
          v17 = HIDWORD(v20);
          do
          {
            if ( (v15 & 1) != 0 && !v10 )
              v10 = 1;
            v15 >>= 1;
            LODWORD(v20) = v15;
            if ( (v17 & 1) != 0 )
            {
              v15 |= 0x80000000;
              LODWORD(v20) = v15;
            }
            v17 >>= 1;
            --v16;
          }
          while ( v16 );
          HIDWORD(v20) = v17;
        }
        v13 = v20;
        if ( v14 )
          v13 = -v20;
      }
      else
      {
        v13 = v11 * 0.0;
        v10 = 1;
      }
      *a2 = v13;
    }
    if ( v10 )
      sub_180095788(16LL);
    v5 &= ~2u;
  }
LABEL_46:
  if ( (v7 & 0x10) != 0 && (a3 & 0x1000) != 0 )
  {
    sub_180095788(32LL);
    v5 &= ~0x10u;
  }
  LOBYTE(v3) = v5 == 0;
  return v3;
}
