/*
 * XREFs of ?ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C02156A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfigBlock(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK *a2,
        __int64 a3)
{
  __int64 v4; // rax

  v4 = WdLogNewEntry5_WdError(this, a2, a3);
  *(_QWORD *)(v4 + 24) = a2->VirtualFunctionIndex;
  WdLogEvent5_WdError(v4);
  return 3221225659LL;
}
