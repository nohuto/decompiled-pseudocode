/*
 * XREFs of ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EE580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180048020 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800EDDE4 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800EF6F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F0B14 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F0BF4 (-UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F0CD4 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateStream(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  int v10; // esi
  __int64 v11; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = CBaseStreamGroupProxy::ValidateStreamForStreamGroup(this, a2);
  if ( v10 < 0 )
  {
    v11 = 998LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 10) + 24LL))(
          *((_QWORD *)this + 10),
          a3,
          a4,
          a6);
  if ( v10 < 0 )
  {
    v11 = 1000LL;
    goto LABEL_3;
  }
  *((_QWORD *)a6 + 6) = (unsigned __int64)this & -(__int64)(this != (CSharedStreamGroupProxy *)8);
  v13 = *((_QWORD *)this + 33);
  while ( v13 >= 0 )
  {
    if ( (_DWORD)v13 != 0x7FFFFFFF )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 33, v13 + 1, v13);
      if ( v14 != v13 )
        continue;
    }
    goto LABEL_12;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v13 + 16));
LABEL_12:
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(this, 1);
  CBaseStreamGroupProxy::AddStream(this, a2, a6, a5);
  return 0LL;
}
