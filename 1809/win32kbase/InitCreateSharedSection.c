/*
 * XREFs of InitCreateSharedSection @ 0x1C021C4E4
 * Callers:
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     UserCreateHeap @ 0x1C006CC20 (UserCreateHeap.c)
 *     Win32CreateSection @ 0x1C006CD4C (Win32CreateSection.c)
 */

__int64 __fastcall InitCreateSharedSection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  NTSTATUS v4; // ebx
  __int64 v5; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+64h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v6 = 2129920;
  result = Win32CreateSection(&ghSectionShared, 983071LL, a3, (__int64)&v6, v5, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v4 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
    }
    else
    {
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000,
                         (char *)gpvSharedBase + 0x200000,
                         0x8000u,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0LL;
      UserSetLastError(8LL);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      ObfDereferenceObject(ghSectionShared);
      gpvSharedAlloc = 0LL;
      v4 = -1073741801;
      gpvSharedBase = 0LL;
    }
    ghSectionShared = 0LL;
    return (unsigned int)v4;
  }
  return result;
}
