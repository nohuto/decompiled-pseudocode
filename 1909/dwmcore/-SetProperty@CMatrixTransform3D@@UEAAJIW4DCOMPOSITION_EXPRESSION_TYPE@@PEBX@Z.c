/*
 * XREFs of ?SetProperty@CMatrixTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180212420
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  __int64 v4; // r10
  float v5; // xmm1_4
  unsigned int v6; // ebx

  v4 = (__int64)a1;
  if ( a3 == 18 && (v5 = *a4, a2 < 0x10) && (a1 += 4 * ((unsigned __int64)a2 >> 2) + (a2 & 3) + 38) != 0LL )
  {
    if ( *a1 != v5 )
    {
      *a1 = v5;
      CResource::NotifyOnChanged(v4, 0, 0LL);
    }
    return 0;
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0x46u, 0LL);
  }
  return v6;
}
