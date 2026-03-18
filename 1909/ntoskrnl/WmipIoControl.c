/*
 * XREFs of WmipIoControl @ 0x140695760
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x140002270 (IoIs32bitProcess.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     WmipReceiveNotifications @ 0x1401381D8 (WmipReceiveNotifications.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WmipOpenBlock @ 0x1405C0C48 (WmipOpenBlock.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     WmipQueryAllData @ 0x140696674 (WmipQueryAllData.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1406E8DF8 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipEnumerateMofResources @ 0x1406EBBE0 (WmipEnumerateMofResources.c)
 *     WmipProbeWnodeSingleInstance @ 0x1406F81AC (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeMethodItem @ 0x1406F822C (WmipProbeWnodeMethodItem.c)
 *     WmipQuerySetExecuteSI @ 0x140713490 (WmipQuerySetExecuteSI.c)
 *     WmipQueryGuidInfo @ 0x14078AED0 (WmipQueryGuidInfo.c)
 *     WmipEnumerateGuids @ 0x1408F0394 (WmipEnumerateGuids.c)
 *     WmipQueryAllDataMultiple @ 0x1408F0808 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408F0AE0 (WmipQuerySingleMultiple.c)
 *     WmipProbeWnodeSingleItem @ 0x1408F0FE0 (WmipProbeWnodeSingleItem.c)
 *     WmipTranslateFileHandle @ 0x1408F1050 (WmipTranslateFileHandle.c)
 */

__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // r15d
  struct _IRP *MasterIrp; // rdi
  unsigned int Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  int Blink_high; // eax
  int AllDataMultiple; // eax
  int v13; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  ACCESS_MASK DesiredAccess[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v23[56]; // [rsp+80h] [rbp-88h] BYREF
  char v24; // [rsp+B8h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DesiredAccess[0] = Length;
  if ( LowPart > 0x224158 )
  {
    switch ( LowPart )
    {
      case 0x224160u:
        goto LABEL_77;
      case 0x228008u:
        v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, 0LL);
        if ( v13 < 0 )
          goto LABEL_12;
        break;
      case 0x22800Cu:
        v13 = WmipProbeWnodeSingleItem(MasterIrp, (unsigned int)Options);
        if ( v13 < 0 )
          goto LABEL_12;
        break;
      default:
        switch ( LowPart )
        {
          case 0x228024u:
            v13 = WmipProbeWnodeMethodItem(MasterIrp, (unsigned int)Options, Length);
            if ( v13 < 0 )
              goto LABEL_12;
            goto LABEL_23;
          case 0x22811Cu:
            if ( (_DWORD)Options == 22 )
            {
              AllDataMultiple = WmipTranslateFileHandle(MasterIrp, DesiredAccess);
              goto LABEL_10;
            }
LABEL_72:
            v13 = -1073741823;
            goto LABEL_14;
          case 0x22812Cu:
            if ( Length >= 0x38 && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
            {
              v18 = *(_DWORD *)&MasterIrp->Type - 1;
              if ( v18 <= 0xFFE && &MasterIrp->Flags + 2 * v18 <= (ULONG *)((char *)MasterIrp + Options) )
              {
                LOBYTE(a4) = 1;
                AllDataMultiple = WmipQueryAllDataMultiple(
                                    0,
                                    0,
                                    (int)a2,
                                    a4,
                                    MasterIrp,
                                    Length,
                                    (__int64)MasterIrp,
                                    (__int64)DesiredAccess);
                goto LABEL_10;
              }
            }
            break;
          case 0x228130u:
            if ( Length >= 0x38 )
            {
              v16 = (unsigned __int64)MasterIrp + Options;
              if ( &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
              {
                v17 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1);
                if ( (unsigned int)v17 <= 0xFFE && (unsigned __int64)&MasterIrp->ThreadListEntry + 24 * v17 <= v16 )
                {
                  LOBYTE(v16) = 1;
                  AllDataMultiple = WmipQuerySingleMultiple(
                                      (_DWORD)a2,
                                      v16,
                                      (_DWORD)MasterIrp,
                                      Length,
                                      (__int64)MasterIrp,
                                      *(_DWORD *)&MasterIrp->Type,
                                      0LL,
                                      0LL,
                                      (__int64)DesiredAccess);
                  goto LABEL_10;
                }
              }
            }
            break;
          case 0x228144u:
            if ( (unsigned int)Options < 0x10
              || Length < 0x38
              || *(_DWORD *)&MasterIrp->Type > (unsigned int)(Options - 8) >> 3 )
            {
              v13 = -1073741808;
              goto LABEL_12;
            }
            AllDataMultiple = WmipReceiveNotifications((unsigned int *)MasterIrp, (int *)DesiredAccess, (__int64)a2);
            goto LABEL_10;
          default:
            goto LABEL_57;
        }
LABEL_69:
        v13 = -1073741811;
        goto LABEL_12;
    }
    DesiredAccess[0] = Options;
    AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, 1, (__int64)MasterIrp, Options, (__int64)DesiredAccess);
    Length = 0;
    goto LABEL_11;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        AllDataMultiple = WmipEnumerateMofResources(MasterIrp, Length, DesiredAccess);
        goto LABEL_10;
      }
      goto LABEL_69;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          Blink_high = HIDWORD(MasterIrp->ThreadListEntry.Blink);
          if ( (Blink_high & 1) != 0 && (_DWORD)Options == *(_DWORD *)&MasterIrp->Type && (Blink_high & 0xFFFFFF7E) == 0 )
          {
            AllDataMultiple = WmipQueryAllData(0LL, Length, (__int64)DesiredAccess);
LABEL_10:
            Length = DesiredAccess[0];
LABEL_11:
            v13 = AllDataMultiple;
            goto LABEL_12;
          }
        }
        goto LABEL_72;
      }
      goto LABEL_54;
    case 0x224004u:
      if ( Length < 0x38 )
        goto LABEL_54;
      LOBYTE(a4) = 1;
      v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, a4);
      if ( v13 < 0 )
        goto LABEL_12;
