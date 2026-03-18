/*
 * XREFs of ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800E4B78
 * Callers:
 *     ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x1800E4B00 (-MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z @ 0x1800E4C38 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800E4CD4 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800E4DCC (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z @ 0x180155A98 (-DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180155BEC (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::CreateKernelChannel(
        CInternalMilCmdConnection *this,
        struct CChannel **a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // ebx
  struct CChannel *v10; // rcx
  struct CChannel *v11; // rax
  CInternalMilCmdConnection *v13; // rcx
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v9, 0x58u, 0LL);
    goto LABEL_5;
  }
  v2 = v16;
  v7 = CChannelTable::AssignChannelEntry((CInternalMilCmdConnection *)((char *)this + 64), v16, &v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 92;
    goto LABEL_10;
  }
  v7 = CChannel::Create(this, v2, &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 100;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v14, 0LL);
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
    CChannelTable::DestroyHandle((CInternalMilCmdConnection *)((char *)this + 64), v2);
    CInternalMilCmdConnection::DestroyKernelChannel(v13, v2);
  }
  ReleaseInterface<CChannel>(&v17);
  return (unsigned int)v9;
}
