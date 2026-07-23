/*
 * XREFs of EtwpTraceThreadRundown @ 0x14017C50C
 * Callers:
 *     EtwpThreadRundownApc @ 0x140314020 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140314058 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x140727C90 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C82C (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     PsLockThreadNameShared @ 0x1401B5F1C (PsLockThreadNameShared.c)
 *     PsUnlockThreadNameShared @ 0x1401B5F30 (PsUnlockThreadNameShared.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v3; // r15d
  __int64 v4; // r13
  int v5; // esi
  __int16 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r10
  char v12; // cl
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int16 *v17; // rax
  void *v18; // rcx
  unsigned __int16 v19; // dx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  _DWORD v25[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-B0h]
  __int64 v27; // [rsp+70h] [rbp-A8h]
  __int64 v28; // [rsp+78h] [rbp-A0h]
  __int64 v29; // [rsp+80h] [rbp-98h]
  __int64 v30; // [rsp+88h] [rbp-90h]
  __int64 v31; // [rsp+90h] [rbp-88h]
  __int64 v32; // [rsp+98h] [rbp-80h]
  int v33; // [rsp+A0h] [rbp-78h]
  char v34; // [rsp+A4h] [rbp-74h]
  char PagePriorityThread; // [rsp+A5h] [rbp-73h]
  char IoPriorityThread; // [rsp+A6h] [rbp-72h]
  char v37; // [rsp+A7h] [rbp-71h]
  _QWORD v38[2]; // [rsp+B0h] [rbp-68h] BYREF
  void *v39; // [rsp+C0h] [rbp-58h]
  __int64 v40; // [rsp+C8h] [rbp-50h]
  void *v41; // [rsp+D0h] [rbp-48h]
  __int64 v42; // [rsp+D8h] [rbp-40h]

  v3 = 2;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 104) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v25[0] = *(_DWORD *)(a1 + 1592);
  v25[1] = *(_DWORD *)(a1 + 1600);
  v26 = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 48);
  v30 = *(_QWORD *)(a1 + 576);
  v31 = *(_QWORD *)(a1 + 1680);
  v7 = *(_QWORD *)(a1 + 240);
  v28 = 0LL;
  v29 = 0LL;
  v32 = v7;
  v33 = 0;
  v34 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v37 = 0;
  if ( (*(_BYTE *)(a1 + 1752) & 8) != 0 )
  {
    v12 = v37;
    v8 = 1LL;
    if ( *(_QWORD *)(a1 + 1544) != a1 + 1544 )
      v12 = 1;
    v37 = v12;
  }
  if ( v9 && v11 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1064LL);
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
    {
      v33 = *(_DWORD *)(v9 + 12128);
      v28 = *(unsigned int *)(v9 + 8196);
      v15 = *(unsigned int *)(v9 + 8200);
    }
    else
    {
      v33 = *(_DWORD *)(v9 + 5920);
      v28 = *(_QWORD *)(v9 + 8);
      v15 = *(_QWORD *)(v9 + 16);
    }
    v29 = v15;
  }
  v38[0] = v25;
  v38[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_1627116858_61432006_FeatureDescriptorDetails, v8, v9, v10) )
    PsLockThreadNameShared(a1, CurrentThread);
  v17 = *(unsigned __int16 **)(a1 + 2000);
  if ( v17 && (v18 = (void *)*((_QWORD *)v17 + 1)) != 0LL )
  {
    v19 = *v17;
    v20 = 2048LL;
    if ( v19 < 0x800u )
      v20 = v19;
    v39 = v18;
    v40 = (unsigned int)v20;
    if ( !(_DWORD)v20 || *((_WORD *)v18 + (v20 >> 1) - 1) )
    {
      v41 = &EtwpNull;
      v42 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v39 = &EtwpNull;
    v40 = 2LL;
  }
  EtwpLogSystemEventUnsafe(*(_QWORD *)(v4 + 1080), (unsigned int)v38, a1, *(_DWORD *)v4, v3, v6, v5);
  result = EvaluateCurrentState(&g_Feature_1627116858_61432006_FeatureDescriptorDetails, v21, v22, v23);
  if ( (_DWORD)result )
    return PsUnlockThreadNameShared(a1, CurrentThread);
  return result;
}
