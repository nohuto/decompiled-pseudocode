/*
 * XREFs of RtlQueryInformationActivationContext @ 0x18002DE20
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18002FFB8 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180030E50 (RtlQueryInformationActiveActivationContext.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     RtlpGetActivationContextData @ 0x18002E3C0 (RtlpGetActivationContextData.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18002E478 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18002FE40 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180031A58 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryRunLevel @ 0x1800320F8 (RtlpQueryRunLevel.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     LdrpDropLastInProgressCount @ 0x180079EEC (LdrpDropLastInProgressCount.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800E0F80 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800E1210 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800E1494 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  PACTIVATION_CONTEXT v8; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int64 v11; // rdx
  NTSTATUS ActivationContextData; // ebx
  __int64 v13; // r10
  __int64 v14; // rcx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress; // [rsp+48h] [rbp-80h] BYREF
  int v25; // [rsp+50h] [rbp-78h] BYREF
  int v26; // [rsp+54h] [rbp-74h]
  __int64 v27; // [rsp+58h] [rbp-70h] BYREF
  __int128 v28; // [rsp+60h] [rbp-68h] BYREF
  __int64 v29; // [rsp+70h] [rbp-58h]
  _DWORD v30[8]; // [rsp+78h] [rbp-50h] BYREF
  PACTIVATION_CONTEXT v31; // [rsp+D8h] [rbp+10h]

  v31 = ActivationContext;
  v8 = ActivationContext;
  memset(v30, 0, sizeof(v30));
  v27 = 0LL;
  BaseAddress = 0LL;
  v30[6] = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
  if ( (Flags & 0x80000000) != 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags,
      ActivationContextInformationClass);
LABEL_44:
    ActivationContextData = -1073741585;
    goto LABEL_80;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    ActivationContextData = -1073741583;
    goto LABEL_80;
  }
  if ( ActivationContextInformationLength )
  {
    if ( !ActivationContextInformation )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_80;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_80;
  }
  if ( (Flags & 7) == 0 )
    goto LABEL_13;
  if ( (Flags & 7) == 1 )
  {
    if ( !v8 )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        v8 = v31;
      goto LABEL_13;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      v8);
LABEL_57:
    ActivationContextData = -1073741584;
    goto LABEL_80;
  }
  if ( (Flags & 7) != 2 )
  {
    if ( (Flags & 7) == 4 )
    {
      if ( !v8 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_57;
      }
      if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_180178500 + 1)
        || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
      {
        RtlpxLookupFunctionTable(v8, (__int64)&v28);
      }
      else
      {
        v28 = xmmword_180178500;
        v29 = qword_180178510;
      }
      if ( !*((_QWORD *)&v28 + 1) )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        ActivationContextData = -1073741515;
        goto LABEL_80;
      }
      v8 = (PACTIVATION_CONTEXT)*((_QWORD *)&v28 + 1);
      v31 = (PACTIVATION_CONTEXT)*((_QWORD *)&v28 + 1);
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
    goto LABEL_44;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_57;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(v8, &BaseAddress, &v25);
  ActivationContextData = LoadedDllByHandle;
  v23 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v25 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      v20 = *((_QWORD *)BaseAddress + 19);
      v21 = v23;
      if ( *(_DWORD *)(v20 + 56) != 9 )
        v21 = -1073741515;
      ActivationContextData = v21;
      LdrpDropLastInProgressCount(v20, v17, v18, v19);
    }
    v8 = v31;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_80;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            v8,
                            (unsigned __int64)v30 & -(__int64)((Flags & 0x40000000) != 0),
                            &v27);
  if ( ActivationContextData < 0 )
    goto LABEL_80;
  v13 = v27;
  if ( !v27 && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_44;
  v14 = (unsigned int)(ActivationContextInformationClass - 1);
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v26 &= v14;
      if ( (Flags & 0x80000000) != 0 )
        v14 = (unsigned int)ActivationContextInformationClass;
      v26 = v14;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v14,
                                                       v11,
                                                       v27);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case ActivationContextDetailedInformation:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v27,
                                                       v11,
                                                       (_DWORD)ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       (__int64)ReturnLength);
      goto LABEL_19;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v27,
                                                         SubInstanceIndex->ulAssemblyIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
      goto LABEL_77;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         v27,
                                                         (_DWORD)SubInstanceIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
LABEL_77:
      ActivationContextData = -1073741811;
      break;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        ActivationContextData = RtlpQueryRunLevel(
                                  (unsigned int)(ActivationContextInformationClass - 5),
                                  v13,
                                  ActivationContextInformation);
        if ( ActivationContextData < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_20:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       v27,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    case ActivationContextManifestResourceName:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v27,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    default:
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        ActivationContextInformationClass);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_80:
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  return ActivationContextData;
}
