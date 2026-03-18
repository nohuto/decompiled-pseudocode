/*
 * XREFs of ?SetFloatProperty@CParticleGeneratorMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01C2B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::SetFloatProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx

  v4 = 0;
  v5 = 0;
  v6 = a2 - 3;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 5;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 6;
              if ( v12 )
              {
                if ( v12 == 1 )
                {
                  if ( *((float *)this + 51) != a3 )
                  {
                    *((float *)this + 51) = a3;
                    LOBYTE(v5) = 1;
                  }
                  *a4 = v5;
                  v5 = 0x4000000;
                }
                else
                {
                  v4 = -1073741811;
                }
              }
              else
              {
                if ( *((float *)this + 50) != a3 )
                {
                  *((float *)this + 50) = a3;
                  LOBYTE(v5) = 1;
                }
                *a4 = v5;
                v5 = 0x2000000;
              }
            }
            else
            {
              if ( *((float *)this + 42) != a3 )
              {
                *((float *)this + 42) = a3;
                LOBYTE(v5) = 1;
              }
              *a4 = v5;
              v5 = 0x80000;
            }
          }
          else
          {
            if ( *((float *)this + 41) != a3 )
            {
              *((float *)this + 41) = a3;
              LOBYTE(v5) = 1;
            }
            *a4 = v5;
            v5 = 0x40000;
          }
        }
        else
        {
          if ( *((float *)this + 24) != a3 )
          {
            *((float *)this + 24) = a3;
            LOBYTE(v5) = 1;
          }
          *a4 = v5;
          v5 = 0x2000;
        }
      }
      else
      {
        if ( *((float *)this + 23) != a3 )
        {
          *((float *)this + 23) = a3;
          LOBYTE(v5) = 1;
        }
        *a4 = v5;
        v5 = 4096;
      }
    }
    else
    {
      if ( *((float *)this + 22) != a3 )
      {
        *((float *)this + 22) = a3;
        LOBYTE(v5) = 1;
      }
      *a4 = v5;
      v5 = 2048;
    }
  }
  else
  {
    if ( *((float *)this + 21) != a3 )
    {
      *((float *)this + 21) = a3;
      LOBYTE(v5) = 1;
    }
    *a4 = v5;
    v5 = 1024;
  }
  *((_DWORD *)this + 4) |= v5;
  return v4;
}
