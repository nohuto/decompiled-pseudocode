/*
 * XREFs of WmipCreateGuidObject @ 0x1405C10D8
 * Callers:
 *     WmipOpenGuidObject @ 0x1405C1030 (WmipOpenGuidObject.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1405C1430 (WmipGetGuidSecurityDescriptor.c)
 *     SeCreateAccessState @ 0x1405D3E00 (SeCreateAccessState.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall WmipCreateGuidObject(__int128 *a1, unsigned int a2, _OWORD *a3, PRKEVENT *a4)
{
  int GuidSecurityDescriptor; // ebx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  PRKEVENT v11; // rdi
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  PRKEVENT v14; // rsi
  PRKEVENT Event; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+8Ch] [rbp-7Ch]
  PRKEVENT v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h]
  struct _ACCESS_STATE AccessState; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v25[224]; // [rsp+148h] [rbp+40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v25, 0, sizeof(v25));
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL) + 18LL));
  GuidSecurityDescriptor = WmipGetGuidSecurityDescriptor(&DestinationString, &Event);
  if ( GuidSecurityDescriptor >= 0 )
  {
    v9 = a1[1];
    v18 = *a1;
    v10 = a1[2];
    v11 = Event;
    v21 = HIDWORD(v9);
    v19 = 0LL;
    v23 = *((_QWORD *)&v10 + 1);
    v22 = Event;
    v20 = 640;
    GuidSecurityDescriptor = SeCreateAccessState(&AccessState, v25, a2, &WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v12 = *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken;
      v13 = *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken;
      AccessState.SubjectSecurityContext = WmipSystemSubjectContext;
      GuidSecurityDescriptor = ObCreateObjectEx(0, (_DWORD)WmipGuidObjectType, (unsigned int)&v18, 0);
      if ( GuidSecurityDescriptor >= 0 )
      {
        v14 = Event;
        memset(Event, 0, 0xA8uLL);
        KeInitializeEvent(v14, NotificationEvent, 0);
        LODWORD(v14[4].Header.WaitListHead.Blink) = 4096;
        v14[6].Header.LockNV = 4096;
        *(_OWORD *)&v14[1].Header.Lock = *a3;
        GuidSecurityDescriptor = ObInsertObjectEx(v14, &AccessState, 0, 0LL, 0LL);
        if ( GuidSecurityDescriptor >= 0 )
        {
          *a4 = v14;
          GuidSecurityDescriptor = 0;
        }
      }
      *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken = v12;
      *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken = v13;
      SepDeleteAccessState((__int64)&AccessState);
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    }
    if ( v11 && v11 != (PRKEVENT)WmipDefaultAccessSd )
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
