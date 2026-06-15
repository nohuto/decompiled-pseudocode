/*
 * XREFs of ?OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1801031F4
 * Callers:
 *     wil::details::ThreadFailureCallbackFn__lambda_776ccda4a4d84a0eb1f0b91dd9e0f2ed___::NotifyFailure @ 0x1800E5BE0 (wil--details--ThreadFailureCallbackFn__lambda_776ccda4a4d84a0eb1f0b91dd9e0f2ed___--NotifyFailure.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x180025D50 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z @ 0x180102DF8 (-AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x18010363C (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioJournal::OnStartStream(AudioJournal *this, int a2, struct CEndpointCharacteristics *a3)
{
  AudioJournal *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int StreamInfo; // eax
  __int64 v10; // rax
  struct AudioJournal::StreamInfo *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  AudioJournal *v14; // [rsp+40h] [rbp+8h] BYREF
  struct AudioJournal::StreamInfo *v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = this;
  EnterCriticalSection(&CriticalSection);
  if ( g_AudioJournal )
  {
    if ( a2 < 0 )
    {
      StreamInfo = AudioJournal::FindStreamInfo(v5, a3, &v15, (int *)&v14);
      v6 = StreamInfo;
      if ( StreamInfo < 0 )
      {
        v8 = 290LL;
LABEL_10:
        v7 = (unsigned int)StreamInfo;
        goto LABEL_11;
      }
      ++*((_DWORD *)v15 + 50 * (int)v14 + 40);
      AudioJournal::AddError(
        (AudioJournal *)(200LL * (int)v14),
        a2,
        (struct AudioJournal::StreamInfo *)((char *)v15 + 200 * (int)v14 + 176));
      v10 = 200LL * (int)v14;
      v11 = v15;
      if ( !*(_DWORD *)((char *)v15 + v10 + 148) )
      {
        *(_DWORD *)((char *)v15 + v10 + 148) = 1;
        v11 = v15;
      }
      StreamInfo = AudioJournal::WriteStreamInfo((AudioJournal *)&g_AudioJournal, v11);
      v6 = StreamInfo;
      if ( StreamInfo < 0 )
      {
        v8 = 299LL;
        goto LABEL_10;
      }
    }
    v6 = 0;
    goto LABEL_13;
  }
  v6 = -2147418113;
  v7 = 2147549183LL;
  v8 = 283LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)v7);
LABEL_13:
  LeaveCriticalSection(&CriticalSection);
  return v6;
}
