/*
 * XREFs of sub_1800598B0 @ 0x1800598B0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800599C4 @ 0x1800599C4 (sub_1800599C4.c)
 *     sub_180059C34 @ 0x180059C34 (sub_180059C34.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

__int64 __fastcall sub_1800598B0(
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
    v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v14 = 2147353477LL;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v18 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v18 = 2147353476LL;
    sub_1800E0820(a2, *(unsigned __int8 *)v18);
  }
  LOBYTE(v13) = a3;
  v15 = sub_1800599C4(a1, a2, v13, (unsigned int)&Handle, (__int64)&BaseAddress, (__int64)&v21);
  if ( v15 >= 0 )
  {
    v16 = (unsigned __int64)BaseAddress | 1;
    if ( (unsigned __int8)sub_180059C34(a1, (unsigned __int64)BaseAddress | 1, a2, a5, a4, a6) )
    {
      *a7 = Handle;
      *a8 = v21;
      *a9 = v16;
    }
    else
    {
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      ZwClose(Handle);
      return (unsigned int)-1073020926;
    }
  }
  return (unsigned int)v15;
}
