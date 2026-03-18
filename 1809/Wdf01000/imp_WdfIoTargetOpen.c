/*
 * XREFs of imp_WdfIoTargetOpen @ 0x1C00658B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     FxIoTargetValidateOpenParams @ 0x1C0064CF0 (FxIoTargetValidateOpenParams.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00691B4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int v7; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  unsigned __int8 v9; // dl
  int v10; // r8d
  size_t Size; // rsi
  unsigned int v12; // edi
  unsigned int v13; // eax
  _DWORD v14[36]; // [rsp+40h] [rbp-A8h] BYREF
  ULONG_PTR retaddr; // [rsp+E8h] [rbp+0h]
  FxIoTargetRemote *pTarget; // [rsp+F0h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1201u,
    (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x14u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  if ( !OpenParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v7, 0xDu);
    Size = OpenParams->Size;
    if ( (((_DWORD)Size - 120) & 0xFFFFFFEF) != 0 )
    {
      v12 = -1073741820;
      WPP_IFR_SF_DDd(
        m_Globals,
        v9,
        v10 + 1,
        v10 + 8,
        WPP_FxIoTargetAPI_cpp_Traceguids,
        Size,
        IsVersionGreaterThanOrEqualTo ? 136 : 120,
        -1073741820);
      return v12;
    }
    if ( (unsigned int)Size < 0x88 )
    {
      memset(v14, 0, 0x88uLL);
      memmove(v14, OpenParams, Size);
      v14[0] = 136;
      OpenParams = (_WDF_IO_TARGET_OPEN_PARAMS *)v14;
    }
    result = FxIoTargetValidateOpenParams(m_Globals, OpenParams);
    if ( (int)result >= 0 )
    {
      v13 = FxIoTargetRemote::Open(pTarget, OpenParams);
      v12 = v13;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qL(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v13);
      return v12;
    }
  }
  return result;
}
