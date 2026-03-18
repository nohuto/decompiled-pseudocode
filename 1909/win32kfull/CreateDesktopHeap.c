/*
 * XREFs of CreateDesktopHeap @ 0x1C010BB30
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C010B71C (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C010BBE4 (Win32CreateSection.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2, int a3)
{
  ULONG_PTR v5; // rdi
  NTSTATUS v6; // eax
  int v7; // eax
  __int64 Heap; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+90h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF

  v5 = a2 + 4096LL;
  v21 = v5;
  v6 = Win32CreateSection((unsigned int)&Section, a2, a3, (unsigned int)&v21);
  if ( v6 < 0 )
  {
    v13 = RtlNtStatusToDosError(v6);
    UserSetLastError(v13, v14, v15, v16);
  }
  else
  {
    MappedBase = 0LL;
    ViewSize = v5;
    v7 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v7 < 0 )
    {
      v17 = RtlNtStatusToDosError(v7);
      UserSetLastError(v17, v18, v19, v20);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0LL, MappedBase, a2, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError(8LL, v9, v10, v11);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0LL;
  }
  return 0LL;
}
