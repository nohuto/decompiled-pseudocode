/*
 * XREFs of McTemplateK0d @ 0x14028AE70
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1405A068C (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x1406BC914 (PiCMGetDeviceIdList.c)
 * Callees:
 *     McGenEventWrite @ 0x14015D7C0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0d(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &v5);
}
