/*
 * XREFs of IoGetRequestorProcessId @ 0x14019E390
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x1401088D0 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Flink;
  return (unsigned int)RequestorProcess;
}
