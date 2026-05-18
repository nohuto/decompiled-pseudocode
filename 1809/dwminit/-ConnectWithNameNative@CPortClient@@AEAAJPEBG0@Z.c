/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180004D50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800038A8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800050C0 (__security_check_cookie.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(CPortClient *this, const unsigned __int16 *a2, char *a3)
{
  DWORD v4; // ebx
  __int64 v6; // rdx
  _WORD *v7; // rcx
  __int16 v8; // ax
  _WORD *v9; // rax
  struct _PORT_VIEW *v10; // r9
  _DWORD *v11; // rax
  NTSTATUS v12; // eax
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[192]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( a3 )
  {
    ConnectionInformationLength = 188;
    v6 = 94LL;
    v7 = v17;
    do
    {
      if ( v6 == -2147483552 )
        break;
      v8 = *(_WORD *)((char *)v7 + a3 - v17);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v6;
    }
    while ( v6 );
    v9 = v7 - 1;
    if ( v6 )
      v9 = v7;
    *v9 = 0;
    v4 = v6 == 0 ? 0x8007007A : 0;
    if ( !v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v4, 0xF5u);
      return v4;
    }
  }
  else
  {
    ConnectionInformationLength = 0;
  }
  v10 = (struct _PORT_VIEW *)*((_QWORD *)this + 9);
  if ( !v10 )
  {
    if ( !*((_DWORD *)this + 15) )
      goto LABEL_18;
    v11 = HeapAlloc(*((HANDLE *)this + 10), 8u, 0x30uLL);
    *((_QWORD *)this + 9) = v11;
    if ( !v11 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, 0x8007000E, 0x102u);
      return v4;
    }
    *v11 = 48;
    *(_DWORD *)(*((_QWORD *)this + 9) + 16LL) = 0;
    *(_QWORD *)(*((_QWORD *)this + 9) + 24LL) = *((unsigned int *)this + 15);
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL) = *((_QWORD *)this + 8);
    v10 = (struct _PORT_VIEW *)*((_QWORD *)this + 9);
    if ( !v10 )
      goto LABEL_18;
  }
  if ( !v10->SectionHandle )
LABEL_18:
    v10 = 0LL;
  v12 = NtConnectPort(
          (PHANDLE)this + 6,
          &DestinationString,
          &SecurityQos,
          v10,
          0LL,
          0LL,
          (PVOID)((unsigned __int64)v17 & -(__int64)(a3 != 0LL)),
          &ConnectionInformationLength);
  if ( v12 >= 0 )
  {
    *((_BYTE *)this + 56) = 1;
  }
  else
  {
    v4 = v12 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      1u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      8LL,
      v12 | 0x10000000,
      0x113u);
  }
  return v4;
}
