/*
 * XREFs of ?SetProperty@CMatrixTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C38B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::SetProperty(__int64 a1, unsigned int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  unsigned int v5; // ebx
  float *v6; // rdx

  if ( a3 == 18
    && (v4 = *a4, a2 < 0x10)
    && (v5 = 0, (v6 = (float *)(a1 + 4 * ((a2 & 3) + 4 * ((unsigned __int64)a2 >> 2) + 38))) != 0LL) )
  {
    if ( *v6 != v4 )
    {
      *v6 = v4;
      CResource::NotifyOnChanged(a1, 0, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x48u);
  }
  return v5;
}
