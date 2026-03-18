/*
 * XREFs of ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x180063000
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800B3C40 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 CThreadContext::InitializeObjectCaches(void)
{
  int Current; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  struct CThreadContext *v3; // rcx
  struct CThreadContext *v5; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v5);
  v2 = Current;
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v1, 0LL, 0, Current, 0xB9u);
  }
  else
  {
    v3 = v5;
    *((_DWORD *)v5 + 2) = 32;
    *((_DWORD *)v3 + 6) = 32;
    *((_DWORD *)v3 + 10) = 2;
    *((_DWORD *)v3 + 14) = 32;
    *((_DWORD *)v3 + 18) = 32;
    *((_DWORD *)v3 + 22) = 32;
    *((_DWORD *)v3 + 26) = 32;
    *((_DWORD *)v3 + 30) = 32;
    *((_DWORD *)v3 + 34) = 32;
    *((_DWORD *)v3 + 38) = 8;
    *((_DWORD *)v3 + 42) = 8;
    *((_DWORD *)v3 + 46) = 8;
    *((_DWORD *)v3 + 50) = 8;
    *((_DWORD *)v3 + 54) = 8;
    *((_DWORD *)v3 + 58) = 8;
    *((_DWORD *)v3 + 62) = 1;
    *((_DWORD *)v3 + 66) = 8;
    *((_DWORD *)v3 + 70) = 8;
  }
  return v2;
}
