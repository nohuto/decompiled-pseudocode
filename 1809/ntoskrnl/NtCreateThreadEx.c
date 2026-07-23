/*
 * XREFs of NtCreateThreadEx @ 0x140623100
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1CDC (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserContext @ 0x140622CFC (PspCreateUserContext.c)
 *     PspCreateThread @ 0x140622D64 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140624608 (PspDeleteCreateProcessContext.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  __int64 v15; // rdx
  NTSTATUS result; // eax
  ULONG v17; // edi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  __int64 v20; // r9
  __int64 v21; // r10
  NTSTATUS v22; // ebx
  __int64 v23; // rcx
  ULONG ContextLength; // [rsp+70h] [rbp+0h] BYREF
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp+10h] BYREF
  SIZE_T v27; // [rsp+88h] [rbp+18h]
  SIZE_T v28; // [rsp+90h] [rbp+20h]
  SIZE_T v29; // [rsp+98h] [rbp+28h]
  PCONTEXT_EX ContextEx; // [rsp+A0h] [rbp+30h] BYREF
  _BYTE v31[80]; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v32[62]; // [rsp+100h] [rbp+90h] BYREF

  memset(v31, 0, 0x48uLL);
  if ( (CreateFlags & 0xFFFFFFC0) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v23 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v23 = *(_QWORD *)v23;
  }
  v26[0] = 0;
  v28 = StackSize;
  v29 = MaximumStackSize;
  v27 = ZeroBits;
  memset(v32, 0, 0x1E8uLL);
  if ( !AttributeList
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v15, 1LL, v32),
        result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( result >= 0 )
    {
      v17 = (*((_DWORD *)Object + 521) & 0x4000 | 0x10000B00u) >> 8;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength(v17, &ContextLength);
      v18 = ContextLength + 15LL;
      if ( v18 <= ContextLength )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextLength, 0, ContextLength);
      RtlInitializeExtendedContext((PCONTEXT)&ContextLength, v17, &ContextEx);
      PspCreateUserContext((__int64)&ContextLength, 1, PspUserThreadStart, (__int64)StartRoutine, (__int64)Argument);
      v22 = PspCreateThread(
              (__int64)ThreadHandle,
              DesiredAccess,
              (__int64)ObjectAttributes,
              (ULONG_PTR)ProcessHandle,
              0LL,
              (__int64)v32,
              v32[2],
              &ContextLength,
              (__int64)v31,
              CreateFlags,
              v20,
              v21,
              (__int64)v26);
      PspDeleteCreateProcessContext(v32);
      return v22;
    }
  }
  return result;
}
