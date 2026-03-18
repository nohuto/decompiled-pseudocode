/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C001B828
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_ACTIVE::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
