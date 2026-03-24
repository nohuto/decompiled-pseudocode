/*
 * XREFs of ViDdiDispatchWmi @ 0x140927890
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C10C0 (IofCompleteRequest.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409278F8 (ViDdiDispatchWmiQueryAllData.c)
 *     ViDdiDispatchWmiRegInfoEx @ 0x140927A84 (ViDdiDispatchWmiRegInfoEx.c)
 */

__int64 __fastcall ViDdiDispatchWmi(__int64 a1, IRP *a2)
{
  UCHAR MinorFunction; // dl
  unsigned int Status; // ebx
  unsigned int AllData; // eax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( MinorFunction )
  {
    if ( MinorFunction != 11 )
    {
      Status = -1073741637;
      goto LABEL_7;
    }
    AllData = ViDdiDispatchWmiRegInfoEx(a1, a2);
  }
  else
  {
    AllData = ViDdiDispatchWmiQueryAllData(a1, a2);
  }
  Status = AllData;
LABEL_7:
  if ( Status == -1073741637 )
    Status = a2->IoStatus.Status;
  else
    a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
