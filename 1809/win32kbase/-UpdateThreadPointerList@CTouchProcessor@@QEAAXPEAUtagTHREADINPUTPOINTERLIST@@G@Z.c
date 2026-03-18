/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0063060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C013EFD8 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C0161B34 (ApiSetEditionFindThreadPointerData.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C0163A58 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebp
  struct tagTHREADINPUTPOINTERLIST *v9; // rdi
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 ThreadPointerData; // rdi
  struct tagTHREADINPUTPOINTERLIST *v15; // rax
  int v16; // r12d
  struct tagTHREADINPUTPOINTERLIST *v17; // rsi
  int v18; // ecx
  __int64 v20; // rcx
  __int64 v21; // r15
  _BYTE v22[48]; // [rsp+30h] [rbp-58h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Fu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v22,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  v8 = 0;
  if ( a3 == 1 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_6;
    v11 = 112;
    goto LABEL_10;
  }
  v9 = *(struct tagTHREADINPUTPOINTERLIST **)a2;
  if ( *(struct tagTHREADINPUTPOINTERLIST **)a2 == a2 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_6;
    v11 = 113;
LABEL_10:
    WPP_RECORDER_SF_(
      (__int64)v10->DeviceExtension,
      5u,
      0xBu,
      v11,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    goto LABEL_6;
  }
  v12 = 0LL;
  if ( a3 )
  {
    ThreadPointerData = ApiSetEditionFindThreadPointerData(a2, a3);
    if ( !ThreadPointerData )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v6, v7);
    v12 = *(_QWORD *)(ThreadPointerData + 24);
    v9 = *(struct tagTHREADINPUTPOINTERLIST **)a2;
  }
  while ( v9 != a2 )
  {
    v15 = v9;
    v16 = v8++;
    v17 = v9;
    v9 = *(struct tagTHREADINPUTPOINTERLIST **)v9;
    v6 = *((_QWORD *)v15 + 3);
    v18 = *((_DWORD *)v15 + 12);
    if ( v12 == v6 )
    {
      *((_DWORD *)v15 + 12) = v18 | 2;
    }
    else if ( (v18 & 2) != 0 && (!v6 || !v12 || *(_DWORD *)(v6 + 28) != *(_DWORD *)(v12 + 28)) )
    {
      if ( (unsigned int)CTouchProcessor::IsLastMsgData(this, v6) )
        goto LABEL_28;
      v21 = *((_QWORD *)v17 + 3);
      if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v6, v7);
      if ( (*(_DWORD *)(v21 + 36) & 0x20) != 0 )
      {
LABEL_28:
        ApiSetEditionUnlinkAndFreeThreadPointerData(a2, v17);
        v8 = v16;
      }
    }
  }
  if ( v8 != *((_DWORD *)a2 + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v6, v7);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x72u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
LABEL_6:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v22);
}
