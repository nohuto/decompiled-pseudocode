/*
 * XREFs of EtwTiLogInsertQueueUserApc @ 0x140330AD0
 * Callers:
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400AF010 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140132260 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwpTiVadQueryEventWrite @ 0x140331184 (EtwpTiVadQueryEventWrite.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void EtwTiLogInsertQueueUserApc(char a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // r14
  _KPROCESS *Process; // rbx
  _KPROCESS *v8; // r12
  int v9; // eax
  bool v10; // zf
  const EVENT_DESCRIPTOR *v11; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ebx
  BOOLEAN v32; // al
  __int64 v33; // rcx
  bool v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h] BYREF
  __int64 v36; // [rsp+50h] [rbp-30h]
  unsigned __int64 v37; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+D8h] [rbp+58h] BYREF
  va_list va; // [rsp+D8h] [rbp+58h]
  __int64 v42; // [rsp+E0h] [rbp+60h] BYREF
  va_list va1; // [rsp+E0h] [rbp+60h]
  __int64 v44; // [rsp+E8h] [rbp+68h] BYREF
  va_list va2; // [rsp+E8h] [rbp+68h]
  __int64 v46; // [rsp+F0h] [rbp+70h]
  va_list va3; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v44 = va_arg(va3, _QWORD);
  v46 = va_arg(va3, _QWORD);
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL) )
  {
    v6 = *(_QWORD *)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    v8 = KeGetCurrentThread()->Process;
    v9 = 0;
    v10 = (_BYTE)v46 ? v8 == (_KPROCESS *)v6 : Process == (_KPROCESS *)v6;
    LOBYTE(v9) = !v10;
    if ( v9 )
    {
      v11 = (const EVENT_DESCRIPTOR *)&THREATINT_QUEUEUSERAPC_REMOTE_KERNEL_CALLER;
      if ( a1 )
        v11 = &THREATINT_QUEUEUSERAPC_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v11) )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x6E734954u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = EtwpTiFillProcessIdentity(PoolWithTag, (__int64)Process, &v37);
          CurrentThread = KeGetCurrentThread();
          v17 = (_QWORD *)(v16 + 16LL * v14);
          *v17 = (char *)CurrentThread + 1616;
          v17[1] = 4LL;
          v17[2] = CurrentThread + 1;
          v17[3] = 8LL;
          v18 = EtwpTiFillProcessIdentity(&v13[2 * v14 + 4], v6, &v38) + v14 + 2;
          v19 = 2LL * v18;
          v18 += 2;
          v20 = &v13[v19];
          *v20 = a2 + 1616;
          v20[1] = 4LL;
          v20[2] = a2 + 1536;
          v20[3] = 8LL;
          v21 = EtwpTiFillProcessIdentity(&v13[2 * v18], (__int64)v8, &v39);
          v34 = (*(_DWORD *)(a2 + 116) & 0x10) != 0;
          v22 = v21 + v18;
          v23 = v22 + 1;
          v22 *= 2LL;
          v13[v22] = &v34;
          v13[v22 + 1] = 1LL;
          v24 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 1064LL);
          if ( !v24
            || (v25 = *(_WORD *)(v24 + 8), v25 != 332) && v25 != 452
            || (v35 = -(a3 >> 2), (unsigned __int64)v35 > 0xFFFFFFFF) )
          {
            v35 = a3;
          }
          v26 = 2LL * v23;
          v13[v26] = &v35;
          v13[v26 + 1] = 8LL;
          v27 = v23 + 1;
          v28 = v23 + 2;
          v27 *= 2LL;
          v13[v27] = va;
          v13[v27 + 1] = 8LL;
          v29 = 2LL * v28;
          v13[v29] = va1;
          v13[v29 + 1] = 8LL;
          v30 = v28 + 1;
          v31 = v28 + 2;
          v30 *= 2LL;
          v13[v30] = va2;
          v13[v30 + 1] = 8LL;
          v32 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL);
          v33 = v36;
          if ( v32 )
            v33 = v40;
          v36 = v33;
          EtwpTiVadQueryEventWrite((int)v13, 42, v31, v6, (__int64)&v35, 2, v11, v32);
          ExFreePoolWithTag(v13, 0);
        }
      }
    }
  }
}
