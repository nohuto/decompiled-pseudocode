/*
 * XREFs of AlpcpReceiveMessage @ 0x1405DF870
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1405DF5B0 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 *     AlpcpDestroyBlob @ 0x1405E5050 (AlpcpDestroyBlob.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     AlpcpReadMessageData @ 0x14065A00C (AlpcpReadMessageData.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406BFED4 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1406C0778 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CA318 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D79D0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885278 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 *a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4, __int64 *a5)
{
  unsigned __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v8; // r9d
  unsigned __int8 v9; // r10
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // r14d
  __int64 v13; // rax
  int v14; // r15d
  ULONG v15; // r10d
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r11
  ULONG v26; // eax
  ULONG v27; // ecx
  ULONG v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // r14d
  ULONG_PTR v31; // rdi
  __int16 v32; // ax
  unsigned __int16 v33; // ax
  unsigned __int64 v34; // rdx
  __int16 v35; // ax
  __int16 v36; // ax
  __int16 v37; // dx
  int v38; // edx
  ULONG_PTR v39; // rsi
  char v40; // cl
  signed __int64 BugCheckParameter4; // rcx
  char v42; // bl
  unsigned __int8 v44; // [rsp+30h] [rbp-A8h]
  unsigned int v45; // [rsp+34h] [rbp-A4h]
  int v46; // [rsp+38h] [rbp-A0h]
  int v47; // [rsp+3Ch] [rbp-9Ch]
  int v48; // [rsp+40h] [rbp-98h]
  unsigned int v49; // [rsp+50h] [rbp-88h]
  __int64 v50; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-70h]
  __int64 v53; // [rsp+70h] [rbp-68h] BYREF
  struct _KTHREAD *v54; // [rsp+78h] [rbp-60h]
  __int64 v55; // [rsp+80h] [rbp-58h]
  __int64 v56; // [rsp+88h] [rbp-50h]
  _BYTE v57[32]; // [rsp+90h] [rbp-48h] BYREF
  int v58; // [rsp+E0h] [rbp+8h]
  __int64 v59; // [rsp+E0h] [rbp+8h]
  _QWORD *v60; // [rsp+F0h] [rbp+18h]

  v60 = a3;
  v58 = (int)a1;
  v6 = a2;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  v8 = *((_DWORD *)a1 + 12);
  v49 = v8;
  v50 = *a1;
  v55 = *a1;
  v9 = CurrentThread->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  v44 = v9;
  v53 = 0LL;
  v52 = -1LL;
  v48 = 0;
  v47 = 0;
  if ( v9 )
  {
    v10 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v56 = *(_QWORD *)v10;
      v53 = v56;
      a5 = &v53;
    }
    v11 = v8 & 0xC0000000;
    if ( (v8 & 0xC0000000) == 0x80000000 )
    {
      v25 = a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= 0x7FFFFFFF0000LL )
        v25 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v25 = *(_BYTE *)v25;
      *(_BYTE *)(v25 + 23) = *(_BYTE *)(v25 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= 0x7FFFFFFF0000LL )
        a2 = 0x7FFFFFFF0000LL;
      *(_BYTE *)a2 = *(_BYTE *)a2;
      *(_BYTE *)(a2 + 39) = *(_BYTE *)(a2 + 39);
    }
    v12 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      if ( v11 == 0x80000000 )
      {
        v48 = *(_DWORD *)(v6 + 16);
        v47 = *(_DWORD *)(v6 + 20);
      }
      else
      {
        v48 = *(_DWORD *)(v6 + 24);
        v47 = *(_DWORD *)(v6 + 32);
      }
    }
    if ( a4 )
    {
      v13 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v14 = *(_DWORD *)v13;
      v15 = 8;
      if ( v11 == 0x80000000 )
      {
        if ( v14 < 0 )
          v15 = 20;
        v26 = v15 + 16;
        if ( (v14 & 0x40000000) == 0 )
          v26 = v15;
        v27 = v26 + 20;
        if ( (v14 & 0x20000000) == 0 )
          v27 = v26;
        v28 = v27 + 16;
        if ( (v14 & 0x10000000) == 0 )
          v28 = v27;
        if ( (v14 & 0x8000000) != 0 )
          v28 += 24;
        v21 = v28 + 8;
        if ( (v14 & 0x2000000) == 0 )
          v21 = v28;
        v15 = 4;
      }
      else
      {
        v16 = 8;
        if ( v14 < 0 )
          v16 = 32;
        v17 = v16 + 32;
        if ( (v14 & 0x40000000) == 0 )
          v17 = v16;
        v18 = v17 + 32;
        if ( (v14 & 0x20000000) == 0 )
          v18 = v17;
        v19 = v18 + 24;
        if ( (v14 & 0x10000000) == 0 )
          v19 = v18;
        v20 = v19 + 24;
        if ( (v14 & 0x8000000) == 0 )
          v20 = v19;
        if ( (v14 & 0x4000000) != 0 )
          v20 += 8;
        v21 = v20 + 8;
        if ( (v14 & 0x2000000) == 0 )
          v21 = v20;
      }
      v22 = (__int64)a4;
      if ( (unsigned __int64)(v21 - 1) > 0xFFE )
      {
        ProbeForWrite(a4, (unsigned int)v21, v15);
        a3 = v60;
      }
      else
      {
        if ( ((v15 - 1) & (unsigned int)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
          v22 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v22 = *(_BYTE *)v22;
        *(_BYTE *)(v22 + (unsigned int)v21 - 1) = *(_BYTE *)(v22 + (unsigned int)v21 - 1);
      }
      v46 = v14;
      v9 = v44;
    }
    else
    {
      v14 = 0;
      v46 = 0;
    }
    if ( a3 )
    {
      v23 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      v52 = *(_QWORD *)v23;
      v24 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v24 = *(_QWORD *)v24;
      v14 = v46;
    }
    LODWORD(a1) = v58;
  }
  else
  {
    v12 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      v48 = *(_DWORD *)(a2 + 24);
      v47 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v14 = *a4;
    else
      v14 = 0;
    if ( a3 )
      v52 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      v9 = 1;
  }
  if ( v12 )
    v29 = AlpcpReceiveDirectMessagePort((_DWORD)a1, v48, v47, (unsigned int)&BugCheckParameter2, v14);
  else
    v29 = AlpcpReceiveMessagePort((_DWORD)a1, v9, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v14);
  v45 = v29;
  v30 = v29;
  if ( !v29 )
  {
    v31 = BugCheckParameter2;
    v32 = 24;
    if ( (v49 & 0xC0000000) != 0x80000000 )
      v32 = 40;
    v33 = *(_WORD *)(BugCheckParameter2 + 240) + v32;
    if ( v60 && (v59 = v33, v33 > v52) )
    {
      memset(v57, 0, sizeof(v57));
      v30 = AlpcpReturnMessageOnInsufficientBuffer(v50, BugCheckParameter2, v57);
      v45 = v30;
      if ( v30 == -1073741789 )
      {
        *v60 = v59;
        AlpcpExposeCapturedContextAttribute(v49, v57, (unsigned int)v14, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v54;
      if ( (v49 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)v6 = *(_WORD *)(v31 + 240);
        *(_WORD *)(v6 + 2) = *(_WORD *)(v31 + 240) + 24;
        v35 = *(_WORD *)(v31 + 246);
        if ( v35 )
          v36 = v35 - 16;
        else
          v36 = 0;
        *(_WORD *)(v6 + 6) = v36;
        v37 = *(_WORD *)(v31 + 244) | 0x1000;
        *(_WORD *)(v6 + 4) = v37;
        *(_DWORD *)(v6 + 8) = *(_DWORD *)(v31 + 248);
        *(_DWORD *)(v6 + 12) = *(_DWORD *)(v31 + 256);
        *(_DWORD *)(v6 + 16) = *(_DWORD *)(v31 + 264);
        *(_DWORD *)(v6 + 20) = *(_DWORD *)(v31 + 272);
        *(_DWORD *)(v6 + 20) = *(_DWORD *)(v31 + 272);
        if ( (*(_DWORD *)(v50 + 256) & 0x1000) != 0 )
          *(_WORD *)(v6 + 4) = v37 & 0xC00F;
        v34 = v6 + 24;
      }
      else
      {
        *(_OWORD *)v6 = *(_OWORD *)(v31 + 240);
        *(_OWORD *)(v6 + 16) = *(_OWORD *)(v31 + 256);
        *(_QWORD *)(v6 + 32) = *(_QWORD *)(v31 + 272);
        if ( (*(_DWORD *)(v50 + 256) & 0x1000) != 0 )
          *(_WORD *)(v6 + 4) &= 0xC00Fu;
        v34 = v6 + 40;
      }
      if ( *(_QWORD *)(v31 + 176) )
        AlpcpGetDataFromUserVaSafe(v31, v34);
      else
        AlpcpReadMessageData(v31, v34);
      if ( a4 )
        AlpcpExposeAttributes(v50, v49, v31, v14, (__int64)a4);
    }
    if ( v30 != -1073741789 && *(_QWORD *)(v31 + 64) == v50 )
    {
      *(_QWORD *)(v31 + 64) = 0LL;
      *(_QWORD *)(v31 + 56) = 0LL;
    }
    if ( ((v30 + 0x80000000) & 0x80000000) != 0 || v30 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v31);
      v38 = 0;
      v39 = v31 - 48;
      v40 = *(_BYTE *)(v31 - 48 + 16);
      if ( (v40 & 1) != 0 )
      {
        v38 = 0x10000 - *(__int16 *)(v39 + 18);
        *(_BYTE *)(v39 + 16) = v40 & 0xFE;
        *(_WORD *)(v39 + 18) = 0;
      }
      if ( v38 > 0 )
      {
        BugCheckParameter4 = -v38 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 24), -v38);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(BugCheckParameter2, 1LL);
          v31 = 0LL;
        }
        v30 = v45;
      }
      if ( v31 )
      {
        v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 32), 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v42 & 2) != 0 && (v42 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v39 + 32));
        KeAbPostRelease(v39 + 32);
        return v45;
      }
    }
    else
    {
      *(_QWORD *)(v31 + 200) = 0LL;
      AlpcpCancelMessage(v50, v31, 0x10000LL);
    }
  }
  return v30;
}
