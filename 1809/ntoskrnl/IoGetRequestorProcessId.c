/*
 * XREFs of IoGetRequestorProcessId @ 0x140193E60
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x14010E000 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Flink;
  return (unsigned int)RequestorProcess;
}
