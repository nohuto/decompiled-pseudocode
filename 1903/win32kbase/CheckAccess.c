/*
 * XREFs of CheckAccess @ 0x1C002C1C0
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C011D260 (NtUserSystemParametersInfo.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016F63C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckAccess(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // eax
  bool result; // al

  result = 1;
  if ( UIPrivelegeIsolation::fEnforce && *a1 <= *a2 )
  {
    if ( *a1 != *a2 )
      return 0;
    v2 = a1[1];
    v3 = a2[1];
    if ( v2 != v3 && v3 != -1 && v2 != -1 )
      return 0;
  }
  return result;
}
