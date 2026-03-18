/*
 * XREFs of ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C022867C
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C020FFD8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DXGPROCESS::ApplyCsFunction(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  result = *(_QWORD *)(a1 + 112);
  if ( *(struct _KTHREAD **)(result + 8) != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 4922LL;
    result = WdLogEvent5_WdAssertion(v5);
  }
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    v7 = a1;
    v8 = a2;
    Global = DXGGLOBAL::GetGlobal(a1);
    return DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))ApplyCsFunctionAdapterCallback,
             (__int64)&v7,
             2);
  }
  return result;
}
