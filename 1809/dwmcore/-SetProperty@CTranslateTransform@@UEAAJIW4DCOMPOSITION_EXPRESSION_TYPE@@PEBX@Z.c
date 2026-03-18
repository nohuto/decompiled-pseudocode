/*
 * XREFs of ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001A550
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  double *v6; // rax
  double v7; // xmm1_8

  if ( a3 != 18 )
    goto LABEL_10;
  v4 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_10:
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0xBECu);
      return v4;
    }
    v5 = 160LL;
  }
  else
  {
    v5 = 152LL;
  }
  v6 = (double *)(a1 + v5);
  if ( !v6 )
    goto LABEL_10;
  v7 = *a4;
  if ( *v6 != v7 )
  {
    *v6 = v7;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
