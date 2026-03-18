/*
 * XREFs of AlpcpCaptureAttributes @ 0x1405E3860
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x140659944 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D5BC (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14000D668 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14000E470 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x14000E540 (PoEnergyEstimationEnabled.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpCaptureContextAttribute @ 0x1405E44A0 (AlpcpCaptureContextAttribute.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     AlpcpReleaseAttributes @ 0x14065C548 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x14065E39C (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureViewAttribute @ 0x14065E55C (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14065F320 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x1406C99D0 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureHandleAttribute @ 0x1406CA40C (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1406CBF70 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureContextAttribute32 @ 0x1406CEBB0 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D9728 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1406EB8E8 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x1406F9DB8 (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(__int64 a1, int a2, _DWORD *a3, __int64 a4, void *a5)
{
  _QWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // esi
  ULONG v12; // r8d
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  ULONG v17; // ecx
  ULONG v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  ULONG v21; // eax
  ULONG v22; // ecx
  int v23; // edi
  int v24; // r14d
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v28; // rdi
  __int64 v29; // rcx
  __int64 v31; // rdx
  signed int v32; // esi
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  signed int v37; // esi
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v47; // [rsp+80h] [rbp+18h] BYREF

  v8 = a5;
  memset(a5, 0, 0x48uLL);
  *v8 = *(_QWORD *)(a4 + 104);
  v8[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v10 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)v10;
    v12 = 8;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( v11 < 0 )
        v12 = 20;
      v21 = v12 + 16;
      if ( (v11 & 0x40000000) == 0 )
        v21 = v12;
      v22 = v21 + 20;
      if ( (v11 & 0x20000000) == 0 )
        v22 = v21;
      v18 = v22 + 16;
      if ( (v11 & 0x10000000) == 0 )
        v18 = v22;
      if ( (v11 & 0x8000000) != 0 )
        v18 += 24;
      v12 = 4;
    }
    else
    {
      v13 = 8;
      if ( v11 < 0 )
        v13 = 32;
      v14 = v13 + 32;
      if ( (v11 & 0x40000000) == 0 )
        v14 = v13;
      v15 = v14 + 32;
      if ( (v11 & 0x20000000) == 0 )
        v15 = v14;
      v16 = v15 + 24;
      if ( (v11 & 0x10000000) == 0 )
        v16 = v15;
      v17 = v16 + 24;
      if ( (v11 & 0x8000000) == 0 )
        v17 = v16;
      v18 = v17 + 8;
      if ( (v11 & 0x4000000) == 0 )
        v18 = v17;
    }
    v19 = v18 + 8;
    if ( (v11 & 0x2000000) == 0 )
      v19 = v18;
    v20 = v19 - 1;
    if ( (v11 & 0xA0000000) != 0 )
    {
      v9 = (__int64)a3;
      if ( v20 > 0xFFE )
      {
        ProbeForWrite(a3, (unsigned int)v19, v12);
      }
      else
      {
        if ( ((v12 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v9 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v9 = *(_BYTE *)v9;
        *(_BYTE *)(v9 + (unsigned int)v19 - 1) = *(_BYTE *)(v9 + (unsigned int)v19 - 1);
      }
    }
    else
    {
      LODWORD(v9) = v19;
      if ( v20 > 0xFFFE )
      {
        if ( (_DWORD)v19 )
        {
          if ( ((v12 - 1) & (unsigned int)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)a3 + (unsigned int)v19 > 0x7FFFFFFF0000LL
            || (_DWORD *)((char *)a3 + (unsigned int)v19) < a3 )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      else if ( ((v12 - 1) & (unsigned int)a3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    v23 = a3[1];
  }
  else
  {
    v11 = *a3;
    v23 = a3[1];
  }
  if ( (~v11 & v23) == 0 )
  {
    v24 = 0;
    if ( a2 < 0 )
    {
      if ( v23 >= 0 || (v24 = AlpcpCaptureSecurityAttribute32(a1, a3 + 2, v8), v24 >= 0) )
      {
        if ( (v23 & 0x40000000) == 0
          || (v24 = AlpcpCaptureViewAttribute32(
                      a1,
                      (char *)a3 + (((__int64)(v11 & 0xFFFFFFFF80000000uLL) >> 63) & 0xC) + 8,
                      a4,
                      v8),
              v24 >= 0) )
        {
          if ( (v23 & 0x20000000) == 0 )
            goto LABEL_126;
          v31 = (((int)(v11 & 0xC0000000) >> 31) & 0xC) + 24LL;
          if ( (v11 & 0x40000000) == 0 )
            v31 = (((int)(v11 & 0xC0000000) >> 31) & 0xC) + 8LL;
          v24 = AlpcpCaptureContextAttribute32(a1, (char *)a3 + v31, a4, v8);
          if ( v24 >= 0 )
          {
LABEL_126:
            if ( (v23 & 0x10000000) == 0 )
              goto LABEL_127;
            v44 = (((int)(v11 & 0xE0000000) >> 31) & 0xC) + 24LL;
            if ( (v11 & 0x40000000) == 0 )
              v44 = (((int)(v11 & 0xE0000000) >> 31) & 0xC) + 8LL;
            v45 = v44 + 20;
            if ( (v11 & 0x20000000) == 0 )
              v45 = v44;
            v24 = AlpcpCaptureHandleAttribute32((char *)a3 + v45, v8);
            if ( v24 >= 0 )
            {
LABEL_127:
              if ( (v23 & 0x4000000) == 0 )
                goto LABEL_89;
              v32 = v11 & 0xF8000000;
              v33 = ((v32 >> 31) & 0xC) + 24;
              if ( (v32 & 0x40000000) == 0 )
                v33 = ((v32 >> 31) & 0xC) + 8;
              v34 = v33 + 20;
              if ( (v32 & 0x20000000) == 0 )
                v34 = v33;
              v35 = v34 + 16;
              if ( (v32 & 0x10000000) == 0 )
                v35 = v34;
              v36 = v35 + 24;
              if ( (v32 & 0x8000000) == 0 )
                v36 = v35;
              v24 = AlpcpCaptureDirectAttribute32((int)a3 + v36, v9, (_DWORD)v8, a2, v23);
              if ( v24 >= 0 )
              {
LABEL_89:
                if ( (v23 & 0x2000000) != 0 )
                  v24 = AlpcpCaptureWorkOnBehalfAttribute(v8);
              }
            }
          }
        }
      }
    }
    else if ( v23 >= 0 || (v24 = AlpcpCaptureSecurityAttribute(a1, a3 + 2, v8), v24 >= 0) )
    {
      if ( (v23 & 0x40000000) == 0
        || (v24 = AlpcpCaptureViewAttribute(
                    a1,
                    (char *)a3 + (((__int64)(v11 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8,
                    a4,
                    v8),
            v24 >= 0) )
      {
        if ( (v23 & 0x20000000) == 0 )
          goto LABEL_58;
        v25 = (((int)(v11 & 0xC0000000) >> 31) & 0x18) + 40LL;
        if ( (v11 & 0x40000000) == 0 )
          v25 = (((int)(v11 & 0xC0000000) >> 31) & 0x18) + 8LL;
        v24 = AlpcpCaptureContextAttribute(a1, (char *)a3 + v25, a4, v8);
        if ( v24 >= 0 )
        {
LABEL_58:
          if ( (v23 & 0x10000000) == 0 )
            goto LABEL_60;
          v42 = (((int)(v11 & 0xE0000000) >> 31) & 0x18) + 40LL;
          if ( (v11 & 0x40000000) == 0 )
            v42 = (((int)(v11 & 0xE0000000) >> 31) & 0x18) + 8LL;
          v43 = v42 + 32;
          if ( (v11 & 0x20000000) == 0 )
            v43 = v42;
          v24 = AlpcpCaptureHandleAttribute((char *)a3 + v43, v8);
          if ( v24 >= 0 )
          {
LABEL_60:
            if ( (v23 & 0x4000000) == 0 )
              goto LABEL_128;
            v37 = v11 & 0xF8000000;
            v38 = ((v37 >> 31) & 0x18) + 40;
            if ( (v37 & 0x40000000) == 0 )
              v38 = ((v37 >> 31) & 0x18) + 8;
            v39 = v38 + 32;
            if ( (v37 & 0x20000000) == 0 )
              v39 = v38;
            v40 = v39 + 24;
            if ( (v37 & 0x10000000) == 0 )
              v40 = v39;
            v41 = v40 + 24;
            if ( (v37 & 0x8000000) == 0 )
              v41 = v40;
            v24 = AlpcpCaptureDirectAttribute((int)a3 + v41, v9, (_DWORD)v8, a2, v23);
            if ( v24 >= 0 )
            {
LABEL_128:
              if ( (v23 & 0x2000000) != 0 )
              {
                v47 = 0LL;
                CurrentThread = KeGetCurrentThread();
                WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &a5);
                v28 = WorkOnBehalfThread;
                if ( WorkOnBehalfThread )
                {
                  v29 = (__int64)WorkOnBehalfThread;
                }
                else
                {
                  if ( !*(_QWORD *)&IoThreadToProcess(CurrentThread)[2].IdealNode[2] && !PoEnergyEstimationEnabled() )
                  {
LABEL_66:
                    if ( (_DWORD)a5 )
                      ObfDereferenceObject(v28);
                    v8[8] = v47;
                    return 0;
                  }
                  v29 = (__int64)CurrentThread;
                }
                PsEncodeThreadWorkOnBehalfTicket(v29, &v47);
                goto LABEL_66;
              }
            }
          }
        }
      }
    }
    if ( v24 < 0 )
      AlpcpReleaseAttributes(v8);
    return (unsigned int)v24;
  }
  return 3221225485LL;
}
