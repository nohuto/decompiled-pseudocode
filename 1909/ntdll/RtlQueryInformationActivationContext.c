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

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        volatile signed __int32 *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  volatile signed __int32 *ActivationContext; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  const char *v13; // rdx
  const char *v14; // r10
  __int64 v15; // rcx
  int RunLevel; // ebx
  int v17; // ecx
  bool v18; // sf
  int InformationActivationContextDetailedInformation; // eax
  int LoadedDllByHandle; // eax
  unsigned int v21; // eax
  signed __int32 v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  int v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+38h] [rbp-90h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h]
  const char *v32; // [rsp+48h] [rbp-80h]
  int v33; // [rsp+50h] [rbp-78h] BYREF
  int v34; // [rsp+54h] [rbp-74h]
  __int128 v35; // [rsp+58h] [rbp-70h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  struct _TEB *v37; // [rsp+70h] [rbp-58h]
  struct _TEB *v38; // [rsp+78h] [rbp-50h]
  _DWORD v39[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v40; // [rsp+D8h] [rbp+10h]

  v40 = a2;
  ActivationContext = a2;
  memset(v39, 0, sizeof(v39));
  v30 = 0LL;
  v39[6] = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_84;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
LABEL_77:
    RunLevel = -1073741585;
    goto LABEL_123;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    RunLevel = -1073741583;
    goto LABEL_123;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      RunLevel = -1073741582;
      goto LABEL_123;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    RunLevel = -1073741580;
    goto LABEL_123;
  }
  if ( (a1 & 7) != 0 )
  {
    switch ( a1 & 7 )
    {
      case 1:
        if ( !ActivationContext )
        {
          v38 = NtCurrentTeb();
          ActivationContextStackPointer = v38->ActivationContextStackPointer;
          if ( !ActivationContextStackPointer->ActiveFrame )
          {
            ActivationContext = v40;
            goto LABEL_13;
          }
          ActivationContext = (volatile signed __int32 *)ActivationContextStackPointer->ActiveFrame->ActivationContext;
          goto LABEL_52;
        }
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - caller asked to use active activation context but passed %p\n",
          "RtlQueryInformationActivationContext",
          (const void *)ActivationContext);
        goto LABEL_90;
      case 2:
LABEL_47:
        if ( ActivationContext )
        {
          LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)ActivationContext, &v30, &v33);
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
              v26 = *(_QWORD *)(v30 + 152);
              v27 = v29;
              if ( *(_DWORD *)(v26 + 56) != 9 )
                v27 = -1073741515;
              RunLevel = v27;
              LdrpDropLastInProgressCount(v26, v23, v24, v25);
            }
            ActivationContext = v40;
          }
          if ( RunLevel < 0 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: %s() - Caller passed invalid hmodule (%p)\n",
              "RtlQueryInformationActivationContext",
              (const void *)ActivationContext);
            goto LABEL_123;
          }
          ActivationContext = *(volatile signed __int32 **)(v30 + 136);
LABEL_52:
          v40 = ActivationContext;
          goto LABEL_13;
        }
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
          "RtlQueryInformationActivationContext");
LABEL_90:
        RunLevel = -1073741584;
        goto LABEL_123;
      case 4:
        if ( !ActivationContext )
        {
          DbgPrintEx(
            51LL,
            0LL,
            "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
            "RtlQueryInformationActivationContext");
          goto LABEL_90;
        }
        if ( (unsigned __int64)ActivationContext < *((_QWORD *)&xmmword_18017A500 + 1)
          || (unsigned __int64)ActivationContext >= *((_QWORD *)&xmmword_18017A500 + 1)
                                                  + (unsigned __int64)(unsigned int)qword_18017A510 )
        {
          RtlpxLookupFunctionTable((unsigned __int64)ActivationContext, (signed __int64)&v35, v10, v11);
        }
        else
        {
          v35 = xmmword_18017A500;
          v36 = qword_18017A510;
        }
        if ( !*((_QWORD *)&v35 + 1) )
        {
          DbgPrintEx(
            51LL,
            0LL,
            "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
            "RtlQueryInformationActivationContext",
            (const void *)ActivationContext);
          RunLevel = -1073741515;
          goto LABEL_123;
        }
        ActivationContext = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
        v40 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
        goto LABEL_47;
    }
LABEL_84:
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1);
    goto LABEL_77;
  }
