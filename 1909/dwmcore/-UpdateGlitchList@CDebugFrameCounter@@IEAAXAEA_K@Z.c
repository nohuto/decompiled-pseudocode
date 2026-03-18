/*
 * XREFs of ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180192150
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007134C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugFrameCounter::UpdateGlitchList(CDebugFrameCounter *this, unsigned __int64 *a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // r10

  v2 = *((_DWORD *)this + 1040);
  v3 = *((_DWORD *)this + 1041);
  if ( v2 != v3 )
  {
    v4 = *a2 - 10000000;
    do
    {
      if ( *((_QWORD *)this + v2 + 521) >= v4 )
        break;
      v2 = (v2 + 1) % 0x3C;
      *((_DWORD *)this + 1040) = v2;
    }
    while ( v2 != v3 );
  }
}
