/*
 * XREFs of NtSecureConnectPort @ 0x1406A6DC0
 * Callers:
 *     NtConnectPort @ 0x1406A6D70 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x14081ABD0 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     AlpcpDispatchConnectionRequest @ 0x140614B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140615A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406A736C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpLogConnectFail @ 0x14084CAA0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14084CB00 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14084CB64 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID ServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r9
  char PreviousMode; // dl
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  PSID v22; // rdi
  int v23; // r15d
  _DWORD *v24; // r15
  int v25; // edi
  ULONG_PTR v26; // r13
  unsigned int v27; // r12d
  int v28; // eax
  unsigned int v29; // eax
  int v31; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v32; // [rsp+48h] [rbp-180h]
  char v33; // [rsp+60h] [rbp-168h]
  NTSTATUS v34; // [rsp+64h] [rbp-164h]
  ULONG v35; // [rsp+68h] [rbp-160h] BYREF
  __int64 v36; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-148h] BYREF
  __int64 v39; // [rsp+88h] [rbp-140h]
  PHANDLE v40; // [rsp+90h] [rbp-138h]
  PVOID Object; // [rsp+98h] [rbp-130h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-128h] BYREF
  ULONG_PTR v43; // [rsp+A8h] [rbp-120h] BYREF
  PULONG v44; // [rsp+B0h] [rbp-118h]
  PULONG v45; // [rsp+B8h] [rbp-110h]
  struct _REMOTE_PORT_VIEW v46; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v47[3]; // [rsp+D8h] [rbp-F0h] BYREF
  __int64 v48[8]; // [rsp+110h] [rbp-B8h] BYREF
  unsigned __int16 v49[20]; // [rsp+150h] [rbp-78h] BYREF
  __int64 v50; // [rsp+178h] [rbp-50h] BYREF
  int v51; // [rsp+180h] [rbp-48h]

  v39 = (__int64)PortName;
  v40 = PortHandle;
  v45 = MaxMessageLength;
  Address = ConnectionInformation;
  v44 = ConnectionInformationLength;
  memset(v48, 0, sizeof(v48));
  memset(v49, 0, sizeof(v49));
  v35 = 0;
  v50 = 0LL;
  v51 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v35 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v47[0] = *(__m128i *)&ClientView->Length;
      v47[1] = *(__m128i *)&ClientView->SectionOffset;
      v47[2] = *(__m128i *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v50 = *(_QWORD *)&SecurityQos->Length;
      v51 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v36 = (__int64)ServerSid;
LABEL_40:
    v32 = (unsigned __int64)&v50 & -(__int64)(SecurityQos != 0LL);
    v22 = (PSID)v36;
    v23 = AlpcpCreateClientPort((__int64 *)&Handle, &Object, 0, v39, 0LL, 0LL, 0LL, 0LL, (void *)v36, v32, 1);
    v34 = v23;
    if ( v22 != ServerSid )
      SeReleaseSid(v22, v33, 1);
    if ( v23 >= 0 )
    {
      v49[0] = v35;
      v39 = (unsigned __int64)v47 & -(__int64)(ClientView != 0LL);
      v24 = Object;
      v25 = AlpcpFormatConnectionRequest(&v43, 0, Object, (__int64)Address, v49, 0LL, v39, &BugCheckParameter2, 1, v33);
      v34 = v25;
      if ( v25 >= 0 )
      {
        v26 = v43;
        v27 = *(_DWORD *)(v43 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v43);
        v48[0] = (__int64)v24;
        v48[1] = v26;
        LODWORD(v48[6]) = 0x20000;
        v28 = AlpcpDispatchConnectionRequest(v48);
        v25 = v28;
        v34 = v28;
        if ( v28 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v27, (unsigned int)v28);
          AlpcpUnlockMessage(v26);
        }
        else
        {
          v29 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v48,
                  (_DWORD)Address,
                  (unsigned int)&v35,
                  BugCheckParameter2,
                  v39,
                  (unsigned __int64)&v46 & -(__int64)(ServerView != 0LL));
          v25 = v29;
          v34 = v29;
          if ( v29 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v27, v29);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v27);
            *v40 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v47[0];
              *(__m128i *)&ClientView->SectionOffset = v47[1];
              *(__m128i *)&ClientView->ViewBase = v47[2];
            }
            if ( ServerView )
              *ServerView = v46;
            if ( v44 )
              *v44 = v35;
            if ( v45 )
              *v45 = v24[68];
          }
        }
      }
      ObfDereferenceObject(v24);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      if ( v25 )
        NtClose(Handle);
    }
    goto LABEL_62;
  }
  v14 = (__int64)v40;
  if ( (unsigned __int64)v40 >= 0x7FFFFFFF0000LL )
    v14 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( ConnectionInformationLength )
  {
    v15 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v35 = *(_DWORD *)v15;
    ProbeForWrite(Address, v35, 1u);
    PreviousMode = v33;
  }
  if ( ClientView )
  {
    v16 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v47[0] = *(__m128i *)v16;
    v47[1] = *(__m128i *)(v16 + 16);
    v47[2] = *(__m128i *)(v16 + 32);
    if ( _mm_cvtsi128_si32(v47[0]) != 48 )
    {
      v34 = -1073741811;
      goto LABEL_62;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v17 = *(_BYTE *)v17;
    *(_BYTE *)(v17 + 47) = *(_BYTE *)(v17 + 47);
  }
  if ( ServerView )
  {
    v18 = (__int64)ServerView;
    if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    if ( *(_DWORD *)v18 != 24 )
    {
      v34 = -1073741811;
      goto LABEL_62;
    }
    if ( ((unsigned __int8)ServerView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (__int64)ServerView;
    if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v19 = *(_BYTE *)v19;
    *(_BYTE *)(v19 + 23) = *(_BYTE *)(v19 + 23);
  }
  if ( MaxMessageLength )
  {
    v20 = (__int64)MaxMessageLength;
    if ( (unsigned __int64)MaxMessageLength >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  if ( SecurityQos )
  {
    v21 = (__int64)SecurityQos;
    if ( (unsigned __int64)SecurityQos >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v50 = *(_QWORD *)v21;
    v51 = *(_DWORD *)(v21 + 8);
  }
  v36 = (__int64)ServerSid;
  if ( !ServerSid )
    goto LABEL_40;
  v34 = SeCaptureSid((char *)ServerSid, PreviousMode, 0x7FFFFFFF0000LL, v12, v31, 1, (PSID *)&v36);
  if ( v34 >= 0 )
    goto LABEL_40;
LABEL_62:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v34;
}
