/*
 * XREFs of NdisGetDriverHandle @ 0x1C005E150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x1Du, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1);
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3792LL);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1);
}
