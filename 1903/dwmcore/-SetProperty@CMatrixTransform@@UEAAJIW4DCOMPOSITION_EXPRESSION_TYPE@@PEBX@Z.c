/*
 * XREFs of ?SetProperty@CMatrixTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180213A80
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMatrixTransform::SetProperty(float *a1, int a2, int a3, float *a4)
{
  __int64 v4; // r10
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ebx

  v4 = (__int64)a1;
  if ( a3 != 18 )
    goto LABEL_18;
  v5 = *a4;
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
LABEL_18:
              v11 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0x63u, 0LL);
              return v11;
            }
            v10 = 172LL;
          }
          else
          {
            v10 = 168LL;
          }
        }
        else
        {
          v10 = 164LL;
        }
      }
      else
      {
        v10 = 160LL;
      }
    }
    else
    {
      v10 = 156LL;
    }
  }
  else
  {
    v10 = 152LL;
  }
  a1 = (float *)((char *)a1 + v10);
  if ( !a1 )
    goto LABEL_18;
  if ( *a1 != v5 )
  {
    *a1 = v5;
    CResource::NotifyOnChanged(v4, 0, 0LL);
  }
  return 0;
}
