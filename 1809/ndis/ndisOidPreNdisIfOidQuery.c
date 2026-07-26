/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C00E4120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xC4u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *(_QWORD *)a1, *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
