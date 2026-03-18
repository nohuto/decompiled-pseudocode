/*
 * XREFs of NtSecureConnectPort @ 0x1406CC980
 * Callers:
 *     NtConnectPort @ 0x1406CC930 (NtConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     SeCaptureSid @ 0x140644F1C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14064501C (SeReleaseSid.c)
 *     AlpcpDispatchConnectionRequest @ 0x140645950 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1406470B4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406CCF2C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpLogConnectFail @ 0x140886D0C (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140886D8C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140886E04 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v35; // [rsp+48h] [rbp-180h]
  char v36; // [rsp+60h] [rbp-168h]
  NTSTATUS v37; // [rsp+64h] [rbp-164h]
  ULONG v38; // [rsp+68h] [rbp-160h] BYREF
  __int64 v39; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  ULONG_PTR v41; // [rsp+80h] [rbp-148h] BYREF
  __int64 v42; // [rsp+88h] [rbp-140h]
  PHANDLE v43; // [rsp+90h] [rbp-138h]
  PVOID Object; // [rsp+98h] [rbp-130h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-128h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-120h] BYREF
  PULONG v47; // [rsp+B0h] [rbp-118h]
  PULONG v48; // [rsp+B8h] [rbp-110h]
  struct _REMOTE_PORT_VIEW v49; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v50[3]; // [rsp+D8h] [rbp-F0h] BYREF
  _QWORD v51[8]; // [rsp+110h] [rbp-B8h] BYREF
  unsigned __int16 v52[20]; // [rsp+150h] [rbp-78h] BYREF
  __int64 v53; // [rsp+178h] [rbp-50h] BYREF
  int v54; // [rsp+180h] [rbp-48h]

  v42 = (__int64)PortName;
  v43 = PortHandle;
  v48 = MaxMessageLength;
  Address = ConnectionInformation;
  v47 = ConnectionInformationLength;
  memset(v51, 0, sizeof(v51));
  memset(v52, 0, sizeof(v52));
  v38 = 0;
  v53 = 0LL;
  v54 = 0;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(&v49, 0, sizeof(v49));
  memset(v50, 0, sizeof(v50));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v38 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v50[0] = *(__m128i *)&ClientView->Length;
      v50[1] = *(__m128i *)&ClientView->SectionOffset;
      v50[2] = *(__m128i *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v53 = *(_QWORD *)&SecurityQos->Length;
      v54 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v39 = (__int64)ServerSid;
LABEL_40:
    v35 = (unsigned __int64)&v53 & -(__int64)(SecurityQos != 0LL);
    v22 = (PSID)v39;
    v23 = AlpcpCreateClientPort((__int64 *)&Handle, &Object, 0, v42, 0LL, 0LL, 0LL, 0LL, (void *)v39, v35, 1);
    v37 = v23;
    if ( v22 != ServerSid )
      SeReleaseSid(v22, v36, 1);
    if ( v23 >= 0 )
    {
      v52[0] = v38;
      v42 = (unsigned __int64)v50 & -(__int64)(ClientView != 0LL);
      v24 = Object;
      v25 = AlpcpFormatConnectionRequest(&BugCheckParameter2, 0, Object, (__int64)Address, v52, 0LL, v42, &v41, 1, v36);
      v37 = v25;
      if ( v25 >= 0 )
      {
        v26 = BugCheckParameter2;
        v27 = *(_DWORD *)(BugCheckParameter2 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(BugCheckParameter2);
        v51[0] = v24;
        v51[1] = v26;
        LODWORD(v51[6]) = 0x20000;
        v28 = AlpcpDispatchConnectionRequest((__int64)v51);
        v25 = v28;
        v37 = v28;
        if ( v28 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v27, (unsigned int)v28);
          AlpcpUnlockMessage(v26);
        }
        else
        {
          v29 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v51,
                  (_DWORD)Address,
                  (unsigned int)&v38,
                  v41,
                  v42,
                  (unsigned __int64)&v49 & -(__int64)(ServerView != 0LL));
          v25 = v29;
          v37 = v29;
          if ( v29 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v27, v29);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v27, v30, v31, v32);
            *v43 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v50[0];
              *(__m128i *)&ClientView->SectionOffset = v50[1];
              *(__m128i *)&ClientView->ViewBase = v50[2];
            }
            if ( ServerView )
              *ServerView = v49;
            if ( v47 )
              *v47 = v38;
            if ( v48 )
              *v48 = v24[68];
          }
        }
      }
      ObfDereferenceObject(v24);
      if ( v41 )
        AlpcpDereferenceBlobEx(v41, 1);
      if ( v25 )
        NtClose(Handle);
    }
    goto LABEL_62;
  }
  v14 = (__int64)v43;
  if ( (unsigned __int64)v43 >= 0x7FFFFFFF0000LL )
    v14 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( ConnectionInformationLength )
  {
    v15 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v38 = *(_DWORD *)v15;
    ProbeForWrite(Address, v38, 1u);
    PreviousMode = v36;
  }
  if ( ClientView )
  {
    v16 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v50[0] = *(__m128i *)v16;
    v50[1] = *(__m128i *)(v16 + 16);
    v50[2] = *(__m128i *)(v16 + 32);
    if ( _mm_cvtsi128_si32(v50[0]) != 48 )
    {
      v37 = -1073741811;
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
      v37 = -1073741811;
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
    v53 = *(_QWORD *)v21;
    v54 = *(_DWORD *)(v21 + 8);
  }
  v39 = (__int64)ServerSid;
  if ( !ServerSid )
    goto LABEL_40;
  v37 = SeCaptureSid((char *)ServerSid, PreviousMode, 0x7FFFFFFF0000LL, v12, v34, 1, (PSID *)&v39);
  if ( v37 >= 0 )
    goto LABEL_40;
LABEL_62:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v37;
}
