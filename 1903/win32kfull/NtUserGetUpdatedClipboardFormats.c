/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C022F210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CountNumClipFormatForIL @ 0x1C00B7BA8 (CountNumClipFormatForIL.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00B7C20 (CheckClipboardAccessForIntegrityLevel.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 *     IsFmtBlocked @ 0x1C020E1D4 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // r12d
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  unsigned int v18; // r15d
  __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // r10
  _DWORD *v22; // r8
  _DWORD *v23; // rdx
  int v25; // [rsp+20h] [rbp-58h]

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v6 = 0;
  EnterCrit(0LL, 1LL);
  v13 = CheckClipboardAccess(v8, v7, v9, v10);
  if ( v13 )
  {
    v14 = PsGetCurrentProcessWin32Process(v12, v11);
    v15 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v14 + 872), v13);
    v12 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    *a3 = v15;
    if ( v4 >= (unsigned int)v15 )
    {
      v17 = 0;
      v18 = 0;
      v25 = 0;
      while ( v17 < *(_DWORD *)(v13 + 104) && v18 < v4 )
      {
        v19 = 32LL * v17;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v19 + *(_QWORD *)(v13 + 96) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 872))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(v19 + *(_QWORD *)(v13 + 96))) )
        {
          v22 = (_DWORD *)(a1 + 4LL * v18);
          v23 = v22;
          if ( (unsigned __int64)v22 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = *v23;
          v12 = *(unsigned int *)(v19 + *(_QWORD *)(v13 + 96));
          *v22 = v12;
          v18 = ++v25;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v20, *(_QWORD *)(v19 + v21 + 20));
        }
        ++v17;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress, v15, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}
