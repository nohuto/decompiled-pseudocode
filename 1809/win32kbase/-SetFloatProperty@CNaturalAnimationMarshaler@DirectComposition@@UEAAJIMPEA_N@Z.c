/*
 * XREFs of ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01718F0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_ @ 0x1C01715C8 (DirectComposition--_anonymous_namespace_--UpdatePropertyIfChanged_float_.c)
 *     ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x1C01717EC (-EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimati.c)
 *     ?FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1C017185C (-FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 *     ?InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1C0171894 (-InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetFloatProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  float *v10; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v11; // rcx
  bool *v12; // r9
  unsigned int v13; // r11d
  float *v14; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v15; // rcx
  bool *v16; // r9
  __int64 v17; // rcx
  float *v18; // rdx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // r10
  bool v25; // cf
  int v26; // edx
  __int64 v27; // rcx

  *a4 = 0;
  if ( a2 > 0x2A )
  {
    v19 = a2 - 43;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 2;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            v13 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, 2);
            if ( (v13 & 0x80000000) != 0 )
              return v13;
            v25 = a3 < 0.0;
LABEL_39:
            if ( v25 )
              return (unsigned int)-1073741811;
            *(float *)(v24 + 156) = a3;
LABEL_36:
            *(_DWORD *)(v24 + 16) |= 0x8000u;
            return v13;
          }
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 != 1 )
              return (unsigned int)-1073741811;
            v13 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, 1);
            if ( (v13 & 0x80000000) != 0 )
              return v13;
            if ( a3 < 0.0 )
              return (unsigned int)-1073741811;
            v25 = a3 > 1.0;
            goto LABEL_39;
          }
          v26 = 1;
        }
        else
        {
          v26 = 2;
        }
        v13 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, v26);
        if ( (v13 & 0x80000000) != 0 )
          return v13;
        if ( a3 < 0.0 )
          return (unsigned int)-1073741811;
        *(float *)(v24 + 152) = a3;
        goto LABEL_36;
      }
      v18 = (float *)((char *)this + 144);
    }
    else
    {
      v18 = (float *)((char *)this + 140);
    }
LABEL_44:
    if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v18, a4) )
      *(_DWORD *)(v27 + 16) |= 0x4000u;
    return v13;
  }
  if ( a2 == 42 )
  {
    v18 = (float *)((char *)this + 136);
    goto LABEL_44;
  }
  v4 = a2 - 15;
  if ( v4 )
  {
    v5 = v4 - 19;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 2;
          if ( !v8 )
          {
            v10 = (float *)((char *)this + 112);
            goto LABEL_13;
          }
          v9 = v8 - 1;
          if ( !v9 )
          {
            v10 = (float *)((char *)this + 116);
            goto LABEL_13;
          }
          if ( v9 == 1 )
          {
            v10 = (float *)((char *)this + 120);
LABEL_13:
            DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v10, a4);
            DirectComposition::CNaturalAnimationMarshaler::InitialValueSetOrChanged(v11, v12);
            return v13;
          }
          return (unsigned int)-1073741811;
        }
        v14 = (float *)((char *)this + 132);
      }
      else
      {
        v14 = (float *)((char *)this + 128);
      }
    }
    else
    {
      v14 = (float *)((char *)this + 124);
    }
    DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v14, a4);
    DirectComposition::CNaturalAnimationMarshaler::FinalValueSetOrChanged(v15, v16);
    return v13;
  }
  if ( a3 < 0.0 )
    return (unsigned int)-1073741811;
  if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, (float *)this + 42, a4) )
    *(_DWORD *)(v17 + 16) |= 0x10000u;
  return v13;
}
