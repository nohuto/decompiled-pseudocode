/*
 * XREFs of DpiKsrRestoreAdapterDriverState @ 0x1C02A951C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiKsrIsSoftBoot @ 0x1C015DD88 (DpiKsrIsSoftBoot.c)
 *     ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x1C02A848C (--1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ.c)
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_K@Z @ 0x1C02A85D4 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_K@Z.c)
 */

__int64 __fastcall DpiKsrRestoreAdapterDriverState(struct _FDO_CONTEXT *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v9[256]; // [rsp+28h] [rbp-120h] BYREF
  _BYTE *v10; // [rsp+128h] [rbp-20h]

  if ( DpiKsrIsSoftBoot() )
  {
    v8 = 0x2000000000LL;
    v10 = v9;
    memset(v9, 0, sizeof(v9));
    KsrEnumeratePersistedMemory((char *)a1 + 4872, DpiKsrEnumeratePersistedMemoryCallback, &v8);
    if ( (_DWORD)v8 )
    {
      v2 = 0LL;
      while ( (int)DpiClaimPersistedMemoryBlock(a1, *(_QWORD *)&v10[8 * v2]) >= 0 )
      {
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= (unsigned int)v8 )
          goto LABEL_8;
      }
      v6 = WdLogNewEntry5_WdError(v4, v3, v5);
      *(_QWORD *)(v6 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v6);
    }
LABEL_8:
    DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v8);
  }
  return 0LL;
}
