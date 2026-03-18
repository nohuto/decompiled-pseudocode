/*
 * XREFs of DpiPdoPollChild @ 0x1C0276E9C
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C0275A2C (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0044DF8 (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall DpiPdoPollChild(__int64 a1, int a2, int a3, char a4, char a5)
{
  struct _IO_REMOVE_LOCK *v5; // r15
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rax
  _QWORD *v15; // rax

  v5 = *(struct _IO_REMOVE_LOCK **)(a1 + 64);
  v10 = ExAllocateFromNPagedLookasideList(&stru_1C008E840);
  v12 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = 1953656900;
    *((_DWORD *)v10 + 5) = 10;
    v10[3] = a1;
    *((_DWORD *)v10 + 8) = a2;
    *((_DWORD *)v10 + 9) = a3;
    *((_BYTE *)v10 + 40) = a4;
    *((_BYTE *)v10 + 41) = a5;
    *((_BYTE *)v10 + 42) = 1;
    v13 = IoAcquireRemoveLockEx(v5 + 2, v10, File, 1u, 0x20u);
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v15 = (_QWORD *)qword_1C008E9C8;
    if ( *(PVOID **)qword_1C008E9C8 != &Entry )
      __fastfail(3u);
    *v12 = &Entry;
    v12[1] = v15;
    *v15 = v12;
    qword_1C008E9C8 = (__int64)v12;
    KeReleaseMutex((PRKMUTEX)P, 0);
    KeSetTimer(&stru_1C008E930, (LARGE_INTEGER)-3000000LL, &stru_1C008E970);
  }
  else
  {
    v13 = -1073741670;
    v14 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v14 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v14);
  }
  return v13;
}
