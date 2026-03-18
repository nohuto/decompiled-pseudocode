/*
 * XREFs of ExCallCallBack @ 0x1405EBA04
 * Callers:
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     KeUserModeCallback @ 0x14064CF40 (KeUserModeCallback.c)
 *     NtDeleteAtom @ 0x1406C5E10 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1406CAB80 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406CE400 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1406CE750 (NtQueryInformationAtom.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14001D240 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned int v8; // ebx

  v6 = ExReferenceCallBackBlock(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v6[1].Count)(v6[2].Count, a2, a3);
    ExDereferenceCallBackBlock(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
