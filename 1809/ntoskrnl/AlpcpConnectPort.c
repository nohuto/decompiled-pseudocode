/*
 * XREFs of AlpcpConnectPort @ 0x1406154A4
 * Callers:
 *     NtAlpcConnectPort @ 0x1406123E0 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x140613E20 (NtAlpcConnectPortEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 */

__int64 __fastcall AlpcpConnectPort(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *a7,
        void *Src,
        __int64 a9,
        unsigned __int64 *a10,
        __int64 a11,
        int *a12,
        LARGE_INTEGER *a13)
{
  _QWORD *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char v18; // al
  _QWORD *v19; // r14
  int v20; // edi
  int v22; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v25; // [rsp+80h] [rbp-F8h] BYREF
  void *v26; // [rsp+88h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+98h] [rbp-E0h]
  __int64 v29; // [rsp+A0h] [rbp-D8h]
  __int64 v30; // [rsp+A8h] [rbp-D0h]
  PLARGE_INTEGER v31; // [rsp+B0h] [rbp-C8h]
  int *v32; // [rsp+B8h] [rbp-C0h]
  __int64 v33; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 *v34; // [rsp+C8h] [rbp-B0h]
  __int64 v35; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+D8h] [rbp-A0h]
  __int128 v37; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v38; // [rsp+F0h] [rbp-88h]
  __int128 v39; // [rsp+100h] [rbp-78h]
  __int128 v40; // [rsp+110h] [rbp-68h]
  __int64 v41; // [rsp+120h] [rbp-58h]

  v28 = a4;
  v29 = a3;
  v30 = a2;
  v13 = (_QWORD *)a1;
  v36 = a1;
  Object[1] = a7;
  Object[2] = Src;
  v35 = a9;
  v34 = a10;
  v33 = a11;
  v32 = a12;
  v31 = a13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = (__int64)Src;
  v26 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v37 = *(_OWORD *)a5;
      v38 = *(_OWORD *)(a5 + 16);
      v39 = *(_OWORD *)(a5 + 32);
      v40 = *(_OWORD *)(a5 + 48);
      v41 = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  LODWORD(v16) = -65536;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a5 )
  {
    v17 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v37 = *(_OWORD *)v17;
    v38 = *(_OWORD *)(v17 + 16);
    v39 = *(_OWORD *)(v17 + 32);
    v40 = *(_OWORD *)(v17 + 48);
    v41 = *(_QWORD *)(v17 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid((char *)Src, PreviousMode, a3, a4, v22, 1, (PSID *)&v25), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v16) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v16, 1, 0, (__int64)&v26),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     a6 & 0xFFFF0000,
                     v30,
                     v29,
                     v28,
                     (unsigned __int64)&v37 & -(__int64)(a5 != 0),
                     (__int64)v26,
                     v25,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v18 = PreviousMode;
        if ( (a6 & 0x100000) != 0 )
          v18 = 1;
        v19 = Object[0];
        v20 = AlpcpProcessConnectionRequest(
                (__int64)Object[0],
                a6 & 0xFFFF0000,
                v35,
                v34,
                v33,
                v32,
                v31,
                PreviousMode,
                v18);
        ClientPort = v20;
        if ( v20 == -1073741759 && (v19[52] & 0x100) != 0 )
          *v13 = v19[7];
        if ( !v20 )
          *v13 = Handle;
        ObfDereferenceObject(v19);
        if ( v20 )
          NtClose(Handle);
      }
    }
  }
  if ( v25 && (void *)v25 != Src )
    SeReleaseSid((void *)v25, PreviousMode, 1);
  if ( v26 && v26 != a7 )
  {
    LOBYTE(v16) = PreviousMode;
    SeReleaseSecurityDescriptor(v26, v16, 0LL);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
