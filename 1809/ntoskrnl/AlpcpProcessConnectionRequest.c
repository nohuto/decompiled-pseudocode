/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x1406146BC
 * Callers:
 *     AlpcpConnectPort @ 0x1406154A4 (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     AlpcpProbeMessageAttributes @ 0x140614174 (AlpcpProbeMessageAttributes.c)
 *     AlpcpDispatchConnectionRequest @ 0x140614B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReadMessageData @ 0x140615164 (AlpcpReadMessageData.c)
 *     AlpcpFormatConnectionRequest @ 0x140615A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14061BE2C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406352B0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406A5810 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D5CE0 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x14084CAA0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14084CB00 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14084CB64 (AlpcpLogConnectSuccess.c)
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
        char a9)
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
  int v21; // edx
  unsigned int v22; // edi
  unsigned int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // ecx
  ULONG_PTR v26; // rdi
  int v27; // r9d
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // r13d
  __int64 v31; // rdx
  __int16 v32; // ax
  __int16 v33; // cx
  unsigned __int64 v34; // r13
  int v35; // [rsp+50h] [rbp-B8h]
  unsigned int v36; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v37; // [rsp+58h] [rbp-B0h]
  int v38[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v41[40]; // [rsp+78h] [rbp-90h] BYREF
  int v42[16]; // [rsp+A0h] [rbp-68h] BYREF

  v12 = a1;
  memset(v42, 0, sizeof(v42));
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v13 = 0;
  v35 = 0;
  v37 = -1LL;
  v39 = -1LL;
  v14 = a8;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, v41, a2);
    }
    else
    {
      memset(v41, 0, sizeof(v41));
    }
    v15 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a4;
      v39 = *(_QWORD *)v17;
      *(_QWORD *)v17 = *(_QWORD *)v17;
      v13 = 0;
      v37 = v39;
      v14 = a8;
    }
    v16 = (__int64)a6;
    if ( a6 )
    {
      v13 = AlpcpProbeMessageAttributes(a2, a6, 1);
      v35 = v13;
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a7;
      v40 = *(_QWORD *)v15;
      a7 = (PLARGE_INTEGER)&v40;
      v13 = v35;
      v37 = v39;
    }
    v12 = a1;
  }
  else
  {
    if ( a3 )
    {
      *(_OWORD *)v41 = *(_OWORD *)a3;
      *(_OWORD *)&v41[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v41[32] = *(_QWORD *)(a3 + 32);
    }
    else
    {
      memset(v41, 0, sizeof(v41));
    }
    if ( a4 )
      v37 = *a4;
    v16 = (__int64)a6;
    if ( a6 )
      v13 = *a6;
  }
  result = AlpcpFormatConnectionRequest(v38, a2, v12, a3, v41, a5, 0LL, 0LL, 0, v14);
  if ( (int)result >= 0 )
  {
    v19 = *(_QWORD *)v38;
    v20 = *(_DWORD *)(*(_QWORD *)v38 + 264LL);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(*(_QWORD *)v38);
    *(_QWORD *)v42 = v12;
    *(_QWORD *)&v42[2] = v19;
    v42[12] = a2;
    result = AlpcpDispatchConnectionRequest(v42);
    v22 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v20, (unsigned int)result);
      AlpcpUnlockMessage(v19);
      return v22;
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      *(_QWORD *)v38 = 0LL;
      LOBYTE(v21) = a9;
      v23 = AlpcpReceiveSynchronousReply((int)v42, v21, (int)v38, v13, a7);
      v24 = v23;
      if ( v23 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v20, v23);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v20);
        v25 = a2;
        v26 = *(_QWORD *)v38;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v38 + 240LL);
        v28 = 24;
        if ( (a2 & 0xC0000000) != 0x80000000 )
          v28 = 40;
        v29 = v27 + v28;
        v36 = v29;
        if ( a4 )
        {
          v34 = v29;
          if ( v29 > v37 )
          {
            AlpcpUnlockMessage(*(ULONG_PTR *)v38);
            *a4 = v34;
            return 3221225507LL;
          }
        }
        if ( a3 )
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)a3 = v27;
            *(_WORD *)(a3 + 2) = *(_WORD *)(v26 + 240) + 24;
            v32 = *(_WORD *)(v26 + 246);
            if ( v32 )
              *(_WORD *)(a3 + 6) = v32 - 16;
            else
              *(_WORD *)(a3 + 6) = 0;
            v33 = *(_WORD *)(v26 + 244);
            *(_WORD *)(a3 + 4) = v33 | 0x1000;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v26 + 248);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v26 + 256);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(v26 + 264);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v26 + 272);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v26 + 272);
            v30 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) = v33 & 0xC00F;
            v31 = a3 + 24;
          }
          else
          {
            *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v38 + 240LL);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v26 + 256);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v26 + 272);
            v30 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v31 = a3 + 40;
          }
          if ( *(_QWORD *)(v26 + 176) )
            AlpcpGetDataFromUserVaSafe(v26, v31);
          else
            AlpcpReadMessageData(v26, v31);
          v25 = a2;
          v29 = v36;
        }
        else
        {
          v30 = a1;
        }
        if ( a4 )
          *a4 = v29;
        if ( v16 )
          AlpcpExposeAttributes(v30, v25, v26, v13, v16);
        AlpcpUnlockMessage(v26);
      }
      return v24;
    }
  }
  return result;
}
