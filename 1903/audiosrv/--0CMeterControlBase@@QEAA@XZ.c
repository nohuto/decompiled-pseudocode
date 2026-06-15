/*
 * XREFs of ??0CMeterControlBase@@QEAA@XZ @ 0x180060D7C
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060758 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::CMeterControlBase(CMeterControlBase *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CMeterControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids, this);
  }
  return this;
}
