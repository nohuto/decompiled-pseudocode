/*
 * XREFs of ?RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00DA5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00DA5EC (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveConnectivitySetId(CCD_BTL *this, struct CCD_SET_STRING_ID *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = a2;
  v3[1] = 0LL;
  v3[2] = 0LL;
  return CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v3);
}
