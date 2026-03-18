/*
 * XREFs of DpiKsrRestore @ 0x1C02A9424
 * Callers:
 *     DpiInitializeGlobalState @ 0x1C02D5654 (DpiInitializeGlobalState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x1C02A848C (--1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ.c)
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_K@Z @ 0x1C02A85D4 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_K@Z.c)
 */

void DpiKsrRestore()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v11[256]; // [rsp+28h] [rbp-120h] BYREF
  __int64 *v12; // [rsp+128h] [rbp-20h]

  v10 = 0x2000000000LL;
  v12 = (__int64 *)v11;
  memset(v11, 0, sizeof(v11));
  KsrEnumeratePersistedMemory(&GUID_DXGK_KSR_MEMORY, DpiKsrEnumeratePersistedMemoryCallback, &v10);
  if ( (_DWORD)v10 != 1 )
  {
    v3 = WdLogNewEntry5_WdError(v1, v0, v2);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
LABEL_5:
    WdLogEvent5_WdError(v3);
    LOBYTE(v9) = 1;
    KsrFreePersistedMemory(&GUID_DXGK_KSR_MEMORY, v9);
    goto LABEL_6;
  }
  v4 = DpiClaimPersistedMemoryBlock(0LL, *v12);
  v8 = v4;
  if ( v4 < 0 )
  {
    v3 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v3 + 24) = v8;
    goto LABEL_5;
  }
LABEL_6:
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v10);
}
