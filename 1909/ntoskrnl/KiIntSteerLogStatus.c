/*
 * XREFs of KiIntSteerLogStatus @ 0x1402B1A08
 * Callers:
 *     KiIntSteerEventTraceControlCallback @ 0x14078CFF0 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KiIntSteerLogProc @ 0x14009E818 (KiIntSteerLogProc.c)
 *     KiIntSteerLogState @ 0x14017D0C0 (KiIntSteerLogState.c)
 *     KiIntSteerEtwEventEnabled @ 0x14017D128 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogStatus(char a1)
{
  REGHANDLE v1; // rdi
  const EVENT_DESCRIPTOR *v2; // rbx
  const EVENT_DESCRIPTOR *v4; // r15
  ULONG_PTR v5; // rax
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  int *v10; // [rsp+50h] [rbp-19h]
  int v11; // [rsp+58h] [rbp-11h]
  int v12; // [rsp+5Ch] [rbp-Dh]
  int *v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  int *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  __int64 *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]

  v1 = KiIntSteerEtwHandle;
  v2 = &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  if ( KiIntSteerEtwHandle && EtwEventEnabled(KiIntSteerEtwHandle, v2) )
  {
    UserData.Reserved = 0;
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v10 = &KiIntTrackRootCount;
    v13 = &KiIntSteerMaskCount;
    v16 = &KiIntSteerMask;
    v19 = qword_140446B68;
    UserData.Size = 4;
    v11 = 4;
    v14 = 4;
    v17 = 2;
    v20 = 160 * (unsigned __int16)KiIntSteerMask;
    EtwWriteEx(v1, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  KiIntSteerLogProc(a1);
  v4 = &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v4 = &PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  LOBYTE(v5) = KiIntSteerEtwEventEnabled(v4);
  if ( (_BYTE)v5 )
  {
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      if ( !a1 )
      {
        v5 = i[20];
        if ( i[22] == v5 )
          continue;
      }
      for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
        LOBYTE(v5) = KiIntSteerLogState((__int64)j, v4);
    }
  }
  return v5;
}
