/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C012A4A8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00A66F8 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(
        const struct _RETRY_MODE *a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int CcdRawmodeFlag; // eax
  __int64 v12; // rcx

  v3 = 0;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_DWORD *)a1 + 1);
  if ( v7 == -1 )
  {
    if ( *((_DWORD *)a1 + 2) == -1 )
    {
      if ( *((_WORD *)a2 + 10) )
      {
        v8 = *((_QWORD *)a2 + 6);
        do
        {
          ++v3;
          v8 &= 0xFFFFFBFFFF7CFE78uLL;
          *((_QWORD *)a2 + 6) = v8;
        }
        while ( v3 < *((unsigned __int16 *)a2 + 10) );
      }
      goto LABEL_14;
    }
  }
  else if ( !v7 )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      v9 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL, a2, a3);
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = *((_QWORD *)a2 + 6) & 0xFFFFFBFFFF7EFF7CuLL;
    *((_BYTE *)a2 + 176) = 0;
    *((_DWORD *)a2 + 45) = 1;
    *((_QWORD *)a2 + 6) = v10 | 0x20304;
    *((_DWORD *)a2 + 32) = 9;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 51) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 36) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 37) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 38) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 39) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 41) = 21;
    *((_DWORD *)a2 + 40) = 0;
    *((_QWORD *)a2 + 21) = 0LL;
  }
LABEL_14:
  CcdRawmodeFlag = GetCcdRawmodeFlag();
  v12 = CcdRawmodeFlag;
  LODWORD(v12) = CcdRawmodeFlag | 0x8000;
  return ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02150A8)(v12, a2);
}
