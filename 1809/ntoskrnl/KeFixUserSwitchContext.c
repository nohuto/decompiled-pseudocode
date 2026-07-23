/*
 * XREFs of KeFixUserSwitchContext @ 0x140847C68
 * Callers:
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140890030 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeCopyContextFromUmsContext @ 0x140847684 (KeCopyContextFromUmsContext.c)
 *     KiRestoreUchFromUmsContext @ 0x140848260 (KiRestoreUchFromUmsContext.c)
 */

_UNKNOWN **__fastcall KeFixUserSwitchContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  bool v10; // cc
  unsigned __int64 v11; // rdi
  bool v12; // cc
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = KeUmsThreadYield;
  v8 = KeUmsExecuteYieldThreadEnd;
  if ( a3 )
  {
    result = *(_UNKNOWN ***)(a3 + 80);
    v9 = (unsigned __int64)result[45];
    if ( v9 >= KeExecuteUmsThread )
    {
      v10 = v9 <= KeUmsThreadYield;
      if ( v9 >= KeUmsThreadYield )
        goto LABEL_6;
      result = (_UNKNOWN **)KiRestoreUchFromUmsContext(a1, a3, a2);
    }
    v10 = v9 <= v5;
LABEL_6:
    if ( !v10 && v9 < v8 )
    {
      result = *(_UNKNOWN ***)(a3 + 80);
      result[45] = (_UNKNOWN *)v5;
    }
    return result;
  }
  v11 = *(_QWORD *)(a4 + 248);
  if ( v11 < KeExecuteUmsThread )
    goto LABEL_12;
  v12 = v11 <= KeUmsThreadYield;
  if ( v11 < KeUmsThreadYield )
  {
    result = (_UNKNOWN **)KeCopyContextFromUmsContext(a4, a2);
LABEL_12:
    v12 = v11 <= v5;
  }
  if ( !v12 && v11 < v8 )
    *(_QWORD *)(a4 + 248) = v5;
  return result;
}
