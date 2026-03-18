/*
 * XREFs of ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x1800D7C70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalInputManager::ResetInputThreadMmcss(CGlobalInputManager *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v1 = *((_QWORD *)this + 32);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 24) || !*(_QWORD *)(v1 + 8) )
    {
      v2 = -2147467260;
      MilInstrumentationCheckHR_MaybeFailFast(v1, 0LL, 0, 0x80004004, 0x164u, 0LL);
      return v2;
    }
    SetEvent(*(HANDLE *)(v1 + 112));
  }
  return 0;
}
