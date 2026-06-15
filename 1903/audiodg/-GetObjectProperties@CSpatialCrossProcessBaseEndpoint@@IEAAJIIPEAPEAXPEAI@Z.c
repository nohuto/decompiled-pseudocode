/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14005C224
 * Callers:
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E670 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005FBF0 (-GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectProperties(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r8

  v5 = 0;
  if ( !a4 )
  {
    v5 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectProperties", 891, v5);
    return v5;
  }
  v7 = *((_QWORD *)this + 113);
  if ( a3 >= *(_DWORD *)(*(_QWORD *)v7 + 8LL) || a2 >= 2 )
  {
    v5 = -2147024809;
    goto LABEL_8;
  }
  *a4 = (void *)(*(_QWORD *)(v7 + 24LL * a2 + 8) + a3 * *(_DWORD *)(*(_QWORD *)v7 + 12LL));
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)v7 + 12LL);
  return v5;
}
