/*
 * XREFs of ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001AC30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CEffectGroup::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  double *v5; // rdi
  double v6; // xmm1_8

  if ( a3 != 18 )
    goto LABEL_8;
  v4 = 0;
  v5 = (double *)(a1 + 72);
  if ( a2 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = *a4;
    if ( *v5 != v6 )
    {
      *v5 = v6;
      CResource::NotifyOnChanged(a1, 0LL, 0LL);
    }
  }
  else
  {
LABEL_8:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x67u);
  }
  return v4;
}
