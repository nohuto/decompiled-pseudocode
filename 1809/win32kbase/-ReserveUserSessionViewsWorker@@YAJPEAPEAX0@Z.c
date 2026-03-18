/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00EC1B0
 * Callers:
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C00EC154 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C006CD4C (Win32CreateSection.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2)
{
  int v4; // ebp
  int v5; // ebp
  int v6; // ebp
  ULONG_PTR v7; // rbp
  __int64 v8; // r8
  NTSTATUS Section; // eax
  unsigned int v10; // ebx
  ULONG v11; // eax
  PVOID v12; // rcx
  int v13; // eax
  ULONG v14; // eax
  __int64 v16; // [rsp+20h] [rbp-48h]
  ULONG_PTR v17; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v4 = 10 * GetDesktopHeapSize(3LL);
  v5 = GetDesktopHeapSize(2LL) + v4;
  v6 = GetDesktopHeapSize(1LL) + v5;
  v7 = (unsigned int)GetDesktopHeapSize(0LL) + v6;
  v17 = v7;
  Section = Win32CreateSection(a1, 983071LL, v8, (__int64)&v17, v16, 0x4000000);
  v10 = Section;
  if ( Section >= 0 )
  {
    *a2 = 0LL;
    v12 = *a1;
    ViewSize = v7;
    v13 = MmMapViewInSessionSpace(v12, a2, &ViewSize);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = RtlNtStatusToDosError(v13);
      UserSetLastError(v14);
      ObfDereferenceObject(*a1);
    }
  }
  else
  {
    v11 = RtlNtStatusToDosError(Section);
    UserSetLastError(v11);
  }
  return v10;
}
