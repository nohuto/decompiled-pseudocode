/*
 * XREFs of ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180077F38
 * Callers:
 *     ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x180077EC0 (-MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x180077FF8 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x180078094 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007818C (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x180145658 (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18014583C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CConnection::CreateKernelChannel(CConnection *this, struct CChannel **a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ecx
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  struct CChannel *v10; // rcx
  struct CChannel *v11; // rax
  CConnection *v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-20h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+30h] BYREF
  struct CChannel *v17; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v6 = NtDCompositionCreateDwmChannel(&v16);
  if ( v6 < 0 )
  {
    v9 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v9, 0x9Cu);
    goto LABEL_5;
  }
  v2 = v16;
  v7 = CChannelTable::AssignChannelEntry((CConnection *)((char *)this + 16), v16, &v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 160;
    goto LABEL_10;
  }
  v7 = CChannel::Create(this, v2, &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 168;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v14);
    goto LABEL_5;
  }
  v10 = v17;
  *((_QWORD *)v15 + 1) = v17;
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  v11 = v17;
  v17 = 0LL;
  v2 = 0;
  *a2 = v11;
LABEL_5:
  if ( v9 < 0 && v2 )
  {
    CChannelTable::DestroyHandle((CConnection *)((char *)this + 16), v2);
    CConnection::DestroyKernelChannel(v13, v2);
  }
  ReleaseInterface<CChannel>(&v17);
  return (unsigned int)v9;
}
