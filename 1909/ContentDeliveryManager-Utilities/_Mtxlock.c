/*
 * XREFs of _Mtxlock @ 0x1800B6958
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800AEA54 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
