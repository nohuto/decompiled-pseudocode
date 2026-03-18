/*
 * XREFs of ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0254334
 * Callers:
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C024ED80 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C025326C (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C02538F0 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x1C0253B9C (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0254164 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C025459C (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0254EA4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C0254F3C (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C02550E4 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0255434 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::QueueAndGenerateInput(
        InteractiveControlDevice *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  __int64 v3; // r12
  unsigned __int8 *v4; // rsi
  int Messages; // edi
  InteractiveControlInput *v7; // rbx
  unsigned __int8 *v8; // r13
  InteractiveControlInput *v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r15d
  struct InteractiveControlInput *v13; // [rsp+30h] [rbp-69h] BYREF
  int v14; // [rsp+38h] [rbp-61h] BYREF
  struct tagWND *updated; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  const char *v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  struct InteractiveControlInput **v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  struct tagWND **v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  struct InteractiveControlInput **v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]

  v3 = *((unsigned __int16 *)this + 40);
  v4 = a2;
  v13 = 0LL;
  Messages = 0;
  v7 = 0LL;
  if ( a3 % (unsigned int)v3 )
  {
    Messages = -1073739509;
    if ( dword_1C0321308 > 2u )
    {
      v18 = 74LL;
      v17 = "InteractiveControlDevice::QueueAndGenerateInput -> Invalid report length.";
      v21 = &updated;
      v19 = (struct InteractiveControlInput **)&v14;
      v23 = &v13;
      v14 = -1073739509;
      v20 = 4LL;
      LODWORD(updated) = a3;
      v22 = 4LL;
      LODWORD(v13) = v3;
      v24 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E9779, 0LL, 0LL, 6u, &pData);
    }
  }
  else
  {
    v8 = &a2[a3];
    if ( a2 < v8 )
    {
      while ( 1 )
      {
        if ( !v7 )
        {
          v9 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
          v7 = v9 ? InteractiveControlInput::InteractiveControlInput(v9, this) : 0LL;
          if ( !v7 )
            return (unsigned int)-1073741670;
        }
        Messages = InteractiveControlInput::ParseInputReport(v7, v4, v3);
        if ( Messages < 0 )
          break;
        InteractiveControlDevice::GetPreviousInputReport(this, 0LL, (struct _LIST_ENTRY **)&v13);
        v10 = InteractiveControlDevice::DetermineMessageCreationFlags(this, v13, v7);
        v11 = v10;
        if ( v10 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v10);
          InteractiveControlDevice::PerformInputActions(this, v7, v11);
          InteractiveControlDevice::QueueInput(this, 0LL, v7);
          if ( !*((_DWORD *)this + 91) )
            Messages = InteractiveControlInput::GenerateMessages(v7, updated, *((unsigned int *)this + 16), v11);
          v7 = 0LL;
        }
        v4 += v3;
        if ( v4 >= v8 )
          goto LABEL_20;
      }
      if ( dword_1C0321308 > 2u )
      {
        v18 = 17LL;
        v17 = "Function failed.";
        v19 = &v13;
        v20 = 4LL;
        LODWORD(v13) = Messages;
        TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
      }
LABEL_20:
      if ( v7 )
        InteractiveControlInput::`scalar deleting destructor'(v7, 1);
    }
  }
  return (unsigned int)Messages;
}
