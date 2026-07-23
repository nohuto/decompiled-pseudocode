/*
 * XREFs of WmipIoControl @ 0x1406AB080
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x140006A40 (IoIs32bitProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     WmipReceiveNotifications @ 0x140124AD8 (WmipReceiveNotifications.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 *     WmipOpenBlock @ 0x140612928 (WmipOpenBlock.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     WmipProbeWnodeSingleInstance @ 0x1406AB000 (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeMethodItem @ 0x1406AB3DC (WmipProbeWnodeMethodItem.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1406AB530 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipEnumerateMofResources @ 0x1406AB99C (WmipEnumerateMofResources.c)
 *     WmipQueryGuidInfo @ 0x140762CC0 (WmipQueryGuidInfo.c)
 *     WmipEnumerateGuids @ 0x1408B4800 (WmipEnumerateGuids.c)
 *     WmipQueryAllDataMultiple @ 0x1408B4C84 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408B4F6C (WmipQuerySingleMultiple.c)
 *     WmipProbeWnodeSingleItem @ 0x1408B5498 (WmipProbeWnodeSingleItem.c)
 *     WmipTranslateFileHandle @ 0x1408B5508 (WmipTranslateFileHandle.c)
 */

__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ACCESS_MASK v3; // r15d
  struct _IRP *MasterIrp; // rdi
  ACCESS_MASK Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  int v9; // ebx
  UCHAR v10; // r9
  int SetExecuteSI; // eax
  __int64 v13; // rdx
  int Blink_high; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  UCHAR v18; // r9
  ACCESS_MASK DesiredAccess[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  char v22; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v23[56]; // [rsp+80h] [rbp-88h] BYREF
  char v24; // [rsp+B8h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DesiredAccess[0] = Length;
  if ( LowPart > 0x224158 )
  {
    if ( LowPart != 2244960 )
    {
      switch ( LowPart )
      {
        case 0x228008u:
          v9 = WmipProbeWnodeSingleInstance(MasterIrp, Options, Length, 0);
          if ( v9 < 0 )
            goto LABEL_11;
          v18 = 2;
          break;
        case 0x22800Cu:
          v9 = WmipProbeWnodeSingleItem(MasterIrp, (unsigned int)Options);
          if ( v9 < 0 )
            goto LABEL_11;
          v18 = 3;
          break;
        case 0x228024u:
          v9 = WmipProbeWnodeMethodItem(MasterIrp, (unsigned int)Options, Length);
          if ( v9 >= 0 )
          {
            v10 = 9;
LABEL_8:
            DesiredAccess[0] = Options;
            SetExecuteSI = WmipQuerySetExecuteSI(0LL, a2, 1, v10, (__int64)MasterIrp, Length, DesiredAccess);
LABEL_9:
            Length = DesiredAccess[0];
LABEL_10:
            v9 = SetExecuteSI;
          }
LABEL_11:
          if ( v9 == 259 || v9 == -1073741536 )
            return (unsigned int)v9;
          goto LABEL_13;
        case 0x22811Cu:
          if ( (_DWORD)Options == 22 )
          {
            SetExecuteSI = WmipTranslateFileHandle(MasterIrp, DesiredAccess);
            goto LABEL_9;
          }
LABEL_73:
          v9 = -1073741823;
          goto LABEL_13;
        default:
          switch ( LowPart )
          {
            case 0x22812Cu:
              if ( Length >= 0x38 && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
              {
                v17 = *(_DWORD *)&MasterIrp->Type - 1;
                if ( v17 <= 0xFFE && &MasterIrp->Flags + 2 * v17 <= (ULONG *)((char *)MasterIrp + Options) )
                {
                  SetExecuteSI = WmipQueryAllDataMultiple(
                                   0,
                                   0,
                                   (int)a2,
                                   1,
                                   MasterIrp,
                                   Length,
                                   (__int64)MasterIrp,
                                   (__int64)DesiredAccess);
                  goto LABEL_9;
                }
              }
              break;
            case 0x228130u:
              if ( Length >= 0x38 )
              {
                v15 = (unsigned __int64)MasterIrp + Options;
                if ( &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
                {
                  v16 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1);
                  if ( (unsigned int)v16 <= 0xFFE && (unsigned __int64)&MasterIrp->ThreadListEntry + 24 * v16 <= v15 )
                  {
                    LOBYTE(v15) = 1;
                    SetExecuteSI = WmipQuerySingleMultiple(
                                     (_DWORD)a2,
                                     v15,
                                     (_DWORD)MasterIrp,
                                     Length,
                                     (__int64)MasterIrp,
                                     *(_DWORD *)&MasterIrp->Type,
                                     0LL,
                                     0LL,
                                     (__int64)DesiredAccess);
                    goto LABEL_9;
                  }
                }
              }
              break;
            case 0x228144u:
              if ( (unsigned int)Options < 0x10
                || Length < 0x38
                || *(_DWORD *)&MasterIrp->Type > (unsigned int)(Options - 8) >> 3 )
              {
                v9 = -1073741808;
                goto LABEL_11;
              }
              SetExecuteSI = WmipReceiveNotifications((unsigned int *)MasterIrp, (int *)DesiredAccess, (__int64)a2);
              goto LABEL_9;
            default:
              goto LABEL_58;
          }
LABEL_70:
          v9 = -1073741811;
          goto LABEL_11;
      }
      DesiredAccess[0] = Options;
      SetExecuteSI = WmipQuerySetExecuteSI(0LL, a2, 1, v18, (__int64)MasterIrp, Options, DesiredAccess);
      Length = 0;
      goto LABEL_10;
    }
    goto LABEL_79;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        SetExecuteSI = WmipEnumerateMofResources(MasterIrp, Length, DesiredAccess);
        goto LABEL_9;
      }
      goto LABEL_70;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          Blink_high = HIDWORD(MasterIrp->ThreadListEntry.Blink);
          if ( (Blink_high & 1) != 0 && (_DWORD)Options == *(_DWORD *)&MasterIrp->Type && (Blink_high & 0xFFFFFF7E) == 0 )
          {
            SetExecuteSI = WmipQueryAllData(0LL, a2, 1, (__int64)MasterIrp, Length, DesiredAccess);
            goto LABEL_9;
          }
        }
        goto LABEL_73;
      }
      break;
    case 0x224004u:
      if ( Length >= 0x38 )
      {
        v9 = WmipProbeWnodeSingleInstance(MasterIrp, Options, Length, 1);
        if ( v9 < 0 )
          goto LABEL_11;
        v10 = 1;
        goto LABEL_8;
      }
      break;
    case 0x224108u:
