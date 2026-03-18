/*
 * XREFs of DpiLdaPowerDownAllAdaptersInChain @ 0x1C02AE3FC
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0154800 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiFdoSetAdapterPowerState @ 0x1C0153CC4 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerDownAllAdaptersInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // esi
  __int64 v4; // rdi
  unsigned int v5; // r8d
  __int64 v6; // r13
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r14
  POWER_STATE v14; // edx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  bool v20; // [rsp+70h] [rbp+8h]
  unsigned int v21; // [rsp+78h] [rbp+10h]

  v2 = *(_DWORD **)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v20 = 0;
  v5 = v2[8];
  v6 = (int)v2[6];
  v7 = v2[2];
  v21 = v5;
  if ( *(_BYTE *)(v4 + 508) == 1 )
  {
    v20 = *(_DWORD *)(v4 + 236) == 2;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 2728);
    if ( !v8 )
    {
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v4 + 24),
             (POWER_STATE)v6,
             (unsigned __int16)v7 >> 12,
             HIWORD(v7) & 0xF,
             v5);
      if ( v3 < 0 )
      {
        v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v12 + 24) = v6;
        WdLogEvent5_WdWarning(v12);
      }
      return (unsigned int)v3;
    }
    v4 = *(_QWORD *)(v8 + 64);
  }
  v13 = 0LL;
  if ( *(_DWORD *)(v4 + 2736) )
  {
    while ( 1 )
    {
      v14.SystemState = v6;
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2728) + 8 * v13) + 64LL);
      if ( !*(_BYTE *)(v15 + 482) || *(_DWORD *)(v15 + 280) > 1u || *(_BYTE *)(v15 + 483) )
        v14.SystemState = *(SYSTEM_POWER_STATE *)(v15 + 4LL * ((unsigned __int16)v7 >> 12) + 1312);
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v15 + 24),
             v14,
             (unsigned __int16)v7 >> 12,
             HIWORD(v7) & 0xF,
             v5);
      if ( v3 < 0 || *(_DWORD *)(v15 + 236) != 2 && v20 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *(_DWORD *)(v4 + 2736) )
        return (unsigned int)v3;
      v5 = v21;
    }
    v3 = -1071774666;
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
    v18[3] = 275LL;
    v18[4] = 21LL;
    v18[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  return (unsigned int)v3;
}
