/*
 * XREFs of ?DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z @ 0x1C00E0C00
 * Callers:
 *     <none>
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___ @ 0x1C00E04D4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___.c)
 */

__int64 __fastcall DispBrokerAsyncRefreshOrientation(int a1, int a2)
{
  int *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v4 = a1;
  v3[0] = &v4;
  v3[1] = &v5;
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___(
           (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
           v3);
}
