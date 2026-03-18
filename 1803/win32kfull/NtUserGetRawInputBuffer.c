/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C01EF8A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C0005A70 (FreeHidData.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned int *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r13
  __int64 *i; // r14
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v21; // [rsp+20h] [rbp-A8h]
  unsigned int v22; // [rsp+24h] [rbp-A4h]
  unsigned int v23; // [rsp+30h] [rbp-98h]
  __int64 *v24; // [rsp+60h] [rbp-68h]
  __int64 **v25; // [rsp+68h] [rbp-60h]
  _BYTE v26[88]; // [rsp+70h] [rbp-58h] BYREF

  v22 = 0;
  v5 = 0;
  v21 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  if ( a3 != 24 )
  {
    UserSetLastError(87LL, v7);
    goto LABEL_28;
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  v23 = *v8;
  v10 = gptiCurrent;
  v25 = (__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL);
  for ( i = *v25; ; i = v12 )
  {
    if ( !i )
    {
      v15 = a1;
      goto LABEL_17;
    }
    v12 = (__int64 *)*i;
    v24 = (__int64 *)*i;
    if ( *((_DWORD *)i + 6) == 255 )
      break;
LABEL_14:
    ;
  }
  v13 = HMValidateHandle(i[5], 18);
  v14 = v13;
  if ( !v13 )
  {
LABEL_13:
    v10 = gptiCurrent;
    *(_DWORD *)(gptiCurrent + 560LL) = *((_DWORD *)i + 12);
    DelQEntry(v25, i);
    EtwTraceInputProcessDelay(gptiCurrent);
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                           * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v9 = v23;
    goto LABEL_14;
  }
  v5 = (*(_DWORD *)(v13 + 36) + 7) & 0xFFFFFFF8;
  if ( v5 + v22 <= v22 )
    goto LABEL_28;
  v15 = a1;
  if ( a1 && v5 + v22 <= v9 )
  {
    ProbeForWrite(a1, v5, 4u);
    memmove(a1, (const void *)(v14 + 32), *(unsigned int *)(v14 + 36));
    ++v21;
    a1 += v5;
    v22 += v5;
    FreeHidData(v14);
    v12 = v24;
    goto LABEL_13;
  }
  v10 = gptiCurrent;
LABEL_17:
  if ( !i && v15 )
    *(_WORD *)(*(_QWORD *)(v10 + 440) + 6LL) &= ~0x400u;
  if ( v9 <= v5 )
  {
    if ( v15 )
      UserSetLastError(122LL, 0xFFFFF78000000320uLL);
  }
  else if ( v15 )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v10 + 440) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v6 = v21;
    goto LABEL_28;
  }
  v6 = -(v15 != 0LL);
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v5;
LABEL_28:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v6;
}
