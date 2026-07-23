/*
 * XREFs of PopDiagTraceBatteryTriggerFlags @ 0x14071B684
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopResetCBTriggers @ 0x140748E1C (PopResetCBTriggers.c)
 *     PopRecalculateCBTriggerLevels @ 0x14086EE30 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

int __fastcall PopDiagTraceBatteryTriggerFlags(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // r9
  int v4; // r11d
  __int64 v5; // rcx
  const CHAR *v6; // r10
  bool v7; // cl
  bool v8; // r8
  bool v10; // [rsp+30h] [rbp-49h] BYREF
  bool v11; // [rsp+31h] [rbp-48h] BYREF
  char v12; // [rsp+32h] [rbp-47h] BYREF
  char v13; // [rsp+33h] [rbp-46h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  bool *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  bool *v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  char *v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+1Fh]
  char *v23; // [rsp+A0h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]
  int *v25; // [rsp+B0h] [rbp+37h]
  __int64 v26; // [rsp+B8h] [rbp+3Fh]

  v2 = *a1;
  v3 = unk_1404189E0 & 1;
  v4 = dword_140418B30;
  if ( (unsigned int)v2 < 4 )
  {
    v5 = (unsigned int)v2;
    v6 = IndexToActionName[v2];
    if ( (unsigned int)v2 <= 1 )
    {
      LODWORD(v2) = *(_DWORD *)(a2 + 4);
      if ( (_DWORD)v2 != PopBatteryTriggerCachedFlags[v5] )
      {
        PopBatteryTriggerCachedFlags[v5] = v2;
        v7 = (v2 & 0x80) != 0;
        v8 = (v2 & 2) != 0;
        LODWORD(v2) = v2 & 1;
        if ( pCallbackContext.LevelPlus1 > 5 )
        {
          v10 = v7;
          v11 = v8;
          v12 = v2;
          v13 = v3;
          v14 = v4;
          TlgCreateSz(&pDesc, v6);
          v18 = 1LL;
          v19 = &v11;
          v17 = &v10;
          v21 = &v12;
          v23 = &v13;
          v25 = &v14;
          v20 = 1LL;
          v22 = 1LL;
          v24 = 1LL;
          v26 = 4LL;
          LODWORD(v2) = TlgWrite(&pCallbackContext, &unk_140370A8A, 0LL, 0LL, 8u, &pData);
        }
      }
    }
  }
  return v2;
}
