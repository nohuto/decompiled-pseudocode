/*
 * XREFs of DpiFdoIsDevicePresent @ 0x1C02A1F8C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02A15D0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C02A2A90 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiFdoIsDevicePresent(__int64 a1, char *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _WORD *v11; // rcx
  _WORD v13[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = 0;
  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 1120);
  v6 = 1;
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) > 2 && !*(_BYTE *)(a1 + 1159) )
      return (unsigned int)-1073741637;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _WORD *, _QWORD, int))(a1 + 616))(
         *(_QWORD *)(a1 + 568),
         0LL,
         v13,
         0LL,
         64) == 64 )
  {
    v11 = *(_WORD **)(a1 + 1112);
    if ( v13[0] != *v11 || v13[1] != v11[1] )
      v6 = 0;
LABEL_7:
    *a2 = v6;
    return v4;
  }
  v10 = WdLogNewEntry5_WdError(v8, v7, v9);
  v4 = -1073741823;
  *(_QWORD *)(v10 + 24) = *(_QWORD *)(a1 + 616);
  *(_QWORD *)(v10 + 32) = -1073741823LL;
  WdLogEvent5_WdError(v10);
  return v4;
}
