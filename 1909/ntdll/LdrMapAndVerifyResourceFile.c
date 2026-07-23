/*
 * XREFs of LdrMapAndVerifyResourceFile @ 0x180059950
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpMapResourceFile @ 0x180059A64 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180059CD4 (LdrpVerifyAlternateResourceModuleEx.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrMapAndVerifyResourceFile(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        int a6,
        HANDLE *a7,
        _QWORD *a8,
        unsigned __int64 *a9)
{
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // ebx
  unsigned __int64 v16; // rdi
  __int64 v18; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF

  Handle = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  BaseAddress = 0LL;
  v21 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v14 = 2147353477LL;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v18 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v18 = 2147353476LL;
    LdrpTraceLoadMUIDll(a2, *(unsigned __int8 *)v18);
  }
  LOBYTE(v13) = a3;
  v15 = LdrpMapResourceFile(a1, a2, v13, (unsigned int)&Handle, (__int64)&BaseAddress, (__int64)&v21);
  if ( v15 >= 0 )
  {
    v16 = (unsigned __int64)BaseAddress | 1;
    if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, (unsigned __int64)BaseAddress | 1, a2, a5, a4, a6) )
    {
      *a7 = Handle;
      *a8 = v21;
      *a9 = v16;
    }
    else
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      NtClose(Handle);
      return (unsigned int)-1073020926;
    }
  }
  return (unsigned int)v15;
}
