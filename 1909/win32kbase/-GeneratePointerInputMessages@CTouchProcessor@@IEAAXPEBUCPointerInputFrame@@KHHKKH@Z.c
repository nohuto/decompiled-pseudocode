/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01666FC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C016596C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0172750 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0174DE4 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct _KTHREAD **v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int *i; // rbx
  CTouchProcessor *v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-D8h]
  _BYTE v18[121]; // [rsp+50h] [rbp-A8h] BYREF
  int v19; // [rsp+C9h] [rbp-2Fh]
  __int16 v20; // [rsp+CDh] [rbp-2Bh]
  char v21; // [rsp+CFh] [rbp-29h]

  v9 = a3;
  v10 = a2;
  v11 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (struct _KTHREAD **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        214,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  if ( v11[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v12 = *((unsigned int *)v10 + 12);
  v13 = 0;
  for ( i = (unsigned int *)*((_QWORD *)v10 + 16); v13 < (unsigned int)v12; ++v13 )
  {
    v15 = (CTouchProcessor *)(*((_QWORD *)v10 + 16) + 496 * v12);
    if ( i >= (unsigned int *)v15 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, a2, a3);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v15, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      a3 = *i;
      if ( (a3 & 0x1000) == 0 )
      {
        a2 = (const struct CPointerInputFrame *)i[47];
        LOBYTE(v16) = (a6 & i[47]) == a6;
        if ( ((unsigned __int8)v16 & (((unsigned int)a2 & a7) == 0)) != 0 )
        {
          if ( (a3 & 0x80000) == 0
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, a2, a3), a3 = *i, (a3 & 0x80000) == 0) )
          {
            v19 = 0;
            v20 = 0;
            v21 = 0;
            memset(v18, 0, sizeof(v18));
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (CTouchProcessor *)v11,
                                  (__int64)i,
                                  *((_QWORD *)i + 2),
                                  v10,
                                  0,
                                  v9,
                                  a4,
                                  a5,
                                  (CInputDest *)v18)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a2) = 2;
              WPP_RECORDER_SF_LL(
                *((unsigned __int16 *)i + 90),
                (_DWORD)a2,
                a3,
                215,
                v17,
                *((_WORD *)i + 90),
                *((_WORD *)i + 84));
            }
          }
        }
      }
    }
    v12 = *((unsigned int *)v10 + 12);
    i += 124;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        216,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
}