LABEL_23:
      DesiredAccess[0] = Options;
      AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, 1, (__int64)MasterIrp, Length, (__int64)DesiredAccess);
      goto LABEL_10;
    case 0x224108u:
      goto LABEL_30;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        Length = 4;
        v13 = 0;
        goto LABEL_14;
      }
      goto LABEL_54;
    case 0x224134u:
LABEL_77:
      if ( Length >= 8 )
      {
        AllDataMultiple = WmipEnumerateGuids(LowPart, MasterIrp, Length, DesiredAccess);
        goto LABEL_10;
      }
      goto LABEL_54;
  }
  if ( LowPart != 2244920 )
  {
    if ( LowPart != 2244924 && LowPart != 2244928 )
    {
LABEL_57:
      v13 = -1073741808;
      goto LABEL_14;
    }
LABEL_30:
    memset(v23, 0, 0x30uLL);
    v22[0] = 0LL;
    v22[1] = 0LL;
    v13 = WmipProbeWmiOpenGuidBlock(
            (unsigned int)v23,
            (unsigned int)v22,
            (unsigned int)&v24,
            (unsigned int)DesiredAccess,
            (__int64)MasterIrp,
            Options,
            Length);
    if ( v13 >= 0 )
    {
      LOBYTE(v15) = 1;
      v13 = WmipOpenBlock(LowPart, v15, (__int64)v23, DesiredAccess[0], &Object);
      if ( v13 >= 0 )
      {
        v13 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess[0], WmipGuidObjectType, 1, &Handle);
        if ( v13 >= 0 )
        {
          if ( IoIs32bitProcess(0LL) )
            LODWORD(MasterIrp->MdlAddress) = (_DWORD)Handle;
          else
            *(_QWORD *)&MasterIrp->Flags = Handle;
        }
        ObfDereferenceObject(Object);
      }
    }
LABEL_12:
    if ( v13 == 259 || v13 == -1073741536 )
      return (unsigned int)v13;
    goto LABEL_14;
  }
  if ( Length >= 0x10 )
  {
    AllDataMultiple = WmipQueryGuidInfo(MasterIrp);
    Length = 16;
    goto LABEL_11;
  }
LABEL_54:
  v13 = -1073741789;
LABEL_14:
  a2->IoStatus.Status = v13;
  if ( v13 >= 0 )
    v5 = Length;
  a2->IoStatus.Information = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v13;
}
