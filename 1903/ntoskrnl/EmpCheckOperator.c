/*
 * XREFs of EmpCheckOperator @ 0x140775078
 * Callers:
 *     EmCpuMatchCallback @ 0x140774FB0 (EmCpuMatchCallback.c)
 *     EmMatchDate @ 0x14084D710 (EmMatchDate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmpCheckOperator(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // r10d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx

  v3 = 0;
  v5 = *a1 - (unsigned __int8)asc_14078C640[0];
  if ( !v5 )
    v5 = a1[1] - (unsigned __int8)asc_14078C640[1];
  if ( !v5 )
    goto LABEL_4;
  v7 = *a1 - (unsigned __int8)asc_14078C650[0];
  if ( !v7 )
  {
    v7 = a1[1] - (unsigned __int8)asc_14078C650[1];
    if ( !v7 )
      v7 = a1[2] - (unsigned __int8)asc_14078C650[2];
  }
  if ( v7 )
  {
    v8 = *a1 - (unsigned __int8)asc_14078C660[0];
    if ( !v8 )
    {
      v8 = a1[1] - (unsigned __int8)asc_14078C660[1];
      if ( !v8 )
        v8 = a1[2] - (unsigned __int8)asc_14078C660[2];
    }
    if ( !v8 )
      goto LABEL_52;
    v9 = *a1 - (unsigned __int8)asc_14078C670[0];
    if ( !v9 )
    {
      v9 = a1[1] - (unsigned __int8)asc_14078C670[1];
      if ( !v9 )
        v9 = a1[2] - (unsigned __int8)asc_14078C670[2];
    }
    if ( !v9 )
      goto LABEL_52;
    v10 = *a1 - (unsigned __int8)asc_14078C680[0];
    if ( !v10 )
    {
      v10 = a1[1] - (unsigned __int8)asc_14078C680[1];
      if ( !v10 )
        v10 = a1[2] - (unsigned __int8)asc_14078C680[2];
    }
    if ( v10 )
    {
      v11 = *a1 - (unsigned __int8)asc_14078C690[0];
      if ( !v11 )
        v11 = a1[1] - (unsigned __int8)asc_14078C690[1];
      if ( v11 )
      {
        v12 = *a1 - (unsigned __int8)asc_14078C6A0[0];
        if ( !v12 )
        {
          v12 = a1[1] - (unsigned __int8)asc_14078C6A0[1];
          if ( !v12 )
            v12 = a1[2] - (unsigned __int8)asc_14078C6A0[2];
        }
        if ( !v12 )
          goto LABEL_51;
        v13 = *a1 - (unsigned __int8)asc_14078C6B0[0];
        if ( !v13 )
        {
          v13 = a1[1] - (unsigned __int8)asc_14078C6B0[1];
          if ( !v13 )
            v13 = a1[2] - (unsigned __int8)asc_14078C6B0[2];
        }
        if ( v13 )
        {
          v14 = *a1 - (unsigned __int8)asc_14078C6C0[0];
          if ( !v14 )
            v14 = a1[1] - (unsigned __int8)asc_14078C6C0[1];
          if ( v14 )
          {
            v15 = *a1 - (unsigned __int8)asc_14078C6D0[0];
            if ( !v15 )
            {
              v15 = a1[1] - (unsigned __int8)asc_14078C6D0[1];
              if ( !v15 )
                v15 = a1[2] - (unsigned __int8)asc_14078C6D0[2];
            }
            if ( !v15 )
              goto LABEL_40;
            v16 = *a1 - (unsigned __int8)asc_14078C6E0[0];
            if ( !v16 )
            {
              v16 = a1[1] - (unsigned __int8)asc_14078C6E0[1];
              if ( !v16 )
                v16 = a1[2] - (unsigned __int8)asc_14078C6E0[2];
            }
            if ( v16 )
            {
              v17 = *a1 - (unsigned __int8)asc_14078C6F0[0];
              if ( !v17 )
                v17 = a1[1] - (unsigned __int8)asc_14078C6F0[1];
              if ( !v17 )
                return 1;
            }
            else
            {
LABEL_40:
              LOBYTE(v3) = a2 >= a3;
            }
          }
          else
          {
            LOBYTE(v3) = a2 > a3;
          }
        }
        else
        {
LABEL_51:
          LOBYTE(v3) = a2 <= a3;
        }
      }
      else
      {
        LOBYTE(v3) = a2 < a3;
      }
    }
    else
    {
LABEL_52:
      LOBYTE(v3) = a2 != a3;
    }
  }
  else
  {
LABEL_4:
    LOBYTE(v3) = a2 == a3;
  }
  return v3;
}
