/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C02165D0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C0004B20 (FreeHidData.c)
 *     ClearWakeBit @ 0x1C00372BC (ClearWakeBit.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     LeaveEditionCrit @ 0x1C0131580 (LeaveEditionCrit.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // r14
  _QWORD *v14; // r10
  unsigned int *v15; // r11
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v24; // [rsp+20h] [rbp-A8h]
  unsigned int v25; // [rsp+24h] [rbp-A4h]
  unsigned int v26; // [rsp+30h] [rbp-98h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  __int64 v28; // [rsp+60h] [rbp-68h]
  __int64 v29; // [rsp+68h] [rbp-60h]
  _BYTE v30[88]; // [rsp+70h] [rbp-58h] BYREF

  v25 = 0;
  v5 = 0;
  v24 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v30);
  if ( a3 != 24 )
  {
    UserSetLastError(87LL, v7, v8, v9);
    goto LABEL_30;
  }
  v10 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v10 = (unsigned int *)MmUserProbeAddress;
  v11 = *v10;
  v26 = *v10;
  v12 = *(_QWORD *)(gptiCurrent + 432LL);
  v28 = v12;
  v13 = *(_QWORD *)(v12 + 24);
  v14 = (_QWORD *)0xFFFFF78000000320LL;
  v15 = (unsigned int *)0xFFFFF78000000004LL;
  while ( 1 )
  {
    if ( !v13 )
    {
      v18 = a1;
      goto LABEL_19;
    }
    v16 = *(_QWORD *)v13;
    v29 = *(_QWORD *)v13;
    if ( *(_DWORD *)(v13 + 24) == 255 )
      break;
LABEL_16:
    v13 = v16;
  }
  LOBYTE(v7) = 18;
  v17 = HMValidateHandle(*(_QWORD *)(v13 + 40), v7);
  v27 = v17;
  if ( !v17 )
  {
LABEL_13:
    *(_DWORD *)(gptiCurrent + 568LL) = *(_DWORD *)(v13 + 48);
    if ( *(_QWORD *)(v12 + 80) == v13 )
      *(_QWORD *)(v12 + 80) = 0LL;
    DelQEntry(v12 + 24, v13, 1);
    EtwTraceInputProcessDelay(gptiCurrent);
    v14 = (_QWORD *)0xFFFFF78000000320LL;
    v15 = (unsigned int *)0xFFFFF78000000004LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                           * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v11 = v26;
    v16 = v29;
    goto LABEL_16;
  }
  v5 = (*(_DWORD *)(v17 + 36) + 7) & 0xFFFFFFF8;
  if ( v5 + v25 <= v25 )
    goto LABEL_30;
  v18 = a1;
  if ( a1 && v5 + v25 <= v11 )
  {
    ProbeForWrite(a1, v5, 4u);
    memmove(a1, (const void *)(v27 + 32), *(unsigned int *)(v27 + 36));
    ++v24;
    a1 += v5;
    v25 += v5;
    FreeHidData(v27);
    v12 = v28;
    goto LABEL_13;
  }
  v15 = (unsigned int *)0xFFFFF78000000004LL;
  v14 = (_QWORD *)0xFFFFF78000000320LL;
LABEL_19:
  if ( !v13 && v18 )
    ClearWakeBit(gptiCurrent, 1024, 0);
  if ( v11 <= v5 )
  {
    if ( v18 )
      UserSetLastError(122LL, v7, v8, v9);
  }
  else if ( v18 )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
      (*v14 * (unsigned __int64)*v15) >> 24);
    v6 = v24;
    goto LABEL_30;
  }
  v6 = -(v18 != 0LL);
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v5;
LABEL_30:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v30);
  LeaveEditionCrit(v20, v19, v21, v22);
  return v6;
}
