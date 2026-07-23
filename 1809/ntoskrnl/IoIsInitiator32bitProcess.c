/*
 * XREFs of IoIsInitiator32bitProcess @ 0x14013F920
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x140006A40 (IoIs32bitProcess.c)
 *     IoGetInitiatorProcess @ 0x14013B4B0 (IoGetInitiatorProcess.c)
 */

BOOLEAN __fastcall IoIsInitiator32bitProcess(PIRP Irp)
{
  __int64 InitiatorProcess; // rax
  BOOLEAN result; // al
  __int64 v4; // rax
  __int16 v5; // ax

  InitiatorProcess = IoGetInitiatorProcess((__int64)Irp->Tail.Overlay.CurrentStackLocation->FileObject);
  if ( !InitiatorProcess )
    return IoIs32bitProcess(Irp);
  v4 = *(_QWORD *)(InitiatorProcess + 1064);
  result = 0;
  if ( v4 )
  {
    v5 = *(_WORD *)(v4 + 8);
    if ( v5 == 332 || v5 == 452 )
      return 1;
  }
  return result;
}
