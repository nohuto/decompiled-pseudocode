/*
 * XREFs of EtwpLogMemInfoWs @ 0x1408F4AF0
 * Callers:
 *     EtwpPerfMemInfoWork @ 0x1408F53D0 (EtwpPerfMemInfoWork.c)
 *     EtwpLogMemInfoRundown @ 0x1408FB718 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1408E8484 (SmProcessQueryStoreStats.c)
 *     EtwpLogMemInfoWsHelper @ 0x1408F4E1C (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408F50E8 (EtwpLogSessionWorkingSetInfo.c)
 */

void __fastcall EtwpLogMemInfoWs(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned int v5; // r15d
  int v6; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // edi
  _DWORD *v11; // rbp
  unsigned __int64 v12; // rax
  bool v13; // zf
  _DWORD *NextProcess; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // rbp
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int *v20; // rax
  unsigned int *v21; // rbp
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-A0h] BYREF
  _DWORD *v28; // [rsp+30h] [rbp-98h]
  _QWORD SystemInformation[8]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v30[4]; // [rsp+80h] [rbp-48h] BYREF

  v26 = a1;
  v30[0] = 81;
  LODWORD(v4) = 64;
  v30[1] = 119;
  v30[2] = 120;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  EtwpLogSessionWorkingSetInfo(a1);
  v5 = 4356;
  v6 = -1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1104uLL, 0x74777445u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  *PoolWithTag = 0;
  v9 = (__int64)(PoolWithTag + 1);
  v10 = 0;
  v28 = PoolWithTag + 1089;
  v11 = v30;
  do
  {
    LODWORD(v27) = *v11;
    if ( ZwQuerySystemInformation((SYSTEM_INFORMATION_CLASS)v27, SystemInformation, 0x40u, 0LL) )
      goto LABEL_31;
    *(_DWORD *)v9 = v6;
    v12 = SystemInformation[0] >> 12;
    v13 = (_DWORD)v27 == 119;
    *(_QWORD *)(v9 + 4) = SystemInformation[0] >> 12;
    *(_QWORD *)(v9 + 28) = v12;
    *(_QWORD *)(v9 + 12) = v12;
    *(_QWORD *)(v9 + 60) = 0LL;
    *(_QWORD *)(v9 + 20) = v12;
    *(_QWORD *)(v9 + 44) = 0LL;
    *(_QWORD *)(v9 + 36) = 0LL;
    *(_QWORD *)(v9 + 52) = 0LL;
    if ( v13 && a2 > v12 )
    {
      *(_QWORD *)(v9 + 12) = a2;
      *(_QWORD *)(v9 + 20) = a2;
    }
    ++*v8;
    v9 += 68LL;
    --v6;
    ++v10;
    ++v11;
  }
  while ( v10 < 3 );
  NextProcess = PsIdleProcess;
  v15 = v26;
  if ( !PsIdleProcess )
  {
LABEL_30:
    EtwpLogMemInfoWsHelper(v15, v8);
    goto LABEL_31;
  }
  v16 = (__int64)v28;
  while ( 1 )
  {
    v17 = NextProcess[195];
    if ( (v17 & 0x4000000) != 0
      && ((v17 & 4) == 0 || !NextProcess[1] || NextProcess[294] || *((_DWORD **)NextProcess + 6) != NextProcess + 12) )
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
  if ( v9 != v16 )
  {
LABEL_20:
    *(_DWORD *)v9 = NextProcess[186];
    *(_QWORD *)(v9 + 4) = *((_QWORD *)NextProcess + 175);
    *(_QWORD *)(v9 + 28) = *((_QWORD *)NextProcess + 176);
    *(_QWORD *)(v9 + 12) = *((_QWORD *)NextProcess + 158);
    *(_QWORD *)(v9 + 60) = *((_QWORD *)NextProcess + 245);
    *(_QWORD *)(v9 + 20) = *((_QWORD *)NextProcess + 104) >> 12;
    v22 = *(_QWORD *)(v9 + 12);
    v23 = *(_QWORD *)(v9 + 20);
    *(_QWORD *)(v9 + 36) = 0LL;
    *(_QWORD *)(v9 + 44) = 0LL;
    if ( v22 >= v23 )
      v22 = v23;
    v24 = *(_QWORD *)(v9 + 4);
    *(_QWORD *)(v9 + 12) = v22;
    v25 = *(_QWORD *)(v9 + 28);
    if ( v25 >= v24 )
      v25 = v24;
    *(_QWORD *)(v9 + 28) = v25;
    *(_QWORD *)(v9 + 52) = *((_QWORD *)NextProcess + 185);
    if ( (int)SmProcessQueryStoreStats(NextProcess, &v26, &v27) >= 0 )
    {
      *(_QWORD *)(v9 + 36) = v26 >> 12;
      *(_QWORD *)(v9 + 44) = v27 >> 12;
    }
    v9 += 68LL;
    ++*v8;
    goto LABEL_27;
  }
  if ( (unsigned int)v4 >= 0x100 )
  {
    EtwpLogMemInfoWsHelper(v15, v8);
    *v8 = 0;
    v9 = (__int64)(v8 + 1);
    goto LABEL_20;
  }
  v18 = 68 * v4;
  v19 = v5;
  v4 = (unsigned int)(2 * v4);
  v5 += v18;
  v20 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x74777445u);
  v21 = v20;
  if ( v20 )
  {
    memmove(v20, v8, v19);
    ExFreePoolWithTag(v8, 0);
    v8 = v21;
    v9 = (__int64)&v21[17 * *v21 + 1];
    v16 = (__int64)&v21[17 * v4 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
LABEL_31:
  ExFreePoolWithTag(v8, 0);
}
