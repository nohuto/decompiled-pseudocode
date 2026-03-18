/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C013C750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(CTouchProcessor *this, __int64 a2)
{
  PDEVICE_OBJECT v4; // rcx
  unsigned __int16 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *FrameById; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  CPointerInfoNode *v11; // rbx
  char *v12; // rbx
  CInpLockGuard *v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x133u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v14, (CTouchProcessor *)((char *)this + 56));
  if ( !a2 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 308;
LABEL_14:
      WPP_RECORDER_SF_(
        (__int64)v4->DeviceExtension,
        5u,
        0xBu,
        v5,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 309;
      goto LABEL_14;
    }
LABEL_15:
    v12 = 0LL;
    goto LABEL_19;
  }
  v10 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v10 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
    v10 = *(unsigned int *)(a2 + 32);
  }
  v11 = (CPointerInfoNode *)(FrameById[13] + 576 * v10);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v11) )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 310;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x137u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v12 = (char *)v11 + 232;
LABEL_19:
  if ( !v15 )
    CInpLockGuard::UnLock(v14);
  return (const struct tagPOINTER_INFO *)v12;
}
