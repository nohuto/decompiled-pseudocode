/*
 * XREFs of ?IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@PEAK@Z @ 0x14002CE68
 * Callers:
 *     ?AddingResource@CpuManager@@EEAAJXZ @ 0x14002C760 (-AddingResource@CpuManager@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

NTSTATUS __fastcall IdentifyCpuSets(struct CpuSet *a1, struct CpuGroupMask *a2, unsigned int *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  NTSTATUS result; // eax
  DWORD v16; // ebx
  HANDLE ProcessHeap; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v18; // rax
  unsigned __int16 *v19; // rbx
  int v20; // ecx
  char v21; // r11
  __int64 v22; // r9
  __int128 v23; // xmm0
  __int64 v24; // r12
  __int64 v25; // r10
  int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // r15
  HANDLE v29; // rax
  __int64 v30; // rcx
  int v32; // edx
  unsigned int v33; // edx
  DWORD ReturnedLength[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+30h] [rbp-D0h]
  BOOL LogicalProcessorInformation; // [rsp+40h] [rbp-C0h]
  _OWORD v37[10]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-10h]
  __int128 SystemInformation; // [rsp+100h] [rbp+0h] BYREF
  __int128 v40; // [rsp+110h] [rbp+10h]
  __int128 v41; // [rsp+120h] [rbp+20h]
  __int128 v42; // [rsp+130h] [rbp+30h]
  __int128 v43; // [rsp+140h] [rbp+40h]
  __int128 v44; // [rsp+150h] [rbp+50h]
  __int128 v45; // [rsp+160h] [rbp+60h]
  __int128 v46; // [rsp+170h] [rbp+70h]
  __int128 v47; // [rsp+180h] [rbp+80h]
  __int128 v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+1A0h] [rbp+A0h]

  memset_0(&SystemInformation, 0, 0xA8uLL);
  v6 = v40;
  *(_OWORD *)a1 = SystemInformation;
  v7 = v41;
  *((_OWORD *)a1 + 1) = v6;
  v8 = v42;
  *((_OWORD *)a1 + 2) = v7;
  v9 = v43;
  *((_OWORD *)a1 + 3) = v8;
  v10 = v44;
  *((_OWORD *)a1 + 4) = v9;
  v11 = v45;
  *((_OWORD *)a1 + 5) = v10;
  v12 = v47;
  *((_OWORD *)a1 + 6) = v11;
  *((_OWORD *)a1 + 7) = v46;
  v13 = v48;
  v14 = v49;
  *((_OWORD *)a1 + 8) = v12;
  *((_OWORD *)a1 + 9) = v13;
  *((_QWORD *)a1 + 20) = v14;
  v35 = 0uLL;
  *(_OWORD *)a2 = 0uLL;
  *a3 = -1;
  memset_0(v37, 0, 0xA8uLL);
  SystemInformation = v37[0];
  v40 = v37[1];
  v41 = v37[2];
  v42 = v37[3];
  v43 = v37[4];
  v44 = v37[5];
  v45 = v37[6];
  v46 = v37[7];
  v47 = v37[8];
  v48 = v37[9];
  v49 = v38;
  result = NtQuerySystemInformation(SystemLookasideInformation|0x80, &SystemInformation, 0xA8u, 0LL);
  if ( result < 0 )
    return result;
  ReturnedLength[0] = 0;
  GetLogicalProcessorInformationEx(RelationGroup, 0LL, ReturnedLength);
  v16 = ReturnedLength[0];
  ProcessHeap = GetProcessHeap();
  v18 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)HeapAlloc(ProcessHeap, 8u, v16);
  v19 = (unsigned __int16 *)v18;
  if ( !v18 )
    return -1073741670;
  LogicalProcessorInformation = GetLogicalProcessorInformationEx(RelationGroup, v18, ReturnedLength);
  if ( !LogicalProcessorInformation )
    goto LABEL_22;
  v20 = v19[5];
  v35 = 0uLL;
  v21 = 0;
  v22 = 0LL;
  v23 = 0uLL;
  *(_DWORD *)a1 = v20;
  if ( !v20 )
    goto LABEL_20;
  v24 = *((_QWORD *)&v35 + 1);
  do
  {
    v25 = *(_QWORD *)&v19[24 * v22 + 36];
    *((_QWORD *)a1 + v22 + 1) = v25;
    if ( v21 )
      goto LABEL_17;
    v26 = 0;
    v27 = 1LL;
    if ( (v25 & 1) == 0 )
      goto LABEL_17;
    v28 = qword_140087388;
    while ( 1 )
    {
      if ( !v24 )
      {
        v24 = v27;
        *((_QWORD *)&v35 + 1) = v27;
        LOWORD(v35) = v22;
      }
      if ( v28 )
        break;
      *((_QWORD *)a2 + 1) = v27;
      if ( (v27 & *((_QWORD *)&SystemInformation + v22 + 1)) == 0 )
        goto LABEL_16;
      v28 = qword_140087388;
LABEL_29:
      ++v26;
      v25 &= ~v27;
      v27 = 1LL << v26;
      if ( ((1LL << v26) & v25) == 0 )
        goto LABEL_17;
    }
    if ( (_DWORD)v22 != g_UserConfiguredAudioReservedCpu || (v28 & v27) == 0 )
      goto LABEL_29;
    *((_QWORD *)a2 + 1) = v27;
LABEL_16:
    v21 = 1;
    *(_WORD *)a2 = v22;
LABEL_17:
    v22 = (unsigned int)(v22 + 1);
  }
  while ( (unsigned int)v22 < *(_DWORD *)a1 );
  if ( !v21 )
  {
    v23 = v35;
LABEL_20:
    *(_OWORD *)a2 = v23;
  }
  *((_QWORD *)a1 + *(unsigned __int16 *)a2 + 1) &= ~*((_QWORD *)a2 + 1);
LABEL_22:
  v29 = GetProcessHeap();
  HeapFree(v29, 0, v19);
  if ( !LogicalProcessorInformation )
    return -1073741823;
  v30 = *((_QWORD *)a2 + 1);
  if ( !v30 )
    return -1073741823;
  if ( !_BitScanForward((unsigned int *)&v32, v30) )
  {
    _BitScanForward(&v33, HIDWORD(v30));
    v32 = v33 + 32;
  }
  *a3 = v32 | (*(unsigned __int16 *)a2 << 16) | 0x100;
  return 0;
}
