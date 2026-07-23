/*
 * XREFs of RtlQueryInformationActivationContext @ 0x1800376A0
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     sub_18007A604 @ 0x18007A604 (sub_18007A604.c)
 *     RtlQueryInformationActiveActivationContext @ 0x18007F820 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     sub_180075F10 @ 0x180075F10 (sub_180075F10.c)
 *     sub_180076000 @ 0x180076000 (sub_180076000.c)
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DEB44 @ 0x1800DEB44 (sub_1800DEB44.c)
 *     sub_1800DEDD4 @ 0x1800DEDD4 (sub_1800DEDD4.c)
 *     sub_1800DF058 @ 0x1800DF058 (sub_1800DF058.c)
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
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // rax
  const char *v13; // rdx
  const char *NotificationContext; // r10
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  __int32 v17; // ecx
  bool v18; // sf
  int v19; // eax
  int v20; // eax
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
    v16 = -1073741585;
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
    v16 = -1073741583;
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
      v16 = -1073741582;
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
    v16 = -1073741580;
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
          v20 = sub_18001869C((unsigned __int64)v8, (__int64 *)&BaseAddress, &v33);
          v16 = v20;
          v29 = v20;
          if ( v20 >= 0 && v33 < 5 )
          {
            v37 = NtCurrentTeb();
            if ( (v37->SameTebFlags & 0x1000) != 0 )
            {
              v16 = v20;
            }
            else
            {
              sub_18002E73C(0);
              v26 = *((_QWORD *)BaseAddress + 19);
              v27 = v29;
              if ( *(_DWORD *)(v26 + 56) != 9 )
                v27 = -1073741515;
              v16 = v27;
              sub_180073E1C(v26, v23, v24, v25);
            }
            v8 = v40;
          }
          if ( v16 < 0 )
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
        v16 = -1073741584;
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
        if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_18017A4E0 + 1)
          || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_18017A4E0 + 1)
                                   + (unsigned __int64)(unsigned int)qword_18017A4F0 )
        {
          sub_18001E620((unsigned __int64)v8, (signed __int64)&v35, v10, v11);
        }
        else
        {
          v35 = xmmword_18017A4E0;
          v36 = qword_18017A4F0;
        }
        if ( !*((_QWORD *)&v35 + 1) )
        {
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
            "RtlQueryInformationActivationContext",
            v8);
          v16 = -1073741515;
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
        v16 = -1073741584;
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
  v16 = 0;
LABEL_21:
  if ( v16 < 0 )
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
        v16 = -1073741789;
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
        v16 = 0;
      }
      v18 = v16 < 0;
LABEL_37:
      if ( v18 )
        break;
      goto LABEL_38;
    case ActivationContextDetailedInformation:
      v19 = sub_180076000(
              (_DWORD)NotificationContext,
              (_DWORD)v13,
              (_DWORD)ActivationContextInformation,
              ActivationContextInformationLength,
              (__int64)ReturnLength);
      goto LABEL_45;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        v19 = sub_1800DEB44(
                (_DWORD)NotificationContext,
                SubInstanceIndex->ulAssemblyIndex,
                (_DWORD)ActivationContextInformation,
                ActivationContextInformationLength,
                (__int64)ReturnLength);
        goto LABEL_45;
      }
LABEL_116:
      v16 = -1073741811;
      break;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        v19 = sub_1800DEDD4(
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
        v16 = sub_180075F10(
                (unsigned int)(ActivationContextInformationClass - 5),
                NotificationContext,
                ActivationContextInformation);
        if ( v16 < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_38:
        v16 = 0;
        break;
      }
      v16 = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      v19 = sub_180076258(
              NotificationContext,
              ActivationContextInformation,
              ActivationContextInformationLength,
              ReturnLength);
LABEL_45:
      v16 = v19;
      v18 = v19 < 0;
      goto LABEL_37;
    case ActivationContextManifestResourceName:
      v19 = sub_1800DF058(
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
      v16 = -1073741595;
      break;
  }
LABEL_123:
  if ( BaseAddress )
    sub_18001B678((char *)BaseAddress);
  return v16;
}
