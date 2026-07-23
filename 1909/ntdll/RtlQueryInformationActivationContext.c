/*
 * XREFs of RtlQueryInformationActivationContext @ 0x1800376A0
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007ACA4 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x18007FEC0 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18001869C (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     RtlpQueryRunLevel @ 0x180076390 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180076480 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800766D8 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DEC04 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DEE94 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800DF118 (RtlpQueryInformationActivationContextManifestResourceName.c)
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
  char *v10; // r8
  char *v11; // r9
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  const char *v13; // rdx
  const char *NotificationContext; // r10
  __int64 v15; // rcx
  NTSTATUS RunLevel; // ebx
  __int32 v17; // ecx
  bool v18; // sf
  int InformationActivationContextDetailedInformation; // eax
  int LoadedDllByHandle; // eax
  unsigned int v21; // eax
  signed __int32 RefCount; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  int v29; // [rsp+30h] [rbp-98h]
  PVOID BaseAddress; // [rsp+38h] [rbp-90h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h]
  const char *v32; // [rsp+48h] [rbp-80h]
  int v33; // [rsp+50h] [rbp-78h] BYREF
  __int32 v34; // [rsp+54h] [rbp-74h]
  __int128 v35; // [rsp+58h] [rbp-70h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  struct _TEB *v37; // [rsp+70h] [rbp-58h]
  struct _TEB *v38; // [rsp+78h] [rbp-50h]
  _DWORD v39[8]; // [rsp+80h] [rbp-48h] BYREF
  PACTIVATION_CONTEXT v40; // [rsp+D8h] [rbp+10h]

  v40 = ActivationContext;
  v8 = ActivationContext;
  memset(v39, 0, sizeof(v39));
  BaseAddress = 0LL;
  v39[6] = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_84;
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
LABEL_77:
    RunLevel = -1073741585;
    goto LABEL_123;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    RunLevel = -1073741583;
    goto LABEL_123;
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
      RunLevel = -1073741582;
      goto LABEL_123;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    RunLevel = -1073741580;
    goto LABEL_123;
  }
  if ( (Flags & 7) != 0 )
  {
    switch ( Flags & 7 )
    {
      case 1u:
        if ( !v8 )
        {
          v38 = NtCurrentTeb();
          ActivationContextStackPointer = v38->ActivationContextStackPointer;
          if ( !ActivationContextStackPointer->ActiveFrame )
          {
            v8 = v40;
            goto LABEL_13;
          }
          v8 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
          goto LABEL_52;
        }
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - caller asked to use active activation context but passed %p\n",
          "RtlQueryInformationActivationContext",
          v8);
        goto LABEL_90;
      case 2u:
LABEL_47:
        if ( v8 )
        {
          LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)v8, (__int64 *)&BaseAddress, &v33);
          RunLevel = LoadedDllByHandle;
          v29 = LoadedDllByHandle;
          if ( LoadedDllByHandle >= 0 && v33 < 5 )
          {
            v37 = NtCurrentTeb();
            if ( (v37->SameTebFlags & 0x1000) != 0 )
            {
              RunLevel = LoadedDllByHandle;
            }
            else
            {
              LdrpDrainWorkQueue(0);
              v26 = *((_QWORD *)BaseAddress + 19);
              v27 = v29;
              if ( *(_DWORD *)(v26 + 56) != 9 )
                v27 = -1073741515;
              RunLevel = v27;
              LdrpDropLastInProgressCount(v26, v23, v24, v25);
            }
            v8 = v40;
          }
          if ( RunLevel < 0 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: %s() - Caller passed invalid hmodule (%p)\n",
              "RtlQueryInformationActivationContext",
              v8);
            goto LABEL_123;
          }
          v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
LABEL_52:
          v40 = v8;
          goto LABEL_13;
        }
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
          "RtlQueryInformationActivationContext");
LABEL_90:
        RunLevel = -1073741584;
        goto LABEL_123;
      case 4u:
        if ( !v8 )
        {
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
            "RtlQueryInformationActivationContext");
          goto LABEL_90;
        }
        if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_18017A500 + 1)
          || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_18017A500 + 1)
                                   + (unsigned __int64)(unsigned int)qword_18017A510 )
        {
          RtlpxLookupFunctionTable((unsigned __int64)v8, (signed __int64)&v35, v10, v11);
        }
        else
        {
          v35 = xmmword_18017A500;
          v36 = qword_18017A510;
        }
        if ( !*((_QWORD *)&v35 + 1) )
        {
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
            "RtlQueryInformationActivationContext",
            v8);
          RunLevel = -1073741515;
          goto LABEL_123;
        }
        v8 = (PACTIVATION_CONTEXT)*((_QWORD *)&v35 + 1);
        v40 = (PACTIVATION_CONTEXT)*((_QWORD *)&v35 + 1);
        goto LABEL_47;
    }
LABEL_84:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
    goto LABEL_77;
  }
LABEL_13:
  v13 = (const char *)((unsigned __int64)v39 & -(__int64)((Flags & 0x40000000) != 0));
  NotificationContext = 0LL;
  v32 = 0LL;
  v15 = 0LL;
  v31 = 0LL;
  if ( v8 )
  {
    v13 = "Actx ";
    if ( v8 == (PACTIVATION_CONTEXT)-4LL )
    {
      v15 = 776LL;
      v31 = 776LL;
      goto LABEL_17;
    }
    if ( v8 == (PACTIVATION_CONTEXT)-3LL )
    {
      NotificationContext = "Actx ";
      v32 = "Actx ";
    }
    else
    {
      NotificationContext = (const char *)v8->NotificationContext;
      v32 = NotificationContext;
    }
    goto LABEL_58;
  }
  if ( v13 )
  {
    v21 = *(_DWORD *)(((unsigned __int64)v39 & -(__int64)((Flags & 0x40000000) != 0)) + 0x18) & 7;
    if ( v21 <= 1 )
    {
      v15 = 760LL;
      v31 = 760LL;
    }
    else if ( v21 != 4 )
    {
      if ( v21 != 2 )
      {
        RunLevel = -1073741584;
        goto LABEL_21;
      }
      v15 = 776LL;
      goto LABEL_16;
    }
    v13 = "Actx ";
LABEL_58:
    if ( !v15 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v15 = 760LL;
LABEL_16:
  v31 = v15;
  v13 = "Actx ";
LABEL_17:
  NotificationContext = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v15);
  v32 = NotificationContext;
  v8 = v40;
LABEL_18:
  if ( NotificationContext )
    v13 = NotificationContext;
  NotificationContext = v13;
  v32 = v13;
  RunLevel = 0;
LABEL_21:
  if ( RunLevel < 0 )
    goto LABEL_123;
  if ( !NotificationContext && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_77;
  v17 = ActivationContextInformationClass - 1;
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v34 &= v17;
      if ( (Flags & 0x80000000) != 0 )
        v17 = 1;
      v34 = v17;
      if ( ReturnLength )
        *ReturnLength = 0LL;
      if ( ActivationContextInformationLength < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16LL;
        RunLevel = -1073741789;
      }
      else
      {
        if ( NotificationContext )
          *((_DWORD *)ActivationContextInformation + 2) = *((_DWORD *)NotificationContext + 7);
        else
          *((_DWORD *)ActivationContextInformation + 2) = 0;
        if ( (v17 & 1) == 0
          && v8
          && (((unsigned __int64)&v8[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
          && v8->RefCount != 0x7FFFFFFF )
        {
          do
          {
            if ( v8->RefCount == 0x7FFFFFFF )
              break;
            RefCount = v8->RefCount;
          }
          while ( RefCount != _InterlockedCompareExchange(&v8->RefCount, RefCount + 1, RefCount) );
        }
        *(_QWORD *)ActivationContextInformation = v8;
        if ( ReturnLength )
          *ReturnLength = 16LL;
        RunLevel = 0;
      }
      v18 = RunLevel < 0;
LABEL_37:
      if ( v18 )
        break;
      goto LABEL_38;
    case ActivationContextDetailedInformation:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                          (_DWORD)NotificationContext,
                                                          (_DWORD)v13,
                                                          (_DWORD)ActivationContextInformation,
                                                          ActivationContextInformationLength,
                                                          (__int64)ReturnLength);
      goto LABEL_45;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextDetailedInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                            (_DWORD)NotificationContext,
                                                            SubInstanceIndex->ulAssemblyIndex,
                                                            (_DWORD)ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            (__int64)ReturnLength);
        goto LABEL_45;
      }
LABEL_116:
      RunLevel = -1073741811;
      break;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextDetailedInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                            (_DWORD)NotificationContext,
                                                            (_DWORD)SubInstanceIndex,
                                                            (_DWORD)ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            (__int64)ReturnLength);
        goto LABEL_45;
      }
      goto LABEL_116;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        RunLevel = RtlpQueryRunLevel(
                     (unsigned int)(ActivationContextInformationClass - 5),
                     NotificationContext,
                     ActivationContextInformation);
        if ( RunLevel < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_38:
        RunLevel = 0;
        break;
      }
      RunLevel = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                          NotificationContext,
                                                          ActivationContextInformation,
                                                          ActivationContextInformationLength,
                                                          ReturnLength);
LABEL_45:
      RunLevel = InformationActivationContextDetailedInformation;
      v18 = InformationActivationContextDetailedInformation < 0;
      goto LABEL_37;
    case ActivationContextManifestResourceName:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                          NotificationContext,
                                                          ActivationContextInformation,
                                                          ActivationContextInformationLength,
                                                          ReturnLength);
      goto LABEL_45;
    default:
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        ActivationContextInformationClass);
      RunLevel = -1073741595;
      break;
  }
LABEL_123:
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  return RunLevel;
}
