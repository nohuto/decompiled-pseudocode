/*
 * XREFs of IopStartApcHardError @ 0x14081B650
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C10C0 (IofCompleteRequest.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x14066AAC0 (PsCreateSystemThreadEx.c)
 */

void __fastcall IopStartApcHardError(PIRP *P)
{
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  if ( (int)PsCreateSystemThreadEx((__int64)&Handle, 0, 0LL, 0LL, 0LL, (__int64)IopApcHardError, (__int64)P, 0LL, 0LL) >= 0 )
  {
    ZwClose(Handle);
  }
  else
  {
    IofCompleteRequest(P[4], 1);
    ExFreePoolWithTag(P, 0);
  }
}
