/*
 * XREFs of NtCreateThread @ 0x1408C3F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x14001710C (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspCreateThread @ 0x14060E80C (PspCreateThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int64 v19; // rcx
  __int16 v20; // ax
  PCONTEXT v21; // [rsp+78h] [rbp-5B0h]
  _OWORD v22[5]; // [rsp+90h] [rbp-598h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v24; // [rsp+E8h] [rbp-540h]
  _BYTE v25[32]; // [rsp+F0h] [rbp-538h] BYREF
  _BYTE v26[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v27; // [rsp+1A8h] [rbp-480h]

  v12 = ThreadContext;
  memset(v22, 0, 0x48uLL);
  memset(v25, 0, sizeof(v25));
  if ( !ThreadContext )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
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
    v16 = v26;
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
    v21 = (PCONTEXT)v26;
    v27 = (v27 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
    if ( ((unsigned __int8)UserStack & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (PCONTEXT)v26;
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
        v24 = KeGetCurrentThread();
        v19 = v24->ApcState.Process[1].ActiveProcessors.Bitmap[6];
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
        v25[0] = 1;
        return PspCreateThread(
                 (__int64)ThreadHandle,
                 DesiredAccess,
                 (__int64)ObjectAttributes,
                 (ULONG_PTR)ProcessHandle,
                 0LL,
                 0LL,
                 (__int64)ClientId,
                 (__int64)v21,
                 (__int64)v22,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 (__int64)v25);
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
