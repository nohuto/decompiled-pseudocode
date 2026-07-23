/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x18001AEC0
 * Callers:
 *     CsrClientConnectToServer @ 0x18004BB80 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x180069750 (LdrGetProcedureAddressEx.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     LdrGetProcedureAddress @ 0x18007E510 (LdrGetProcedureAddress.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6B70 (RtlWow64LogMessageInEventLogger.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800D99A4 @ 0x1800D99A4 (sub_1800D99A4.c)
 *     sub_1800DA834 @ 0x1800DA834 (sub_1800DA834.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005521C @ 0x18005521C (sub_18005521C.c)
 *     sub_18005575C @ 0x18005575C (sub_18005575C.c)
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 *     sub_1800D89D0 @ 0x1800D89D0 (sub_1800D89D0.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  PANSI_STRING v6; // rbx
  bool v7; // zf
  int v9; // r15d
  size_t Length; // rsi
  unsigned int v11; // edi
  char *Heap; // r14
  void *v13; // r12
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 Root; // rax
  unsigned __int64 v18; // rcx
  NTSTATUS v19; // edi
  int v20; // eax
  ULONG v21; // r13d
  PVOID *v22; // rbx
  __int64 v24; // rcx
  char *v25; // rax
  char *v26; // rbx
  __int64 v27; // rcx
  PVOID *v28; // [rsp+20h] [rbp-E0h]
  char v29; // [rsp+30h] [rbp-D0h]
  char v30[7]; // [rsp+31h] [rbp-CFh] BYREF
  char *v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+44h] [rbp-BCh]
  int v34; // [rsp+48h] [rbp-B8h]
  ULONG v35; // [rsp+4Ch] [rbp-B4h]
  char v36[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v37; // [rsp+58h] [rbp-A8h]
  char *v38; // [rsp+60h] [rbp-A0h] BYREF
  char v39[8]; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v40; // [rsp+70h] [rbp-90h]
  char v41; // [rsp+80h] [rbp-80h] BYREF
  ULONG Flagsa; // [rsp+180h] [rbp+80h]

  v31 = 0LL;
  v6 = ProcedureName;
  v7 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v9 = 9;
  v40 = ProcedureAddress;
  v35 = ProcedureNumber;
  v37 = Callback;
  v29 = 0;
  if ( v7 || (v34 = 6, !RtlIsCriticalSectionLockedByThread(&stru_18015F3F0)) )
    v34 = 9;
  if ( v6 )
  {
    Length = v6->Length;
    v11 = Length + 1;
    if ( v6->MaximumLength < (unsigned int)(Length + 1) || (Heap = v6->Buffer, Heap[Length]) )
    {
      if ( v11 <= 0x80 )
      {
        Heap = &v41;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, ::Flags + 1572864, v11);
        if ( !Heap )
          return -1073741670;
        v29 = 1;
      }
      memmove(Heap, v6->Buffer, Length);
      Heap[(unsigned int)Length] = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  LOBYTE(ProcedureName) = 1;
  v33 = 1;
  v13 = 0LL;
  v14 = sub_18001B2F8(DllHandle, ProcedureName);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    goto LABEL_7;
  if ( *(_DWORD *)(v14 + 56) != 16 || *(_DWORD *)(v14 + 64) != 2 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v14 + 16));
    sub_1800CDB44(v15);
LABEL_7:
    v9 = v32;
    while ( 1 )
    {
      v16 = 0LL;
      if ( !DllHandle )
        break;
      if ( DllHandle == (PVOID)qword_1801653A8 )
      {
        v16 = qword_1801653A0;
        v9 = *(_DWORD *)(*(_QWORD *)(qword_1801653A0 + 152) + 56LL);
        v32 = v9;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&stru_1801660B0);
        Root = (unsigned __int64)stru_1801662C8.Root;
        if ( ((__int64)stru_1801662C8.Min & 1) != 0 && stru_1801662C8.Root )
          Root = (unsigned __int64)&stru_1801662C8 ^ (unsigned __int64)stru_1801662C8.Root;
        while ( Root )
        {
          if ( (unsigned __int64)DllHandle >= *(_QWORD *)(Root - 152) )
          {
            if ( (unsigned __int64)DllHandle <= *(_QWORD *)(Root - 152) )
            {
              v16 = Root - 200;
              v24 = *(_QWORD *)(Root - 200 + 152);
              if ( *(_DWORD *)(v24 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v24 - 56LL) & 0x20) == 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v16 + 276));
                v24 = *(_QWORD *)(v16 + 152);
              }
              v9 = *(_DWORD *)(v24 + 56);
              v32 = v9;
              break;
            }
            v18 = *(_QWORD *)(Root + 8);
          }
          else
          {
            v18 = *(_QWORD *)Root;
          }
          if ( ((__int64)stru_1801662C8.Min & 1) != 0 && v18 )
            Root ^= v18;
          else
            Root = v18;
        }
        RtlReleaseSRWLockExclusive(&stru_1801660B0);
      }
      if ( !v16 )
        break;
      v19 = 0;
      v9 = v32;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v32 >= v34 )
        goto LABEL_28;
      sub_18001B678((PVOID)v16);
      if ( v32 < 0 )
      {
        v16 = 0LL;
        v19 = -1073741811;
        goto LABEL_28;
      }
      sub_18002E73C(0LL);
      sub_180073E1C();
    }
    v19 = -1073741515;
