/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K@Z @ 0x1C00C4240
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
  __int64 CurrentProcess; // rax
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v3 = (__int64 *)*((_QWORD *)this + 1);
  v16 = 0LL;
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
  v17 = v9;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C004D6B4);
    v13 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v13 + 24) = 2580LL;
    WdLogEvent5_WdLowResource(v13);
    return v16;
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  if ( (int)MmMapViewOfSection(v10, CurrentProcess, &v16, 0LL, v18, &v17, &v18, 2, 0, v11) < 0 )
    return v16;
  return v9 - v17 + v16;
}
