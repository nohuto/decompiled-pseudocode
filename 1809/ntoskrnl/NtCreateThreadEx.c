/*
 * XREFs of NtCreateThreadEx @ 0x140622100
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5DC0 (_alloca_probe.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserContext @ 0x140621CFC (PspCreateUserContext.c)
 *     PspCreateThread @ 0x140621D64 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x140622378 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140623608 (PspDeleteCreateProcessContext.c)
 */

__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned int v17; // edi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned int v22; // ebx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+70h] [rbp+0h] BYREF
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp+10h] BYREF
  __int64 v27; // [rsp+88h] [rbp+18h]
  __int64 v28; // [rsp+90h] [rbp+20h]
  __int64 v29; // [rsp+98h] [rbp+28h]
  _BYTE v30[80]; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v31[62]; // [rsp+100h] [rbp+90h] BYREF

  memset(v30, 0, 0x48uLL);
  if ( (a7 & 0xFFFFFFC0) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v23 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v23 = *(_QWORD *)v23;
  }
  v26[0] = 0;
  v28 = a9;
  v29 = a10;
  v27 = a8;
  memset(v31, 0, 0x1E8uLL);
  if ( !a11
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v15, 1LL, v31),
        (int)result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v17 = (*((_DWORD *)Object + 521) & 0x4000 | 0x10000B00u) >> 8;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength(v17);
      v18 = v24 + 15LL;
      if ( v18 <= v24 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v24, 0, v24);
      RtlInitializeExtendedContext((__int64)&v24, v17);
      PspCreateUserContext((__int64)&v24, 1, PspUserThreadStart, a5, a6);
      v22 = PspCreateThread(a1, a2, a3, a4, 0LL, (__int64)v31, v31[2], &v24, (__int64)v30, a7, v20, v21, (__int64)v26);
      PspDeleteCreateProcessContext(v31);
      return v22;
    }
  }
  return result;
}
