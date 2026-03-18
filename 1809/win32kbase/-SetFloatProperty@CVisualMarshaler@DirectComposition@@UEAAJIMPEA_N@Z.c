/*
 * XREFs of ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C001A370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v8; // edx
  float v9; // xmm1_4
  bool v10; // al
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // r9
  int v15; // ecx

  v4 = 0;
  if ( a2 > 0x20 )
  {
    switch ( a2 )
    {
      case '!':
        v8 = 0x800000;
        if ( *((float *)this + 20) != a3 )
        {
          *((float *)this + 20) = a3;
          goto LABEL_22;
        }
        goto LABEL_12;
      case '"':
        v8 = 0x800000;
        if ( *((float *)this + 21) != a3 )
        {
          *((float *)this + 21) = a3;
          goto LABEL_22;
        }
        goto LABEL_12;
      case '#':
        v8 = 0x1000000;
        if ( *((float *)this + 22) != a3 )
        {
          *((float *)this + 22) = a3;
          goto LABEL_22;
        }
        goto LABEL_12;
      case '$':
        v8 = 0x1000000;
        if ( *((float *)this + 23) != a3 )
        {
          *((float *)this + 23) = a3;
          goto LABEL_22;
        }
        goto LABEL_12;
      case '.':
        v8 = 0x20000000;
        if ( *((float *)this + 25) != a3 )
        {
          *((float *)this + 25) = a3;
          goto LABEL_22;
        }
        goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  switch ( a2 )
  {
    case 0x20u:
      v8 = 0x800000;
      if ( *((float *)this + 19) != a3 )
      {
        *((float *)this + 19) = a3;
        goto LABEL_22;
      }
      goto LABEL_12;
    case 0u:
      v8 = 128;
      if ( *((float *)this + 14) != a3 )
      {
        *((float *)this + 14) = a3;
        goto LABEL_22;
      }
      goto LABEL_12;
    case 1u:
      v8 = 128;
      if ( *((float *)this + 15) != a3 )
      {
        *((float *)this + 15) = a3;
        goto LABEL_22;
      }
      goto LABEL_12;
    case 2u:
      v8 = 128;
      if ( *((float *)this + 16) != a3 )
      {
        *((float *)this + 16) = a3;
        goto LABEL_22;
      }
      goto LABEL_12;
  }
  if ( a2 != 24 )
  {
    if ( a2 == 25 )
    {
      v8 = 0x100000;
      if ( *((float *)this + 18) != a3 )
      {
        *((float *)this + 18) = a3;
LABEL_22:
        v10 = 1;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    if ( a2 == 26 )
    {
      v8 = 0x200000;
      v9 = fminf(1.0, fmaxf(a3, 0.0));
      if ( *((float *)this + 24) != v9 )
      {
        *((float *)this + 24) = v9;
        goto LABEL_22;
      }
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  v8 = 0x100000;
  if ( *((float *)this + 17) != a3 )
  {
    *((float *)this + 17) = a3;
    goto LABEL_22;
  }
LABEL_12:
  v10 = 0;
LABEL_13:
  *a4 = v10;
  v11 = 0LL;
  v12 = *((_QWORD *)this + 4);
  v13 = 0LL;
  if ( v12 )
  {
    do
    {
      if ( *(_DWORD *)(v12 + 12) == a2 )
      {
        v15 = *(_DWORD *)(v12 + 8);
        if ( (v15 & 1) != 0 )
          goto LABEL_57;
        if ( (v15 & 2) != 0 )
        {
          v13 = v12;
          if ( v11 )
            break;
        }
        else if ( (v15 & 4) != 0 )
        {
          v11 = v12;
          if ( v13 )
            goto LABEL_57;
        }
      }
      v12 = *(_QWORD *)(v12 + 32);
    }
    while ( v12 );
    if ( !v13 )
      goto LABEL_14;
LABEL_57:
    *a4 = 1;
  }
LABEL_14:
  if ( a2 <= 2 || a2 - 24 <= 2 )
    *a4 = 1;
  if ( *a4 )
    *((_DWORD *)this + 4) |= v8;
  return v4;
}
