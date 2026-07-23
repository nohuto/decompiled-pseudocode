/*
 * XREFs of AlpcpReceiveMessage @ 0x1406332D0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140633040 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x140583068 (AlpcpAvailableBufferSize.c)
 *     AlpcpReadMessageData @ 0x140615164 (AlpcpReadMessageData.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpDestroyBlob @ 0x140619CB0 (AlpcpDestroyBlob.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     AlpcpReceiveMessagePort @ 0x1406339A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14069CC38 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x14069D0BC (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406B752C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D5CE0 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084B7F8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int v7; // r11d
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v9; // r10d
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rax
  int v19; // r15d
  ULONG v20; // r9d
  ULONG v21; // eax
  ULONG v22; // ecx
  ULONG v23; // eax
  bool v24; // zf
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // r14d
  ULONG_PTR v35; // rdi
  __int16 v36; // cx
  unsigned __int16 v37; // cx
  __int16 v38; // ax
  __int16 v39; // cx
  char *v40; // rdx
  size_t v41; // rax
  char *v42; // r9
  size_t v43; // rsi
  const void *v44; // rdx
  char *v45; // rcx
  int v46; // edx
  ULONG_PTR v47; // rsi
  char v48; // cl
  signed __int64 BugCheckParameter4; // rcx
  unsigned int v51; // [rsp+30h] [rbp-98h]
  int v52; // [rsp+34h] [rbp-94h]
  int v53; // [rsp+38h] [rbp-90h]
  int v54; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v55; // [rsp+40h] [rbp-88h]
  __int64 v56; // [rsp+48h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h] BYREF
  int v58; // [rsp+58h] [rbp-70h]
  unsigned __int64 v59; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *v60; // [rsp+68h] [rbp-60h]
  _QWORD v61[2]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v62[32]; // [rsp+80h] [rbp-48h] BYREF
  int v63; // [rsp+D0h] [rbp+8h]
  __int64 v64; // [rsp+D0h] [rbp+8h]
  size_t v65; // [rsp+D0h] [rbp+8h]
  _QWORD *v66; // [rsp+E0h] [rbp+18h]

  v66 = a3;
  v63 = a1;
  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  v9 = *(_DWORD *)(a1 + 48);
  v55 = v9;
  v56 = *(_QWORD *)a1;
  v61[1] = *(_QWORD *)a1;
  v10 = (unsigned __int8)CurrentThread->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v58 = v10;
  v61[0] = 0LL;
  v59 = -1LL;
  v54 = 0;
  v53 = 0;
  if ( (_BYTE)v10 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      v61[0] = *(_QWORD *)v12;
      a5 = v61;
    }
    v13 = v9 & 0xC0000000;
    if ( (v9 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v14 = a2;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v15 = a2;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    v16 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      if ( v13 == 0x80000000 )
      {
        v54 = *(_DWORD *)(a2 + 16);
        v17 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v54 = *(_DWORD *)(a2 + 24);
        v17 = *(_DWORD *)(a2 + 32);
      }
      v53 = v17;
    }
    if ( a4 )
    {
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v18 = (__int64)a4;
      v19 = *(_DWORD *)v18;
      v24 = v13 == 0x80000000;
      v20 = 8;
      if ( v24 )
      {
        if ( v19 < 0 )
          v20 = 20;
        v21 = v20 + 16;
        if ( (v19 & 0x40000000) == 0 )
          v21 = v20;
        v22 = v21 + 20;
        if ( (v19 & 0x20000000) == 0 )
          v22 = v21;
        v23 = v22 + 16;
        if ( (v19 & 0x10000000) == 0 )
          v23 = v22;
        v24 = (v19 & 0x8000000) == 0;
        v25 = v23 + 24;
        v20 = 4;
      }
      else
      {
        v26 = 8;
        if ( v19 < 0 )
          v26 = 32;
        v27 = v26 + 32;
        if ( (v19 & 0x40000000) == 0 )
          v27 = v26;
        v28 = v27 + 32;
        if ( (v19 & 0x20000000) == 0 )
          v28 = v27;
        v29 = v28 + 24;
        if ( (v19 & 0x10000000) == 0 )
          v29 = v28;
        v23 = v29 + 24;
        if ( (v19 & 0x8000000) == 0 )
          v23 = v29;
        v24 = (v19 & 0x4000000) == 0;
        v25 = v23 + 8;
      }
      if ( v24 )
        v25 = v23;
      v30 = v25 + 8;
      if ( (v19 & 0x2000000) == 0 )
        v30 = v25;
      if ( (unsigned __int64)(v30 - 1) > 0xFFE )
      {
        ProbeForWrite(a4, (unsigned int)v30, v20);
        a3 = v66;
        v7 = v63;
        v52 = v19;
      }
      else
      {
        if ( ((v20 - 1) & (unsigned int)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        v31 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
          v31 = (__int64)a4;
        *(_BYTE *)v31 = *(_BYTE *)v31;
        *(_BYTE *)(v31 + (unsigned int)v30 - 1) = *(_BYTE *)(v31 + (unsigned int)v30 - 1);
        v52 = v19;
      }
    }
    else
    {
      v19 = 0;
      v52 = 0;
    }
    if ( a3 )
    {
      v32 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v32 = (__int64)a3;
      v59 = *(_QWORD *)v32;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a3;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      v19 = v52;
    }
    LOBYTE(v10) = v58;
  }
  else
  {
    v16 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      v54 = *(_DWORD *)(a2 + 24);
      v53 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v19 = *a4;
    else
      v19 = 0;
    if ( a3 )
      v59 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      LOBYTE(v10) = 1;
  }
  if ( v16 )
    v33 = AlpcpReceiveDirectMessagePort(v7, v54, v53, (unsigned int)&BugCheckParameter2, v19);
  else
    v33 = AlpcpReceiveMessagePort(v7, (unsigned __int8)v10, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v19);
  v51 = v33;
  v34 = v33;
  if ( !v33 )
  {
    v35 = BugCheckParameter2;
    v36 = 24;
    if ( (v55 & 0xC0000000) != 0x80000000 )
      v36 = 40;
    v37 = *(_WORD *)(BugCheckParameter2 + 240) + v36;
    if ( v66 && (v64 = v37, v37 > v59) )
    {
      v34 = AlpcpReturnMessageOnInsufficientBuffer(v56, BugCheckParameter2, v62);
      v51 = v34;
      if ( v34 == -1073741789 )
      {
        *v66 = v64;
        AlpcpExposeCapturedContextAttribute(v55, v62, (unsigned int)v19, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v60;
      if ( (v55 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a2 = *(_WORD *)(v35 + 240);
        *(_WORD *)(a2 + 2) = *(_WORD *)(v35 + 240) + 24;
        v38 = *(_WORD *)(v35 + 246);
        if ( v38 )
          *(_WORD *)(a2 + 6) = v38 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v39 = *(_WORD *)(v35 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v39;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v35 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v35 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v35 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v35 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v35 + 272);
        if ( (*(_DWORD *)(v56 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v39 & 0xC00F;
        v40 = (char *)(a2 + 24);
        if ( *(_QWORD *)(v35 + 176) )
          AlpcpGetDataFromUserVaSafe(v35, v40);
        else
          AlpcpReadMessageData(v35, v40);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v35 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v35 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v35 + 272);
        if ( (*(_DWORD *)(v56 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v60 = (struct _KTHREAD *)(a2 + 40);
        if ( *(_QWORD *)(v35 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v35, a2 + 40);
        }
        else
        {
          v41 = AlpcpAvailableBufferSize(v35);
          v65 = v41;
          v43 = *(unsigned __int16 *)(v35 + 240);
          v44 = (const void *)(v35 + 280);
          v45 = v42;
          if ( v43 > v41 )
          {
            memmove(v42, v44, v41);
            v43 -= v65;
            v45 = (char *)v60 + v65;
            v44 = *(const void **)(v35 + 224);
          }
          memmove(v45, v44, v43);
        }
      }
      if ( a4 )
        AlpcpExposeAttributes(v56, v55, v35, v19, (__int64)a4);
    }
    if ( v34 != -1073741789 && *(_QWORD *)(v35 + 64) == v56 )
    {
      *(_QWORD *)(v35 + 64) = 0LL;
      *(_QWORD *)(v35 + 56) = 0LL;
    }
    if ( ((v34 + 0x80000000) & 0x80000000) != 0 || v34 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v35);
      v46 = 0;
      v47 = v35 - 48;
      v48 = *(_BYTE *)(v35 - 48 + 16);
      if ( (v48 & 1) != 0 )
      {
        v46 = 0x10000 - *(__int16 *)(v47 + 18);
        *(_BYTE *)(v47 + 16) = v48 & 0xFE;
        *(_WORD *)(v47 + 18) = 0;
      }
      if ( v46 > 0 )
      {
        BugCheckParameter4 = -v46 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), -v46);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(BugCheckParameter2, 1);
          v35 = 0LL;
        }
        v34 = v51;
      }
      if ( v35 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v47 + 32));
        KeAbPostRelease(v47 + 32);
        return v51;
      }
    }
    else
    {
      *(_QWORD *)(v35 + 200) = 0LL;
      AlpcpCancelMessage(v56, v35, 0x10000);
    }
  }
  return v34;
}
