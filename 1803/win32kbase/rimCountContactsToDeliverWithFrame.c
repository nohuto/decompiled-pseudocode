/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C00F950C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C0106CD0 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int128 v12; // xmm2
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  __int64 ButtonContact; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int128 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  _BYTE v24[32]; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v22, a1);
  v7 = *(_QWORD *)(active + 16);
  v20 = *(_OWORD *)active;
  v21 = v7;
  while ( 1 )
  {
    v8 = RIMCmActiveContactsEnd((__int64)v24, a1);
    v11 = v21;
    v12 = *(_OWORD *)v8;
    v13 = *(_QWORD *)(v8 + 16);
    v14 = *(_QWORD *)v8;
    v23 = v13;
    v22 = v12;
    LOBYTE(ButtonContact) = (_QWORD)v20 != v14 || DWORD2(v20) != DWORD2(v22) || v21 != v23;
    if ( !(_BYTE)ButtonContact )
      break;
    v16 = *(_DWORD *)(v21 + 16);
    if ( (v16 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
      v16 = *(_DWORD *)(v11 + 16);
    }
    if ( (v16 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    if ( (*(_DWORD *)(v11 + 2304) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v20);
  }
  if ( !*a2 )
  {
    ButtonContact = RIMCmGetButtonContact(a1);
    if ( ButtonContact )
    {
      v18 = *(unsigned int *)(ButtonContact + 32);
      if ( (v18 & 2) != 0 )
      {
        LODWORD(ButtonContact) = *(_DWORD *)(ButtonContact + 2320);
        if ( (ButtonContact & 1) != 0 )
        {
          if ( (v18 & 4) == 0 )
            LOBYTE(ButtonContact) = MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return ButtonContact;
}
