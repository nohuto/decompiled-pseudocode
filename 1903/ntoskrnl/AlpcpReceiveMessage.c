/*
 * XREFs of AlpcpReceiveMessage @ 0x1405DF070
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1405DEDB0 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     AlpcpDestroyBlob @ 0x1405E4880 (AlpcpDestroyBlob.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     AlpcpReadMessageData @ 0x140645FCC (AlpcpReadMessageData.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406C1074 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1406C1588 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CB4E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D7BF0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 *a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4, __int64 *a5)
{
  unsigned __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v8; // r9d
  unsigned __int8 v9; // r10
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // r14d
  __int64 v13; // rax
  int v14; // r12d
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
  __int16 v37; // ax
  __int16 v38; // dx
  int v39; // edx
  ULONG_PTR v40; // rsi
  char v41; // cl
  signed __int64 BugCheckParameter4; // rcx
  char v43; // bl
  unsigned __int8 v45; // [rsp+30h] [rbp-A8h]
  unsigned int v46; // [rsp+34h] [rbp-A4h]
  int v47; // [rsp+38h] [rbp-A0h]
  int v48; // [rsp+3Ch] [rbp-9Ch]
  int v49; // [rsp+40h] [rbp-98h]
  unsigned int v50; // [rsp+50h] [rbp-88h]
  __int64 v51; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-70h]
  __int64 v54; // [rsp+70h] [rbp-68h] BYREF
  struct _KTHREAD *v55; // [rsp+78h] [rbp-60h]
  __int64 v56; // [rsp+80h] [rbp-58h]
  __int64 v57; // [rsp+88h] [rbp-50h]
  _BYTE v58[32]; // [rsp+90h] [rbp-48h] BYREF
  int v59; // [rsp+E0h] [rbp+8h]
  __int64 v60; // [rsp+E0h] [rbp+8h]
  _QWORD *v61; // [rsp+F0h] [rbp+18h]

  v61 = a3;
  v59 = (int)a1;
  v6 = a2;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  v8 = *((_DWORD *)a1 + 12);
  v50 = v8;
  v51 = *a1;
  v56 = *a1;
  v9 = CurrentThread->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  v45 = v9;
  v54 = 0LL;
  v53 = -1LL;
  v49 = 0;
  v48 = 0;
  if ( v9 )
  {
    v10 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v57 = *(_QWORD *)v10;
      v54 = v57;
      a5 = &v54;
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
        v49 = *(_DWORD *)(v6 + 16);
        v48 = *(_DWORD *)(v6 + 20);
      }
      else
      {
        v49 = *(_DWORD *)(v6 + 24);
        v48 = *(_DWORD *)(v6 + 32);
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
        a3 = v61;
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
      v47 = v14;
      v9 = v45;
    }
    else
    {
      v14 = 0;
      v47 = 0;
    }
    if ( a3 )
    {
      v23 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      v53 = *(_QWORD *)v23;
      v24 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v24 = *(_QWORD *)v24;
      v14 = v47;
    }
    LODWORD(a1) = v59;
  }
  else
  {
    v12 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      v49 = *(_DWORD *)(a2 + 24);
      v48 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v14 = *a4;
    else
      v14 = 0;
    if ( a3 )
      v53 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      v9 = 1;
  }
  if ( v12 )
    v29 = AlpcpReceiveDirectMessagePort((_DWORD)a1, v49, v48, (unsigned int)&BugCheckParameter2, v14);
  else
    v29 = AlpcpReceiveMessagePort((_DWORD)a1, v9, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v14);
  v46 = v29;
  v30 = v29;
  if ( !v29 )
  {
    v31 = BugCheckParameter2;
    v32 = 24;
    if ( (v50 & 0xC0000000) != 0x80000000 )
      v32 = 40;
    v33 = *(_WORD *)(BugCheckParameter2 + 240) + v32;
    if ( v61 && (v60 = v33, v33 > v53) )
    {
      memset(v58, 0, sizeof(v58));
      v30 = AlpcpReturnMessageOnInsufficientBuffer(v51, BugCheckParameter2, v58);
      v46 = v30;
      if ( v30 == -1073741789 )
      {
        *v61 = v60;
        AlpcpExposeCapturedContextAttribute(v50, v58, (unsigned int)v14, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v55;
      if ( (v50 & 0xC0000000) == 0x80000000 )
      {
        v35 = *(_WORD *)(v31 + 240);
        *(_WORD *)v6 = v35;
        *(_WORD *)(v6 + 2) = v35 + 24;
        v36 = *(_WORD *)(v31 + 246);
        if ( v36 )
          v37 = v36 - 16;
        else
          v37 = 0;
        *(_WORD *)(v6 + 6) = v37;
        v38 = *(_WORD *)(v31 + 244) | 0x1000;
        *(_WORD *)(v6 + 4) = v38;
        *(_DWORD *)(v6 + 8) = *(_DWORD *)(v31 + 248);
        *(_DWORD *)(v6 + 12) = *(_DWORD *)(v31 + 256);
        *(_DWORD *)(v6 + 16) = *(_DWORD *)(v31 + 264);
        *(_DWORD *)(v6 + 20) = *(_DWORD *)(v31 + 272);
        *(_DWORD *)(v6 + 20) = *(_DWORD *)(v31 + 272);
        if ( (*(_DWORD *)(v51 + 256) & 0x1000) != 0 )
          *(_WORD *)(v6 + 4) = v38 & 0xC00F;
        v34 = v6 + 24;
      }
      else
      {
        *(_OWORD *)v6 = *(_OWORD *)(v31 + 240);
        *(_OWORD *)(v6 + 16) = *(_OWORD *)(v31 + 256);
        *(_QWORD *)(v6 + 32) = *(_QWORD *)(v31 + 272);
        if ( (*(_DWORD *)(v51 + 256) & 0x1000) != 0 )
          *(_WORD *)(v6 + 4) &= 0xC00Fu;
        v34 = v6 + 40;
      }
      if ( *(_QWORD *)(v31 + 176) )
        AlpcpGetDataFromUserVaSafe(v31, v34);
      else
        AlpcpReadMessageData(v31, v34);
      if ( a4 )
        AlpcpExposeAttributes(v51, v50, v31, v14, (__int64)a4);
    }
    if ( v30 != -1073741789 && *(_QWORD *)(v31 + 64) == v51 )
    {
      *(_QWORD *)(v31 + 64) = 0LL;
      *(_QWORD *)(v31 + 56) = 0LL;
    }
    if ( ((v30 + 0x80000000) & 0x80000000) != 0 || v30 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v31);
      v39 = 0;
      v40 = v31 - 48;
      v41 = *(_BYTE *)(v31 - 48 + 16);
      if ( (v41 & 1) != 0 )
      {
        v39 = 0x10000 - *(__int16 *)(v40 + 18);
        *(_BYTE *)(v40 + 16) = v41 & 0xFE;
        *(_WORD *)(v40 + 18) = 0;
      }
      if ( v39 > 0 )
      {
        BugCheckParameter4 = -v39 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 24), -v39);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(BugCheckParameter2, 1LL);
          v31 = 0LL;
        }
        v30 = v46;
      }
      if ( v31 )
      {
        v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 32), 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v43 & 2) != 0 && (v43 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v40 + 32));
        KeAbPostRelease(v40 + 32);
        return v46;
      }
    }
    else
    {
      *(_QWORD *)(v31 + 200) = 0LL;
      AlpcpCancelMessage(v51, v31, 0x10000LL);
    }
  }
  return v30;
}
