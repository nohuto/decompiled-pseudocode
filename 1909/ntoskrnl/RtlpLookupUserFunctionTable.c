/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x1401353C4
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001AC90 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x140135768 (RtlpLookupUserFunctionTableInverted.c)
 *     MmGetImageBase @ 0x1406DB7E0 (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r14
  volatile signed __int64 *p_ActiveProcessors; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // r8
  unsigned int v9; // edx
  int v10; // r9d
  int v11; // ecx
  int v12; // r10d
  int v13; // r14d
  char *v14; // r11
  char *v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  PVOID v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // r8
  NTSTATUS v22; // eax
  unsigned int v23; // eax
  __int128 v24; // [rsp+38h] [rbp-B0h]
  struct _SINGLE_LIST_ENTRY *v25; // [rsp+58h] [rbp-90h]
  PVOID BaseAddress; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v27[2]; // [rsp+68h] [rbp-80h] BYREF
  signed __int64 v28; // [rsp+78h] [rbp-70h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  signed __int64 v30; // [rsp+98h] [rbp-50h]
  __int64 v31; // [rsp+108h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->Process;
    if ( Process[2].SwapListEntry.Next )
    {
      --CurrentThread->SpecialApcDisable;
      p_ActiveProcessors = (volatile signed __int64 *)&Process[2].ActiveProcessors;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[2].ActiveProcessors, 0LL);
      Next = Process[2].SwapListEntry.Next;
      if ( Next && LODWORD(Next->Next) != 1 )
      {
        if ( (KiSpeculationFeatures & 0x2000000) != 0 )
        {
          v9 = dword_1404645B0;
          v10 = 4096;
        }
        else
        {
          v9 = 0;
          v10 = 0;
        }
        v11 = 1;
        v12 = LODWORD(Next->Next) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v12 < v11 )
              goto LABEL_31;
            v13 = (v12 + v11) >> 1;
            v25 = Next[3 * v13 + 3].Next;
            v14 = (char *)v25 + LODWORD(Next[3 * v13 + 4].Next);
            if ( a1 >= (unsigned __int64)v25 )
              break;
            if ( !v13 )
              goto LABEL_31;
            v12 = v13 - 1;
          }
          if ( a1 > 0x7FFFFFFEFFFFLL
            && v10
            && a1 >= (unsigned __int64)&v14[v9]
            && a1 < (unsigned __int64)&v14[v10 + v9]
            && v25 != PsNtosImageBase
            && v25 != PsHalImageBase )
          {
            break;
          }
          if ( a1 < (unsigned __int64)v14 )
          {
            v24 = *(_OWORD *)&Next[3 * v13 + 2].Next;
            v10 = (int)Next[3 * v13 + 4].Next;
            v15 = (char *)Next[3 * v13 + 3].Next;
            goto LABEL_23;
          }
          v11 = v13 + 1;
        }
        *(_QWORD *)&v24 = &RtlRetpolineStubsFunctionTable;
        v15 = &v14[v9];
LABEL_23:
        *(_QWORD *)(a2 + 8) = v15;
        *(_DWORD *)(a2 + 16) = v10;
        v27[1] = 17LL;
        v28 = _InterlockedCompareExchange64(p_ActiveProcessors, 0LL, 17LL);
        if ( v28 != 17 )
          ExfReleasePushLockShared((signed __int64 *)p_ActiveProcessors);
        KeAbPostRelease((ULONG_PTR)p_ActiveProcessors);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v16 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)a2 = v16;
        v17 = (unsigned int)(12 * *(_DWORD *)(v24 + 84));
        *(_DWORD *)(a2 + 20) = v17;
        if ( (_DWORD)v17 )
        {
          if ( (v16 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = v16 + v17;
          if ( v18 > 0x7FFFFFFF0000LL || v18 < v16 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        return v16;
      }
LABEL_31:
      v29 = 17LL;
      v30 = _InterlockedCompareExchange64(p_ActiveProcessors, 0LL, 17LL);
      if ( v30 != 17 )
        ExfReleasePushLockShared((signed __int64 *)p_ActiveProcessors);
      KeAbPostRelease((ULONG_PTR)p_ActiveProcessors);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( (int)MmGetImageBase(a1, &BaseAddress, v27) >= 0 )
    {
      v19 = BaseAddress;
      v22 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 1, 3u, a2 + 20, &v31);
      v21 = v31;
      if ( v22 < 0 )
        v21 = 0LL;
      v31 = v21;
      if ( v21 )
      {
        v23 = *(_DWORD *)(a2 + 20);
        if ( v23 && v23 == 12 * (v23 / 0xCuLL) )
        {
          if ( (v21 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v23 + v21 > 0x7FFFFFFF0000LL || v23 + v21 < v21 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v21 = 0LL;
        }
      }
      v20 = v27[0];
    }
    else
    {
      v19 = 0LL;
      v20 = 0;
      v21 = 0LL;
    }
    *(_QWORD *)(a2 + 8) = v19;
    *(_DWORD *)(a2 + 16) = v20;
    *(_QWORD *)a2 = v21;
    if ( !v21 )
      *(_DWORD *)(a2 + 20) = 0;
    return v21;
  }
  return result;
}
