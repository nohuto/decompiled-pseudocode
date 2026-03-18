/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x1400055C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x140002E30 (__security_check_cookie.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140005268 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(CPortClient *this, const unsigned __int16 *a2, char *a3)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  int v7; // eax
  struct _PORT_VIEW *v8; // r9
  _DWORD *v9; // rax
  unsigned __int16 *ConnectionInformation; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // esi
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-118h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-110h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-100h] BYREF
  char v17[192]; // [rsp+70h] [rbp-E8h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( a3 )
  {
    ConnectionInformationLength = 188;
    v7 = StringCchCopyW(v17, v6, a3);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v7, 0xF5u);
      return v4;
    }
  }
  else
  {
    ConnectionInformationLength = 0;
  }
  v8 = (struct _PORT_VIEW *)*((_QWORD *)this + 9);
  if ( !v8 && *((_DWORD *)this + 15) )
  {
    v9 = HeapAlloc(*((HANDLE *)this + 10), 8u, 0x30uLL);
    *((_QWORD *)this + 9) = v9;
    if ( !v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x102u);
      return 2147942414LL;
    }
    *v9 = 48;
    *(_DWORD *)(*((_QWORD *)this + 9) + 16LL) = 0;
    *(_QWORD *)(*((_QWORD *)this + 9) + 24LL) = *((unsigned int *)this + 15);
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL) = *((_QWORD *)this + 8);
    v8 = (struct _PORT_VIEW *)*((_QWORD *)this + 9);
  }
  ConnectionInformation = (unsigned __int16 *)v17;
  if ( !a3 )
    ConnectionInformation = 0LL;
  if ( !v8 || !v8->SectionHandle )
    v8 = 0LL;
  v12 = NtConnectPort(
          (PHANDLE)this + 6,
          &DestinationString,
          &SecurityQos,
          v8,
          0LL,
          0LL,
          ConnectionInformation,
          &ConnectionInformationLength);
  if ( v12 < 0 )
  {
    v13 = v12 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      1u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      8u,
      v12 | 0x10000000,
      0x113u);
    return v13;
  }
  *((_BYTE *)this + 56) = 1;
  return v4;
}
