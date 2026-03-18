/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C020B040
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C0248CBC (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C020A024 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C020B654 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  struct _TDR_RECOVERY_CONTEXT *Pool; // rax
  __int64 v1; // rcx
  struct _TDR_RECOVERY_CONTEXT *v2; // rbx
  __int64 v3; // rax

  Pool = (struct _TDR_RECOVERY_CONTEXT *)TdrAllocatePool(0xB60uLL, (POOL_TYPE)512);
  v2 = Pool;
  if ( Pool )
  {
    *((_DWORD *)Pool + 4) = 0;
    *((_DWORD *)Pool + 29) = 0;
    *(_DWORD *)Pool = 1380209782;
    *((_DWORD *)Pool + 28) = 1380209782;
    *((_DWORD *)Pool + 32) = 16;
    *((_DWORD *)Pool + 696) = g_TdrConfig;
    *((_DWORD *)Pool + 697) = dword_1C008ED64;
    *((_DWORD *)Pool + 698) = dword_1C008ED70;
    *((_QWORD *)Pool + 15) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)Pool + 706) = 1380209782;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v3 + 24) = 2912LL;
    WdLogEvent5_WdError(v3);
  }
  return TdrReferenceRecoveryContext(v2);
}
