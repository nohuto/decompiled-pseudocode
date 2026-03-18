/*
 * XREFs of NtCreateThreadEx @ 0x14060CA00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspCreateUserContext @ 0x1405E7480 (PspCreateUserContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14060B5A0 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x14060CCFC (PspCreateThread.c)
 */

__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 *a11)
{
  __int64 result; // rax
  int v16; // esi
  unsigned __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+70h] [rbp+0h] BYREF
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  char v25; // [rsp+80h] [rbp+10h] BYREF
  int v26; // [rsp+81h] [rbp+11h]
  __int16 v27; // [rsp+85h] [rbp+15h]
  char v28; // [rsp+87h] [rbp+17h]
  __int64 v29; // [rsp+88h] [rbp+18h]
  __int64 v30; // [rsp+90h] [rbp+20h]
  __int64 v31; // [rsp+98h] [rbp+28h]
  _BYTE v32[80]; // [rsp+B0h] [rbp+40h] BYREF
  _QWORD v33[62]; // [rsp+100h] [rbp+90h] BYREF

  memset(v32, 0, 0x48uLL);
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v22 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  v25 = 0;
  v30 = a9;
  v31 = a10;
  v29 = a8;
  memset(v33, 0, sizeof(v33));
  if ( !a11
    || (result = PspBuildCreateProcessContext(a11, KeGetCurrentThread()->PreviousMode, 1LL, (__int64)v33),
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
      v16 = (*((_DWORD *)Object + 533) >> 8) & 0x40;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength((unsigned int)(v16 + 1048587));
      v17 = v23 + 15LL;
      if ( v17 <= v23 )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v23, 0, v23);
      RtlInitializeExtendedContext((__int64)&v23, v16 + 1048587);
      PspCreateUserContext((__int64)&v23, 1, PspUserThreadStart, a5, a6);
      v21 = PspCreateThread(a1, a2, a3, a4, 0LL, v33, v33[2], &v23, v32, a7, v19, v20, &v25);
      PspDeleteCreateProcessContext((__int64)v33);
      return v21;
    }
  }
  return result;
}
