/*
 * XREFs of AlpcpCaptureAttributes @ 0x140637400
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140615A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACC54 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400ACD00 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1406173F0 (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureViewAttribute @ 0x1406187D8 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14061919C (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpReleaseAttributes @ 0x14061B818 (AlpcpReleaseAttributes.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     AlpcpCaptureContextAttribute @ 0x140637C30 (AlpcpCaptureContextAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x1406A6690 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureHandleAttribute @ 0x1406A68C0 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1406AC4B4 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureContextAttribute32 @ 0x1406AEDCC (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B64C0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1406CE5E0 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x14084CE44 (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, int *a3, __int64 a4, void *a5)
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
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  ULONG v21; // eax
  ULONG v22; // edx
  int v23; // edi
  int v24; // r14d
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v32; // rdx
  signed int v33; // esi
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  signed int v38; // esi
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v48; // [rsp+80h] [rbp+18h] BYREF

  v8 = a5;
  memset(a5, 0, 0x48uLL);
  *v8 = *(_QWORD *)(a4 + 104);
  v8[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    v11 = *a3;
    v23 = a3[1];
    goto LABEL_50;
  }
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
    if ( (v11 & 0x10000000) != 0 )
      v22 += 16;
    if ( (v11 & 0x8000000) != 0 )
      v22 += 24;
    v19 = v22 + 8;
    if ( (v11 & 0x2000000) == 0 )
      v19 = v22;
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
    v19 = v18 + 8;
    if ( (v11 & 0x2000000) == 0 )
      v19 = v18;
  }
  v20 = v19 - 1;
  if ( (v11 & 0xA0000000) != 0 )
  {
    v9 = (__int64)a3;
    if ( v20 <= 0xFFE )
    {
      if ( ((v12 - 1) & (unsigned int)a3) == 0 )
      {
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v9 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v9 = *(_BYTE *)v9;
        *(_BYTE *)(v9 + (unsigned int)v19 - 1) = *(_BYTE *)(v9 + (unsigned int)v19 - 1);
        goto LABEL_49;
      }
LABEL_48:
      ExRaiseDatatypeMisalignment();
    }
    ProbeForWrite(a3, (unsigned int)v19, v12);
  }
  else
  {
    LODWORD(v9) = v19;
    if ( v20 > 0xFFFE )
    {
      if ( (_DWORD)v19 )
      {
        if ( ((v12 - 1) & (unsigned int)a3) == 0 )
        {
          if ( (unsigned __int64)a3 + (unsigned int)v19 > 0x7FFFFFFF0000LL
            || (int *)((char *)a3 + (unsigned int)v19) < a3 )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          goto LABEL_49;
        }
        goto LABEL_48;
      }
    }
    else if ( ((v12 - 1) & (unsigned int)a3) != 0 )
    {
      goto LABEL_48;
    }
  }
LABEL_49:
  v23 = a3[1];
LABEL_50:
  if ( (~v11 & v23) == 0 )
  {
    v24 = 0;
    if ( a2 < 0 )
    {
      if ( v23 >= 0 || (v24 = AlpcpCaptureSecurityAttribute32(a1, (__int64)(a3 + 2), (__int64)v8), v24 >= 0) )
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
            goto LABEL_127;
          v32 = (((int)(v11 & 0xC0000000) >> 31) & 0xC) + 24LL;
          if ( (v11 & 0x40000000) == 0 )
            v32 = (((int)(v11 & 0xC0000000) >> 31) & 0xC) + 8LL;
          v24 = AlpcpCaptureContextAttribute32(a1, (char *)a3 + v32, a4, v8);
          if ( v24 >= 0 )
          {
LABEL_127:
            if ( (v23 & 0x10000000) == 0 )
              goto LABEL_128;
            v45 = (((int)(v11 & 0xE0000000) >> 31) & 0xC) + 24LL;
            if ( (v11 & 0x40000000) == 0 )
              v45 = (((int)(v11 & 0xE0000000) >> 31) & 0xC) + 8LL;
            v46 = v45 + 20;
            if ( (v11 & 0x20000000) == 0 )
              v46 = v45;
            v24 = AlpcpCaptureHandleAttribute32((char *)a3 + v46, v8);
            if ( v24 >= 0 )
            {
LABEL_128:
              if ( (v23 & 0x4000000) == 0 )
                goto LABEL_89;
              v33 = v11 & 0xF8000000;
              v34 = ((v33 >> 31) & 0xC) + 24;
              if ( (v33 & 0x40000000) == 0 )
                v34 = ((v33 >> 31) & 0xC) + 8;
              v35 = v34 + 20;
              if ( (v33 & 0x20000000) == 0 )
                v35 = v34;
              v36 = v35 + 16;
              if ( (v33 & 0x10000000) == 0 )
                v36 = v35;
              v37 = v36 + 24;
              if ( (v33 & 0x8000000) == 0 )
                v37 = v36;
              v24 = AlpcpCaptureDirectAttribute32((int)a3 + v37, v9, (_DWORD)v8, a2, v23);
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
    else if ( v23 >= 0 || (v24 = AlpcpCaptureSecurityAttribute(a1, (__int64)(a3 + 2), (__int64)v8), v24 >= 0) )
    {
      if ( (v23 & 0x40000000) == 0
        || (v24 = AlpcpCaptureViewAttribute(
                    (__int64)a1,
                    (int *)((char *)a3 + (((__int64)(v11 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8),
                    a4,
                    (__int64)v8),
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
          v43 = (((int)(v11 & 0xE0000000) >> 31) & 0x18) + 40LL;
          if ( (v11 & 0x40000000) == 0 )
            v43 = (((int)(v11 & 0xE0000000) >> 31) & 0x18) + 8LL;
          v44 = v43 + 32;
          if ( (v11 & 0x20000000) == 0 )
            v44 = v43;
          v24 = AlpcpCaptureHandleAttribute((char *)a3 + v44, v8);
          if ( v24 >= 0 )
          {
LABEL_60:
            if ( (v23 & 0x4000000) == 0 )
              goto LABEL_129;
            v38 = v11 & 0xF8000000;
            v39 = ((v38 >> 31) & 0x18) + 40;
            if ( (v38 & 0x40000000) == 0 )
              v39 = ((v38 >> 31) & 0x18) + 8;
            v40 = v39 + 32;
            if ( (v38 & 0x20000000) == 0 )
              v40 = v39;
            v41 = v40 + 24;
            if ( (v38 & 0x10000000) == 0 )
              v41 = v40;
            v42 = v41 + 24;
            if ( (v38 & 0x8000000) == 0 )
              v42 = v41;
            v24 = AlpcpCaptureDirectAttribute((int)a3 + v42, v9, (_DWORD)v8, a2, v23);
            if ( v24 >= 0 )
            {
LABEL_129:
              if ( (v23 & 0x2000000) != 0 )
              {
                CurrentThread = KeGetCurrentThread();
                WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &a5);
                v28 = WorkOnBehalfThread;
                if ( WorkOnBehalfThread )
                {
                  v29 = (__int64)WorkOnBehalfThread;
                }
                else
                {
                  if ( !*(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[14] && !PoEnergyEstimationEnabled() )
                  {
                    v30 = 0LL;
                    goto LABEL_66;
                  }
                  v29 = (__int64)CurrentThread;
                }
                PsEncodeThreadWorkOnBehalfTicket(v29, &v48);
                v30 = v48;
LABEL_66:
                if ( (_DWORD)a5 )
                  ObfDereferenceObject(v28);
                v8[8] = v30;
                return 0;
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
