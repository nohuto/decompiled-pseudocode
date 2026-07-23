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
  __int64 v19; // rdx
  PVOID v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // r8
  NTSTATUS v23; // eax
  unsigned int v24; // eax
  __int128 v25; // [rsp+38h] [rbp-B0h]
  struct _SINGLE_LIST_ENTRY *v26; // [rsp+58h] [rbp-90h]
  PVOID BaseOfImage; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-80h] BYREF
  signed __int64 v29; // [rsp+78h] [rbp-70h]
  __int64 v30; // [rsp+90h] [rbp-58h]
  signed __int64 v31; // [rsp+98h] [rbp-50h]
  __int64 v32; // [rsp+108h] [rbp+20h] BYREF

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
            v26 = Next[3 * v13 + 3].Next;
            v14 = (char *)v26 + LODWORD(Next[3 * v13 + 4].Next);
            if ( a1 >= (unsigned __int64)v26 )
              break;
            if ( !v13 )
              goto LABEL_31;
            v12 = v13 - 1;
          }
          if ( a1 > 0x7FFFFFFEFFFFLL
            && v10
            && a1 >= (unsigned __int64)&v14[v9]
            && a1 < (unsigned __int64)&v14[v10 + v9]
            && v26 != PsNtosImageBase
            && v26 != PsHalImageBase )
          {
            break;
          }
          if ( a1 < (unsigned __int64)v14 )
          {
            v25 = *(_OWORD *)&Next[3 * v13 + 2].Next;
            v10 = (int)Next[3 * v13 + 4].Next;
            v15 = (char *)Next[3 * v13 + 3].Next;
            goto LABEL_23;
          }
          v11 = v13 + 1;
        }
        *(_QWORD *)&v25 = &RtlRetpolineStubsFunctionTable;
        v15 = &v14[v9];
LABEL_23:
        *(_QWORD *)(a2 + 8) = v15;
        *(_DWORD *)(a2 + 16) = v10;
        v28[1] = 17LL;
        v29 = _InterlockedCompareExchange64(p_ActiveProcessors, 0LL, 17LL);
        if ( v29 != 17 )
          ExfReleasePushLockShared((signed __int64 *)p_ActiveProcessors);
        KeAbPostRelease((ULONG_PTR)p_ActiveProcessors);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v16 = *(_QWORD *)(v25 + 16);
        *(_QWORD *)a2 = v16;
        v17 = (unsigned int)(12 * *(_DWORD *)(v25 + 84));
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
      v30 = 17LL;
      v31 = _InterlockedCompareExchange64(p_ActiveProcessors, 0LL, 17LL);
      if ( v31 != 17 )
        ExfReleasePushLockShared((signed __int64 *)p_ActiveProcessors);
      KeAbPostRelease((ULONG_PTR)p_ActiveProcessors);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( (int)MmGetImageBase(a1, &BaseOfImage, v28) >= 0 )
    {
      LOBYTE(v19) = 1;
      v20 = BaseOfImage;
      v23 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, v19, 3LL, a2 + 20, &v32);
      v22 = v32;
      if ( v23 < 0 )
        v22 = 0LL;
      v32 = v22;
      if ( v22 )
      {
        v24 = *(_DWORD *)(a2 + 20);
        if ( v24 && v24 == 12 * (v24 / 0xCuLL) )
        {
          if ( (v22 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v24 + v22 > 0x7FFFFFFF0000LL || v24 + v22 < v22 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v22 = 0LL;
        }
      }
      v21 = v28[0];
    }
    else
    {
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
    }
    *(_QWORD *)(a2 + 8) = v20;
    *(_DWORD *)(a2 + 16) = v21;
    *(_QWORD *)a2 = v22;
    if ( !v22 )
      *(_DWORD *)(a2 + 20) = 0;
    return v22;
  }
  return result;
}
