/*
 * XREFs of DpiSharedPowerRegister @ 0x1C02A39A8
 * Callers:
 *     DpiFdoDispatchInternalIoctl @ 0x1C017BE10 (DpiFdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgRegisterSharedPowerComponent @ 0x1C022B348 (DxgRegisterSharedPowerComponent.c)
 */

__int64 __fastcall DpiSharedPowerRegister(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  void (*v14)(void *, void *); // r10
  void (*v15)(void *, unsigned int, unsigned int, unsigned __int8, void *); // r9
  void (*v16)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int); // rax
  int v17; // eax

  v7 = a1[8];
  v8 = a1;
  if ( a4 < 0x20 || !a3 )
    goto LABEL_9;
  a2 = *a3;
  if ( (unsigned int)(a2 - 4096) > 2 )
  {
    v10 = -1073741127LL;
    goto LABEL_10;
  }
  if ( (_DWORD)a2 == 4096 )
  {
    if ( a4 != 32 )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( (_DWORD)a2 != 4097 )
  {
    if ( (_DWORD)a2 == 4098 )
    {
      v9 = a4 == 48;
      goto LABEL_8;
    }
LABEL_15:
    a1 = (_QWORD *)*((_QWORD *)a3 + 1);
    if ( a1 && (v14 = (void (*)(void *, void *))*((_QWORD *)a3 + 3)) != 0LL )
    {
      if ( a6 != 32 || !a5 )
        goto LABEL_9;
      v15 = 0LL;
      if ( (unsigned int)a2 >= 0x1001 )
        v15 = (void (*)(void *, unsigned int, unsigned int, unsigned __int8, void *))*((_QWORD *)a3 + 4);
      v16 = 0LL;
      if ( (unsigned int)a2 >= 0x1002 )
        v16 = (void (*)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))*((_QWORD *)a3 + 5);
      v17 = DxgRegisterSharedPowerComponent(
              *(struct DXGADAPTER **)(v7 + 3896),
              a1,
              *((void (**)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *))a3 + 2),
              v14,
              v15,
              v16);
      v11 = v17;
      if ( v17 >= 0 )
      {
        *(_QWORD *)a5 = *(_QWORD *)(v7 + 3896);
        *(_DWORD *)(a5 + 8) = *(_DWORD *)(v8[8] + 4156LL) != 0 ? 4 : 1;
        *(_QWORD *)(a5 + 16) = DxgSetSharedPowerComponentStateCB;
        *(_QWORD *)(a5 + 24) = DxgUnregisterSharedPowerDriverCB;
        *a7 = 32LL;
        return (unsigned int)v11;
      }
    }
    else
    {
      v11 = -1073741811LL;
    }
    v12 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v12 + 24) = v11;
    goto LABEL_11;
  }
  v9 = a4 == 40;
LABEL_8:
  if ( v9 )
    goto LABEL_15;
LABEL_9:
  v10 = -1073741789LL;
LABEL_10:
  LODWORD(v11) = v10;
  v12 = WdLogNewEntry5_WdError(a1, a2, a3);
  *(_QWORD *)(v12 + 24) = v10;
LABEL_11:
  WdLogEvent5_WdError(v12);
  return (unsigned int)v11;
}
