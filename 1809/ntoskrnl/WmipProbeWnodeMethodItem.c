/*
 * XREFs of WmipProbeWnodeMethodItem @ 0x1406AB3DC
 * Callers:
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 * Callees:
 *     WmipProbeWnodeWorker @ 0x1406AB44C (WmipProbeWnodeWorker.c)
 */

__int64 __fastcall WmipProbeWnodeMethodItem(_DWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v6; // eax

  if ( a2 < 0x44 )
    return 3221225473LL;
  result = WmipProbeWnodeWorker(a1, 68LL, (unsigned int)a1[12], (unsigned int)a1[15], a1[16], a2, a3, 1, 1);
  if ( (int)result < 0 )
    return result;
  v6 = a1[11];
  if ( (v6 & 0x8000) == 0 || a2 != *a1 || (v6 & 0xFFFF7F7F) != 0 )
    return 3221225473LL;
  return 0LL;
}
