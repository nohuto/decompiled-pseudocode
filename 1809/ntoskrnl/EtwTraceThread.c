/*
 * XREFs of EtwTraceThread @ 0x1406247EC
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     PsGetCurrentThreadTeb @ 0x1400A3900 (PsGetCurrentThreadTeb.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     PsLockThreadNameShared @ 0x1401B5F1C (PsLockThreadNameShared.c)
 *     PsUnlockThreadNameShared @ 0x1401B5F30 (PsUnlockThreadNameShared.c)
 *     EtwpPsProvTraceThread @ 0x140624B70 (EtwpPsProvTraceThread.c)
 */

_QWORD *__fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  int v6; // r14d
  __int64 v7; // r8
  _DWORD *CurrentThreadTeb; // rax
  unsigned __int64 v9; // rdx
  __int16 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int16 *v16; // rdx
  unsigned int v17; // eax
  __int64 ProcessServerSilo; // rax
  _QWORD *result; // rax
  __int16 v20; // [rsp+30h] [rbp-C8h]
  int v21; // [rsp+38h] [rbp-C0h]
  _DWORD v22[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A0h]
  __int64 v24; // [rsp+60h] [rbp-98h]
  __int64 v25; // [rsp+68h] [rbp-90h]
  __int64 v26; // [rsp+70h] [rbp-88h]
  __int64 v27; // [rsp+78h] [rbp-80h]
  __int64 v28; // [rsp+80h] [rbp-78h]
  __int64 v29; // [rsp+88h] [rbp-70h]
  int v30; // [rsp+90h] [rbp-68h]
  char v31; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v34; // [rsp+97h] [rbp-61h]
  _QWORD v35[2]; // [rsp+A0h] [rbp-58h] BYREF
  void *v36; // [rsp+B0h] [rbp-48h]
  __int64 v37; // [rsp+B8h] [rbp-40h]
  void *v38; // [rsp+C0h] [rbp-38h]
  __int64 v39; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v21 = 5249283;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 2) != 0 )
    EtwpPsProvTraceThread();
  v22[0] = *(_DWORD *)(a1 + 1592);
  v22[1] = *(_DWORD *)(a1 + 1600);
  v23 = *(_QWORD *)(a1 + 56);
  v24 = *(_QWORD *)(a1 + 48);
  v27 = *(_QWORD *)(a1 + 576);
  v28 = *(_QWORD *)(a1 + 1680);
  v25 = 0LL;
  v26 = 0LL;
  v29 = *(_QWORD *)(a1 + 240);
  v30 = 0;
  v31 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v34 = 0;
  if ( a3 )
  {
    v20 = 1281;
    if ( a2 )
    {
      v25 = *(_QWORD *)(a2 + 16);
      v26 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v9 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v9 && ((v10 = *(_WORD *)(v9 + 8), v10 == 332) || v10 == 452) )
        v11 = CurrentThreadTeb[3032];
      else
        v11 = CurrentThreadTeb[1480];
      v30 = v11;
    }
  }
  else
  {
    v20 = 1282;
    v21 = 72358147;
    if ( v7 )
    {
      v12 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v12 && ((v13 = *(_WORD *)(v12 + 8), v13 == 332) || v13 == 452) )
      {
        v30 = *(_DWORD *)(v7 + 12128);
        v25 = *(unsigned int *)(v7 + 8196);
        v14 = *(unsigned int *)(v7 + 8200);
      }
      else
      {
        v30 = *(_DWORD *)(v7 + 5920);
        v25 = *(_QWORD *)(v7 + 8);
        v14 = *(_QWORD *)(v7 + 16);
      }
      v26 = v14;
    }
  }
  v35[0] = v22;
  v35[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( EvaluateCurrentState((_DWORD **)&g_Feature_1627116858_61432006_FeatureDescriptorDetails) )
    PsLockThreadNameShared(a1, (__int64)CurrentThread);
  v16 = *(unsigned __int16 **)(a1 + 2000);
  if ( v16 && *((_QWORD *)v16 + 1) )
  {
    v17 = 2048;
    if ( *v16 < 0x800u )
      v17 = *v16;
    v36 = (void *)*((_QWORD *)v16 + 1);
    v37 = v17;
    if ( !v17 || *(_WORD *)(*((_QWORD *)v16 + 1) + 2 * ((unsigned __int64)v17 >> 1) - 2) )
    {
      v38 = &EtwpNull;
      v39 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v36 = &EtwpNull;
    v37 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v35, v6, 2u, v20, v21);
  result = (_QWORD *)EvaluateCurrentState((_DWORD **)&g_Feature_1627116858_61432006_FeatureDescriptorDetails);
  if ( (_DWORD)result )
    return PsUnlockThreadNameShared(a1, (__int64)CurrentThread);
  return result;
}
