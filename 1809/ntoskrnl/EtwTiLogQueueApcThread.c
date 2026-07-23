/*
 * XREFs of EtwTiLogQueueApcThread @ 0x140312A70
 * Callers:
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400F1800 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1401320BC (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpTiVadQueryEventWrite @ 0x140313154 (EtwpTiVadQueryEventWrite.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void EtwTiLogQueueApcThread(char a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // r15
  _KPROCESS *v7; // r12
  const EVENT_DESCRIPTOR *v8; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  BOOLEAN v29; // al
  __int64 v30; // rcx
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h]
  _KPROCESS *Process; // [rsp+58h] [rbp-28h]
  unsigned __int64 v35; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-10h] BYREF
  __int64 v38; // [rsp+D8h] [rbp+58h] BYREF
  va_list va; // [rsp+D8h] [rbp+58h]
  __int64 v40; // [rsp+E0h] [rbp+60h] BYREF
  va_list va1; // [rsp+E0h] [rbp+60h]
  va_list va2; // [rsp+E8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v38 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v40 = va_arg(va2, _QWORD);
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL) )
  {
    v6 = *(_QWORD *)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = KeGetCurrentThread()->Process;
    if ( v7 != (_KPROCESS *)v6 )
    {
      v8 = (const EVENT_DESCRIPTOR *)&THREATINT_QUEUEUSERAPC_REMOTE_KERNEL_CALLER;
      if ( a1 )
        v8 = &THREATINT_QUEUEUSERAPC_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v8) )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x6E734954u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          v11 = EtwpTiFillProcessIdentity(PoolWithTag, (__int64)Process, &v35);
          CurrentThread = KeGetCurrentThread();
          v14 = (_QWORD *)(v13 + 16LL * v11);
          *v14 = (char *)CurrentThread + 1600;
          v14[1] = 4LL;
          v14[2] = CurrentThread + 1;
          v14[3] = 8LL;
          v15 = EtwpTiFillProcessIdentity(&v10[2 * v11 + 4], v6, &v36) + v11 + 2;
          v16 = 2LL * v15;
          v15 += 2;
          v17 = &v10[v16];
          *v17 = a2 + 1600;
          v17[1] = 4LL;
          v17[2] = a2 + 1520;
          v17[3] = 8LL;
          v18 = EtwpTiFillProcessIdentity(&v10[2 * v15], (__int64)v7, &v37);
          LOBYTE(v31) = (*(_DWORD *)(a2 + 116) & 0x10) != 0;
          v19 = v18 + v15;
          v20 = v19 + 1;
          v19 *= 2LL;
          v10[v19] = &v31;
          v10[v19 + 1] = 1LL;
          v21 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 1064LL);
          if ( !v21 || (v22 = *(_WORD *)(v21 + 8), v22 != 332) && v22 != 452 || (v32 = -(a3 >> 2), v32 > 0xFFFFFFFF) )
            v32 = a3;
          v23 = 2LL * v20;
          v10[v23] = &v32;
          v10[v23 + 1] = 8LL;
          v24 = v20 + 1;
          v25 = v20 + 2;
          v24 *= 2LL;
          v10[v24] = va;
          v10[v24 + 1] = 8LL;
          v26 = 2LL * v25;
          v10[v26] = va1;
          v10[v26 + 1] = 8LL;
          v27 = v25 + 1;
          v28 = v25 + 2;
          v27 *= 2LL;
          v10[v27] = va2;
          v10[v27 + 1] = 8LL;
          v29 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL);
          v30 = v33;
          if ( v29 )
            v30 = v38;
          v33 = v30;
          EtwpTiVadQueryEventWrite((_DWORD)v10, 42, v28, v6, (__int64)&v32, 2, (__int64)v8, v29, v31);
          ExFreePoolWithTag(v10, 0);
        }
      }
    }
  }
}
