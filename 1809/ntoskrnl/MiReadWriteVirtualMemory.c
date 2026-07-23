/*
 * XREFs of MiReadWriteVirtualMemory @ 0x140677BD0
 * Callers:
 *     NtWriteVirtualMemory @ 0x140677B70 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x140677BA0 (NtReadVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x1400F2950 (PsIsProcessLoggingEnabled.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     EtwTiLogReadWriteVm @ 0x140677AD4 (EtwTiLogReadWriteVm.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        char *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // al
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // esi
  _KPROCESS *Process; // r10
  PVOID v17; // r14
  unsigned __int64 v18; // r9
  _KPROCESS *v19; // r8
  char *v20; // rdx
  _KPROCESS *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  __int64 v25; // r10
  KPROCESSOR_MODE v27; // [rsp+40h] [rbp-38h]
  __int64 v28[2]; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v27 = PreviousMode;
  if ( PreviousMode )
  {
    if ( &a2[a4] < a2
      || (unsigned __int64)&a2[a4] > 0x7FFFFFFF0000LL
      || &a3[a4] < a3
      || (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL )
    {
      return 3221225477LL;
    }
    v12 = (_QWORD *)a5;
    if ( a5 )
    {
      v13 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
    }
  }
  else
  {
    v12 = (_QWORD *)a5;
  }
  v14 = 0LL;
  v28[0] = 0LL;
  v15 = 0;
  if ( a4 )
  {
    v15 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            a6,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    if ( v15 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v28[1] = (__int64)Process;
      v17 = Object;
      if ( (*((_BYTE *)Object + 720) & 1) == 0 || Process == Object || *((_QWORD *)Object + 132) )
      {
        if ( a6 == 16 )
        {
          v18 = (unsigned __int64)a3;
          v19 = Process;
          v20 = a2;
          v21 = (_KPROCESS *)Object;
        }
        else
        {
          v18 = (unsigned __int64)a2;
          v19 = (_KPROCESS *)Object;
          v20 = a3;
          v21 = Process;
        }
        v22 = MmCopyVirtualMemory(v21, v20, v19, v18, a4, v27, (unsigned __int64 *)v28);
        v14 = v28[0];
        v15 = v22;
      }
      else
      {
        v15 = -1073741819;
      }
      LOBYTE(v23) = PsIsProcessLoggingEnabled((__int64)v17, a6);
      if ( v23 )
        EtwTiLogReadWriteVm(v15, v25, (__int64)v17, v24, (char)a2, v14);
      ObfDereferenceObjectWithTag(v17, 0x6D566D4Du);
    }
  }
  if ( v12 )
    *v12 = v14;
  return (unsigned int)v15;
}
