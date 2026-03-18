/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0136898
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0146A94 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C013B0C8 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0143990 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v5; // esi
  __int16 v6; // r14
  PDEVICE_OBJECT v8; // rcx
  char *v9; // rbx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  _QWORD *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  char *v19; // rdi
  __int64 v20; // rax

  v5 = a3;
  v6 = a2;
  v8 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE9u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
  if ( v5 < 2 || v5 > 3 && v5 != 5 )
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 1),
      2u,
      0xBu,
      0xEAu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
      v5);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 235;
      goto LABEL_24;
    }
    return 0LL;
  }
  v9 = (char *)Win32AllocPoolZInit(0x150uLL, 0x70697355u);
  if ( !v9 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xECu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 237;
LABEL_24:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  *((_WORD *)v9 + 16) = CTouchProcessor::GetNextPointerId(this);
  *((_DWORD *)v9 + 10) = v5;
  *((_WORD *)v9 + 17) = v6;
  v12 = v9 + 16;
  *((_QWORD *)v9 + 37) = v9 + 288;
  *((_QWORD *)v9 + 36) = v9 + 288;
  *((_QWORD *)v9 + 35) = v9 + 272;
  *((_QWORD *)v9 + 34) = v9 + 272;
  *((_QWORD *)v9 + 40) = v9 + 312;
  *((_QWORD *)v9 + 39) = v9 + 312;
  *((_QWORD *)v9 + 1) = v9;
  *(_QWORD *)v9 = v9;
  *((_QWORD *)v9 + 3) = v9 + 16;
  *((_QWORD *)v9 + 2) = v9 + 16;
  v13 = *((_DWORD *)v9 + 82) & 0xFFFFF4BF;
  *((_WORD *)v9 + 152) = 0;
  *((_DWORD *)v9 + 9) = 0;
  *((_DWORD *)v9 + 82) = v13 | 0x480;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(this, a4, (struct CInputPointerNode *)v9) )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xEEu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    Win32FreePool((__int64)v9);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 239;
      goto LABEL_24;
    }
    return 0LL;
  }
  if ( *((_DWORD *)v9 + 9) == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  v17 = (_QWORD *)((char *)this + 88);
  v18 = *((_QWORD *)this + 11);
  if ( *(CTouchProcessor **)(v18 + 8) != (CTouchProcessor *)((char *)this + 88)
    || (*(_QWORD *)v9 = v18,
        v19 = (char *)this + 104,
        *((_QWORD *)v9 + 1) = v17,
        *(_QWORD *)(v18 + 8) = v9,
        *v17 = v9,
        v20 = *(_QWORD *)v19,
        *(char **)(*(_QWORD *)v19 + 8LL) != v19) )
  {
    __fastfail(3u);
  }
  *v12 = v20;
  *((_QWORD *)v9 + 3) = v19;
  *(_QWORD *)(v20 + 8) = v12;
  *(_QWORD *)v19 = v12;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xF0u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return (struct CInputPointerNode *)v9;
}