LABEL_28:
    v20 = v33;
    goto LABEL_29;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v14 + 16));
  v16 = v15[14];
  v19 = 0;
  v13 = v15;
  v20 = 3;
LABEL_29:
  v21 = v35;
  if ( v16 )
  {
    v19 = sub_18001B784(v16, (_DWORD)Heap, v35, v20, (__int64)&v31);
    if ( v19 >= 0 )
    {
      if ( v9 == 7
        && !Flagsa
        && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
        && !RtlIsCriticalSectionLockedByThread(&stru_18015F3F0) )
      {
        v27 = *(_QWORD *)(v16 + 152);
        v30[0] = 0;
        v19 = sub_180069778(v27, 0LL, v30);
      }
      if ( v19 < 0 )
      {
        v31 = 0LL;
      }
      else if ( !v13 )
      {
        v22 = v37;
        if ( byte_18017A298 )
          sub_1800D89D0((_DWORD)v37, *(_QWORD *)(v16 + 48), (_DWORD)v31, 0, (__int64)&v31);
        if ( byte_180166014 )
        {
          v38 = 0LL;
          v28 = v22;
          v26 = v31;
          ((void (__fastcall *)(char **, __int64, char *, _QWORD, PVOID *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                                   qword_18017A1F0,
                                                                                                   64
                                                                                                 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
            &v38,
            v16,
            v31,
            0LL,
            v28);
          if ( v38 )
            v26 = v38;
          v31 = v26;
        }
      }
    }
    if ( v19 == -1073741515 || v19 == -1073741502 )
      v19 = -1073741702;
    if ( v13 )
      sub_1800CDB44(v13);
    else
      sub_18001B678((PVOID)v16);
  }
  if ( v13 && v19 >= 0 )
    v31 += *(_QWORD *)(v16 + 184) - *(_QWORD *)(v16 + 48);
  if ( v19 == -1073741702 )
  {
    v25 = (char *)v21;
    v19 = (Heap != 0LL) - 1073741512;
    if ( Heap )
      v25 = Heap;
    Heap = v25;
    sub_18006F388(0LL, v25, (unsigned int)v19);
  }
  if ( v29 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !dword_180165428
    && v19 >= 0
    && sub_18001AE58()
    && (unsigned int)sub_18005575C(v31, v36) != 1
    && (v36[0] & 0x10) != 0 )
  {
    v19 = sub_18005521C(v31, 4LL, v39);
    if ( v19 < 0 )
      __fastfail(0x2Eu);
  }
  *v40 = v31;
  return v19;
}
