/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140040FB8
 * Callers:
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14004078C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140040B84 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041160 (McTemplateU0pqpqqqqqq.c)
 *     WPP_SF_PP @ 0x14004125C (WPP_SF_PP.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // ebx
  HANDLE v9; // rax
  unsigned __int64 v10; // rdx
  HANDLE v11; // rax
  ULONG_PTR MaximumWorkingSetSize; // [rsp+68h] [rbp-39h] BYREF
  ULONG_PTR MinimumWorkingSetSize; // [rsp+70h] [rbp-31h] BYREF
  DWORD Flags[4]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+7h]

  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess < 0 )
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
    goto LABEL_3;
  }
  v9 = GetCurrentProcess();
  if ( !GetProcessWorkingSetSizeEx(v9, &MinimumWorkingSetSize, &MaximumWorkingSetSize, Flags)
    || (v10 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL,
        MaximumWorkingSetSize += v10 + v17 - MinimumWorkingSetSize,
        MinimumWorkingSetSize = v17 + v10,
        v11 = GetCurrentProcess(),
        !SetProcessWorkingSetSizeEx(v11, MinimumWorkingSetSize, MaximumWorkingSetSize, 0)) )
  {
    LastError = GetLastError();
LABEL_3:
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_13;
  }
  v6 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_PP(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v7, MinimumWorkingSetSize, MaximumWorkingSetSize);
  }
  v8 = 0;
LABEL_13:
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqpqqqqqq(v6, v5, v7, 14, 0, 0, 0, 0);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_c24c675c748835426e52a853535e2bbd_Traceguids, v8);
  }
  return v8;
}
