/*
 * XREFs of ?SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z @ 0x1C00455BC
 * Callers:
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x1C00445E0 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x1C0045154 (-DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ.c)
 *     ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x1C0045320 (-IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ.c)
 */

__int64 __fastcall FxCompanionTarget::SendTaskSynchronously(
        FxCompanionTarget *this,
        unsigned __int16 TaskType,
        unsigned int TaskOpCode,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        __int64 *Timeout,
        unsigned __int64 *BytesReturned)
{
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int Length; // r11d
  void *Buffer; // r10
  int v15; // r8d
  unsigned int v16; // ebx
  __int64 v18; // rcx
  const void *_a1; // rdx
  bool v20; // zf
  _FX_DRIVER_GLOBALS *v21; // rcx

  v12 = 0LL;
  if ( (int)FxCompanionTarget::IncrementPendingTaskCountWithFloor(this) < 0 )
  {
    v18 = *(_QWORD *)(v10 + 152);
    _a1 = (const void *)(v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = *(_WORD *)(v18 + 10) == 0;
    v21 = *(_FX_DRIVER_GLOBALS **)(v18 + 16);
    if ( v20 )
      _a1 = 0LL;
    WPP_IFR_SF_q(v21, 2u, 0xCu, 0xBu, WPP_FxCompanionTarget_cpp_Traceguids, _a1);
    if ( BytesReturned )
      *BytesReturned = 0LL;
    return 3221225860LL;
  }
  else
  {
    if ( OutputBuffer )
      Length = OutputBuffer->u.BufferType.Length;
    else
      Length = 0;
    if ( OutputBuffer )
      Buffer = OutputBuffer->u.BufferType.Buffer;
    else
      Buffer = 0LL;
    if ( v11 )
      v15 = *(_DWORD *)(v11 + 16);
    else
      v15 = 0;
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 8);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, void *, unsigned int, __int64 *, unsigned __int64 *))(**(_QWORD **)(v10 + 144) + 8LL))(
            *(_QWORD *)(v10 + 144),
            TaskType,
            TaskOpCode,
            v12,
            v15,
            Buffer,
            Length,
            Timeout,
            BytesReturned);
    FxCompanionTarget::DecrementPendingTaskCount(this);
    return v16;
  }
}
