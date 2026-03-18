/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00968DC
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C00968A0 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0031FA8 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // di
  struct CMouseProcessor::RawMouseEvent *v8; // rax

  v2 = (char *)this + 2656;
  RIMLockExclusive((__int64)this + 2656);
  if ( *((_WORD *)this + 1325) )
  {
    v7 = 1;
    LOBYTE(v5) = 1;
    v8 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 88), v5, v6);
    if ( v8 )
      *((_QWORD *)v8 + 19) = a2;
  }
  else
  {
    v7 = 0;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
