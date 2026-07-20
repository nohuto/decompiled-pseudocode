/*
 * XREFs of SmpStartCsr @ 0x140004B30
 * Callers:
 *     SmpApiCallback @ 0x140003860 (SmpApiCallback.c)
 *     SmpCreateInitialSession @ 0x14000D0F0 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpStopCsr @ 0x140001020 (SmpStopCsr.c)
 *     SmpExecuteCommand @ 0x1400017E8 (SmpExecuteCommand.c)
 *     SmpAllocateControlBlock @ 0x140002DBC (SmpAllocateControlBlock.c)
 *     SmpDereferenceKnownSubSys @ 0x14000478C (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x1400048D8 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140004968 (SmpReleaseControlBlock.c)
 *     SmpRecordControlBlock @ 0x140004DDC (SmpRecordControlBlock.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140004EA4 (SmpAllocateInitialCommandBuffer.c)
 *     SmpGetCoreProcessIds @ 0x14000CF04 (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     memset_0 @ 0x1400101EF (memset_0.c)
 */

__int64 __fastcall SmpStartCsr(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE *ControlBlock; // rax
  HANDLE *v4; // rbx
  int CoreProcessIds; // edi
  __int64 v6; // r8
  int v7; // eax
  int v8; // esi
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  NTSTATUS v11; // eax
  _BYTE *v13; // rcx
  int ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  _BYTE EventInformation[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+5Ch] [rbp-A4h]
  HANDLE Object[2]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v21; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ProcessHandle; // [rsp+78h] [rbp-88h]
  HANDLE ThreadHandle; // [rsp+80h] [rbp-80h]
  void *v24; // [rsp+88h] [rbp-78h]
  _BYTE v25[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v26; // [rsp+108h] [rbp+8h]
  int v27; // [rsp+110h] [rbp+10h]

  memset_0(&v21, 0, 0x68uLL);
  v2 = *(unsigned int *)(a1 + 48);
  BaseAddress = 0LL;
  v17 = 0LL;
  if ( (unsigned int)v2 < SmpNumberInitialSessions )
  {
    CoreProcessIds = SmpGetCoreProcessIds(v2, &BaseAddress);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(SmpCoreProcessIds + 40LL * *(unsigned int *)(a1 + 48));
    if ( CoreProcessIds >= 0 )
    {
      v13 = BaseAddress;
      if ( BaseAddress && *((_DWORD *)BaseAddress + 6) == 2 )
        *(_QWORD *)(a1 + 320) = *((_QWORD *)BaseAddress + 6);
      else
        CoreProcessIds = -1073741823;
      if ( v13 )
        SmpDereferenceKnownSubSys(v13);
      if ( CoreProcessIds >= 0 )
      {
        *(_QWORD *)(a1 + 312) = v17;
        return 0LL;
      }
      v27 = *(_DWORD *)(a1 + 48);
      v26 = 6;
      SmpStopCsr((__int64)v25);
      return (unsigned int)CoreProcessIds;
    }
  }
  NtWaitForSingleObject(SmpSessionCreateBlockEvent, 0, 0LL);
  UnicodeString.Length = *(_WORD *)(a1 + 52);
  UnicodeString.MaximumLength = UnicodeString.Length;
  UnicodeString.Buffer = (PWSTR)(a1 + 56);
  ControlBlock = (HANDLE *)SmpAllocateControlBlock();
  v4 = ControlBlock;
  if ( !ControlBlock )
    return 3221225626LL;
  CoreProcessIds = SmpAllocateInitialCommandBuffer(ControlBlock[3], &UnicodeString);
  if ( CoreProcessIds >= 0 )
  {
    CoreProcessIds = SmpExecuteCommand((__int64)&UnicodeString, 0, v6, 5152, (PRTL_USER_PROCESS_PARAMETERS)&v21);
    RtlFreeUnicodeString(&UnicodeString);
    if ( CoreProcessIds >= 0 )
    {
      v7 = NtQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
      CoreProcessIds = v7;
      if ( v7 >= 0 )
      {
        v8 = 1;
        v9 = v4[2];
        *v9 = v4[4];
        v9[1] = v4[5];
        v4[6] = ProcessHandle;
        v4[7] = v24;
        *((_DWORD *)v4 + 2) = ProcessInformation;
        v10 = _InterlockedIncrement(&dword_140026330);
        if ( v10 > SmpNumberInitialSessions )
          _InterlockedDecrement(&dword_140026330);
        else
          *(_DWORD *)(SmpCoreProcessIds + 40LL * (v10 - 1)) = ProcessInformation;
        *((_OWORD *)v4 + 4) = *(_OWORD *)a1;
        *((_OWORD *)v4 + 5) = *(_OWORD *)(a1 + 16);
        v4[12] = *(HANDLE *)(a1 + 32);
        SmpRecordControlBlock(v4);
        CoreProcessIds = NtResumeThread(ThreadHandle, 0LL);
        NtClose(ThreadHandle);
        if ( CoreProcessIds >= 0 )
        {
          Object[0] = v4[6];
          Object[1] = v4[4];
          v11 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
          CoreProcessIds = v11;
          if ( v11 < 0 )
          {
            if ( (*(_BYTE *)v4 & 1) != 0
              || (_m_prefetchw(v4), (_InterlockedOr((volatile signed __int32 *)v4, 1u) & 1) != 0) )
            {
              CoreProcessIds = 0;
            }
          }
          else
          {
            if ( v11 )
              goto LABEL_11;
            NtQueryEvent(v4[4], EventBasicInformation, EventInformation, 8u, 0LL);
            if ( !v19 )
            {
              if ( (*(_BYTE *)v4 & 1) == 0 )
                _InterlockedOr((volatile signed __int32 *)v4, 1u);
              v8 = 0;
              CoreProcessIds = -1073741823;
LABEL_31:
              SmpDestroyControlBlock(v4, v8);
              goto LABEL_26;
            }
            CoreProcessIds = NtClearEvent(v4[4]);
          }
LABEL_11:
          if ( CoreProcessIds >= 0 )
          {
            SmpReleaseControlBlock((char *)v4);
            return 259LL;
          }
          goto LABEL_31;
        }
        if ( (*(_BYTE *)v4 & 1) == 0 )
          _InterlockedOr((volatile signed __int32 *)v4, 1u);
        goto LABEL_31;
      }
      NtTerminateProcess(ProcessHandle, v7);
      NtClose(ProcessHandle);
      NtClose(ThreadHandle);
    }
  }
LABEL_26:
  SmpReleaseControlBlock((char *)v4);
  return (unsigned int)CoreProcessIds;
}
