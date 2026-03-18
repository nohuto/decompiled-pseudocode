/*
 * XREFs of ?SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801BBF90
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CScaleTransform::SetProperty(double *a1, int a2, int a3, float *a4)
{
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rax
  double v9; // xmm1_8

  v4 = (__int64)a1;
  if ( a3 != 18 )
    goto LABEL_13;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_13:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x84Au);
          return v5;
        }
        v8 = 176LL;
      }
      else
      {
        v8 = 168LL;
      }
    }
    else
    {
      v8 = 160LL;
    }
  }
  else
  {
    v8 = 152LL;
  }
  a1 = (double *)((char *)a1 + v8);
  if ( !a1 )
    goto LABEL_13;
  v9 = *a4;
  if ( *a1 != v9 )
  {
    *a1 = v9;
    CResource::NotifyOnChanged(v4, 0, 0LL);
  }
  return v5;
}
