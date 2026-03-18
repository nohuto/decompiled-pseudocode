/*
 * XREFs of ?OnChanged@CSceneMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DB9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSceneMesh::OnChanged(__int64 a1)
{
  *(_BYTE *)(a1 + 160) = 1;
  return 1LL;
}
