/*
 * XREFs of DpiSharedPowerRegister @ 0x1C0267E2C
 * Callers:
 *     DpiFdoDispatchInternalIoctl @ 0x1C015B900 (DpiFdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgRegisterSharedPowerComponent @ 0x1C01FB078 (DxgRegisterSharedPowerComponent.c)
 */

__int64 __fastcall DpiSharedPowerRegister(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  unsigned int v9; // edx
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  void (*v15)(void *, void *); // r10
  void (*v16)(void *, unsigned int, unsigned int, unsigned __int8, void *); // r9
  void (*v17)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int); // rax
  int v18; // eax

  v7 = a1[8];
  v8 = a1;
  if ( a4 < 0x20 || !a3 )
    goto LABEL_9;
  v9 = *(_DWORD *)a3;
  if ( (unsigned int)(*(_DWORD *)a3 - 4096) > 2 )
  {
    v11 = -1073741127LL;
    goto LABEL_10;
  }
  if ( v9 == 4096 )
  {
    if ( a4 != 32 )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( v9 != 4097 )
  {
    if ( v9 == 4098 )
    {
      v10 = a4 == 48;
      goto LABEL_8;
    }
LABEL_15:
    a1 = *(_QWORD **)(a3 + 8);
    if ( a1 && (v15 = *(void (**)(void *, void *))(a3 + 24)) != 0LL )
    {
      if ( a6 != 32 || !a5 )
        goto LABEL_9;
      v16 = 0LL;
      if ( v9 >= 0x1001 )
        v16 = *(void (**)(void *, unsigned int, unsigned int, unsigned __int8, void *))(a3 + 32);
      v17 = 0LL;
      if ( v9 >= 0x1002 )
        v17 = *(void (**)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))(a3 + 40);
      v18 = DxgRegisterSharedPowerComponent(
              *(struct DXGADAPTER **)(v7 + 3792),
              a1,
              *(void (**)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *))(a3 + 16),
              v15,
              v16,
              v17);
      v12 = v18;
      if ( v18 >= 0 )
      {
        *(_QWORD *)a5 = *(_QWORD *)(v7 + 3792);
        *(_DWORD *)(a5 + 8) = *(_DWORD *)(v8[8] + 4052LL) != 0 ? 4 : 1;
        *(_QWORD *)(a5 + 16) = DxgSetSharedPowerComponentStateCB;
        *(_QWORD *)(a5 + 24) = DxgUnregisterSharedPowerDriverCB;
        *a7 = 32LL;
        return (unsigned int)v12;
      }
    }
    else
    {
      v12 = -1073741811LL;
    }
    v13 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v13 + 24) = v12;
    goto LABEL_11;
  }
  v10 = a4 == 40;
LABEL_8:
  if ( v10 )
    goto LABEL_15;
LABEL_9:
  v11 = -1073741789LL;
LABEL_10:
  LODWORD(v12) = v11;
  v13 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v13 + 24) = v11;
LABEL_11:
  WdLogEvent5_WdError(v13);
  return (unsigned int)v12;
}
