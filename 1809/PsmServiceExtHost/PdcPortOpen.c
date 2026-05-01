/*
 * XREFs of PdcPortOpen @ 0x180042754
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180042270 (Pdcv2ActivationClientRegister.c)
 *     PdcNotificationClientRegister @ 0x18004262C (PdcNotificationClientRegister.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180039998 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     PdcpAlpcReleaseResources @ 0x180072128 (PdcpAlpcReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(
        int a1,
        int a2,
        void *a3,
        PVOID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        RTL_SRWLOCK **a8)
{
  RTL_SRWLOCK *v9; // rdi
  RTL_SRWLOCK *Heap; // rax
  RTL_SRWLOCK *v14; // rsi
  PVOID v15; // rax
  RTL_SRWLOCK *v16; // r14
  int v17; // eax
  int Ptr; // ebx
  PTP_POOL Threadpool; // rax
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v23[5]; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  RTL_SRWLOCK *v28; // [rsp+C0h] [rbp-40h]
  __int16 v29[278]; // [rsp+174h] [rbp+74h] BYREF
  _DWORD v30[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v31; // [rsp+3B0h] [rbp+2B0h]
  __int64 v32; // [rsp+3C0h] [rbp+2C0h]

  v9 = 0LL;
  *a8 = 0LL;
  Heap = (RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA0uLL);
  v14 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  memset_0(Heap, 0, 0xA0uLL);
  v15 = *a4;
  v14[18].Ptr = *a4;
  if ( !v15 )
  {
    Ptr = -1073741583;
    goto LABEL_14;
  }
  LODWORD(v14->Ptr) = 1348691024;
  v14[17].Ptr = a3;
  LODWORD(v14[19].Ptr) = 1950565456;
  HIDWORD(v14[15].Ptr) = 1;
  v14[2].Ptr = 0LL;
  v14[3].Ptr = 0LL;
  InitializeSRWLock(v14 + 2);
  RtlInitUnicodeString(&DestinationString, L"\\PdcPort");
  memset_0(v30, 0, 0x48uLL);
  v32 = 0x20000LL;
  v30[0] = 0x20000;
  v31 = 800LL;
  memset_0(v23, 0, 0x320uLL);
  v24 = 0;
  v26 = a1;
  v25 = 4;
  v27 = a2;
  v28 = v14 + 19;
  if ( a7 )
    RtlStringCchCopyW(v29, 64LL, a7);
  v21 = 800LL;
  v16 = v14 + 1;
  v23[0] = 52429560LL;
  v23[1] = 0LL;
  v23[2] = 0LL;
  v17 = ZwAlpcConnectPort(&v14[1], &DestinationString, 0LL, v30, 655360, 0LL, v23, &v21, 0LL, 0LL, 0LL);
  Ptr = v17;
  if ( v17 == -1073741759 )
  {
    Ptr = (int)v16->Ptr;
    v16->Ptr = 0LL;
  }
  else
  {
    if ( v17 < 0 )
      goto LABEL_14;
    if ( v14[18].Ptr )
    {
      Threadpool = CreateThreadpool(0LL);
      v14[5].Ptr = Threadpool;
      if ( Threadpool )
      {
        v9 = v14 + 6;
        v14[7].Ptr = 0LL;
        LODWORD(v14[6].Ptr) = 3;
        v14[8].Ptr = 0LL;
        v14[9].Ptr = 0LL;
        v14[10].Ptr = 0LL;
        v14[11].Ptr = 0LL;
        v14[12].Ptr = 0LL;
        LODWORD(v14[13].Ptr) = 0;
        HIDWORD(v14[13].Ptr) = 1;
        LODWORD(v14[14].Ptr) = 72;
        v14[7].Ptr = v14[5].Ptr;
      }
      Ptr = TpAllocAlpcCompletion(&v14[4], v16->Ptr, PdcpAlpcCallback, v14, v9);
      if ( Ptr < 0 )
        goto LABEL_14;
    }
    *a8 = v14;
    Ptr = 0;
  }
  if ( Ptr < 0 )
LABEL_14:
    PdcpAlpcReleaseResources(v14);
  return (unsigned int)Ptr;
}
