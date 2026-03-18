/*
 * XREFs of ?SetProperty@CScaleTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801BBEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CScaleTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  double v11; // xmm1_8

  v4 = (__int64)a1;
  if ( a3 != 18 )
    goto LABEL_17;
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
            if ( v9 != 1 )
            {
LABEL_17:
              v5 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x8B6u);
              return v5;
            }
            v10 = 192LL;
          }
          else
          {
            v10 = 184LL;
          }
        }
        else
        {
          v10 = 176LL;
        }
      }
      else
      {
        v10 = 168LL;
      }
    }
    else
    {
      v10 = 160LL;
    }
  }
  else
  {
    v10 = 152LL;
  }
  a1 = (double *)((char *)a1 + v10);
  if ( !a1 )
    goto LABEL_17;
  v11 = *a4;
  if ( *a1 != v11 )
  {
    *a1 = v11;
    CResource::NotifyOnChanged(v4, 0, 0LL);
  }
  return v5;
}
