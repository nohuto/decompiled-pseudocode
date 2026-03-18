/*
 * XREFs of AlpcpConnectPort @ 0x140646324
 * Callers:
 *     NtAlpcConnectPortEx @ 0x140645050 (NtAlpcConnectPortEx.c)
 *     NtAlpcConnectPort @ 0x1406450D0 (NtAlpcConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DCB50 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     SeCaptureSid @ 0x140644F1C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14064501C (SeReleaseSid.c)
 *     AlpcpProcessConnectionRequest @ 0x1406454D8 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 */

__int64 __fastcall AlpcpConnectPort(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *a7,
        void *Src,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        LARGE_INTEGER *a13)
{
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  KPROCESSOR_MODE v20; // al
  _QWORD *v21; // r14
  int v22; // edi
  int v24; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v27; // [rsp+80h] [rbp-F8h] BYREF
  void *v28; // [rsp+88h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+98h] [rbp-E0h]
  __int64 v31; // [rsp+A0h] [rbp-D8h]
  __int64 v32; // [rsp+A8h] [rbp-D0h]
  PLARGE_INTEGER v33; // [rsp+B0h] [rbp-C8h]
  __int64 v34; // [rsp+B8h] [rbp-C0h]
  __int64 v35; // [rsp+C0h] [rbp-B8h]
  int v36[2]; // [rsp+C8h] [rbp-B0h]
  int v37[2]; // [rsp+D0h] [rbp-A8h]
  HANDLE *v38; // [rsp+D8h] [rbp-A0h]
  _OWORD v39[5]; // [rsp+E0h] [rbp-98h] BYREF

  v30 = a4;
  v31 = a3;
  v32 = a2;
  v38 = a1;
  Object[1] = a7;
  Object[2] = Src;
  *(_QWORD *)v37 = a9;
  *(_QWORD *)v36 = a10;
  v35 = a11;
  v34 = a12;
  v33 = a13;
  memset(v39, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = (__int64)Src;
  v28 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v39[0] = *(_OWORD *)a5;
      v39[1] = *(_OWORD *)(a5 + 16);
      v39[2] = *(_OWORD *)(a5 + 32);
      v39[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v39[4] = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  v18 = (__int64)a1;
  if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
    v18 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v18 = *(_QWORD *)v18;
  if ( a5 )
  {
    v19 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    v39[0] = *(_OWORD *)v19;
    v39[1] = *(_OWORD *)(v19 + 16);
    v39[2] = *(_OWORD *)(v19 + 32);
    v39[3] = *(_OWORD *)(v19 + 48);
    *(_QWORD *)&v39[4] = *(_QWORD *)(v19 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid((char *)Src, PreviousMode, v14, v15, v24, 1, (PSID *)&v27), ClientPort >= 0) )
  {
    if ( !a7
      || (ClientPort = SeCaptureSecurityDescriptor((__int64)a7, PreviousMode, PagedPool, 0, &v28), ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     a6 & 0xFFFF0000,
                     v32,
                     v31,
                     v30,
                     (unsigned __int64)v39 & -(__int64)(a5 != 0),
                     (__int64)v28,
                     v27,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v20 = PreviousMode;
        if ( (a6 & 0x100000) != 0 )
          v20 = 1;
        v21 = Object[0];
        v22 = AlpcpProcessConnectionRequest(
                (__int64)Object[0],
                a6 & 0xFFFF0000,
                *(__int64 *)v37,
                *(unsigned __int64 **)v36,
                v35,
                (int *)v34,
                v33,
                PreviousMode,
                v20);
        ClientPort = v22;
        if ( v22 == -1073741759 && (v21[52] & 0x100) != 0 )
          *a1 = (HANDLE)v21[7];
        if ( !v22 )
          *a1 = Handle;
        ObfDereferenceObject(v21);
        if ( v22 )
          NtClose(Handle);
      }
    }
  }
  if ( v27 && (void *)v27 != Src )
    SeReleaseSid((void *)v27, PreviousMode, 1);
  if ( v28 && v28 != a7 )
    SeReleaseSecurityDescriptor(v28, PreviousMode, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
