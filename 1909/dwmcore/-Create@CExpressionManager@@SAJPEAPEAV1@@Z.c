/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800E27F0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800E28AC (--0CExpressionManager@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  int v2; // ebx
  CExpressionManager *v3; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int LastError; // eax
  __int64 v13; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)DefaultHeap::AllocClear(0x1F0uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v4);
  v5 = (volatile signed __int32 *)CExpressionManager::CExpressionManager(v3);
  if ( !v5 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x18u, 0LL);
    return (unsigned int)v2;
  }
  _InterlockedIncrement(v5 + 2);
  v7 = byte_180339D64 == 0;
  *a1 = (struct CExpressionManager *)v5;
  if ( v7 )
  {
    byte_180339D64 = 1;
    SetLastError(0);
    if ( QueryPerformanceFrequency(&Time::s_luFreq) )
    {
      SetLastError(0);
      if ( QueryPerformanceCounter(&Time::s_luBegin) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / Time::s_luFreq.QuadPart < 0x12C )
        {
          v2 = -2147418113;
          goto LABEL_23;
        }
      }
      else
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v2, 0x23u, 0LL);
      }
    }
    else
    {
      v10 = GetLastError();
      v2 = v10;
      if ( v10 > 0 )
        v2 = (unsigned __int16)v10 | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0x22u, 0LL);
    }
    if ( v2 >= 0 )
      return (unsigned int)v2;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v2, 0x23u, 0LL);
  }
  return (unsigned int)v2;
}
