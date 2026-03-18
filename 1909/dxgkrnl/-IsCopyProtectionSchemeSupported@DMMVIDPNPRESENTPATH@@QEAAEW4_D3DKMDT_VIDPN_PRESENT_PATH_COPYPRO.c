/*
 * XREFs of ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000EFAC
 * Callers:
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000EF5C (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C0129C74 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // rax

  v2 = (int)a2;
  switch ( (_DWORD)a2 )
  {
    case 1:
      LOBYTE(v3) = *((_BYTE *)this + 168);
      return v3 & 1;
    case 2:
      v3 = *((_DWORD *)this + 42) >> 1;
      return v3 & 1;
    case 3:
      v3 = *((_DWORD *)this + 42) >> 2;
      return v3 & 1;
  }
  v5 = WdLogNewEntry5_WdError(this, a2, (unsigned int)(a2 - 2));
  *(_QWORD *)(v5 + 24) = v2;
  WdLogEvent5_WdError(v5);
  return 0;
}
