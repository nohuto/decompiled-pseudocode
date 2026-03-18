/*
 * XREFs of ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A93C8
 * Callers:
 *     ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A9370 (-EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     GreUnlockDwmState @ 0x1C002CA60 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C003F730 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C003F774 (CheckOrAcquireDwmStateLock.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // r14
  PVOID v5; // rdi
  NTSTATUS v6; // ebx
  char *v7; // rax
  char *v8; // rbx
  int v10; // [rsp+38h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *v13; // [rsp+48h] [rbp-8h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v15; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v16; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  Object = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v4 = CheckOrAcquireDwmStateLock();
  v5 = ReferenceDwmProcess();
  if ( v5 )
  {
    v6 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &Object, 0LL);
    if ( v6 >= 0 )
    {
      v6 = ObDuplicateObject(Object, -1LL, v5, &Handle, -1073741824, 0, 2, 1);
      if ( v6 >= 0 )
      {
        LOBYTE(v10) = 1;
        v6 = ObDuplicateObject(Object, *((_QWORD *)this + 9), v5, &v16, 1048578, 0, 2, v10);
        if ( v6 >= 0 )
        {
          LOBYTE(v11) = 1;
          v6 = ObDuplicateObject(Object, *((_QWORD *)this + 8), v5, &v15, -1073741824, 0, 2, v11);
        }
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0);
  if ( v6 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
      Handle = 0LL;
    }
    if ( v16 )
    {
      ObCloseHandle(v16, 1);
      v16 = 0LL;
    }
    if ( v15 )
    {
      ObCloseHandle(v15, 1);
      v15 = 0LL;
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v4 )
    GreUnlockDwmState();
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v13) )
  {
    v7 = (char *)v13;
    *(_DWORD *)v13 = 36;
    v8 = v7 + 4;
    memset(v7 + 4, 0, 0x20uLL);
    *(_DWORD *)v8 = 193;
    *((_DWORD *)v8 + 1) = *((_DWORD *)this + 6);
    *((_QWORD *)v8 + 1) = v15;
    *((_QWORD *)v8 + 2) = v16;
    *((_QWORD *)v8 + 3) = Handle;
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
