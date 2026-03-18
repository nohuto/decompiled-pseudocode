/*
 * XREFs of McTemplateU0xuqf @ 0x18023029C
 * Callers:
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x18022F058 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FBEC (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xuqf(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-19h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+50h] [rbp-1h]
  char *v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  char *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  char *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  __int64 v16; // [rsp+B8h] [rbp+67h] BYREF
  char v17; // [rsp+C0h] [rbp+6Fh] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 8LL;
  v8 = &v16;
  v11 = 1LL;
  v10 = &v17;
  v13 = 4LL;
  v12 = &a5;
  v14 = &a6;
  v15 = 4LL;
  return McGenEventWrite(Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 5u, &v7);
}
