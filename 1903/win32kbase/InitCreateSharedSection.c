/*
 * XREFs of InitCreateSharedSection @ 0x1C0267138
 * Callers:
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00519C0 (WPP_RECORDER_SF_DD.c)
 *     UserCreateHeap @ 0x1C005F910 (UserCreateHeap.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005FA50 (WPP_RECORDER_SF_qqD.c)
 *     Win32CreateSection @ 0x1C005FB08 (Win32CreateSection.c)
 */

__int64 __fastcall InitCreateSharedSection(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 11, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_DD((_DWORD)gBaseLog, v3, 14, 12, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids, 0, 0);
    }
  }
  v15 = 2129920LL;
  result = Win32CreateSection(&ghSectionShared, 983071LL, a3, (__int64)&v15, v12, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v7 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v7 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
    }
    else
    {
      v10 = (char *)gpvSharedBase + 0x200000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(v6, v5, v8, v9, v13, v14);
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000LL,
                         v10,
                         0x8000u,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0LL;
      UserSetLastError(8LL, v11);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      ObfDereferenceObject(ghSectionShared);
      gpvSharedAlloc = 0LL;
      v7 = -1073741801;
      gpvSharedBase = 0LL;
    }
    ghSectionShared = 0LL;
    return (unsigned int)v7;
  }
  return result;
}
