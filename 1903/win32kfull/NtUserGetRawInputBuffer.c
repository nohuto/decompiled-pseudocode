/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C022E470
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C00073F0 (FreeHidData.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     ClearWakeBit @ 0x1C00D0A20 (ClearWakeBit.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 i; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-C8h]
  unsigned int v24; // [rsp+24h] [rbp-C4h]
  unsigned int v25; // [rsp+38h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-88h]
  __int64 v27; // [rsp+68h] [rbp-80h]
  __int64 v28; // [rsp+70h] [rbp-78h]
  _BYTE v29[32]; // [rsp+78h] [rbp-70h] BYREF
  char v30[80]; // [rsp+98h] [rbp-50h] BYREF

  v24 = 0;
  v5 = 0;
  v23 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  if ( a3 == 24 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (unsigned int *)MmUserProbeAddress;
    v11 = *v10;
    v25 = *v10;
    v12 = gptiCurrent;
    v13 = *(_QWORD *)(gptiCurrent + 424LL);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v30, v13);
    v28 = v13 + 24;
    for ( i = *(_QWORD *)(v13 + 24); i; i = v18 )
    {
      v18 = *(_QWORD *)i;
      v27 = *(_QWORD *)i;
      if ( *(_DWORD *)(i + 24) == 255 )
      {
        LOBYTE(v14) = 18;
        v19 = HMValidateHandle(*(_QWORD *)(i + 40), v14, v15, v16);
        v26 = v19;
        if ( v19 )
        {
          v5 = (*(_DWORD *)(v19 + 36) + 7) & 0xFFFFFFF8;
          if ( v5 + v24 <= v24 )
            goto LABEL_27;
          v20 = a1;
          if ( !a1 || v5 + v24 > v11 )
            goto LABEL_16;
          ProbeForWrite(a1, v5, 4u);
          memmove(a1, (const void *)(v26 + 32), *(unsigned int *)(v26 + 36));
          ++v23;
          a1 += v5;
          v24 += v5;
          FreeHidData(v26);
          v12 = gptiCurrent;
          v18 = v27;
        }
        *(_DWORD *)(v12 + 560) = *(_DWORD *)(i + 48);
        DelQEntry(v28, i, 1);
        EtwTraceInputProcessDelay(v12);
        *(_DWORD *)(*(_QWORD *)(v12 + 424) + 424LL) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v11 = v25;
      }
    }
    v20 = a1;
LABEL_16:
    if ( !i && v20 )
      ClearWakeBit(gptiCurrent, 1024, 0);
    if ( v11 <= v5 )
    {
      if ( v20 )
        UserSetLastError(122LL, v14, v15, v16);
    }
    else if ( v20 )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v6 = v23;
      goto LABEL_27;
    }
    v6 = -(v20 != 0LL);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v5;
  }
  else
  {
    UserSetLastError(87LL, v7, v8, v9);
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  UserSessionSwitchLeaveCrit(v21);
  return v6;
}
