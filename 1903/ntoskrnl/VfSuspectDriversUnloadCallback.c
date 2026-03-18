/*
 * XREFs of VfSuspectDriversUnloadCallback @ 0x1409774A0
 * Callers:
 *     VfDriverUnloadImage @ 0x140960480 (VfDriverUnloadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     VfNotifyVerifierExtensions @ 0x14096672C (VfNotifyVerifierExtensions.c)
 */

LONG __fastcall VfSuspectDriversUnloadCallback(__int64 a1)
{
  __int64 i; // rbx

  VfDriverLock();
  if ( RtlEqualUnicodeString(&VfTcpIpName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTcpIpDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTdxDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfMrxsmbDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTmName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTmDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfWin32kDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfKsName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfKsDllBase = 0LL;
  }
  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), (PCUNICODE_STRING)(a1 + 88), 1u) )
    {
      ++dword_140446614;
      ++*(_DWORD *)(i + 20);
      VfNotifyVerifierExtensions(2, a1);
      break;
    }
  }
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
