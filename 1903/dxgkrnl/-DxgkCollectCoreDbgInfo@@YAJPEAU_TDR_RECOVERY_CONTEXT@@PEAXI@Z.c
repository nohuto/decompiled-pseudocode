/*
 * XREFs of ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C020051C
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023D900 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C01EC0D0 (-CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 *     ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C020D718 (-CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 *     ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C022DB30 (-CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkCollectCoreDbgInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2, __int64 a3)
{
  PERESOURCE *v4; // rcx
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  struct _TDR_RECOVERY_CONTEXT *v9; // rdx
  DXGCONTEXT *v10; // rdi
  DXGDEVICE *v11; // rcx
  __int64 v12; // rax
  unsigned int v13[6]; // [rsp+20h] [rbp-18h] BYREF
  void *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v13[0] = 2048;
  v4 = (PERESOURCE *)*((_QWORD *)a1 + 4);
  if ( !v4 )
  {
    v6 = -1073741823;
    v12 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v12 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v12);
    return v6;
  }
  result = DXGADAPTER::CollectDbgInfo(v4, (struct _TDR_RECOVERY_CONTEXT *)a2, &v14, v13);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 2560LL);
    if ( !v7 )
      return v6;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 520) + 8LL) + 456LL))(*((_QWORD *)a1 + 6));
    v10 = (DXGCONTEXT *)v8;
    if ( !v8 )
      return v6;
    v11 = *(DXGDEVICE **)(v8 + 16);
    if ( !v11 || (result = DXGDEVICE::CollectDbgInfo(v11, v9, &v14, v13), (int)result >= 0) )
    {
      result = DXGCONTEXT::CollectDbgInfo(v10, v9, &v14, v13);
      v6 = result;
      if ( (int)result >= 0 )
        return v6;
    }
  }
  return result;
}
