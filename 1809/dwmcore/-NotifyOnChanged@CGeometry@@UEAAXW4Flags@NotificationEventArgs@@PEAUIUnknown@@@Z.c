/*
 * XREFs of ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall CGeometry::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a1 + 32) |= 1u;
  return CResource::NotifyOnChanged(a1, a2, a3);
}
