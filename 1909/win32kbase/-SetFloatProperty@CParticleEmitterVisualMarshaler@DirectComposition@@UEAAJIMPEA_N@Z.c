/*
 * XREFs of ?SetFloatProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01B47F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0076430 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetFloatProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v5; // ecx
  int v6; // ebx
  bool v7; // al

  v5 = 0;
  v6 = 0;
  if ( a2 > 0x45 )
  {
    switch ( a2 )
    {
      case 'F':
        if ( *((float *)this + 109) == a3 )
        {
          v7 = 0;
        }
        else
        {
          *((float *)this + 109) = a3;
          v7 = 1;
        }
        v6 = 0x4000;
        goto LABEL_84;
      case 'G':
        if ( *((float *)this + 110) == a3 )
        {
          v7 = 0;
        }
        else
        {
          *((float *)this + 110) = a3;
          v7 = 1;
        }
        v6 = 0x200000;
        goto LABEL_84;
      case 'I':
        if ( *((float *)this + 103) != a3 )
        {
          *((float *)this + 103) = a3;
          goto LABEL_70;
        }
        break;
      case 'J':
        if ( *((float *)this + 104) != a3 )
        {
          *((float *)this + 104) = a3;
          goto LABEL_70;
        }
        break;
      case 'K':
        if ( *((float *)this + 105) == a3 )
          break;
        *((float *)this + 105) = a3;
LABEL_70:
        v7 = 1;
        goto LABEL_71;
      default:
        switch ( a2 )
        {
          case 'M':
            if ( *((float *)this + 100) != a3 )
            {
              *((float *)this + 100) = a3;
              goto LABEL_61;
            }
            break;
          case 'N':
            if ( *((float *)this + 101) != a3 )
            {
              *((float *)this + 101) = a3;
              goto LABEL_61;
            }
            break;
          case 'O':
            if ( *((float *)this + 102) == a3 )
              break;
            *((float *)this + 102) = a3;
LABEL_61:
            v7 = 1;
            goto LABEL_62;
          default:
            goto LABEL_57;
        }
        v7 = 0;
LABEL_62:
        v6 = 0x10000;
        goto LABEL_84;
    }
    v7 = 0;
LABEL_71:
    v6 = 0x8000;
    goto LABEL_84;
  }
  switch ( a2 )
  {
    case 'E':
      if ( *((float *)this + 108) == a3 )
        goto LABEL_13;
      *((float *)this + 108) = a3;
      goto LABEL_15;
    case '5':
      if ( *((float *)this + 116) == a3 )
      {
        v7 = 0;
      }
      else
      {
        *((float *)this + 116) = a3;
        v7 = 1;
      }
      v6 = 0x80000;
      goto LABEL_84;
    case '6':
      if ( *((float *)this + 111) == a3 )
      {
        v7 = 0;
      }
      else
      {
        *((float *)this + 111) = a3;
        v7 = 1;
      }
      v6 = 2;
      goto LABEL_84;
    case ';':
      if ( *((float *)this + 112) == a3 )
      {
        v7 = 0;
      }
      else
      {
        *((float *)this + 112) = a3;
        v7 = 1;
      }
      v6 = 32;
      goto LABEL_84;
    case '=':
      if ( *((float *)this + 117) == a3 )
      {
        v7 = 0;
      }
      else
      {
        *((float *)this + 117) = a3;
        v7 = 1;
      }
      v6 = 256;
      goto LABEL_84;
    case '>':
      if ( *((float *)this + 118) == a3 )
      {
        v7 = 0;
      }
      else
      {
        *((float *)this + 118) = a3;
        v7 = 1;
      }
      v6 = 512;
      goto LABEL_84;
    case '?':
      if ( *((float *)this + 119) == a3 )
      {
        v7 = 0;
      }
      else
      {
        *((float *)this + 119) = a3;
        v7 = 1;
      }
      v6 = 1024;
      goto LABEL_84;
    case '@':
      if ( *((float *)this + 120) == a3 )
      {
        v7 = 0;
      }
      else
      {
        *((float *)this + 120) = a3;
        v7 = 1;
      }
      v6 = 2048;
      goto LABEL_84;
    case 'C':
      if ( *((float *)this + 106) == a3 )
        goto LABEL_13;
      *((float *)this + 106) = a3;
      goto LABEL_15;
    case 'D':
      if ( *((float *)this + 107) == a3 )
      {
LABEL_13:
        v7 = 0;
LABEL_16:
        v6 = 0x2000;
LABEL_84:
        *a4 = v7;
        goto LABEL_85;
      }
      *((float *)this + 107) = a3;
LABEL_15:
      v7 = 1;
      goto LABEL_16;
  }
LABEL_57:
  v5 = DirectComposition::CVisualMarshaler::SetFloatProperty(this, a2, a3, a4);
LABEL_85:
  *((_DWORD *)this + 127) |= v6;
  return v5;
}
