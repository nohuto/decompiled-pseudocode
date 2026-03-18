/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C02167D0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00E39A0 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00E3A7C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E3CB8 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // r15
  int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned __int8 *result; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r9
  unsigned __int16 v27; // r12
  __int16 v28; // ax
  __int64 v29; // rdx
  int v30; // r11d
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 *v45; // rsi
  __int64 v46; // rsi
  ULONG64 v47; // rcx
  __int64 v48; // xmm0_8
  __int64 v49; // rdx
  _WORD *v50; // rax
  PVOID *v51; // rdx
  char v52; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v53[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v54; // [rsp+34h] [rbp-394h]
  int v55; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v56; // [rsp+40h] [rbp-388h]
  int v57; // [rsp+48h] [rbp-380h]
  _DWORD v58[5]; // [rsp+4Ch] [rbp-37Ch] BYREF
  unsigned __int64 v59; // [rsp+60h] [rbp-368h] BYREF
  __int64 v60; // [rsp+68h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int64 v62; // [rsp+80h] [rbp-348h] BYREF
  _QWORD *v63; // [rsp+88h] [rbp-340h]
  __int64 v64; // [rsp+90h] [rbp-338h]
  __int128 v65; // [rsp+98h] [rbp-330h]
  __int64 v66; // [rsp+A8h] [rbp-320h]
  _QWORD v67[3]; // [rsp+B0h] [rbp-318h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-300h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-2F0h]
  __int128 v70; // [rsp+108h] [rbp-2C0h]
  unsigned __int8 v71[112]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v72[512]; // [rsp+190h] [rbp-238h] BYREF

  v57 = a2;
  v55 = a7 & 1;
  memset(v71, 0, 0x68uLL);
  v11 = v71;
  v60 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0uLL;
  v66 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
  v18 = ThreadWin32Thread;
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v19 = 0LL;
  v20 = *(_DWORD *)(a4 + 4);
  v21 = (v20 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v21 < (v20 & 0x7FFFFFFFu) )
    goto LABEL_47;
  v54 = (v20 & 0x7FFFFFFF) + 2;
  if ( v20 < 0 && !v55 )
  {
    v21 *= 2LL;
    if ( v21 > 0xFFFFFFFF )
      goto LABEL_47;
    v54 = v21;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v21, v72, 0, 0x200uLL);
  v11 = result;
  v56 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
  memset(v67, 0, sizeof(v67));
  if ( v11 != v71 && v11 != v72 )
    PushW32ThreadLock((__int64)v11, v67, (__int64)Win32FreePool, v26);
  *((_QWORD *)v11 + 5) = v19;
  *((_DWORD *)v11 + 12) = v57;
  *((_QWORD *)v11 + 7) = a3;
  v27 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v27 = *(_WORD *)(a4 + 4);
  v28 = -1;
  if ( v27 != 0xFFFF )
    v28 = v27;
  *((_WORD *)v11 + 40) = v28;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v54, (void **)v11 + 11) >= 0 )
  {
    *((_DWORD *)v11 + 24) = v30;
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v16, v17);
    v62 = *(_QWORD *)(v31 + 408);
    *(_QWORD *)(v31 + 408) = &v62;
    v63 = a1;
    if ( a1 )
      HMLockObject(a1);
    v34 = *(_QWORD *)(v18 + 472);
    v70 = *(_OWORD *)(v34 + 64);
    v65 = v70;
    v66 = *(_QWORD *)(v34 + 80);
    *(_QWORD *)(v34 + 72) = v19;
    v35 = 0LL;
    if ( a1 )
      v35 = *a1;
    *(_QWORD *)(*(_QWORD *)(v18 + 472) + 64LL) = v35;
    if ( a1 )
      v36 = *(_QWORD *)(a1[5] + 224LL);
    else
      v36 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v18 + 472) + 80LL) = v36;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v53,
      gdwInAtomicOperation,
      v32,
      v33);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
    EtwTraceBeginCallback(7LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v37 = KeUserModeCallback(7LL, v11, *(unsigned int *)v11, &v59, v58);
    EtwTraceEndCallback(7LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v53,
      v38,
      v39,
      v40);
    ThreadUnlock1(v42, v41, v43);
    v44 = *(_QWORD *)(v18 + 472);
    *(_OWORD *)(v44 + 64) = v70;
    *(_QWORD *)(v44 + 80) = v66;
    if ( v37 >= 0 && v58[0] == 24 )
    {
      v45 = (__int64 *)v59;
      if ( v59 + 8 < v59 || v59 + 8 > MmUserProbeAddress )
        v45 = (__int64 *)MmUserProbeAddress;
      v46 = *v45;
      v60 = v46;
      if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_48;
      if ( !v46 )
      {
        v50 = *(_WORD **)(a4 + 8);
        if ( *(int *)(a4 + 4) >= 0 )
          *v50 = 0;
        else
          *(_BYTE *)v50 = 0;
        goto LABEL_48;
      }
      v47 = v59;
      if ( v59 + 24 < v59 || v59 + 24 > MmUserProbeAddress )
        v47 = MmUserProbeAddress;
      v48 = *(_QWORD *)(v47 + 16);
      v68 = *(_OWORD *)v47;
      v69 = v48;
      v49 = *(_QWORD *)(gptiCurrent + 504LL);
      if ( !v49 || (*(_DWORD *)(v49 + 84) & 1) == 0 || *(_QWORD *)(v49 + 96) != a4 )
      {
        v46 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v68, v46, *(_DWORD *)(a4 + 4) >> 31, v55);
        v60 = v46;
        CopyOutputString((volatile void **)&v68, (struct _LARGE_STRING *)a4, v27, v55);
        goto LABEL_48;
      }
    }
  }
LABEL_47:
  v46 = 0LL;
LABEL_48:
  if ( v11 != v71 && v11 != v72 )
  {
    v51 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v51, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v67, (__int64)v51, v16, v17);
  }
  return (unsigned __int8 *)v46;
}
