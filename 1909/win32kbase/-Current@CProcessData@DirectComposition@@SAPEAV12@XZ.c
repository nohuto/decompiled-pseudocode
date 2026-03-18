/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000CA90
 * Callers:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000C3E4 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000C6F8 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C000C9DC (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006CA98 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006D2F0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C006D5AC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C006F970 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0094114 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C01A0680 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProcessData *DirectComposition::CProcessData::Current(void)
{
  __int64 v0; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v0 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
    return *(struct DirectComposition::CProcessData **)(CurrentProcessWin32Process + 256);
  return (struct DirectComposition::CProcessData *)v0;
}
