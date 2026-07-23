/*
 * XREFs of MiCheckForUserStackOverflow @ 0x1406A4CAC
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1401B8CF0 (ZwProtectVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCheckForUserStackOverflow(unsigned __int64 a1, int a2)
{
  char *v3; // r13
  struct _KTHREAD *CurrentThread; // r15
  char Queue; // al
  int v6; // edi
  char *v7; // rbx
  unsigned int v8; // r14d
  unsigned int *Teb; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  _DWORD *v13; // rbx
  ULONG_PTR v14; // rax
  char *v15; // rsi
  NTSTATUS v16; // eax
  char *v17; // rax
  unsigned __int64 v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  void *v26; // rax
  NTSTATUS v27; // eax
  int v28; // ecx
  void *v29; // rdx
  ULONG OldAccessProtection; // [rsp+34h] [rbp-64h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-58h] BYREF
  ULONG_PTR v33; // [rsp+48h] [rbp-50h] BYREF
  PVOID v34; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]
  __int64 v36; // [rsp+60h] [rbp-38h]
  unsigned int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (char)CurrentThread[1].Queue;
  if ( Queue < 0
    || ((unsigned __int8)~(BYTE1(CurrentThread[1].Queue) >> 5) & ((Queue & 3) == 0)) == 0
    || CurrentThread->ApcStateIndex == 1 )
  {
    return 2147483649LL;
  }
  if ( a2 )
  {
    v8 = 275;
  }
  else
  {
    v6 = 0;
    v7 = 0LL;
    if ( (MiFlags & 0x2000000) == 0 )
      goto LABEL_6;
    v24 = MiObtainReferencedVadEx(a1, 2, &v38);
    v7 = (char *)v24;
    if ( !v24 )
      goto LABEL_6;
    v6 = (*(_DWORD *)(v24 + 48) >> 19) & 1;
    if ( !v6 )
      goto LABEL_6;
    v25 = (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12;
    MiUnlockAndDereferenceVadShared((char *)v24);
    v7 = 0LL;
    v37 = -1073741571;
    v33 = 4096LL;
    v26 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
    v34 = v26;
    if ( (unsigned __int64)v26 <= a1 && (unsigned __int64)v26 > v25 )
    {
      v27 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, 0LL, &v33, 0x1000u, 0x102u);
      v28 = -1073741571;
      v8 = 275;
      if ( v27 >= 0 )
        v28 = 275;
      v37 = v28;
    }
    else
    {
LABEL_6:
      v8 = 275;
    }
    if ( v7 )
      MiUnlockAndDereferenceVadShared(v7);
    if ( v6 )
      return v37;
  }
  Teb = (unsigned int *)CurrentThread->Teb;
  v10 = *((_QWORD *)Teb + 1);
  v35 = v10;
  v36 = *((_QWORD *)Teb + 655);
  v11 = v36 & 0xFFFFFFFFFFFFF000uLL;
  v12 = (Teb[1490] + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v12;
  v13 = Teb + 4;
  v14 = v12;
  if ( v12 )
  {
    v14 = v12 + 4096;
    v12 = v14;
    RegionSize = v14;
  }
  if ( v14 < 0x3000 )
  {
    v12 = 12288LL;
    RegionSize = 12288LL;
    v14 = 12288LL;
  }
  if ( a1 >= v10 || a1 < v11 )
  {
    v19 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v19 )
    {
      v20 = *(_WORD *)(v19 + 8);
      if ( v20 == 332 || v20 == 452 )
      {
        v3 = (char *)(Teb + 2048);
        if ( ((unsigned __int8)Teb & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = Teb[2049];
        v35 = v21;
        v22 = Teb[2947];
        v36 = v22;
        v23 = Teb[3038];
        RegionSize = v23;
        v11 = v22 & 0xFFFFFFFFFFFFF000uLL;
        if ( a1 < v21 && a1 >= v11 )
        {
          v12 = (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v14 = v12;
          RegionSize = v12;
          if ( v12 )
          {
            v12 += 4096LL;
            RegionSize = v12;
            v14 = v12;
          }
          if ( v14 < 0x2000 )
          {
            v12 = 0x2000LL;
            RegionSize = 0x2000LL;
            v14 = 0x2000LL;
          }
          v13 = Teb + 2050;
          goto LABEL_16;
        }
      }
    }
    return 2147483649LL;
  }
LABEL_16:
  v15 = (char *)((a1 & 0xFFFFFFFFFFFFF000uLL) - v14);
  BaseAddress = v15;
  if ( (unsigned __int64)v15 <= v11 )
  {
    v29 = (void *)(v11 + 4096);
LABEL_51:
    BaseAddress = v29;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldAccessProtection);
    v17 = (char *)BaseAddress;
    v8 = -1073741571;
    goto LABEL_21;
  }
  if ( (*(_DWORD *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 188) & 0x10000) != 0 )
  {
    v16 = -1073741523;
  }
  else
  {
    v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x104u);
    v12 = RegionSize;
    v15 = (char *)BaseAddress;
  }
  if ( v16 < 0 )
  {
    RegionSize = v12 - 4096;
    v29 = v15 + 4096;
    goto LABEL_51;
  }
  v17 = &v15[v12];
LABEL_21:
  if ( v3 )
    *v13 = (_DWORD)v17;
  else
    *(_QWORD *)v13 = v17;
  return v8;
}
