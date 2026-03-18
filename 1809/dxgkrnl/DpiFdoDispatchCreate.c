/*
 * XREFs of DpiFdoDispatchCreate @ 0x1C0263D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoDispatchCreate(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  unsigned int Status; // edi

  v2 = *(_QWORD *)(a1 + 64);
  Status = 0;
  if ( !*(_BYTE *)(v2 + 1152) )
  {
    if ( *(_BYTE *)(v2 + 1151) )
    {
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
      Status = a2->IoStatus.Status;
    }
    else if ( a2->RequestorMode && !*(_BYTE *)(v2 + 57) )
    {
      Status = -1073741790;
    }
    if ( *(_BYTE *)(v2 + 57) )
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 5408));
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
