/*
 * XREFs of IoAddPagesForPartialKernelDump @ 0x14029C780
 * Callers:
 *     IoWriteCrashDump @ 0x14029556C (IoWriteCrashDump.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     IoSaveBugCheckProgress @ 0x140295110 (IoSaveBugCheckProgress.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1402965B4 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140296700 (IopDumpCallRemovePagesCallbacks.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14029C94C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14029CC68 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     RtlNumberOfSetBitsEx @ 0x14030D500 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall IoAddPagesForPartialKernelDump(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  _QWORD *v11; // rsi
  int v12; // ebx
  int v13; // r9d
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF

  v11 = *(_QWORD **)(CrashdmpDumpBlock + 8);
  v15[0] = v11[6];
  v15[1] = v11 + 7;
  memset(v11 + 7, 0, 4 * ((v15[0] >> 5) + ((v15[0] & 0x1F) != 0)));
  v11[5] = 0LL;
  IopDumpCallAddPagesCallbacks(a1);
  IoSaveBugCheckProgress(33);
  v12 = IopAddMiniDumpPagesToPartialKernelDump(a1, a2, a3, a4, a5, a6, a7);
  if ( v12 >= 0 )
  {
    v12 = IopAddLiveDumpPagesToPartialKernelDump(a1, a2, a3, v13, a5);
    if ( v12 == -1073741789 )
      v12 = 0;
    IopDumpCallRemovePagesCallbacks(a1);
    IoSaveBugCheckProgress(34);
  }
  v11[5] = RtlNumberOfSetBitsEx(v15);
  return (unsigned int)v12;
}
