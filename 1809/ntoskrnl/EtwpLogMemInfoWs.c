/*
 * XREFs of EtwpLogMemInfoWs @ 0x1408B92AC
 * Callers:
 *     EtwpPerfMemInfoWork @ 0x1408B9B60 (EtwpPerfMemInfoWork.c)
 *     EtwpLogMemInfoRundown @ 0x1408BFC9C (EtwpLogMemInfoRundown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1408AC494 (SmProcessQueryStoreStats.c)
 *     EtwpLogMemInfoWsHelper @ 0x1408B95C8 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B9884 (EtwpLogSessionWorkingSetInfo.c)
 */

void __fastcall EtwpLogMemInfoWs(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r15d
  int v4; // r12d
  unsigned int v5; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // esi
  _DWORD *v10; // rbp
  unsigned __int64 v11; // rax
  bool v12; // zf
  _DWORD *NextProcess; // rsi
  unsigned __int64 v14; // r12
  __int64 v15; // rbp
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int *v19; // rax
  unsigned int *v20; // rbp
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-A0h] BYREF
  _DWORD *v27; // [rsp+30h] [rbp-98h]
  _QWORD SystemInformation[8]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v29[4]; // [rsp+80h] [rbp-48h] BYREF

  v25 = a1;
  v29[0] = 81;
  v29[1] = 119;
  v29[2] = 120;
  EtwpLogSessionWorkingSetInfo();
  v3 = 4356;
  v4 = -1;
  v5 = 64;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1104uLL, 0x74777445u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  *PoolWithTag = 0;
  v8 = (__int64)(PoolWithTag + 1);
  v9 = 0;
  v27 = PoolWithTag + 1089;
  v10 = v29;
  do
  {
    LODWORD(v26) = *v10;
    if ( ZwQuerySystemInformation((SYSTEM_INFORMATION_CLASS)v26, SystemInformation, 0x40u, 0LL) )
      goto LABEL_31;
    *(_DWORD *)v8 = v4;
    v11 = SystemInformation[0] >> 12;
    v12 = (_DWORD)v26 == 119;
    *(_QWORD *)(v8 + 4) = SystemInformation[0] >> 12;
    *(_QWORD *)(v8 + 28) = v11;
    *(_QWORD *)(v8 + 12) = v11;
    *(_QWORD *)(v8 + 60) = 0LL;
    *(_QWORD *)(v8 + 20) = v11;
    *(_QWORD *)(v8 + 44) = 0LL;
    *(_QWORD *)(v8 + 36) = 0LL;
    *(_QWORD *)(v8 + 52) = 0LL;
    if ( v12 && a2 > v11 )
    {
      *(_QWORD *)(v8 + 12) = a2;
      *(_QWORD *)(v8 + 20) = a2;
    }
    ++*v7;
    v8 += 68LL;
    --v4;
    ++v9;
    ++v10;
  }
  while ( v9 < 3 );
  NextProcess = PsIdleProcess;
  v14 = v25;
  if ( !PsIdleProcess )
  {
LABEL_30:
    EtwpLogMemInfoWsHelper(v14, v7);
    goto LABEL_31;
  }
  v15 = (__int64)v27;
  while ( 1 )
  {
    v16 = NextProcess[193];
    if ( (v16 & 0x4000000) != 0
      && ((v16 & 4) == 0 || !NextProcess[1] || NextProcess[294] || *((_DWORD **)NextProcess + 6) != NextProcess + 12) )
    {
      break;
    }
LABEL_27:
    if ( NextProcess == PsIdleProcess )
      NextProcess = 0LL;
    NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
    if ( !NextProcess )
      goto LABEL_30;
  }
  if ( v8 != v15 )
  {
LABEL_20:
    *(_DWORD *)v8 = NextProcess[184];
    *(_QWORD *)(v8 + 4) = *((_QWORD *)NextProcess + 175);
    *(_QWORD *)(v8 + 28) = *((_QWORD *)NextProcess + 176);
    *(_QWORD *)(v8 + 12) = *((_QWORD *)NextProcess + 158);
    *(_QWORD *)(v8 + 60) = *((_QWORD *)NextProcess + 239);
    *(_QWORD *)(v8 + 20) = *((_QWORD *)NextProcess + 103) >> 12;
    v21 = *(_QWORD *)(v8 + 12);
    v22 = *(_QWORD *)(v8 + 20);
    *(_QWORD *)(v8 + 36) = 0LL;
    *(_QWORD *)(v8 + 44) = 0LL;
    if ( v21 >= v22 )
      v21 = v22;
    v23 = *(_QWORD *)(v8 + 4);
    *(_QWORD *)(v8 + 12) = v21;
    v24 = *(_QWORD *)(v8 + 28);
    if ( v24 >= v23 )
      v24 = v23;
    *(_QWORD *)(v8 + 28) = v24;
    *(_QWORD *)(v8 + 52) = *((_QWORD *)NextProcess + 185);
    if ( (int)SmProcessQueryStoreStats(NextProcess, &v25, &v26) >= 0 )
    {
      *(_QWORD *)(v8 + 36) = v25 >> 12;
      *(_QWORD *)(v8 + 44) = v26 >> 12;
    }
    v8 += 68LL;
    ++*v7;
    goto LABEL_27;
  }
  if ( v5 >= 0x100 )
  {
    EtwpLogMemInfoWsHelper(v14, v7);
    *v7 = 0;
    v8 = (__int64)(v7 + 1);
    goto LABEL_20;
  }
  v17 = 68 * v5;
  v18 = v3;
  v5 *= 2;
  v3 += v17;
  v19 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x74777445u);
  v20 = v19;
  if ( v19 )
  {
    memmove(v19, v7, v18);
    ExFreePoolWithTag(v7, 0);
    v7 = v20;
    v8 = (__int64)&v20[17 * *v20 + 1];
    v15 = (__int64)&v20[17 * v5 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
LABEL_31:
  ExFreePoolWithTag(v7, 0);
}
