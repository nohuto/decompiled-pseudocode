/*
 * XREFs of SmpInitializeKnownDllsWorker @ 0x14000D330
 * Callers:
 *     <none>
 * Callees:
 *     SmpInitializeKnownDlls @ 0x1400082A0 (SmpInitializeKnownDlls.c)
 *     SmpTerminate @ 0x1400138E4 (SmpTerminate.c)
 */

NTSTATUS __fastcall SmpInitializeKnownDllsWorker(__int64 a1, void *a2)
{
  unsigned __int64 v3; // rdi
  NTSTATUS result; // eax
  unsigned __int64 Parameters[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = (int)SmpInitializeKnownDlls();
  NtSetEvent(a2, 0LL);
  result = NtClose(a2);
  if ( (v3 & 0x80000000) != 0LL )
  {
    RtlInitUnicodeString(&DestinationString, L"Failure in known dll worker.");
    Parameters[1] = v3;
    Parameters[0] = (unsigned __int64)&DestinationString;
    SmpTerminate(Parameters, 1u, 2u);
    JUMPOUT(0x14000D39CLL);
  }
  return result;
}
