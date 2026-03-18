/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800AC920
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800AC894 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800ACA18 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800AD610 (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::ReplaceInputHandle(CInputSinkStruct *this, void *a2)
{
  unsigned int v2; // edi
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  int CompositionInputSink; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // xmm1_8
  int CompositionInputSinkLuid; // eax
  __int64 v12; // rcx
  _BYTE v14[24]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)v14 = 24;
  v2 = 0;
  memset(&v14[4], 0, 20);
  if ( *((_QWORD *)this + 8) )
  {
    CInputSinkStruct::UninitializeQueues(this);
    NtCloseCompositionInputSink(*((_QWORD *)this + 8));
  }
  v5 = *(_OWORD *)v14;
  *((_QWORD *)this + 12) = 0LL;
  v6 = *(_QWORD *)&v14[16];
  *((_QWORD *)this + 8) = a2;
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 72) = v5;
  *((_QWORD *)this + 11) = v6;
  if ( a2 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(a2, v14);
    if ( CompositionInputSink < 0 )
    {
      v2 = CompositionInputSink | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, CompositionInputSink | 0x10000000, 0x3Eu, 0LL);
    }
    else
    {
      v9 = *((_QWORD *)this + 8);
      v10 = *(_QWORD *)&v14[16];
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v14;
      *((_QWORD *)this + 11) = v10;
      CompositionInputSinkLuid = NtQueryCompositionInputSinkLuid(v9, (char *)this + 96);
      if ( CompositionInputSinkLuid < 0 )
      {
        v2 = CompositionInputSinkLuid | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CompositionInputSinkLuid | 0x10000000, 0x41u, 0LL);
      }
      else
      {
        CInputSinkStruct::InitializeQueues(this);
      }
    }
  }
  return v2;
}
