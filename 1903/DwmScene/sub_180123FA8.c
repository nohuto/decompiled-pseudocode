/*
 * XREFs of sub_180123FA8 @ 0x180123FA8
 * Callers:
 *     sub_1800FE530 @ 0x1800FE530 (sub_1800FE530.c)
 *     sub_1800FE8E0 @ 0x1800FE8E0 (sub_1800FE8E0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18011D9DC @ 0x18011D9DC (sub_18011D9DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void ****__fastcall sub_180123FA8(__int64 a1, void ****a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  void ***v11; // rax
  void **v12; // rcx
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  _QWORD v22[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+50h] [rbp-48h] BYREF

  if ( a3 > 9 )
  {
    v13 = a3 - 10;
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
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 != 1 )
                    {
LABEL_62:
                      sub_18000E498(v22);
                      sub_18011D9DC((__int64)pExceptionObject, v22, 0);
                      throw (Spectre::Utils::SpectreException *)pExceptionObject;
                    }
                    v11 = (void ***)operator new(8uLL);
                    if ( v11 )
                    {
                      v12 = &Spectre::Utils::Tweening::ElasticEaseInOutCurve::`vftable';
                      goto LABEL_59;
                    }
                  }
                  else
                  {
                    v11 = (void ***)operator new(8uLL);
                    if ( v11 )
                    {
                      v12 = &Spectre::Utils::Tweening::ElasticEaseOutCurve::`vftable';
                      goto LABEL_59;
                    }
                  }
                }
                else
                {
                  v11 = (void ***)operator new(8uLL);
                  if ( v11 )
                  {
                    v12 = &Spectre::Utils::Tweening::ElasticEaseInCurve::`vftable';
                    goto LABEL_59;
                  }
                }
              }
              else
              {
                v11 = (void ***)operator new(8uLL);
                if ( v11 )
                {
                  v12 = &Spectre::Utils::Tweening::BounceEaseInOutCurve::`vftable';
                  goto LABEL_59;
                }
              }
            }
            else
            {
              v11 = (void ***)operator new(8uLL);
              if ( v11 )
              {
                v12 = &Spectre::Utils::Tweening::BounceEaseOutCurve::`vftable';
                goto LABEL_59;
              }
            }
          }
          else
          {
            v11 = (void ***)operator new(8uLL);
            if ( v11 )
            {
              v12 = &Spectre::Utils::Tweening::BounceEaseInCurve::`vftable';
              goto LABEL_59;
            }
          }
        }
        else
        {
          v11 = (void ***)operator new(8uLL);
          if ( v11 )
          {
            v12 = &Spectre::Utils::Tweening::BackEaseInOutCurve::`vftable';
            goto LABEL_59;
          }
        }
      }
      else
      {
        v11 = (void ***)operator new(8uLL);
        if ( v11 )
        {
          v12 = &Spectre::Utils::Tweening::BackEaseOutCurve::`vftable';
          goto LABEL_59;
        }
      }
    }
    else
    {
      v11 = (void ***)operator new(8uLL);
      if ( v11 )
      {
        v12 = &Spectre::Utils::Tweening::BackEaseInCurve::`vftable';
        goto LABEL_59;
      }
    }
LABEL_60:
    v11 = 0LL;
    goto LABEL_61;
  }
  if ( a3 == 9 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::SineEaseInOutCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  if ( !a3 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::LinearCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  v4 = a3 - 1;
  if ( !v4 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::QuadraticEaseInCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::QuadraticEaseOutCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::QuadraticEaseInOutCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::ExponentialEaseInCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::ExponentialEaseOutCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::ExponentialEaseInOutCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = (void ***)operator new(8uLL);
    if ( v11 )
    {
      v12 = &Spectre::Utils::Tweening::SineEaseInCurve::`vftable';
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  if ( v10 != 1 )
    goto LABEL_62;
  v11 = (void ***)operator new(8uLL);
  if ( !v11 )
    goto LABEL_60;
  v12 = &Spectre::Utils::Tweening::SineEaseOutCurve::`vftable';
LABEL_59:
  *v11 = v12;
LABEL_61:
  *a2 = v11;
  return a2;
}
