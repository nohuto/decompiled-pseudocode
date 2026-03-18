/*
 * XREFs of IoWMISystemControl @ 0x1406EC7BC
 * Callers:
 *     WmipSystemControl @ 0x1406EC7A0 (WmipSystemControl.c)
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     WmipUnreferenceRegEntry @ 0x1400EDD84 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByProviderId @ 0x1400EDDB4 (WmipFindRegEntryByProviderId.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipQueryWmiDataBlock @ 0x1406A44A0 (WmipQueryWmiDataBlock.c)
 *     IoWMICompleteRequest @ 0x1406A4594 (IoWMICompleteRequest.c)
 *     WmipFindGuid @ 0x1406ECACC (WmipFindGuid.c)
 *     WmipQueryWmiRegInfo @ 0x14078C990 (WmipQueryWmiRegInfo.c)
 */

__int64 __fastcall IoWMISystemControl(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int *p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int v8; // esi
  UCHAR MinorFunction; // r11
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r12d
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // r12d
  unsigned int v17; // esi
  unsigned int v19; // r15d
  int v20; // eax
  void *v21; // rcx
  int v22; // edx
  __int16 v23; // r10
  unsigned int v24; // r15d
  __int64 v25; // r11
  unsigned __int16 *v26; // r9
  unsigned int v27; // r13d
  __int64 v28; // r12
  __int64 *p_CompletionMode; // rcx
  __int64 *v30; // r8
  int v31; // eax
  int v32; // eax
  unsigned __int16 *v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 RegEntryByProviderId; // rax
  __int64 v39; // [rsp+40h] [rbp-20h] BYREF
  void *Src; // [rsp+48h] [rbp-18h]
  _QWORD v41[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v43; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int16 *v44; // [rsp+B8h] [rbp+58h] BYREF

  v42 = a1;
  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LODWORD(v42) = 0;
  v7 = 0;
  v43 = 0;
  v8 = 0;
  LODWORD(v44) = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xBu
    || CurrentStackLocation->Parameters.WMI.ProviderId != a2
    || !WmipGuidList && MinorFunction != 11 && MinorFunction != 8 )
  {
    v17 = -1073741808;
    goto LABEL_44;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( MinorFunction == 11 || MinorFunction == 8 )
    goto LABEL_10;
  if ( (unsigned __int8)WmipFindGuid(
                          (unsigned int)WmipGuidList,
                          7,
                          CurrentStackLocation->Parameters.QueryDirectory.FileName,
                          (unsigned int)&v42,
                          (__int64)&v43) )
  {
    if ( (unsigned __int8)(MinorFunction - 1) <= 2u || MinorFunction == 9 )
    {
      LODWORD(v44) = Parameters[1].MaximumInstances;
      if ( (Parameters[1].ReadMode & 0x80u) == 0 )
      {
        v34 = -1073741162;
        goto LABEL_52;
      }
    }
    v7 = v42;
    v8 = v43;
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
            return (unsigned int)IoWMICompleteRequest(v37, v36, a3, -1073741163, 0);
          }
          return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, -1073741789, 60);
        }
        if ( MinorFunction == 1 )
        {
          if ( v7 <= 1 )
          {
            v35 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
            if ( !v35 )
              return (unsigned int)IoWMICompleteRequest(v37, v36, a3, -1073741163, 0);
            v6 = *(_QWORD *)(v35 + 16);
            WmipUnreferenceRegEntry(v35);
          }
          return (unsigned int)WmipQueryWmiDataBlock(
                                 v6,
                                 a3,
                                 v7,
                                 (unsigned int)v44,
                                 1u,
                                 &Parameters[1].OutboundQuota,
                                 LowPart - Parameters[1].InboundQuota,
                                 (unsigned __int64)Parameters + Parameters[1].InboundQuota);
        }
        if ( MinorFunction != 2 && MinorFunction != 3 )
        {
          if ( MinorFunction != 4 )
            return (unsigned int)-1073741808;
          goto LABEL_78;
        }
        v17 = -1073741114;
        a3->IoStatus.Status = -1073741114;
LABEL_79:
        a3->IoStatus.Information = 0LL;
        goto LABEL_45;
      }
LABEL_78:
      v17 = 0;
      a3->IoStatus.Status = 0;
      goto LABEL_79;
    }
    if ( MinorFunction == 6 || MinorFunction == 7 )
      goto LABEL_78;
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction == 9 )
      {
        v17 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_79;
      }
      if ( MinorFunction != 11 )
        return (unsigned int)-1073741808;
    }
    v43 = 0;
    v41[0] = 0LL;
    v41[1] = 0LL;
    v39 = 0LL;
    Src = 0LL;
    v19 = 0;
    v20 = WmipQueryWmiRegInfo(v6, &v43, &v39, &v44);
    v21 = Src;
    v17 = v20;
    if ( v20 >= 0 )
    {
      v22 = v43;
      if ( (v43 & 0x20) == 0 && !Src )
      {
        v17 = -1073741808;
LABEL_43:
        a3->IoStatus.Information = v19;
LABEL_44:
        a3->IoStatus.Status = v17;
LABEL_45:
        IofCompleteRequest(a3, 0);
        return v17;
      }
      v23 = v39;
      if ( (v43 & 0x20) != 0 )
      {
        v25 = 0LL;
        v24 = 248;
      }
      else
      {
        v22 = v43 | 4;
        v43 |= 4u;
        v24 = (unsigned __int16)v39 + 250;
        v25 = 248LL;
      }
      v26 = (unsigned __int16 *)v41;
      if ( v44 )
        v26 = v44;
      v44 = v26;
      if ( v24 < 0xF8 || (v27 = v24 + *v26 + 2, v27 < v24) )
      {
        v19 = 0;
        v17 = -1073741675;
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
          v28 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
          Parameters->MaximumInstances = 0;
          v30 = &WmipGuidList[2];
          Parameters->CompletionMode = v24;
          do
          {
            *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v30 - 1);
            v31 = v22 | *((_DWORD *)v30 + 1);
            *p_CompletionMode = v25;
            *((_DWORD *)p_CompletionMode - 2) = v31;
            p_CompletionMode += 4;
            v32 = *(_DWORD *)v30;
            v30 += 3;
            *((_DWORD *)p_CompletionMode - 9) = v32;
            --v28;
          }
          while ( v28 );
          if ( (v22 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v23;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src, (unsigned __int16)v39);
            v26 = v44;
          }
          v33 = (unsigned __int16 *)((char *)Parameters + v24);
          *v33 = *v26;
          memmove(v33 + 1, *((const void **)v44 + 1), *v44);
          v21 = Src;
          v19 = v27;
        }
      }
    }
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    goto LABEL_43;
  }
  v34 = -1073741163;
LABEL_52:
  a3->IoStatus.Status = v34;
  IofCompleteRequest(a3, 0);
  return v34;
}
