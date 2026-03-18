/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C013A970
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01459B4 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0148078 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  unsigned int v9; // r13d
  const struct CPointerInputFrame *v10; // rdi
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned int *i; // rbx
  CTouchProcessor *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  int v19; // [rsp+20h] [rbp-118h]
  _BYTE v20[192]; // [rsp+50h] [rbp-E8h] BYREF

  v9 = a3;
  v10 = a2;
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD2u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a2, a3);
  v13 = *((unsigned int *)v10 + 12);
  v14 = 0;
  for ( i = (unsigned int *)*((_QWORD *)v10 + 13); v14 < (unsigned int)v13; ++v14 )
  {
    v16 = (CTouchProcessor *)(*((_QWORD *)v10 + 13) + 576 * v13);
    if ( i >= (unsigned int *)v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, a2, a3);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v16, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      a3 = *i;
      if ( (a3 & 0x1000) == 0 )
      {
        a2 = (const struct CPointerInputFrame *)i[61];
        LOBYTE(v17) = (a6 & i[61]) == a6;
        if ( ((unsigned __int8)v17 & (((unsigned int)a2 & a7) == 0)) != 0 )
        {
          if ( (a3 & 0x80000) == 0
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, a2, a3), a3 = *i, (a3 & 0x80000) == 0) )
          {
            memset(v20, 0, 0xB8uLL);
            v18 = *((_QWORD *)i + 2);
            v20[176] = 0;
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (__int64 *)this,
                                  (__int64)i,
                                  v18,
                                  v10,
                                  0,
                                  v9,
                                  a4,
                                  a5,
                                  (CInputDest *)v20) )
            {
              LOBYTE(a2) = 2;
              WPP_RECORDER_SF_LL(
                (unsigned int)this[1],
                (_DWORD)a2,
                a3,
                211,
                v19,
                *((_WORD *)i + 118),
                *((_WORD *)i + 112));
            }
          }
        }
      }
    }
    v13 = *((unsigned int *)v10 + 12);
    i += 144;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD4u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
}
