/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C0206BA8
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F40A8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C01FD6CC (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C01FDD3C (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __m128i v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // xmm3_8
  INT v12; // esi
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  ULONGLONG v15; // rax
  ULONGLONG v16; // rcx
  __int64 v17; // rdi
  size_t v18; // rbx
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // [rsp+30h] [rbp-178h]
  unsigned __int64 v23; // [rsp+48h] [rbp-160h] BYREF
  __int64 v24; // [rsp+50h] [rbp-158h] BYREF
  int v25; // [rsp+58h] [rbp-150h]
  int v26; // [rsp+5Ch] [rbp-14Ch]
  ULONGLONG v27; // [rsp+68h] [rbp-140h] BYREF
  ULONGLONG pullResult; // [rsp+70h] [rbp-138h] BYREF
  ULONGLONG v29; // [rsp+78h] [rbp-130h]
  __m128i v30; // [rsp+80h] [rbp-128h]
  _OWORD v31[3]; // [rsp+90h] [rbp-118h] BYREF
  volatile void *Address[2]; // [rsp+C8h] [rbp-E0h]
  volatile void *v33[2]; // [rsp+D8h] [rbp-D0h]
  INT iOperand[8]; // [rsp+E8h] [rbp-C0h]
  __int128 v35; // [rsp+108h] [rbp-A0h]
  __int128 v36; // [rsp+118h] [rbp-90h]
  _OWORD v37[4]; // [rsp+130h] [rbp-78h] BYREF
  __int64 v38; // [rsp+170h] [rbp-38h]
  char v39; // [rsp+1B0h] [rbp+8h] BYREF
  char v40; // [rsp+1B8h] [rbp+10h] BYREF
  __int64 *v41; // [rsp+1C0h] [rbp+18h]
  int v42; // [rsp+1C8h] [rbp+20h] BYREF

  v41 = a3;
  v26 = 0;
  LODWORD(v22) = 0;
  *a3 = 0LL;
  v24 = a1;
  v25 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v39,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(60LL);
  v4 = KeUserModeCallback(60LL, &v24, 16LL, &v23, &v42);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v39, v5);
  if ( v4 >= 0 && v42 == 24 )
  {
    v6 = (__int64 *)v23;
    if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
      v6 = (__int64 *)MmUserProbeAddress;
    v22 = *v6;
    if ( *v6 == 2 )
    {
      LODWORD(v22) = 0;
      v7 = *(_QWORD *)(gptiCurrent + 512LL);
      if ( !v7 || (*(_DWORD *)(v7 + 84) & 1) == 0 || *(_OWORD **)(v7 + 96) != v37 )
      {
        v8 = *(_QWORD *)(v23 + 16);
        if ( v8 + 72 < v8 || v8 + 72 > MmUserProbeAddress )
          v8 = MmUserProbeAddress;
        v36 = *(_OWORD *)v8;
        v31[0] = *(_OWORD *)(v8 + 16);
        v9 = *(__m128i *)(v8 + 32);
        v30 = v9;
        *(__m128i *)Address = v9;
        v10 = *(_OWORD *)(v8 + 48);
        v35 = v10;
        *(_OWORD *)v33 = v10;
        *(_QWORD *)iOperand = *(_QWORD *)(v8 + 64);
        v11 = *(_QWORD *)iOperand;
        v37[0] = v36;
        v37[1] = v31[0];
        v37[2] = v9;
        v37[3] = v10;
        v38 = *(_QWORD *)iOperand;
        LODWORD(v22) = 2;
        v12 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
        if ( IntToULongLong(v12, &pullResult) < 0
          || IntToULongLong(iOperand[0], &v27) < 0
          || pullResult + v27 < pullResult )
        {
          goto LABEL_25;
        }
        v15 = pullResult + v27 + 72;
        v16 = -1LL;
        if ( v15 >= 0x48 )
          v16 = pullResult + v27 + 72;
        v29 = v16;
        if ( v15 < 0x48 )
        {
LABEL_25:
          v17 = 0LL;
        }
        else
        {
          if ( v16 < 0x90 )
            v16 = 144LL;
          v29 = v16;
          v17 = Win32AllocPool(v16, 1164211029LL);
          v9 = v30;
          v10 = v35;
          v11 = *(_QWORD *)iOperand;
          v13 = v36;
          v14 = v31[0];
        }
        if ( v17 )
        {
          *a3 = v17;
          *(_OWORD *)v17 = v13;
          *(_OWORD *)(v17 + 16) = v14;
          *(__m128i *)(v17 + 32) = v9;
          *(_OWORD *)(v17 + 48) = v10;
          *(_QWORD *)(v17 + 64) = v11;
          if ( v12 )
          {
            ProbeForRead(Address[0], v12, 1u);
            memmove((void *)(v17 + 72), (const void *)Address[0], v12);
          }
          if ( iOperand[0] )
          {
            v18 = iOperand[0];
            ProbeForRead(v33[1], iOperand[0], 1u);
            memmove((void *)(v17 + v12 + 72LL), (const void *)v33[1], v18);
          }
          PushW32ThreadLock(v17, v31, (__int64)Win32FreePool);
          xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v17);
          v30.m128i_i64[0] = (__int64)KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(v30.m128i_i64[0], v19);
          *(_QWORD *)(ThreadWin32Thread + 16) = *(_QWORD *)&v31[0];
        }
        else
        {
          LODWORD(v22) = 3;
        }
      }
    }
  }
  return (unsigned int)v22;
}
