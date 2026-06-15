/*
 * XREFs of IndexOfInstalledAppService @ 0x18010FF38
 * Callers:
 *     HasEndpointProtectionOverride @ 0x18010FBB4 (HasEndpointProtectionOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexOfInstalledAppService(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r11d
  _WORD *v4; // rdx
  unsigned int v5; // r9d
  __int64 v6; // r10
  __int64 v7; // rax

  v3 = -1;
  v4 = (_WORD *)(a3 + 28);
  v5 = 0;
  while ( 1 )
  {
    v6 = 288LL * v5;
    v7 = *a1 - *(_QWORD *)(v6 + a3);
    if ( *a1 == *(_QWORD *)(v6 + a3) )
      v7 = a1[1] - *(_QWORD *)(v6 + a3 + 8);
    if ( !v7 && *((_DWORD *)v4 - 2) && *v4 && v4[65] )
      break;
    ++v5;
    v4 += 144;
    if ( v5 >= 6 )
      return v3;
  }
  return v5;
}
