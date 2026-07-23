/*
 * XREFs of NtCreateThreadEx @ 0x14060E510
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspCreateUserContext @ 0x1405E7C50 (PspCreateUserContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14060D0B0 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x14060D280 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x14060E80C (PspCreateThread.c)
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
  NTSTATUS result; // eax
  int v16; // esi
  unsigned __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // r9
  __int64 v20; // r10
  NTSTATUS v21; // ebx
  __int64 v22; // rcx
  ULONG ContextLength; // [rsp+70h] [rbp+0h] BYREF
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  char v25; // [rsp+80h] [rbp+10h] BYREF
  int v26; // [rsp+81h] [rbp+11h]
  __int16 v27; // [rsp+85h] [rbp+15h]
  char v28; // [rsp+87h] [rbp+17h]
  SIZE_T v29; // [rsp+88h] [rbp+18h]
  SIZE_T v30; // [rsp+90h] [rbp+20h]
  SIZE_T v31; // [rsp+98h] [rbp+28h]
  PCONTEXT_EX ContextEx; // [rsp+A0h] [rbp+30h] BYREF
  _BYTE v33[80]; // [rsp+B0h] [rbp+40h] BYREF
  _QWORD v34[62]; // [rsp+100h] [rbp+90h] BYREF

  memset(v33, 0, 0x48uLL);
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( (CreateFlags & 0xFFFFFF80) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v22 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  v25 = 0;
  v30 = StackSize;
  v31 = MaximumStackSize;
  v29 = ZeroBits;
  memset(v34, 0, sizeof(v34));
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext(
                   &AttributeList->TotalLength,
                   KeGetCurrentThread()->PreviousMode,
                   1,
                   (__int64)v34),
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
      v16 = (*((_DWORD *)Object + 533) >> 8) & 0x40;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength(v16 + 1048587, &ContextLength);
      v17 = ContextLength + 15LL;
      if ( v17 <= ContextLength )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextLength, 0, ContextLength);
      RtlInitializeExtendedContext((PCONTEXT)&ContextLength, v16 + 1048587, &ContextEx);
      PspCreateUserContext((__int64)&ContextLength, 1, PspUserThreadStart, (__int64)StartRoutine, (__int64)Argument);
      v21 = PspCreateThread(
              ThreadHandle,
              DesiredAccess,
              ObjectAttributes,
              ProcessHandle,
              0LL,
              v34,
              v34[2],
              &ContextLength,
              v33,
              CreateFlags,
              v19,
              v20,
              &v25);
      PspDeleteCreateProcessContext((__int64)v34);
      return v21;
    }
  }
  return result;
}
