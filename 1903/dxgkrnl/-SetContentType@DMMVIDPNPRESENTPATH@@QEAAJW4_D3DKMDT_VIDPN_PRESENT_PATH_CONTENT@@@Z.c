/*
 * XREFs of ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000E770
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000E598 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02B5480 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetContentType(DMMVIDPNPRESENTPATH *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  v3 = (int)a2;
  if ( (int)a2 > 0 && ((_DWORD)a2 == 255 || (int)a2 <= 2) )
  {
    *((_DWORD *)this + 41) = a2;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v5 + 24) = v3;
    WdLogEvent5_WdError(v5);
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = v3;
    WdLogEvent5_WdWarning(v9);
    return 3223192398LL;
  }
}
