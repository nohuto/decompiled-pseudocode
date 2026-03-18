/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00830D8
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C0083090 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C00311F0 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 */

bool __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int16 v7; // ax
  bool v8; // bp
  struct CMouseProcessor::RawMouseEvent *v9; // rax

  v2 = (char *)this + 2408;
  RIMLockExclusive((__int64)this + 2408);
  v7 = *((_WORD *)this + 1201);
  v8 = v7 != 0;
  if ( v7 )
  {
    LOBYTE(v5) = 1;
    v9 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 96), v5, v6);
    if ( v9 )
      *((_QWORD *)v9 + 17) = a2;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
