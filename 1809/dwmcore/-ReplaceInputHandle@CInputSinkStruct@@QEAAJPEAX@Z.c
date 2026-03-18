/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x18009F0D8
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18009F04C (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x18009EC44 (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x18009F1D4 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::ReplaceInputHandle(CInputSinkStruct *this, void *a2)
{
  unsigned int v2; // ebx
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  int CompositionInputSink; // eax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // xmm1_8
  unsigned int v12; // [rsp+20h] [rbp-38h]
  _BYTE v13[24]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)v13 = 24;
  v2 = 0;
  memset(&v13[4], 0, 20);
  if ( *((_QWORD *)this + 8) )
  {
    CInputSinkStruct::UninitializeQueues(this);
    NtCloseCompositionInputSink(*((_QWORD *)this + 8));
  }
  v5 = *(_OWORD *)v13;
  *((_QWORD *)this + 8) = a2;
  v6 = *(_QWORD *)&v13[16];
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 72) = v5;
  *((_QWORD *)this + 11) = v6;
  if ( a2 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(a2, v13);
    if ( CompositionInputSink < 0 )
    {
      v12 = 64;
    }
    else
    {
      v9 = *((_QWORD *)this + 8);
      v10 = *(_QWORD *)&v13[16];
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v13;
      *((_QWORD *)this + 11) = v10;
      CompositionInputSink = NtQueryCompositionInputSinkLuid(v9, (char *)this + 96);
      if ( CompositionInputSink >= 0 )
      {
        CInputSinkStruct::InitializeQueues(this);
        return v2;
      }
      v12 = 67;
    }
    v2 = CompositionInputSink | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, CompositionInputSink | 0x10000000, v12);
  }
  return v2;
}
