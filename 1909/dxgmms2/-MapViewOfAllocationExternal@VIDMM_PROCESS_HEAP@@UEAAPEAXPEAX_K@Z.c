/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K@Z @ 0x1C00C6F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocationExternal(VIDMM_PROCESS_HEAP *this, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rax
  __int64 CurrentProcess; // rax
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = a3;
  v3 = (__int64 *)*((_QWORD *)this + 1);
  v19 = 0LL;
  v5 = *v3;
  if ( PsGetCurrentProcess(this, a2) != v5 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 30LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v9 = 0LL;
    v10 = a2[4];
    v11 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v12 = a2[1];
    v9 = a2[2];
    v11 = 4;
    v10 = *(_QWORD *)(v12 + 88);
    if ( ((*(_DWORD *)(v12 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v11 = 1028;
  }
  v20 = v9;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C004E6D4);
    v13 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v13 + 24) = 2584LL;
    WdLogEvent5_WdLowResource(v13);
    v15 = -1073741823;
LABEL_9:
    _InterlockedIncrement(&dword_1C004E6D4);
    v16 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdLowResource(v16);
    return v19;
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  v15 = MmMapViewOfSection(v10, CurrentProcess, &v19, 0LL, v21, &v20, &v21, 2, 0, v11);
  if ( v15 < 0 )
    goto LABEL_9;
  return v9 - v20 + v19;
}
