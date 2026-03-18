/*
 * XREFs of ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C012FC68
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C012F9A0 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000E210 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _CcdWriteRegistryValues @ 0x1C012FD64 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  wchar_t Dest; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&Dest, 6uLL, L"%02x", a3);
  v10 = v7;
  if ( v7 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8);
    v18[3] = v10;
    v18[4] = a2;
    v18[5] = v5;
    v18[6] = a4;
    WdLogEvent5_WdAssertion(v18);
  }
  else
  {
    v11 = CcdWriteRegistryValues((int)a2, &Dest, (__int64)a4);
    v10 = v11;
    if ( v11 < 0
      || (*(_DWORD *)a4 & 0x100LL) != 0
      && (v15 = CcdWriteRegistryValues((int)a2, &Dest, (__int64)a4), v10 = v15, v15 < 0)
      || (*(_DWORD *)a4 & 0x800000) != 0
      && (v16 = CcdWriteRegistryValues((int)a2, &Dest, (__int64)a4), v10 = v16, v16 < 0) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
      v19[3] = v10;
      v19[4] = a2;
      v19[5] = v5;
      v19[6] = a4;
      WdLogEvent5_WdWarning(v19);
    }
  }
  return (unsigned int)v10;
}
