/*
 * XREFs of ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800ACA80
 * Callers:
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800ACA18 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CInputSinkStruct::InitializeQueueInfo(
        CInputSinkStruct *this,
        struct CInputSinkStruct::InputQueueInfo *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-98h] BYREF
  __int64 v9; // [rsp+38h] [rbp-90h]
  _BYTE v10[64]; // [rsp+70h] [rbp-58h] BYREF

  v4 = -2147467259;
  memset_0(&v8, 0, 0x38uLL);
  v5 = NtQueryCompositionInputQueueAndTransform(*((_QWORD *)this + 8), *(unsigned int *)a2, &v8, v10);
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5 | 0x10000000, 0xF6u, 0LL);
  }
  else if ( (unsigned int)(v8 - 2) <= 1 )
  {
    *((_QWORD *)a2 + 1) = v9;
  }
  return v4;
}
