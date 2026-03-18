/*
 * XREFs of DpGetDeviceInformation @ 0x1C017ED10
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpGetDeviceInformation(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  _DWORD *v6; // rsi
  int RegistryValues; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[14]; // [rsp+30h] [rbp-78h] BYREF
  int v16; // [rsp+B0h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  if ( a1
    && a2
    && (v5 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v5 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v5 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v12 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v12 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v12);
    }
    memset(a2, 0, 0x50uLL);
    *a2 = *(_QWORD *)(v5 + 48);
    a2[1] = *(_QWORD *)(v5 + 152);
    a2[4] = *(_QWORD *)(v5 + 1288);
    a2[5] = DpGlobals;
    a2[6] = *(&DpGlobals + 1);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v5 + 528);
    a2[7] = *(_QWORD *)(v5 + 768);
    a2[8] = *(_QWORD *)(v5 + 760);
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL) >= 0x104Eu && *(_BYTE *)(v5 + 1157) == 1 )
    {
      memset(v15, 0, sizeof(v15));
      v16 = 0;
      v15[2] = L"DockingState";
      LODWORD(v15[1]) = 288;
      v6 = a2 + 9;
      LODWORD(v15[4]) = 0x4000000;
      v15[3] = v6;
      v15[5] = &v16;
      LODWORD(v15[6]) = 4;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"IDConfigDB\\CurrentDockInfo", v15, 0LL, 0LL);
      v3 = RegistryValues;
      if ( RegistryValues < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v9, v8, v10);
        *(_QWORD *)(v13 + 24) = v3;
        WdLogEvent5_WdError(v13);
        LODWORD(v3) = 0;
        *v6 = v16;
      }
    }
  }
  else
  {
    LODWORD(v3) = -1073741811;
    v14 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v3;
}
