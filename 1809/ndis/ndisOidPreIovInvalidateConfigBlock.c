/*
 * XREFs of ndisOidPreIovInvalidateConfigBlock @ 0x1C00F9FF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qqqq @ 0x1C00420DC (WPP_SF_qqqq.c)
 *     WPP_SF_qqqDD @ 0x1C004401C (WPP_SF_qqqDD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovInvalidateConfigBlock(_QWORD *a1)
{
  unsigned __int8 v2; // di
  __int64 v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = 1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qqqq(0x15u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, *a1, a1[3], a1[1], a1[4]);
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(a1[4]) == &ndisIntReqGeneric )
    v2 = 0;
  else
    *((_DWORD *)a1 + 10) = -1073741637;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v5 = *((_DWORD *)a1 + 10);
    LODWORD(v4) = v2;
    WPP_SF_qqqDD(0x16u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, *a1, a1[3], a1[1], v4, v5);
  }
  return v2;
}
