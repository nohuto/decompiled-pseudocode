/*
 * XREFs of WmipCreateGuidObject @ 0x140612BC8
 * Callers:
 *     WmipOpenGuidObject @ 0x140612B2C (WmipOpenGuidObject.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406132D0 (WmipGetGuidSecurityDescriptor.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall WmipCreateGuidObject(__int64 a1, unsigned int a2, _OWORD *a3, _QWORD *a4)
{
  int GuidSecurityDescriptor; // ebx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  void *v11; // rdi
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  char *v14; // rsi
  __int64 v16; // [rsp+28h] [rbp-E0h]
  char *Event; // [rsp+58h] [rbp-B0h] BYREF
  PRKEVENT Event_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+78h] [rbp-90h]
  int v21; // [rsp+7Ch] [rbp-8Ch]
  void *v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+A8h] [rbp-60h] BYREF
  char v26[224]; // [rsp+148h] [rbp+40h] BYREF

  RtlInitUnicodeString(&DestinationString, (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 18LL));
  GuidSecurityDescriptor = WmipGetGuidSecurityDescriptor(&DestinationString, &Event);
  if ( GuidSecurityDescriptor >= 0 )
  {
    v9 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)Event_8 = *(_OWORD *)a1;
    v10 = *(_OWORD *)(a1 + 32);
    v11 = Event;
    v21 = HIDWORD(v9);
    v19 = 0LL;
    v23 = *((_QWORD *)&v10 + 1);
    v22 = Event;
    v20 = 640;
    GuidSecurityDescriptor = SeCreateAccessState(&AccessState, v26, a2, &WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v12 = *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken;
      v13 = *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken;
      AccessState.SubjectSecurityContext = WmipSystemSubjectContext;
      GuidSecurityDescriptor = ObCreateObjectEx(0, WmipGuidObjectType, (int)Event_8, 0, v16, 168, 0, 0, &Event, 0LL);
      if ( GuidSecurityDescriptor >= 0 )
      {
        v14 = Event;
        memset(Event, 0, 0xA8uLL);
        KeInitializeEvent((PRKEVENT)v14, NotificationEvent, 0);
        *((_DWORD *)v14 + 28) = 4096;
        *((_DWORD *)v14 + 36) = 4096;
        *(_OWORD *)(v14 + 24) = *a3;
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
    if ( v11 && v11 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
