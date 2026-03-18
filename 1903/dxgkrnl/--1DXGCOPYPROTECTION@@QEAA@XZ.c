/*
 * XREFs of ??1DXGCOPYPROTECTION@@QEAA@XZ @ 0x1C022B2F8
 * Callers:
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0035C80 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCOPYPROTECTION::~DXGCOPYPROTECTION(DXGCOPYPROTECTION *this)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 12);
  v2[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
