/*
 * XREFs of McTemplateK0uqqq @ 0x1C00040C4
 * Callers:
 *     Control_TransferData_Initialize @ 0x1C002B1A8 (Control_TransferData_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C0031C08 (Isoch_TransferData_Initialize.c)
 *     Bulk_TransferData_Initialize @ 0x1C0037AAC (Bulk_TransferData_Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00029D4 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0uqqq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        const GUID *a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  char v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 1LL;
  v9 = &v17;
  v12 = 4LL;
  v11 = &a5;
  v14 = 4LL;
  v13 = &a6;
  v15 = &a7;
  v16 = 4LL;
  return McGenEventWrite(a1, &USBXHCI_ETW_EVENT_TRANSFER_INITIALIZED_V1, a3, 5u, &EventData);
}
