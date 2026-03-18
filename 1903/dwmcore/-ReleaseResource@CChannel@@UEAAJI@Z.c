/*
 * XREFs of ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18003F960
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18003FA2C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::ReleaseResource(CChannel *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // edi
  unsigned int v6; // ecx
  _DWORD *v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2 || a2 >= *((_DWORD *)this + 7) || (v7 = (_DWORD *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v7) )
    v7 = 0LL;
  if ( !v7 || v7[2] )
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024890, 0x1B4u, 0LL);
  }
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr, v8);
  v9 = CHandleTable::ReleaseOnChannel((CChannel *)((char *)this + 16), this, a2);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x354u, 0LL);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v11;
}
