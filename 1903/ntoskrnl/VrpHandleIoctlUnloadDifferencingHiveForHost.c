/*
 * XREFs of VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140842FC0
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140841570 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     VrpUnloadDifferencingHive @ 0x140847524 (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rdi
  int v12; // eax
  UNICODE_STRING String1; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v7 = *(_WORD *)(a1 + 4);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !v7 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 )
    return (unsigned int)-1073741811;
  v8 = v7 + 6;
  if ( v8 < 6 || a2 < v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    String1.Buffer = (wchar_t *)(a1 + 6);
    String1.MaximumLength = *(_WORD *)(a1 + 4);
    String1.Length = String1.MaximumLength;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
    v9 = VrpHostLoadedHives;
    v10 = &VrpHostLoadedHives;
    if ( VrpHostLoadedHives )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        String2.Buffer = (wchar_t *)(v9 + 10);
        String2.Length = *(_WORD *)(v9 + 8);
        String2.MaximumLength = String2.Length;
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          break;
        v10 = (__int64 *)v9;
        v9 = v11;
        if ( !v11 )
          goto LABEL_16;
      }
      *v10 = v11;
      v5 = (_QWORD *)v9;
      *(_QWORD *)v9 = 0LL;
    }
LABEL_16:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
    KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
    if ( v5 )
    {
      v12 = VrpUnloadDifferencingHive(&String1);
      if ( v12 == -1073741772 )
        v12 = 0;
      v6 = v12;
      if ( v12 >= 0 )
      {
        ExFreePoolWithTag(v5, 0);
        v5 = 0LL;
        v6 = 0;
      }
      if ( v5 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
        *v5 = VrpHostLoadedHives;
        VrpHostLoadedHives = (__int64)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
        KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v6;
}
