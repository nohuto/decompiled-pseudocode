/*
 * XREFs of ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18009A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18009A614 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::ReleaseResource(CChannel *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = CHandleTable::ReleaseOnChannel((CChannel *)((char *)this + 16), this, a2);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x32Au);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
