/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00CDDF4
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00C6574 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00CABAC (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00CBA90 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00CDE68 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 */

int __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct CCD_SET_STRING_ID *a2)
{
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD *v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-28h] BYREF

  ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a2);
  StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, (struct D3DKMT_HASH *)v10);
  v7 = StringHash;
  if ( StringHash >= 0 )
    return CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct D3DKMT_HASH *)v10);
  v9 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v9[3] = v7;
  v9[4] = this;
  v9[5] = *((_QWORD *)this + 8);
  v9[6] = a2;
  WdLogEvent5_WdError(v9);
  return v7;
}
