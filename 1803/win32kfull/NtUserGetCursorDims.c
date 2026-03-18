/*
 * XREFs of NtUserGetCursorDims @ 0x1C00FCA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetCursorDims(_DWORD *a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // ecx
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  v4 = 0;
  v5 = &gfCursorSizeNeeded;
  do
  {
    if ( *v5 )
      v3 = (1 << v4) | (unsigned int)v3;
    ++v4;
    ++v5;
  }
  while ( v4 < 5 );
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  *a1 = v3;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress, v6, v3, v2);
  return 1LL;
}
