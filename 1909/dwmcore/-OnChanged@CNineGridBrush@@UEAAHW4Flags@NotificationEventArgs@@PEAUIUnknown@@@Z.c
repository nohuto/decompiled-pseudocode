/*
 * XREFs of ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180047240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridBrush::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  bool v5; // al

  if ( (_DWORD)a2 == 14 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    v5 = 0;
    if ( v4 )
      v5 = *(_BYTE *)(v4 + 72) != 0;
    *(_BYTE *)(a1 + 72) = v5;
  }
  return CSpriteVisualContent::OnChanged(a1, a2, a3);
}
