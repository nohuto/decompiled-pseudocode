/*
 * XREFs of _CmOpenDevicePanelRegKey @ 0x1408FD2F4
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x14074AC50 (_PnpDispatchDevicePanel.c)
 *     _CmCreateDevicePanelWorker @ 0x1408FC7F8 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FD468 (_CmOpenDevicePanelRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rdi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD v18[11]; // [rsp+40h] [rbp-59h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  LODWORD(v18[3]) = a5;
  BYTE4(v18[3]) = a6;
  v18[2] = 96LL;
  v18[4] = a7;
  if ( v10 )
  {
    v11 = v10(a1, a2, 6LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
      {
LABEL_15:
        v13 = v18[0];
        goto LABEL_10;
      }
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = CmOpenDevicePanelRegKeyWorker(a1, a2, LODWORD(v18[2]));
  v13 = v12;
  if ( v10 )
  {
    LODWORD(v18[0]) = v12;
    v14 = v10(a1, a2, 6LL);
    v15 = v14;
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        v16 = v13;
        if ( v15 )
          v16 = -1073741595;
        v13 = v16;
        goto LABEL_10;
      }
      goto LABEL_15;
    }
  }
LABEL_10:
  if ( v13 >= 0 && a8 )
    *a8 = v18[5];
  return (unsigned int)v13;
}
