/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C01100EC
 * Callers:
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0110090 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C005D8D8 (Win32CreateSection.c)
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
  __int64 v12; // rdx
  PVOID v13; // rcx
  int v14; // eax
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-48h]
  ULONG_PTR v19; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = 10 * GetDesktopHeapSize(3LL);
  v5 = GetDesktopHeapSize(2LL) + v4;
  v6 = GetDesktopHeapSize(1LL) + v5;
  v7 = (unsigned int)GetDesktopHeapSize(0LL) + v6;
  v19 = v7;
  Section = Win32CreateSection(a1, 983071LL, v8, (__int64)&v19, v18, 0x4000000);
  v10 = Section;
  if ( Section >= 0 )
  {
    *a2 = 0LL;
    v13 = *a1;
    ViewSize = v7;
    v14 = MmMapViewInSessionSpace(v13, a2, &ViewSize);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = RtlNtStatusToDosError(v14);
      UserSetLastError(v15, v16);
      ObfDereferenceObject(*a1);
    }
  }
  else
  {
    v11 = RtlNtStatusToDosError(Section);
    UserSetLastError(v11, v12);
  }
  return v10;
}
