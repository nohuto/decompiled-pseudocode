/*
 * XREFs of ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01B8548
 * Callers:
 *     ?RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ @ 0x1C010DE50 (-RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0017C90 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

void __fastcall _CleanupUnneededSystemCursorSizes(int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct tagCURSOR *v4; // rcx
  struct tagCURSOR *DPICursor; // rax
  struct tagCURSOR *v6; // rcx
  struct tagCURSOR *v7; // rdi
  __int64 ProcessWin32Process; // rax

  v1 = 0LL;
  v3 = 19LL;
  do
  {
    v4 = *(struct tagCURSOR **)(v1 + *(_QWORD *)gasyscur + 8);
    if ( v4 )
    {
      DPICursor = FindDPICursor(v4, a1);
      v7 = DPICursor;
      if ( DPICursor )
      {
        if ( DPICursor != v6 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
          FixupGlobalCursor(v7, ProcessWin32Process);
          _DestroyCursor(v7, 0LL);
        }
      }
    }
    v1 += 552LL;
    --v3;
  }
  while ( v3 );
}
