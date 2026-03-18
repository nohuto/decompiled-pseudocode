/*
 * XREFs of ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005F1C
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000576C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00E698C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01321DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 * Callees:
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008C5C (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00099F8 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
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
  v7 = WdLogNewEntry5_WdError(v6, v4, v5);
  *(_QWORD *)(v7 + 24) = *((int *)this + 28);
  WdLogEvent5_WdError(v7);
  return 0;
}
