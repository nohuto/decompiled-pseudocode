/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800E32D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800E290C (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E4610 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  int v10; // eax
  unsigned int v11; // ebp
  __int128 v13; // xmm0
  char *v14; // rsi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  struct IAudioGraphCallback *v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 24LL))(
          *(_QWORD *)(this + 80),
          a3,
          a4,
          a6);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *(_OWORD *)(this + 272) = *(_OWORD *)a3;
    *(_OWORD *)(this + 288) = *((_OWORD *)a3 + 1);
    *(_OWORD *)(this + 304) = *((_OWORD *)a3 + 2);
    *(_OWORD *)(this + 320) = *((_OWORD *)a3 + 3);
    *(_OWORD *)(this + 336) = *((_OWORD *)a3 + 4);
    *(_OWORD *)(this + 352) = *((_OWORD *)a3 + 5);
    *(_OWORD *)(this + 368) = *((_OWORD *)a3 + 6);
    v13 = *((_OWORD *)a3 + 7);
    v14 = (char *)a3 + 128;
    *(_OWORD *)(this + 384) = v13;
    *(_OWORD *)(this + 400) = *(_OWORD *)v14;
    *(_OWORD *)(this + 416) = *((_OWORD *)v14 + 1);
    *(_OWORD *)(this + 432) = *((_OWORD *)v14 + 2);
    *(_OWORD *)(this + 448) = *((_OWORD *)v14 + 3);
    *(_OWORD *)(this + 464) = *((_OWORD *)v14 + 4);
    *(_OWORD *)(this + 480) = *((_OWORD *)v14 + 5);
    *(_QWORD *)(this + 496) = *((_QWORD *)v14 + 12);
    v15 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 352) = v15;
    v16 = *(unsigned __int16 *)(v15 + 16);
    v17 = *(_QWORD *)(this + 48);
    *(_DWORD *)(this + 344) = v16 + 18;
    *(_QWORD *)(this + 376) = v17;
    v18 = *(struct IAudioGraphCallback **)(this + 504);
    if ( v18 != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)a4 + 8LL))(a4);
        v18 = *(struct IAudioGraphCallback **)(this + 504);
      }
      *(_QWORD *)(this + 504) = a4;
      if ( v18 )
        (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    *((_QWORD *)a6 + 8) = this & -(__int64)(this != 8);
    v19 = *(_QWORD *)(this + 264);
    while ( v19 >= 0 )
    {
      if ( (_DWORD)v19 != 0x7FFFFFFF )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v19 + 1, v19);
        if ( v20 != v19 )
          continue;
      }
      goto LABEL_14;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v19 + 16));
LABEL_14:
    CBaseStreamGroupProxy::AddStream((CBaseStreamGroupProxy *)this, a2, a6, a5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      1426LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
