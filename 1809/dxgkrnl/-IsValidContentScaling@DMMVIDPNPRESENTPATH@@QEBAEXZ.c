/*
 * XREFs of ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000A7C4
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000A71C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D8960 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00D96B8 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 * Callees:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000EAE0 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000EBD4 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsValidContentScaling(DMMVIDPNPRESENTPATH *this)
{
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( *((_DWORD *)this + 28) == 254 || !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(this) )
    return 1;
  v3 = DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(this);
  v6 = *((unsigned int *)this + 28);
  if ( !v3 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v8 = WdLogNewEntry5_WdWarning(v6, v4, v5);
      *(_QWORD *)(v8 + 24) = *((int *)this + 28);
      WdLogEvent5_WdWarning(v8);
    }
    return 1;
  }
  if ( (((_DWORD)v6 - 1) & 0xFFFFFFFB) == 0 )
    return 1;
  v7 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v7 + 24) = *((int *)this + 28);
  WdLogEvent5_WdError(v7);
  return 0;
}
