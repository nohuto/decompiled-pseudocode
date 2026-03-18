/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C022EBF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CountNumClipFormatForIL @ 0x1C0059098 (CountNumClipFormatForIL.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C0059110 (CheckClipboardAccessForIntegrityLevel.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 *     IsFmtBlocked @ 0x1C020DF24 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // r12d
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // r15d
  __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // r10
  _DWORD *v18; // r8
  _DWORD *v19; // rdx
  int v21; // [rsp+20h] [rbp-58h]

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v6 = 0;
  EnterCrit(0LL, 1LL);
  v9 = CheckClipboardAccess();
  if ( v9 )
  {
    v10 = PsGetCurrentProcessWin32Process(v8, v7);
    v11 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v10 + 872), v9);
    v8 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    *a3 = v11;
    if ( v4 >= (unsigned int)v11 )
    {
      v13 = 0;
      v14 = 0;
      v21 = 0;
      while ( v13 < *(_DWORD *)(v9 + 104) && v14 < v4 )
      {
        v15 = 32LL * v13;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v15 + *(_QWORD *)(v9 + 96) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 872))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(v15 + *(_QWORD *)(v9 + 96))) )
        {
          v18 = (_DWORD *)(a1 + 4LL * v14);
          v19 = v18;
          if ( (unsigned __int64)v18 >= MmUserProbeAddress )
            v19 = (_DWORD *)MmUserProbeAddress;
          *v19 = *v19;
          v8 = *(unsigned int *)(v15 + *(_QWORD *)(v9 + 96));
          *v18 = v8;
          v14 = ++v21;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v16, *(_QWORD *)(v15 + v17 + 20));
        }
        ++v13;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress, v11, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
