/*
 * XREFs of ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C006BDE4
 * Callers:
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005EE64 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 */

void __fastcall VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v4 = (unsigned int)a2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)this + (unsigned int)a2 + 143));
  v5 = *((unsigned int *)this + v4 + 414);
  if ( (_DWORD)v5 != *((_DWORD *)this + v4 + 478) || *((_DWORD *)this + v4 + 542) != *((_DWORD *)this + v4 + 606) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2);
    v7[3] = 270LL;
    v7[4] = 33LL;
    v7[5] = this;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
    LODWORD(v5) = *((_DWORD *)this + v4 + 414);
  }
  v6 = *((_DWORD *)this + v4 + 542);
  *((_DWORD *)this + v4 + 958) = 0;
  *((_DWORD *)this + v4 + 1086) = v6;
  *((_DWORD *)this + v4 + 1022) = v5;
}
