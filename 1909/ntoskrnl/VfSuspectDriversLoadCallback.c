/*
 * XREFs of VfSuspectDriversLoadCallback @ 0x1409770B4
 * Callers:
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x140154BD8 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14017ED50 (VfTargetDriversRemove.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     VfIsRuleClassEnabled @ 0x140964180 (VfIsRuleClassEnabled.c)
 *     VfUtilPrintCheckinString @ 0x1409646B4 (VfUtilPrintCheckinString.c)
 *     VfCheckImageCompliance @ 0x1409656C0 (VfCheckImageCompliance.c)
 *     VfDriverUnlock @ 0x140966674 (VfDriverUnlock.c)
 *     VfNotifyVerifierExtensions @ 0x14096672C (VfNotifyVerifierExtensions.c)
 *     VfTargetDriversEnableVerifier @ 0x140973F10 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyMandatoryThunks @ 0x14097613C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140976220 (VfThunkApplyThunks.c)
 *     VfSuspectDriversAllocateEntry @ 0x140976D68 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x140977080 (VfSuspectDriversInsert.c)
 */

LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, __int64 a2, char a3, int a4, unsigned int a5)
{
  int v9; // esi
  __int64 i; // r14
  __int64 j; // r14
  int v12; // ebp
  BOOLEAN v13; // al
  int v14; // eax
  void **Entry; // rax
  int v16; // eax
  LONG result; // eax

  v9 = 0;
  VfDriverLock();
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_56;
    }
  }
  if ( (MmVerifyDriverLevel & 0xEF8000) != 0 || VfIsRuleClassEnabled(0x23u) )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_56;
    }
  }
  if ( RtlEqualUnicodeString(&VfTcpIpName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTcpIpDllBase = *(_QWORD *)(a1 + 48);
    VfTcpIpSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTdxDllBase = *(_QWORD *)(a1 + 48);
    VfTdxSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfMrxsmbDllBase = *(_QWORD *)(a1 + 48);
    VfMrxsmbSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTmName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTmDllBase = *(_QWORD *)(a1 + 48);
    VfTmSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfWin32kDllBase = *(_QWORD *)(a1 + 48);
    VfWin32kSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfKsName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfKsDllBase = *(_QWORD *)(a1 + 48);
    VfKsSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  if ( a4 || (v9 = VfThunkApplyMandatoryThunks(a1, a5)) != 0 )
  {
    if ( a2 )
    {
LABEL_40:
      v12 = 1;
      goto LABEL_41;
    }
    a2 = VfSuspectDriversList;
    v12 = 0;
    while ( (__int64 *)a2 != &VfSuspectDriversList )
    {
      v13 = RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 24), (PCUNICODE_STRING)(a1 + 88), 1u);
      v12 = v13;
      if ( v13 )
        goto LABEL_41;
      a2 = *(_QWORD *)a2;
    }
    if ( KernelVerifier )
    {
      if ( !a4 )
      {
        v14 = ViForceAllDriversSuspect;
        goto LABEL_44;
      }
    }
    else if ( ViVerifyAllDrivers != 1 )
    {
      if ( !VfRandomVerifiedDrivers
        || (++ViLoadedDriversCount, !_bittest((const signed __int32 *)qword_1409C7F68, ViLoadedDriversCount)) )
      {
        v14 = 0;
LABEL_44:
        if ( !v14 )
        {
          a2 = 0LL;
LABEL_41:
          if ( a5 )
          {
            if ( v12 )
              v16 = VfTargetDriversEnableVerifier(*(_QWORD *)(a1 + 48), a2);
            else
              v16 = 1;
          }
          else
          {
            v16 = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), a3, a2);
          }
          if ( v12 || (v9 = 0, KernelVerifier) )
          {
            v9 = 0;
            if ( v16 )
            {
              v9 = VfThunkApplyThunks(a1, a5);
              if ( v9 )
              {
                if ( v12 )
                {
                  VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88));
                  ++dword_140446350;
                  ++*(_DWORD *)(a2 + 16);
                  VfNotifyVerifierExtensions(1, a1);
                  VfCheckImageCompliance(a1);
                }
              }
              else
              {
                VfTargetDriversRemove(a1);
              }
            }
          }
          goto LABEL_56;
        }
        goto LABEL_38;
      }
      --VfRandomVerifiedDrivers;
    }
LABEL_38:
    Entry = VfSuspectDriversAllocateEntry((const void **)(a1 + 88));
    a2 = (__int64)Entry;
    if ( !Entry )
      goto LABEL_41;
    VfSuspectDriversInsert(Entry);
    goto LABEL_40;
  }
LABEL_56:
  result = VfDriverUnlock();
  if ( v9 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
