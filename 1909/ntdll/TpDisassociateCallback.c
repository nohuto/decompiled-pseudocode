/*
 * XREFs of TpDisassociateCallback @ 0x18007F9D0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 */

__int64 __fastcall TpDisassociateCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  char v5; // al
  unsigned int v6; // eax
  __int64 v7; // rdx

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  v4 = *(_QWORD *)(a1 + 184);
  if ( !v4 )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 176) )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  v5 = *(_BYTE *)(a1 + 76);
  if ( (v5 & 2) != 0 )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  *(_BYTE *)(a1 + 76) = v5 | 2;
  v6 = *(_DWORD *)(a1 + 144) & 0xFFFFFFBF;
  *(_DWORD *)(a1 + 144) = v6;
  v7 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(a1 + 176) = v7;
  if ( v7 )
  {
    *(_DWORD *)(a1 + 144) = v6 | 0x20;
    TppBarrierAdjust((volatile signed __int64 *)(v7 + 32), 1, 0LL, a4);
  }
  return TppBarrierAdjust((volatile signed __int64 *)(v4 + 56), -1, 0LL, a4);
}
