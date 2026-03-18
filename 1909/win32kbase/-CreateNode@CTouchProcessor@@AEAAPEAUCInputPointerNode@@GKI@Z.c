/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C01629E8
 * Callers:
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0162728 (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C017386C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0167588 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0170604 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v5; // edi
  __int16 v6; // r14
  CTouchProcessor *v7; // rsi
  int v8; // edx
  char *v9; // rbx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx

  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        241,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  if ( *((struct _KTHREAD **)v7 + 10) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( v5 < 2 || v5 > 3 && v5 != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, a2, 7, 242, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids, v5);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 243;
    goto LABEL_33;
  }
  v9 = (char *)Win32AllocPoolZInit(0x128uLL, 1885958997LL);
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v8, 7, 244, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 245;
LABEL_33:
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    return 0LL;
  }
  *((_WORD *)v9 + 16) = CTouchProcessor::GetNextPointerId(v7);
  *((_WORD *)v9 + 17) = v6;
  *((_DWORD *)v9 + 14) = v5;
  *((_QWORD *)v9 + 32) = v9 + 248;
  v13 = v9 + 16;
  *((_QWORD *)v9 + 31) = v9 + 248;
  *((_QWORD *)v9 + 30) = v9 + 232;
  *((_QWORD *)v9 + 29) = v9 + 232;
  *((_QWORD *)v9 + 35) = v9 + 272;
  *((_QWORD *)v9 + 34) = v9 + 272;
  *((_QWORD *)v9 + 1) = v9;
  *(_QWORD *)v9 = v9;
  *((_QWORD *)v9 + 3) = v9 + 16;
  *((_QWORD *)v9 + 2) = v9 + 16;
  v14 = *((_DWORD *)v9 + 72) & 0xFFFFF4BF;
  *((_WORD *)v9 + 132) = 0;
  *((_DWORD *)v9 + 13) = 0;
  *((_DWORD *)v9 + 72) = v14 | 0x480;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(v7, a4, (struct CInputPointerNode *)v9) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 7, 246, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    Win32FreePool((__int64)v9);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 247;
    goto LABEL_33;
  }
  if ( *((_DWORD *)v9 + 13) == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  v18 = (_QWORD *)((char *)v7 + 120);
  v19 = *((_QWORD *)v7 + 15);
  if ( *(CTouchProcessor **)(v19 + 8) != (CTouchProcessor *)((char *)v7 + 120)
    || (*((_QWORD *)v9 + 1) = v18,
        *(_QWORD *)v9 = v19,
        *(_QWORD *)(v19 + 8) = v9,
        *v18 = v9,
        v20 = (_QWORD *)((char *)v7 + 136),
        v21 = *((_QWORD *)v7 + 17),
        *(CTouchProcessor **)(v21 + 8) != (CTouchProcessor *)((char *)v7 + 136)) )
  {
    __fastfail(3u);
  }
  *v13 = v21;
  *((_QWORD *)v9 + 3) = v20;
  *(_QWORD *)(v21 + 8) = v13;
  *v20 = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      7,
      248,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  return (struct CInputPointerNode *)v9;
}
