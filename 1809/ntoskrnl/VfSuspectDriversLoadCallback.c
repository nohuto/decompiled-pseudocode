/*
 * XREFs of VfSuspectDriversLoadCallback @ 0x1409387A4
 * Callers:
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     VfTargetDriversAdd @ 0x1400F5624 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14016C2E0 (VfTargetDriversRemove.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1409226E0 (VfDriverLock.c)
 *     VfUtilPrintCheckinString @ 0x140927214 (VfUtilPrintCheckinString.c)
 *     VfCheckImageCompliance @ 0x1409281A4 (VfCheckImageCompliance.c)
 *     VfNotifyVerifierExtensions @ 0x14092920C (VfNotifyVerifierExtensions.c)
 *     VfTargetDriversEnableVerifier @ 0x140935944 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyMandatoryThunks @ 0x140937A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140937B30 (VfThunkApplyThunks.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409384B4 (VfSuspectDriversAllocateEntry.c)
 */

LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, __int64 Entry, char a3, int a4, unsigned int a5)
{
  int v9; // esi
  __int64 i; // r14
  __int64 j; // r14
  int v12; // ebp
  BOOLEAN v13; // al
  int v14; // eax
  __int64 *v15; // rax
  int v16; // eax
  LONG result; // eax

  v9 = 0;
  VfDriverLock();
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_57;
    }
  }
  if ( (MmVerifyDriverLevel & 0xEF8000) != 0 )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_57;
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
    if ( Entry )
    {
LABEL_44:
      v12 = 1;
LABEL_45:
      if ( a5 )
      {
        if ( v12 )
          v16 = VfTargetDriversEnableVerifier(*(_QWORD *)(a1 + 48), Entry);
        else
          v16 = 1;
      }
      else
      {
        v16 = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), a3, Entry);
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
              ++dword_14041BA90;
              ++*(_DWORD *)(Entry + 16);
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
      goto LABEL_57;
    }
    Entry = VfSuspectDriversList;
    v12 = 0;
    while ( (__int64 *)Entry != &VfSuspectDriversList )
    {
      v13 = RtlEqualUnicodeString((PCUNICODE_STRING)(Entry + 24), (PCUNICODE_STRING)(a1 + 88), 1u);
      v12 = v13;
      if ( v13 )
        goto LABEL_45;
      Entry = *(_QWORD *)Entry;
    }
    if ( KernelVerifier )
    {
      if ( !a4 )
      {
        v14 = ViForceAllDriversSuspect;
        goto LABEL_41;
      }
    }
    else if ( ViVerifyAllDrivers != 1 )
    {
      if ( !VfRandomVerifiedDrivers
        || (++ViLoadedDriversCount, !_bittest((const signed __int32 *)qword_140986C20, ViLoadedDriversCount)) )
      {
        v14 = 0;
LABEL_41:
        if ( !v14 )
        {
          Entry = 0LL;
          goto LABEL_45;
        }
        goto LABEL_37;
      }
      --VfRandomVerifiedDrivers;
    }
LABEL_37:
    Entry = (__int64)VfSuspectDriversAllocateEntry((const void **)(a1 + 88));
    if ( !Entry )
      goto LABEL_45;
    v15 = (__int64 *)qword_14040E7E8;
    if ( *(__int64 **)qword_14040E7E8 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)Entry = &VfSuspectDriversList;
    *(_QWORD *)(Entry + 8) = v15;
    *v15 = Entry;
    qword_14040E7E8 = Entry;
    goto LABEL_44;
  }
LABEL_57:
  ViDriversLoadLockOwner = 0LL;
  result = KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v9 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
