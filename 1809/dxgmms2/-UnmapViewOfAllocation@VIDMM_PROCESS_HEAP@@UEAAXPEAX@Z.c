/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C00C4D20
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0059484 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, _DWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // eax
  GUID *v8; // rbx
  void *CurrentProcess; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2) != v3 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
    v6[5] = 0LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 30LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  v7 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    v8 = (GUID *)*((_QWORD *)a2 + 11);
    if ( (v7 & 1) != 0 )
    {
      CurrentProcess = (void *)PsGetCurrentProcess(v5, v4);
      VidMmUnmapViewAsync(CurrentProcess, *((PVOID *)a2 + 4), v8);
    }
    else
    {
      v10 = PsGetCurrentProcess(v5, v4);
      MmUnmapViewOfSection(v10, v8);
    }
    *a2 &= ~2u;
LABEL_13:
    *((_QWORD *)a2 + 11) = 0LL;
    return;
  }
  if ( (v7 & 4) != 0 )
  {
    if ( (v7 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, *((PVOID *)a2 + 4), *((GUID **)a2 + 11));
    else
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 11));
    *a2 &= ~4u;
    goto LABEL_13;
  }
  v11 = WdLogNewEntry5_WdAssertion(v5, v4);
  *(_QWORD *)(v11 + 24) = 2511LL;
  WdLogEvent5_WdAssertion(v11);
}
