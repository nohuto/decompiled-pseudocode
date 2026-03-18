/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140860DFC
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E0D8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x1406B6380 (ExEnumHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  unsigned int *v8; // rax
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v12, 0, 0x20uLL);
  v6 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v10 = NextProcess;
    if ( !NextProcess )
      break;
    v8 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v8 )
    {
      v12[0] = a1;
      v12[1] = v10;
      v12[2] = a2;
      v12[3] = a3;
      v6 = (unsigned __int8)ExEnumHandleTable(
                              v8,
                              (__int64 (__fastcall *)(unsigned int *, __int64 *, _QWORD, __int64))PnpHandleProcessWalkWorker,
                              (__int64)v12,
                              0LL);
      ExReleaseRundownProtection_0(v10 + 96);
      if ( v6 )
      {
        ObfDereferenceObjectWithTag(v10, 0x6E457350u);
        return v6;
      }
    }
  }
  return v6;
}
