/*
 * XREFs of PfSnOperationProcess @ 0x1406D0B04
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140667058 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfSnEndProcessTrace @ 0x140607950 (PfSnEndProcessTrace.c)
 *     PfSnCheckScenario @ 0x140667FB0 (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x140668160 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x140668444 (PfSnBeginScenario.c)
 *     PfSnFindImageFileName @ 0x140668FB0 (PfSnFindImageFileName.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  bool v2; // zf
  PVOID v3; // rdi
  unsigned __int8 v4; // cl
  unsigned int v5; // eax
  bool v6; // cf
  _KPROCESS *Process; // r14
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 ImageFileName; // rbx
  int v11; // ecx
  unsigned int v12; // edx
  int v14; // [rsp+38h] [rbp-29h] BYREF
  PVOID P; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v16[4]; // [rsp+48h] [rbp-19h] BYREF
  wchar_t pszDest[32]; // [rsp+58h] [rbp-9h] BYREF

  v2 = *(_BYTE *)a1 == 1;
  v3 = 0LL;
  P = 0LL;
  if ( !v2 || (v4 = *(_BYTE *)(a1 + 1), v4 >= 2u) || *(_WORD *)(a1 + 2) )
  {
    v9 = -1073741811;
    goto LABEL_13;
  }
  v5 = *(_DWORD *)(a1 + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = v5 < 2;
  }
  else
  {
    if ( (v5 & 4) != 0 && (v5 & 3) != 0 )
      return (unsigned int)-1073741811;
    v6 = v5 < 8;
  }
  if ( !v6 )
    return (unsigned int)-1073741811;
  if ( (int)PfSnCheckScenario(1, &v14) < 0 )
    return 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = PfCalculateProcessHash((__int64)Process, (unsigned __int64)&P);
  v3 = P;
  v9 = v8;
  if ( v8 >= 0 )
  {
    ImageFileName = PfSnFindImageFileName((unsigned __int16 *)P, v16);
    if ( ImageFileName )
    {
      memset(pszDest, 0, sizeof(pszDest));
      RtlStringCbPrintfW(pszDest, 0x3CuLL, L"Op-%.17s-%08X", ImageFileName, Process[1].ThreadSeed[1]);
      v11 = *(_DWORD *)(a1 + 4);
      v12 = v11 & 1;
      v2 = (*(_BYTE *)(a1 + 1) & 1) == 0;
      *(_DWORD *)&pszDest[30] = *(_DWORD *)(a1 + 8);
      if ( v2 )
      {
        if ( (v11 & 2) != 0 || v14 == 2 )
        {
          v12 |= 2u;
        }
        else if ( (v11 & 4) != 0 )
        {
          v12 |= 4u;
        }
        PfSnBeginScenario((__int64)Process, (__int64)pszDest, 1u, v12, 0LL);
      }
      else
      {
        PfSnEndProcessTrace((__int64)Process, v12 + 8, pszDest);
      }
      v9 = 0;
    }
    else
    {
      v9 = -1073741595;
    }
  }
LABEL_13:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v9;
}
