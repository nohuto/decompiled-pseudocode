/*
 * XREFs of IoWMISystemControl @ 0x1406CD39C
 * Callers:
 *     WmipSystemControl @ 0x1406CD380 (WmipSystemControl.c)
 * Callees:
 *     WmipFindRegEntryByProviderId @ 0x14008D9A8 (WmipFindRegEntryByProviderId.c)
 *     WmipUnreferenceRegEntry @ 0x14008DA70 (WmipUnreferenceRegEntry.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipQueryWmiDataBlock @ 0x1406A8E70 (WmipQueryWmiDataBlock.c)
 *     IoWMICompleteRequest @ 0x1406A8F64 (IoWMICompleteRequest.c)
 *     WmipFindGuid @ 0x1406CD6D4 (WmipFindGuid.c)
 *     WmipQueryWmiRegInfo @ 0x140764FF0 (WmipQueryWmiRegInfo.c)
 */

__int64 __fastcall IoWMISystemControl(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int *p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r13
  unsigned int v7; // r12d
  unsigned int v8; // esi
  UCHAR MinorFunction; // r11
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r15d
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // r15d
  unsigned int v17; // esi
  unsigned int v19; // r12d
  int v20; // eax
  void *v21; // r8
  int v22; // edx
  __int16 v23; // r11
  unsigned int v24; // eax
  __int64 v25; // r13
  _WORD *v26; // r9
  unsigned int v27; // r10d
  unsigned int v28; // r12d
  unsigned int v29; // ecx
  __int64 *p_CompletionMode; // rcx
  __int64 *v31; // r8
  __int64 v32; // r10
  int v33; // eax
  int v34; // eax
  _WORD *v35; // rcx
  unsigned int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 RegEntryByProviderId; // rax
  __int64 v41; // [rsp+48h] [rbp-28h] BYREF
  void *Src; // [rsp+50h] [rbp-20h]
  _QWORD v43[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v44; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v45; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 *v46; // [rsp+C8h] [rbp+58h] BYREF

  v44 = a1;
  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LODWORD(v44) = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0;
  LODWORD(v46) = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xBu
    || CurrentStackLocation->Parameters.WMI.ProviderId != a2
    || !WmipGuidList && MinorFunction != 11 && MinorFunction != 8 )
  {
    v17 = -1073741808;
    goto LABEL_48;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( MinorFunction == 11 || MinorFunction == 8 )
    goto LABEL_10;
  if ( (unsigned __int8)WmipFindGuid(
                          (unsigned int)WmipGuidList,
                          7,
                          CurrentStackLocation->Parameters.QueryDirectory.FileName,
                          (unsigned int)&v44,
                          (__int64)&v45) )
  {
    if ( (unsigned __int8)(MinorFunction - 1) <= 2u || MinorFunction == 9 )
    {
      LODWORD(v46) = Parameters[1].MaximumInstances;
      if ( (Parameters[1].ReadMode & 0x80u) == 0 )
      {
        v36 = -1073741162;
        goto LABEL_58;
      }
    }
    v7 = v44;
    v8 = v45;
LABEL_10:
    v12 = MinorFunction;
    if ( MinorFunction <= 5u )
    {
      if ( MinorFunction != 5 )
      {
        if ( !MinorFunction )
        {
          if ( LowPart >= 0x3C )
          {
            if ( v7 > 1 )
            {
LABEL_15:
              if ( v8 )
              {
                Parameters[1].ReadMode &= ~0x10u;
                v13 = (8 * v8 + 67) & 0xFFFFFFF8;
                Parameters[1].MaximumInstances = v8;
                Parameters[1].CompletionMode = v13;
                if ( v13 > LowPart )
                {
                  v14 = 0LL;
                  v15 = 0;
                }
                else
                {
                  p_OutboundQuota = &Parameters[1].OutboundQuota;
                  v14 = (unsigned __int64)Parameters + v13;
                  v15 = LowPart - v13;
                }
                return (unsigned int)WmipQueryWmiDataBlock(v6, a3, v7, 0LL, v8, p_OutboundQuota, v15, v14);
              }
              else
              {
                return (unsigned int)IoWMICompleteRequest(v12, a2, a3, -1073741162, 0);
              }
            }
            RegEntryByProviderId = WmipFindRegEntryByProviderId(Parameters->ReadMode);
            if ( RegEntryByProviderId )
            {
              v6 = *(_QWORD *)(RegEntryByProviderId + 16);
              if ( v7 )
                v8 = 1;
              else
                v8 = *(_DWORD *)(RegEntryByProviderId + 52);
              WmipUnreferenceRegEntry(RegEntryByProviderId);
              goto LABEL_15;
            }
            return (unsigned int)IoWMICompleteRequest(v39, v38, a3, -1073741163, 0);
          }
          return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, -1073741789, 60);
        }
        if ( MinorFunction == 1 )
        {
          if ( v7 <= 1 )
          {
            v37 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
            if ( !v37 )
              return (unsigned int)IoWMICompleteRequest(v39, v38, a3, -1073741163, 0);
            v6 = *(_QWORD *)(v37 + 16);
            WmipUnreferenceRegEntry(v37);
          }
          return (unsigned int)WmipQueryWmiDataBlock(
                                 v6,
                                 a3,
                                 v7,
                                 (unsigned int)v46,
                                 1u,
                                 &Parameters[1].OutboundQuota,
                                 LowPart - Parameters[1].InboundQuota,
                                 (unsigned __int64)Parameters + Parameters[1].InboundQuota);
        }
        if ( MinorFunction != 2 && MinorFunction != 3 )
        {
          if ( MinorFunction != 4 )
            return (unsigned int)-1073741808;
          goto LABEL_83;
        }
        v17 = -1073741114;
        a3->IoStatus.Status = -1073741114;
LABEL_84:
        a3->IoStatus.Information = 0LL;
        goto LABEL_49;
      }
LABEL_83:
      v17 = 0;
      a3->IoStatus.Status = 0;
      goto LABEL_84;
    }
    if ( MinorFunction == 6 || MinorFunction == 7 )
      goto LABEL_83;
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction == 9 )
      {
        v17 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_84;
      }
      if ( MinorFunction != 11 )
        return (unsigned int)-1073741808;
    }
    v45 = 0;
    v41 = 0LL;
    Src = 0LL;
    v19 = 0;
    v20 = WmipQueryWmiRegInfo(v6, &v45, &v41, &v46);
    v21 = Src;
    v17 = v20;
    if ( v20 >= 0 )
    {
      v22 = v45;
      if ( (v45 & 0x20) == 0 && !Src )
      {
        v17 = -1073741808;
LABEL_47:
        a3->IoStatus.Information = v19;
LABEL_48:
        a3->IoStatus.Status = v17;
LABEL_49:
        IofCompleteRequest(a3, 0);
        return v17;
      }
      v23 = v41;
      if ( (v45 & 0x20) != 0 )
      {
        v25 = 0LL;
        v24 = 248;
      }
      else
      {
        v22 = v45 | 4;
        v45 |= 4u;
        v24 = (unsigned __int16)v41 + 250;
        v25 = 248LL;
      }
      v26 = v46;
      if ( !v46 )
      {
        v43[0] = 0LL;
        v43[1] = 0LL;
        v26 = v43;
        v46 = (unsigned __int16 *)v43;
      }
      v27 = -1;
      v28 = -1;
      if ( v24 >= 0xF8 )
        v28 = v24;
      v17 = v24 < 0xF8 ? 0xC0000095 : 0;
      if ( v24 < 0xF8 )
        goto LABEL_52;
      v29 = (unsigned __int16)*v26 + v28 + 2;
      if ( v29 >= v28 )
        v27 = (unsigned __int16)*v26 + v28 + 2;
      v17 = v29 < v28 ? 0xC0000095 : 0;
      if ( v29 < v28 )
      {
LABEL_52:
        v19 = 0;
      }
      else
      {
        Parameters->NamedPipeType = v27;
        v17 = 0;
        if ( v27 > LowPart )
        {
          v19 = 4;
        }
        else
        {
          p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
          LODWORD(v44) = v27;
          v31 = &WmipGuidList[2];
          v32 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          Parameters->MaximumInstances = 0;
          Parameters->CompletionMode = v28;
          do
          {
            *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v31 - 1);
            v33 = v22 | *((_DWORD *)v31 + 1);
            *p_CompletionMode = v25;
            *((_DWORD *)p_CompletionMode - 2) = v33;
            p_CompletionMode += 4;
            v34 = *(_DWORD *)v31;
            v31 += 3;
            *((_DWORD *)p_CompletionMode - 9) = v34;
            --v32;
          }
          while ( v32 );
          if ( (v22 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v23;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src, (unsigned __int16)v41);
            v26 = v46;
          }
          v35 = (_WORD *)((char *)Parameters + v28);
          *v35 = *v26;
          memmove(v35 + 1, *((const void **)v46 + 1), *v46);
          v21 = Src;
          v19 = v44;
        }
      }
    }
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    goto LABEL_47;
  }
  v36 = -1073741163;
LABEL_58:
  a3->IoStatus.Status = v36;
  IofCompleteRequest(a3, 0);
  return v36;
}
