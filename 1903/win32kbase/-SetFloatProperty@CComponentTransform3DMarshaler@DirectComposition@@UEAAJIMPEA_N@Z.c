/*
 * XREFs of ?SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00997D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  bool v13; // dl
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  bool v18; // dl
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  bool v22; // dl
  bool v23; // dl
  bool v24; // dl
  bool v25; // dl
  bool v26; // dl

  result = 0LL;
  if ( a2 <= 9 )
  {
    if ( a2 == 9 )
    {
      if ( *((float *)this + 23) == a3 )
        goto LABEL_77;
      *((float *)this + 23) = a3;
LABEL_79:
      v26 = 1;
      goto LABEL_80;
    }
    if ( a2 )
    {
      v14 = a2 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            if ( *((float *)this + 17) == a3 )
              goto LABEL_22;
            *((float *)this + 17) = a3;
            goto LABEL_31;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            if ( *((float *)this + 18) == a3 )
            {
LABEL_22:
              v18 = 0;
LABEL_23:
              *a4 = v18;
              *((_DWORD *)this + 4) &= ~0x100u;
              goto LABEL_14;
            }
            *((float *)this + 18) = a3;
LABEL_31:
            v18 = 1;
            goto LABEL_23;
          }
          v19 = v17 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 1 )
                  return 3221225485LL;
                if ( *((float *)this + 22) == a3 )
                  goto LABEL_77;
                *((float *)this + 22) = a3;
                goto LABEL_79;
              }
              if ( *((float *)this + 21) == a3 )
                goto LABEL_41;
              *((float *)this + 21) = a3;
LABEL_43:
              v22 = 1;
              goto LABEL_44;
            }
            if ( *((float *)this + 20) != a3 )
            {
              *((float *)this + 20) = a3;
              goto LABEL_43;
            }
          }
          else if ( *((float *)this + 19) != a3 )
          {
            *((float *)this + 19) = a3;
            goto LABEL_43;
          }
LABEL_41:
          v22 = 0;
LABEL_44:
          *a4 = v22;
          *((_DWORD *)this + 4) &= ~0x200u;
          goto LABEL_14;
        }
        if ( *((float *)this + 16) == a3 )
          goto LABEL_51;
        *((float *)this + 16) = a3;
LABEL_53:
        v23 = 1;
        goto LABEL_54;
      }
      if ( *((float *)this + 15) != a3 )
      {
        *((float *)this + 15) = a3;
        goto LABEL_53;
      }
    }
    else if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_53;
    }
LABEL_51:
    v23 = 0;
LABEL_54:
    *a4 = v23;
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_14;
  }
  v5 = a2 - 10;
  if ( !v5 )
  {
    if ( *((float *)this + 24) != a3 )
    {
      *((float *)this + 24) = a3;
      goto LABEL_79;
    }
    goto LABEL_77;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 25) != a3 )
    {
      *((float *)this + 25) = a3;
      goto LABEL_79;
    }
LABEL_77:
    v26 = 0;
LABEL_80:
    *a4 = v26;
    *((_DWORD *)this + 4) &= ~0x400u;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 26) == a3 )
      goto LABEL_66;
    *((float *)this + 26) = a3;
    goto LABEL_68;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 27) == a3 )
      goto LABEL_66;
    *((float *)this + 27) = a3;
    goto LABEL_68;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((float *)this + 28) == a3 )
    {
LABEL_66:
      v25 = 0;
LABEL_69:
      *a4 = v25;
      *((_DWORD *)this + 4) &= ~0x1000u;
      goto LABEL_14;
    }
    *((float *)this + 28) = a3;
LABEL_68:
    v25 = 1;
    goto LABEL_69;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *((float *)this + 29) == a3 )
    {
      v24 = 0;
    }
    else
    {
      *((float *)this + 29) = a3;
      v24 = 1;
    }
    *a4 = v24;
    *((_DWORD *)this + 4) &= ~0x800u;
    goto LABEL_14;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    if ( *((float *)this + 30) != a3 )
    {
      *((float *)this + 30) = a3;
      goto LABEL_12;
    }
LABEL_26:
    v13 = 0;
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( *((float *)this + 31) != a3 )
    {
      *((float *)this + 31) = a3;
LABEL_12:
      v13 = 1;
LABEL_13:
      *a4 = v13;
      *((_DWORD *)this + 4) &= ~0x2000u;
LABEL_14:
      *a4 = 1;
      return result;
    }
    goto LABEL_26;
  }
  if ( v12 == 1 )
  {
    if ( *((float *)this + 32) != a3 )
    {
      *((float *)this + 32) = a3;
      goto LABEL_12;
    }
    goto LABEL_26;
  }
  return 3221225485LL;
}