LABEL_13:
  v13 = (const char *)((unsigned __int64)v39 & -(__int64)((a1 & 0x40000000) != 0));
  v14 = 0LL;
  v32 = 0LL;
  v15 = 0LL;
  v31 = 0LL;
  if ( ActivationContext )
  {
    v13 = "Actx ";
    if ( ActivationContext == (volatile signed __int32 *)-4LL )
    {
      v15 = 776LL;
      v31 = 776LL;
      goto LABEL_17;
    }
    if ( ActivationContext == (volatile signed __int32 *)-3LL )
    {
      v14 = "Actx ";
      v32 = "Actx ";
    }
    else
    {
      v14 = (const char *)*((_QWORD *)ActivationContext + 3);
      v32 = v14;
    }
    goto LABEL_58;
  }
  if ( v13 )
  {
    v21 = *(_DWORD *)(((unsigned __int64)v39 & -(__int64)((a1 & 0x40000000) != 0)) + 0x18) & 7;
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
  v14 = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v15);
  v32 = v14;
  ActivationContext = v40;
LABEL_18:
  if ( v14 )
    v13 = v14;
  v14 = v13;
  v32 = v13;
  RunLevel = 0;
LABEL_21:
  if ( RunLevel < 0 )
    goto LABEL_123;
  if ( !v14 && (unsigned int)(a4 - 2) <= 5 )
    goto LABEL_77;
  v17 = a4 - 1;
  switch ( a4 )
  {
    case 1:
      v34 &= v17;
      if ( a1 < 0 )
        v17 = 1;
      v34 = v17;
      if ( a7 )
        *a7 = 0LL;
      if ( a6 < 0x10 )
      {
        if ( a7 )
          *a7 = 16LL;
        RunLevel = -1073741789;
      }
      else
      {
        if ( v14 )
          *(_DWORD *)(a5 + 8) = *((_DWORD *)v14 + 7);
        else
          *(_DWORD *)(a5 + 8) = 0;
        if ( (v17 & 1) == 0
          && ActivationContext
          && (((unsigned __int64)ActivationContext - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL
          && *ActivationContext != 0x7FFFFFFF )
        {
          do
          {
            if ( *ActivationContext == 0x7FFFFFFF )
              break;
            v22 = *ActivationContext;
          }
          while ( v22 != _InterlockedCompareExchange(ActivationContext, v22 + 1, v22) );
        }
        *(_QWORD *)a5 = ActivationContext;
        if ( a7 )
          *a7 = 16LL;
        RunLevel = 0;
      }
      v18 = RunLevel < 0;
LABEL_37:
      if ( v18 )
        break;
      goto LABEL_38;
    case 2:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                          (_DWORD)v14,
                                                          (_DWORD)v13,
                                                          a5,
                                                          a6,
                                                          (__int64)a7);
      goto LABEL_45;
    case 3:
      if ( a3 )
      {
        InformationActivationContextDetailedInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                            (_DWORD)v14,
                                                            *a3,
                                                            a5,
                                                            a6,
                                                            (__int64)a7);
        goto LABEL_45;
      }
LABEL_116:
      RunLevel = -1073741811;
      break;
    case 4:
      if ( a3 )
      {
        InformationActivationContextDetailedInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                            (_DWORD)v14,
                                                            (_DWORD)a3,
                                                            a5,
                                                            a6,
                                                            (__int64)a7);
        goto LABEL_45;
      }
      goto LABEL_116;
    case 5:
      if ( a6 >= 0xC )
      {
        *(_QWORD *)a5 = 0LL;
        *(_DWORD *)(a5 + 8) = 0;
        RunLevel = RtlpQueryRunLevel((unsigned int)(a4 - 5), v14, a5);
        if ( RunLevel < 0 )
          break;
        if ( a7 )
          *a7 = 12LL;
LABEL_38:
        RunLevel = 0;
        break;
      }
      RunLevel = -1073741789;
      if ( a7 )
        *a7 = 12LL;
      break;
    case 6:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                          v14,
                                                          a5,
                                                          a6,
                                                          a7);
LABEL_45:
      RunLevel = InformationActivationContextDetailedInformation;
      v18 = InformationActivationContextDetailedInformation < 0;
      goto LABEL_37;
    case 7:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                          v14,
                                                          a5,
                                                          a6,
                                                          a7);
      goto LABEL_45;
    default:
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      RunLevel = -1073741595;
      break;
  }
LABEL_123:
  if ( v30 )
    LdrpDereferenceModule(v30);
  return (unsigned int)RunLevel;
}
