/*
 * XREFs of ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01702F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetFloatProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx

  v4 = 0;
  *a4 = 0;
  if ( a2 > 0x23 )
  {
    if ( a2 > 0x3F )
    {
      v24 = a2 - 68;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 2;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  if ( v29 != 1 )
                    return (unsigned int)-1073741811;
                  *((float *)this + 52) = a3;
                }
                else
                {
                  *((float *)this + 51) = a3;
                }
              }
              else
              {
                *((float *)this + 50) = a3;
              }
              *((_DWORD *)this + 110) &= ~4u;
              *a4 = 1;
              *((_DWORD *)this + 4) |= 0x80u;
              *(_QWORD *)((char *)this + 68) = 0LL;
              *(_QWORD *)((char *)this + 76) = 0LL;
              return v4;
            }
            *((float *)this + 48) = a3;
          }
          else
          {
            *((float *)this + 47) = a3;
          }
          *((_DWORD *)this + 110) &= ~2u;
LABEL_18:
          *a4 = 1;
          *((_DWORD *)this + 4) |= 0x140u;
          *((_QWORD *)this + 14) = 0LL;
          *((_DWORD *)this + 30) = 0;
          *((_DWORD *)this + 56) = 0;
          goto LABEL_19;
        }
        if ( a3 < 0.001 || a3 > 5.0 )
          return (unsigned int)-1073741811;
        if ( *((float *)this + 46) == a3 )
          return v4;
        *((float *)this + 46) = a3;
      }
      else
      {
        if ( a3 < 0.001 || a3 > 5.0 )
          return (unsigned int)-1073741811;
        if ( *((float *)this + 45) == a3 )
          return v4;
        *((float *)this + 45) = a3;
      }
      *((_DWORD *)this + 110) &= ~1u;
LABEL_102:
      *a4 = 1;
      return v4;
    }
    if ( a2 != 63 )
    {
      v18 = a2 - 44;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 12;
                if ( v23 )
                {
                  if ( v23 != 1 || a3 < 0.0 || a3 > 1.0 )
                    return (unsigned int)-1073741811;
                  if ( *((float *)this + 33) == a3 )
                    return v4;
                  *((float *)this + 33) = a3;
                }
                else
                {
                  if ( a3 < 0.0 || a3 > 1.0 )
                    return (unsigned int)-1073741811;
                  if ( *((float *)this + 32) == a3 )
                    return v4;
                  *((float *)this + 32) = a3;
                }
                goto LABEL_63;
              }
              *((float *)this + 19) = a3;
            }
            else
            {
              *((float *)this + 18) = a3;
            }
          }
          else
          {
            *((float *)this + 17) = a3 + *((float *)this + 17);
          }
          *((_DWORD *)this + 4) &= ~0x80u;
          goto LABEL_102;
        }
        *((float *)this + 15) = a3 + *((float *)this + 15);
      }
      else
      {
        *((float *)this + 14) = a3 + *((float *)this + 14);
      }
      *((_DWORD *)this + 4) &= ~0x40u;
      goto LABEL_102;
    }
    if ( a3 < 0.0 || a3 > 1.0 )
      return (unsigned int)-1073741811;
    if ( *((float *)this + 42) == a3 )
      return v4;
    *((float *)this + 42) = a3;
LABEL_63:
    *((_DWORD *)this + 4) &= ~0x800000u;
    goto LABEL_102;
  }
  if ( a2 == 35 )
  {
    *((float *)this + 41) = a3;
    goto LABEL_102;
  }
  if ( a2 > 0x17 )
  {
    v11 = a2 - 24;
    if ( !v11 )
    {
      if ( *((float *)this + 22) == a3 )
        return v4;
      *((float *)this + 22) = a3;
LABEL_28:
      *((_DWORD *)this + 4) &= ~0x2000u;
      goto LABEL_102;
    }
    v12 = v11 - 2;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 != 4 )
                return (unsigned int)-1073741811;
              *((float *)this + 40) = a3;
            }
            else
            {
              v17 = *((_DWORD *)this + 4) & 0xFFFDFFFF;
              *((float *)this + 37) = a3;
              *(_QWORD *)((char *)this + 68) = 0LL;
              *((_DWORD *)this + 4) = v17 | 0x80;
              *(_QWORD *)((char *)this + 76) = 0LL;
            }
          }
          else
          {
            if ( *((float *)this + 36) == a3 )
              return v4;
            *((_DWORD *)this + 4) &= ~0x10000u;
            *((float *)this + 36) = a3;
          }
        }
        else
        {
          if ( *((float *)this + 35) == a3 )
            return v4;
          *((_DWORD *)this + 4) &= ~0x8000u;
          *((float *)this + 35) = a3;
        }
        goto LABEL_102;
      }
      if ( *((float *)this + 24) == a3 )
        return v4;
      *((float *)this + 24) = a3;
    }
    else
    {
      if ( *((float *)this + 23) == a3 )
        return v4;
      *((float *)this + 23) = a3;
    }
    *((_DWORD *)this + 4) &= ~0x4000u;
    goto LABEL_102;
  }
  if ( a2 == 23 )
  {
    if ( *((float *)this + 21) == a3 )
      return v4;
    *((float *)this + 21) = a3;
    goto LABEL_28;
  }
  v5 = a2 - 4;
  if ( !v5 )
  {
    if ( *((float *)this + 34) == a3 )
      return v4;
    *((float *)this + 34) = a3;
    goto LABEL_102;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 12) == a3 )
      return v4;
    *((float *)this + 12) = a3;
    goto LABEL_102;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 13) == a3 )
      return v4;
    *((float *)this + 13) = a3;
    goto LABEL_102;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    *((float *)this + 25) = a3;
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((float *)this + 26) = a3;
LABEL_17:
    *((_DWORD *)this + 4) &= ~0x200u;
    goto LABEL_18;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    *((float *)this + 28) = a3 + *((float *)this + 28);
    goto LABEL_14;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741811;
  *((float *)this + 29) = a3 + *((float *)this + 29);
LABEL_14:
  *((_DWORD *)this + 4) &= ~0x100u;
  *a4 = 1;
  *((_DWORD *)this + 4) |= 0x40u;
LABEL_19:
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  return v4;
}
