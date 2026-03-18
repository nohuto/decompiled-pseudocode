/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C0217360
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C00DA0CC (CountNumClipFormatForIL.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00DA144 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01F7E38 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  ULONG64 v10; // rcx
  ULONG64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // r15d
  __int64 v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // r10
  int v21; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = 0;
  EnterCrit(0LL, 1LL);
  v13 = CheckClipboardAccess(v8, v7);
  if ( v13 )
  {
    v14 = PsGetCurrentProcessWin32Process(v10);
    v11 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v14 + 880), v13);
    v9 = (_DWORD *)MmUserProbeAddress;
    v10 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    *a3 = v11;
    if ( a2 >= (unsigned int)v11 )
    {
      v15 = 0;
      v16 = 0;
      v21 = 0;
      while ( v15 < *(_DWORD *)(v13 + 104) && v16 < a2 )
      {
        v17 = 32LL * v15;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v17 + *(_QWORD *)(v13 + 96) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 880))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(v17 + *(_QWORD *)(v13 + 96))) )
        {
          v11 = a1 + 4LL * v16;
          v9 = (_DWORD *)v11;
          if ( v11 >= MmUserProbeAddress )
            v9 = (_DWORD *)MmUserProbeAddress;
          *v9 = *v9;
          v10 = *(unsigned int *)(v17 + *(_QWORD *)(v13 + 96));
          *(_DWORD *)v11 = v10;
          v16 = ++v21;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v18, *(_QWORD *)(v17 + v19 + 20));
        }
        ++v15;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress, v11, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v6;
}
