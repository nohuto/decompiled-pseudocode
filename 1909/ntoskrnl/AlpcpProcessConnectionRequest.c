/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x14065930C
 * Callers:
 *     AlpcpConnectPort @ 0x14065A080 (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1710 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpProbeMessageAttributes @ 0x140658D84 (AlpcpProbeMessageAttributes.c)
 *     AlpcpDispatchConnectionRequest @ 0x14065978C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140659944 (AlpcpFormatConnectionRequest.c)
 *     AlpcpReadMessageData @ 0x14065A00C (AlpcpReadMessageData.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14065AD68 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406C9720 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CA318 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x140886538 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408865B8 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140886630 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        PLARGE_INTEGER a7,
        char a8,
        KPROCESSOR_MODE a9)
{
  __int64 v12; // rdi
  int v13; // r12d
  char v14; // r13
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 result; // rax
  ULONG_PTR v19; // rsi
  unsigned int v20; // r13d
  unsigned int v21; // edi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // esi
  int v26; // ecx
  ULONG_PTR v27; // rdi
  int v28; // r8d
  int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // r13
  __int64 v32; // rdx
  __int16 v33; // ax
  __int16 v34; // cx
  unsigned __int64 v35; // r13
  int v36; // [rsp+50h] [rbp-B8h]
  unsigned int v37; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v38; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v42[40]; // [rsp+78h] [rbp-90h] BYREF
  int v43[16]; // [rsp+A0h] [rbp-68h] BYREF

  v12 = a1;
  memset(v43, 0, sizeof(v43));
  memset(v42, 0, sizeof(v42));
  v41 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v13 = 0;
  v36 = 0;
  v38 = -1LL;
  v40 = -1LL;
  v14 = a8;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, v42, a2);
    }
    v15 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a4;
      v40 = *(_QWORD *)v17;
      *(_QWORD *)v17 = *(_QWORD *)v17;
      v13 = 0;
      v38 = v40;
      v14 = a8;
    }
    v16 = (__int64)a6;
    if ( a6 )
    {
      v13 = AlpcpProbeMessageAttributes(a2, a6, 1);
      v36 = v13;
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a7;
      v41 = *(_QWORD *)v15;
      a7 = (PLARGE_INTEGER)&v41;
      v13 = v36;
      v38 = v40;
    }
    v12 = a1;
  }
  else
  {
    if ( a3 )
    {
      *(_OWORD *)v42 = *(_OWORD *)a3;
      *(_OWORD *)&v42[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v42[32] = *(_QWORD *)(a3 + 32);
    }
    if ( a4 )
      v38 = *a4;
    v16 = (__int64)a6;
    if ( a6 )
      v13 = *a6;
  }
  result = AlpcpFormatConnectionRequest(&BugCheckParameter2, a2, v12, a3, v42, a5, 0LL, 0LL, 0, v14);
  if ( (int)result >= 0 )
  {
    v19 = BugCheckParameter2;
    v20 = *(_DWORD *)(BugCheckParameter2 + 264);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(BugCheckParameter2);
    *(_QWORD *)v43 = v12;
    *(_QWORD *)&v43[2] = v19;
    v43[12] = a2;
    result = AlpcpDispatchConnectionRequest(v43);
    v21 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v20, (unsigned int)result);
      AlpcpUnlockMessage(v19);
      return v21;
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      BugCheckParameter2 = 0LL;
      v22 = AlpcpReceiveSynchronousReply((__int64 *)v43, a9, &BugCheckParameter2, v13, a7);
      v25 = v22;
      if ( v22 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v20, v22);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v20, v23, v24, 0LL);
        v26 = a2;
        v27 = BugCheckParameter2;
        v28 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v29 = 24;
        if ( (a2 & 0xC0000000) != 0x80000000 )
          v29 = 40;
        v30 = v28 + v29;
        v37 = v30;
        if ( a4 )
        {
          v35 = v30;
          if ( v30 > v38 )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            *a4 = v35;
            return 3221225507LL;
          }
        }
        if ( a3 )
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)a3 = v28;
            *(_WORD *)(a3 + 2) = *(_WORD *)(v27 + 240) + 24;
            v33 = *(_WORD *)(v27 + 246);
            if ( v33 )
              *(_WORD *)(a3 + 6) = v33 - 16;
            else
              *(_WORD *)(a3 + 6) = 0;
            v34 = *(_WORD *)(v27 + 244) | 0x1000;
            *(_WORD *)(a3 + 4) = v34;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v27 + 248);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v27 + 256);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(v27 + 264);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v27 + 272);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v27 + 272);
            v31 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) = v34 & 0xC00F;
            v32 = a3 + 24;
          }
          else
          {
            *(_OWORD *)a3 = *(_OWORD *)(BugCheckParameter2 + 240);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v27 + 256);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v27 + 272);
            v31 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v32 = a3 + 40;
          }
          if ( *(_QWORD *)(v27 + 176) )
            AlpcpGetDataFromUserVaSafe(v27, v32);
          else
            AlpcpReadMessageData(v27, v32);
          v26 = a2;
          v30 = v37;
        }
        else
        {
          v31 = a1;
        }
        if ( a4 )
          *a4 = v30;
        if ( v16 )
          AlpcpExposeAttributes(v31, v26, v27, v13, v16);
        AlpcpUnlockMessage(v27);
      }
      return v25;
    }
  }
  return result;
}
