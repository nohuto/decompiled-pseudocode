/*
 * XREFs of LdrMapAndVerifyResourceFile @ 0x18003A040
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x18003A6D4 (LdrpVerifyAlternateResourceModuleEx.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrMapAndVerifyResourceFile(
        __int64 a1,
        __int128 *a2,
        char a3,
        int a4,
        __int64 a5,
        int a6,
        HANDLE *a7,
        _QWORD *a8,
        __int64 *a9)
{
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdi
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF

  Handle = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v17 = 2147353476LL;
    LdrpTraceLoadMUIDll(a2, *(unsigned __int8 *)v17);
  }
  v14 = LdrpMapResourceFile(a1, a2, a3, &Handle, &v18, &v20);
  if ( v14 >= 0 )
  {
    v15 = v18 | 1;
    if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, v18 | 1, a2, a5, a4, a6) )
    {
      *a7 = Handle;
      *a8 = v20;
      *a9 = v15;
    }
    else
    {
      NtUnmapViewOfSection(-1LL);
      NtClose(Handle);
      return (unsigned int)-1073020926;
    }
  }
  return (unsigned int)v14;
}
