/*
 * XREFs of ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00BBC28
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(VIDMM_MEMORY_SEGMENT *this, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *v8; // rax

  v2 = *((unsigned int *)this + 124);
  if ( (_DWORD)v2 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[7] = 0LL;
    v4[3] = 270LL;
    v4[4] = 59LL;
    v4[5] = this;
    v4[6] = v2;
    WdLogEvent5_WdCriticalError(v4);
  }
  v5 = *((_QWORD *)this + 61);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 + 56);
    v7 = *(unsigned int *)(v5 + 60);
    if ( (_DWORD)v6 != (_DWORD)v7 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v8[3] = 270LL;
      v8[4] = 60LL;
      v8[5] = v5;
      v8[6] = v6;
      v8[7] = v7;
      WdLogEvent5_WdCriticalError(v8);
    }
  }
}
