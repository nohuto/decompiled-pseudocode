/*
 * XREFs of ndisWmiDisableEvents @ 0x1C00F61F8
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B537C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C0009C20 (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisWmiDisableEvents(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int16 v5; // r9
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_q(0x46u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  ndisWmiGetGuid(&v8, a1, a2, 0);
  if ( v8 )
  {
    v6 = *(_DWORD *)(v8 + 24);
    if ( (v6 & 2) != 0 )
      *(_DWORD *)(v8 + 24) = v6 & 0x7FFFFFFF;
    else
      v2 = -1073741808;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(v5 + 71, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qD(0x48u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1, v2);
  return v2;
}
