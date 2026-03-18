/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C023DC60
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C027E2EC (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C023CC20 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C023E274 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  struct _TDR_RECOVERY_CONTEXT *Pool; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _TDR_RECOVERY_CONTEXT *v4; // rbx
  __int64 v5; // rax

  Pool = (struct _TDR_RECOVERY_CONTEXT *)TdrAllocatePool(0xB60uLL, (POOL_TYPE)512);
  v4 = Pool;
  if ( Pool )
  {
    *((_DWORD *)Pool + 4) = 0;
    *((_DWORD *)Pool + 29) = 0;
    *(_DWORD *)Pool = 1380209782;
    *((_DWORD *)Pool + 28) = 1380209782;
    *((_DWORD *)Pool + 32) = 16;
    *((_DWORD *)Pool + 696) = g_TdrConfig;
    *((_DWORD *)Pool + 697) = dword_1C00A2D64;
    *((_DWORD *)Pool + 698) = dword_1C00A2D70;
    *((_QWORD *)Pool + 15) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)Pool + 706) = 1380209782;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v2, v1, v3);
    *(_QWORD *)(v5 + 24) = 2912LL;
    WdLogEvent5_WdError(v5);
  }
  return TdrReferenceRecoveryContext(v4);
}
