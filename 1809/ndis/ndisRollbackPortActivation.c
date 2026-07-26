/*
 * XREFs of ndisRollbackPortActivation @ 0x1C003E524
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003DA98 (ndisPnPPortActivation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall ndisRollbackPortActivation(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // r8

  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_qq(0x26u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1, a2);
  for ( i = a2; i; i = (_QWORD *)*i )
  {
    if ( i == a3 )
      break;
    *(_DWORD *)(i[1] + 16LL) = *(_DWORD *)(i[1] + 20LL);
    --*(_DWORD *)(a1 + 2768);
  }
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_qq(0x27u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1, a2);
}
