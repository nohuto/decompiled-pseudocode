/*
 * XREFs of ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0211EB8
 * Callers:
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C020CD0C (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C0210EE0 (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C0211508 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x1C02117B4 (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0211CF8 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C021210C (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C021299C (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C0212A34 (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0212BDC (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0212F2C (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::QueueAndGenerateInput(
        InteractiveControlDevice *this,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 v4; // r12
  unsigned __int8 *v5; // rsi
  int Messages; // edi
  InteractiveControlInput *v8; // rbx
  unsigned __int8 *v9; // r13
  InteractiveControlInput *v10; // rax
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // r15d
  struct InteractiveControlInput *v16; // [rsp+30h] [rbp-69h] BYREF
  int v17; // [rsp+38h] [rbp-61h] BYREF
  struct tagWND *updated; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  const char *v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  struct InteractiveControlInput **v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  struct tagWND **v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  struct InteractiveControlInput **v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]

  v4 = *((unsigned __int16 *)this + 40);
  v5 = a2;
  v16 = 0LL;
  Messages = 0;
  v8 = 0LL;
  if ( (unsigned int)a3 % (unsigned int)v4 )
  {
    Messages = -1073739509;
    if ( dword_1C031C7D0 > 2u )
    {
      v21 = 74LL;
      v20 = "InteractiveControlDevice::QueueAndGenerateInput -> Invalid report length.";
      v24 = &updated;
      v22 = (struct InteractiveControlInput **)&v17;
      v26 = &v16;
      v17 = -1073739509;
      v23 = 4LL;
      LODWORD(updated) = (_DWORD)a3;
      v25 = 4LL;
      LODWORD(v16) = v4;
      v27 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E40C9, a3, a4, 6u, &pData);
    }
  }
  else
  {
    v9 = &a2[(unsigned int)a3];
    if ( a2 < v9 )
    {
      while ( 1 )
      {
        if ( !v8 )
        {
          v10 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
          v8 = v10 ? InteractiveControlInput::InteractiveControlInput(v10, this) : 0LL;
          if ( !v8 )
            return (unsigned int)-1073741670;
        }
        Messages = InteractiveControlInput::ParseInputReport(v8, v5, v4);
        if ( Messages < 0 )
          break;
        InteractiveControlDevice::GetPreviousInputReport(this, 0LL, (struct _LIST_ENTRY **)&v16);
        v13 = InteractiveControlDevice::DetermineMessageCreationFlags(this, v16, v8);
        v14 = v13;
        if ( v13 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v13);
          InteractiveControlDevice::PerformInputActions(this, v8, v14);
          InteractiveControlDevice::QueueInput(this, 0LL, v8);
          if ( !*((_DWORD *)this + 91) )
            Messages = InteractiveControlInput::GenerateMessages(v8, updated, *((unsigned int *)this + 16), v14);
          v8 = 0LL;
        }
        v5 += v4;
        if ( v5 >= v9 )
          goto LABEL_20;
      }
      if ( dword_1C031C7D0 > 2u )
      {
        v21 = 17LL;
        v20 = "Function failed.";
        v22 = &v16;
        v23 = 4LL;
        LODWORD(v16) = Messages;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v11, v12, 4u, &pData);
      }
LABEL_20:
      if ( v8 )
        InteractiveControlInput::`scalar deleting destructor'(v8, 1);
    }
  }
  return (unsigned int)Messages;
}
