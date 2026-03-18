/*
 * XREFs of MiReadWriteVirtualMemory @ 0x14064CDB0
 * Callers:
 *     NtReadVirtualMemory @ 0x14064CD80 (NtReadVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1406DE8D0 (NtWriteVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x140090400 (PsIsProcessLoggingEnabled.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x14064CFB0 (MmCopyVirtualMemory.c)
 *     EtwTiLogReadWriteVm @ 0x1406786CC (EtwTiLogReadWriteVm.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  char v7; // r12
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // al
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // esi
  _KPROCESS *Process; // r10
  PVOID v16; // r14
  PVOID v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // r10d
  char v23; // [rsp+40h] [rbp-38h]
  __int64 v24[2]; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v23 = PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 + a4 < a2 || a2 + a4 > 0x7FFFFFFF0000LL || a4 + a3 < a3 || a4 + a3 > 0x7FFFFFFF0000LL )
      return 3221225477LL;
    v11 = (_QWORD *)a5;
    if ( a5 )
    {
      v12 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
  }
  else
  {
    v11 = (_QWORD *)a5;
  }
  v13 = 0LL;
  v24[0] = 0LL;
  v14 = 0;
  if ( a4 )
  {
    v14 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            a6,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    if ( v14 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v24[1] = (__int64)Process;
      v16 = Object;
      if ( (*((_BYTE *)Object + 728) & 1) == 0 || Process == Object || *((_QWORD *)Object + 132) )
      {
        if ( a6 == 16 )
          v17 = Object;
        else
          v17 = Process;
        v18 = MmCopyVirtualMemory((ULONG_PTR)v17, a4, v23, (__int64)v24);
        v13 = v24[0];
        v14 = v18;
      }
      else
      {
        v14 = -1073741819;
      }
      LOBYTE(v19) = PsIsProcessLoggingEnabled((__int64)v16, a6);
      if ( v19 )
        EtwTiLogReadWriteVm(v14, v21, (_DWORD)v16, v20, v7, v13);
      ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
    }
  }
  if ( v11 )
    *v11 = v13;
  return (unsigned int)v14;
}
