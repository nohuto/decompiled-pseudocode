/*
 * XREFs of FsRtlUpperOplockFsctrl @ 0x140816370
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405DDC54 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlUpperOplockFsctrl(__int64 *Oplock, PIRP Irp, unsigned int a3, char a4, int a5)
{
  int v5; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v9; // ecx
  PIRP v10; // r11
  UCHAR MajorFunction; // si
  int v12; // r10d
  ULONG Options; // edx
  unsigned int v14; // ebx
  struct _IRP *MasterIrp; // rdx

  v5 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v9 = 0;
  v10 = Irp;
  MajorFunction = CurrentStackLocation->MajorFunction;
  v12 = ((a4 & 6) << 12) | ((a4 & 1) << 12);
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
    {
      case 0x90000u:
        v9 = 2;
        break;
      case 0x90004u:
        v9 = 16;
        break;
      case 0x90008u:
        v9 = 4;
        break;
      case 0x9005Cu:
        v9 = 8;
        break;
      case 0x90240u:
        if ( CurrentStackLocation->Parameters.Create.Options >= 0xC )
        {
          MasterIrp = Irp->AssociatedIrp.MasterIrp;
          if ( MasterIrp->Type <= 1u )
          {
            if ( ((__int64)MasterIrp->MdlAddress & 2) != 0 )
              return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
            v9 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12);
          }
          else
          {
            v5 = -1073741811;
          }
        }
        else
        {
          v5 = -1073741789;
        }
        break;
      default:
        return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
    }
    if ( !FsRtlpOplockUpperLowerCompatible(v9, v12) )
      v5 = -1073741598;
    v14 = v5;
    if ( v5 )
      goto LABEL_4;
    return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( ((Options & 0x100000) == 0 || (v12 & 0x4000) != 0) && ((Options & 0x10000) == 0 || (v12 & 0x2000) != 0) )
    return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
  v14 = -1073741598;
LABEL_4:
  if ( MajorFunction == 13 )
  {
    v10->IoStatus.Status = v14;
    IofCompleteRequest(v10, 1);
  }
  return v14;
}
