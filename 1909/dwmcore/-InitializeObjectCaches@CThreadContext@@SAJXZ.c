/*
 * XREFs of ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800E2AF8
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180095D04 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

__int64 CThreadContext::InitializeObjectCaches(void)
{
  signed int Current; // eax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  struct CThreadContext *v3; // rcx
  struct CThreadContext *v5; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v5);
  v2 = Current;
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v1, 0LL, 0, Current, 0xB1u, 0LL);
  }
  else
  {
    v3 = v5;
    *((_DWORD *)v5 + 2) = 32;
    *((_DWORD *)v3 + 6) = 32;
    *((_DWORD *)v3 + 14) = 2;
    *((_DWORD *)v3 + 18) = 32;
    *((_DWORD *)v3 + 22) = 32;
    *((_DWORD *)v3 + 26) = 32;
    *((_DWORD *)v3 + 30) = 32;
    *((_DWORD *)v3 + 34) = 32;
    *((_DWORD *)v3 + 38) = 32;
    *((_DWORD *)v3 + 42) = 8;
    *((_DWORD *)v3 + 46) = 8;
    *((_DWORD *)v3 + 50) = 8;
    *((_DWORD *)v3 + 54) = 8;
    *((_DWORD *)v3 + 58) = 8;
    *((_DWORD *)v3 + 62) = 8;
    *((_DWORD *)v3 + 66) = 1;
    *((_DWORD *)v3 + 70) = 8;
    *((_DWORD *)v3 + 74) = 8;
  }
  return v2;
}