LABEL_25:
      v9 = WmipProbeWmiOpenGuidBlock(
             (unsigned int)v23,
             (unsigned int)&v22,
             (unsigned int)&v24,
             (unsigned int)DesiredAccess,
             (__int64)MasterIrp,
             Options,
             Length);
      if ( v9 >= 0 )
      {
        LOBYTE(v13) = 1;
        v9 = WmipOpenBlock(LowPart, v13, (__int64)v23, DesiredAccess[0], &Object);
        if ( v9 >= 0 )
        {
          v9 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess[0], WmipGuidObjectType, 1, &Handle);
          if ( v9 >= 0 )
          {
            if ( IoIs32bitProcess(0LL) )
              LODWORD(MasterIrp->MdlAddress) = (_DWORD)Handle;
            else
              *(_QWORD *)&MasterIrp->Flags = Handle;
          }
          ObfDereferenceObject(Object);
        }
      }
      goto LABEL_11;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        Length = 4;
        v9 = 0;
        goto LABEL_13;
      }
      break;
    case 0x224134u:
LABEL_79:
      if ( Length >= 8 )
      {
        SetExecuteSI = WmipEnumerateGuids(LowPart, MasterIrp, Length, DesiredAccess);
        goto LABEL_9;
      }
      break;
    case 0x224138u:
      if ( Length >= 0x10 )
      {
        SetExecuteSI = WmipQueryGuidInfo(MasterIrp);
        Length = 16;
        goto LABEL_10;
      }
      break;
    case 0x22413Cu:
    case 0x224140u:
      goto LABEL_25;
    default:
LABEL_58:
      v9 = -1073741808;
      goto LABEL_13;
  }
  v9 = -1073741789;
LABEL_13:
  a2->IoStatus.Status = v9;
  if ( v9 >= 0 )
    v3 = Length;
  a2->IoStatus.Information = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
