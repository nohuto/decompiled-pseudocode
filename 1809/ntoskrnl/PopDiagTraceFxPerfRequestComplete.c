/*
 * XREFs of PopDiagTraceFxPerfRequestComplete @ 0x1402E1450
 * Callers:
 *     PopFxCompleteComponentPerfState @ 0x1402D7BA8 (PopFxCompleteComponentPerfState.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxPerfRequestComplete(__int64 *a1, unsigned __int8 a2)
{
  REGHANDLE v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  int *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED) )
    {
      v5 = *a1;
      v6 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = v6 + 48;
      v9 = v5 + 16;
      v7 = a2;
      v12 = &v7;
      v10 = 4;
      v13 = 4;
      UserData.Size = 8;
      EtwWriteEx(v4, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
