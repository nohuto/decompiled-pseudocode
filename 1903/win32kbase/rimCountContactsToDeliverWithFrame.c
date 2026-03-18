/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C014FC14
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C014F320 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x1C015B5FC (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C015B690 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C015B6E4 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C015BB5C (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  _BYTE v25[32]; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v23, a1);
  v7 = *(_QWORD *)(active + 16);
  v21 = *(_OWORD *)active;
  v22 = v7;
  while ( 1 )
  {
    v8 = RIMCmActiveContactsEnd(v25, a1);
    v12 = v22;
    v13 = *(_OWORD *)v8;
    v14 = *(_QWORD *)(v8 + 16);
    v15 = *(_QWORD *)v8;
    v24 = v14;
    v23 = v13;
    if ( (_QWORD)v21 == v15 )
    {
      result = DWORD2(v23);
      if ( DWORD2(v21) == DWORD2(v23) && v22 == v24 )
        break;
    }
    v17 = *(_DWORD *)(v22 + 16);
    if ( (v17 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      v17 = *(_DWORD *)(v12 + 16);
    }
    if ( (v17 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( (*(_DWORD *)(v12 + 2324) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v21);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      v20 = *(unsigned int *)(result + 32);
      if ( (v20 & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2340);
        if ( (result & 1) != 0 )
        {
          if ( (v20 & 4) == 0 )
            result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v18, v19);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
