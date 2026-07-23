/*
 * XREFs of NtCreateThread @ 0x140889180
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1400A1D40 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspCreateThread @ 0x140622D64 (PspCreateThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB UserStack,
        BOOLEAN CreateSuspended)
{
  PCONTEXT v12; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  unsigned __int64 v19; // rax
  __int16 v20; // ax
  PCONTEXT v21; // [rsp+78h] [rbp-5A0h]
  _OWORD v22[5]; // [rsp+90h] [rbp-588h] BYREF
  char v23[32]; // [rsp+E0h] [rbp-538h] BYREF
  _BYTE v24[152]; // [rsp+100h] [rbp-518h] BYREF
  unsigned __int64 v25; // [rsp+198h] [rbp-480h]

  v12 = ThreadContext;
  memset(v22, 0, 0x48uLL);
  if ( !ThreadContext )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v14 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    if ( ClientId )
    {
      if ( ((unsigned __int8)ClientId & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (__int64)ClientId;
      if ( (unsigned __int64)ClientId >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 15) = *(_BYTE *)(v15 + 15);
    }
    if ( ((unsigned __int8)ThreadContext & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = v24;
    v17 = 9LL;
    do
    {
      *v16 = *(_OWORD *)&v12->P1Home;
      v16[1] = *(_OWORD *)&v12->P3Home;
      v16[2] = *(_OWORD *)&v12->P5Home;
      v16[3] = *(_OWORD *)&v12->ContextFlags;
      v16[4] = *(_OWORD *)&v12->SegGs;
      v16[5] = *(_OWORD *)&v12->Dr1;
      v16[6] = *(_OWORD *)&v12->Dr3;
      v16 += 8;
      *(v16 - 1) = *(_OWORD *)&v12->Dr7;
      v12 = (PCONTEXT)((char *)v12 + 128);
      --v17;
    }
    while ( v17 );
    *v16 = *(_OWORD *)&v12->P1Home;
    v16[1] = *(_OWORD *)&v12->P3Home;
    v16[2] = *(_OWORD *)&v12->P5Home;
    v16[3] = *(_OWORD *)&v12->ContextFlags;
    v16[4] = *(_OWORD *)&v12->SegGs;
    v21 = (PCONTEXT)v24;
    v25 = (v25 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
    if ( ((unsigned __int8)UserStack & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (PCONTEXT)v24;
  }
  else
  {
    v21 = ThreadContext;
  }
  result = RtlpSanitizeContextFlags(&v12->ContextFlags);
  if ( result >= 0 )
  {
    v12->ContextFlags &= 0x10001Fu;
    *ThreadHandle = 0LL;
    v18 = *(_OWORD *)&UserStack->PreviousStackBase;
    v22[0] = *(_OWORD *)&UserStack->PreviousStackBase;
    if ( v22[0] == 0LL )
    {
      v22[0] = v18;
      v22[1] = *(_OWORD *)&UserStack->StackBase;
      *(_QWORD *)&v22[2] = UserStack->AllocatedStackBase;
      if ( *(_QWORD *)&v22[2] )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v19 )
        {
          v20 = *(_WORD *)(v19 + 8);
          if ( v20 == 332 || v20 == 452 )
          {
            *((_QWORD *)&v22[2] + 1) = *(_QWORD *)&v22[1];
            v22[3] = *(_OWORD *)((char *)&v22[1] + 8);
            memset(&v22[1], 0, 24);
          }
        }
        v23[0] = 1;
        return PspCreateThread(
                 (__int64)ThreadHandle,
                 DesiredAccess,
                 (__int64)ObjectAttributes,
                 (ULONG_PTR)ProcessHandle,
                 0LL,
                 0LL,
                 (__int64)ClientId,
                 v21,
                 (__int64)v22,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 (__int64)v23);
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}
