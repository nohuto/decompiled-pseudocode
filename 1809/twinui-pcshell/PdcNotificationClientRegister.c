/*
 * XREFs of PdcNotificationClientRegister @ 0x18039DE98
 * Callers:
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x18023B9EC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     PdcPortOpen @ 0x18039E39C (PdcPortOpen.c)
 */

__int64 __fastcall PdcNotificationClientRegister(__int64 a1, __int128 *a2, void *a3, RTL_SRWLOCK **a4)
{
  unsigned int v7; // ebx
  RTL_SRWLOCK *Heap; // rax
  RTL_SRWLOCK *v10; // rdi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // edx
  int v14; // ecx
  RTL_SRWLOCK *v15; // rcx
  __int64 (__fastcall *v16)(); // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( !*((_QWORD *)a2 + 1) )
      return (unsigned int)-1073741584;
  }
  else if ( *(_DWORD *)a2 != 2 || !*((_QWORD *)a2 + 2) )
  {
    return (unsigned int)-1073741584;
  }
  Heap = (RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x70uLL);
  v10 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x70uLL);
    v11 = *a2;
    v10[5].Ptr = a3;
    v12 = a2[1];
    LODWORD(v10->Ptr) = 1315136592;
    *(_OWORD *)&v10[6].Ptr = v11;
    LODWORD(v10[3].Ptr) = 34;
    *(_OWORD *)&v10[8].Ptr = v12;
    LOBYTE(v10[10].Ptr) = 1;
    v16 = PdcpNotificationClientCallback;
    v10[1].Ptr = 0LL;
    v10[2].Ptr = 0LL;
    InitializeSRWLock(v10 + 1);
    AcquireSRWLockExclusive(v10 + 1);
    LODWORD(v10[2].Ptr) = GetCurrentThreadId();
    v7 = PdcPortOpen(v14, v13, (_DWORD)v10, (unsigned int)&v16);
    v15 = v10 + 1;
    if ( v7 )
    {
      LODWORD(v10[2].Ptr) = 0;
      ReleaseSRWLockExclusive(v15);
    }
    else
    {
      *a4 = v10;
      LODWORD(v10[2].Ptr) = 0;
      ReleaseSRWLockExclusive(v15);
      v10 = 0LL;
    }
    if ( v10 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
