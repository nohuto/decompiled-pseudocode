/*
 * XREFs of NtDeleteAtom @ 0x1406AE4A0
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140088A50 (MmSessionGetWin32Callouts.c)
 *     ExCallCallBack @ 0x1405F5BA4 (ExCallCallBack.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406AE4F0 (RtlDeleteAtomFromAtomTable.c)
 */

NTSTATUS __stdcall NtDeleteAtom(RTL_ATOM Atom)
{
  _RTL_RUN_ONCE *Win32Callouts; // rax
  PRTL_ATOM_TABLE AtomTable; // [rsp+38h] [rbp+10h] BYREF

  AtomTable = 0LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack((signed __int64 *)Win32Callouts, 2LL, (__int64)&AtomTable);
  if ( AtomTable )
    return RtlDeleteAtomFromAtomTable(AtomTable, Atom);
  else
    return -1073741790;
}
