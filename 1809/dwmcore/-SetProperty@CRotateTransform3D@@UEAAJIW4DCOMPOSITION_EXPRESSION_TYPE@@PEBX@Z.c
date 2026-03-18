/*
 * XREFs of ?SetProperty@CRotateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801BBD90
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRotateTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  double v12; // xmm1_8

  v4 = (__int64)a1;
  if ( a3 != 18 )
    goto LABEL_19;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
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
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 != 1 )
              {
LABEL_19:
                v5 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x7C0u);
                return v5;
              }
              v11 = 176LL;
            }
            else
            {
              v11 = 168LL;
            }
          }
          else
          {
            v11 = 160LL;
          }
        }
        else
        {
          v11 = 200LL;
        }
      }
      else
      {
        v11 = 192LL;
      }
    }
    else
    {
      v11 = 184LL;
    }
  }
  else
  {
    v11 = 152LL;
  }
  a1 = (double *)((char *)a1 + v11);
  if ( !a1 )
    goto LABEL_19;
  v12 = *a4;
  if ( *a1 != v12 )
  {
    *a1 = v12;
    CResource::NotifyOnChanged(v4, 0, 0LL);
  }
  return v5;
}
