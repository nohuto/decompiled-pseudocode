/*
 * XREFs of ?OnChanged@CProjectedShadowCaster@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ADBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ @ 0x1801ACFC4 (-DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowCaster::OnChanged(CProjectedShadowCaster *a1, __int64 a2, __int64 a3)
{
  if ( a3 == *((_QWORD *)a1 + 15) )
    CProjectedShadowCaster::DestroyMaskIntermediate(a1);
  return 1LL;
}
