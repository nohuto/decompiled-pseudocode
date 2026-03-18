/*
 * XREFs of ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00DC61C
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00DD668 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000E210 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z @ 0x1C00DC160 (-BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z.c)
 *     _CcdReadRegistryValues @ 0x1C00DC4C8 (_CcdReadRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  int RegistryValues; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  wchar_t Dest; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&Dest, 6uLL, L"%02x", a3);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v12 = CcdReadRegistryValues(a2, &Dest, &unk_1C00A1170, 0xDu, (__int64)a4);
    v16 = *(unsigned int *)a4;
    *(_QWORD *)a4 = v16;
    v10 = v12;
    if ( v12 >= 0 )
    {
      if ( (v16 & 0x100) != 0 )
      {
        v18 = CcdReadRegistryValues(a2, &Dest, &unk_1C00A14C0, 6u, (__int64)a4);
        v10 = v18;
        if ( v18 >= 0 )
        {
          v29 = *(_QWORD *)a4;
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
          v22[3] = v10;
          v22[4] = a2;
          v22[5] = v5;
          v22[6] = a4;
          WdLogEvent5_WdWarning(v22);
          RegistryValues = CcdReadRegistryValues(a2, 0LL, &unk_1C00A1610, 8u, (__int64)a4);
          v27 = RegistryValues;
          if ( RegistryValues < 0 )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
            v28[3] = v27;
            v28[4] = a2;
            v28[5] = v5;
            WdLogEvent5_WdError(v28);
            *(_QWORD *)a4 &= ~0x100uLL;
          }
          v29 = *(_QWORD *)a4;
          if ( (*(_QWORD *)a4 & 0x100LL) != 0 )
          {
            v29 |= 0x20000uLL;
            *(_QWORD *)a4 = v29;
          }
          LODWORD(v10) = 0;
        }
        LODWORD(v16) = v29;
        if ( (v29 & 0x100) != 0 )
        {
          *((_QWORD *)a4 + 13) = *((_QWORD *)a4 + 12);
          if ( !BmlIsSupportedGraphicsFormat((const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)a4 + 3, 1) )
            *((_DWORD *)a4 + 29) = 21;
        }
      }
      if ( (v16 & 0x800000) != 0 )
      {
        v30 = CcdReadRegistryValues(a2, &Dest, &unk_1C00A1050, 5u, (__int64)a4);
        v10 = v30;
        if ( v30 >= 0 )
        {
          if ( *((_DWORD *)a4 + 44) == *((_DWORD *)a4 + 42) || *((_DWORD *)a4 + 45) == *((_DWORD *)a4 + 43) )
            *(_QWORD *)a4 &= ~0x800000uLL;
        }
        else
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
          v34[3] = v10;
          v34[4] = a2;
          v34[5] = v5;
          v34[6] = a4;
          WdLogEvent5_WdWarning(v34);
          *(_QWORD *)a4 &= ~0x800000uLL;
          LODWORD(v10) = 0;
        }
      }
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
      v17[3] = v10;
      v17[4] = a2;
      v17[5] = v5;
      v17[6] = a4;
      WdLogEvent5_WdWarning(v17);
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8);
    v11[3] = v10;
    v11[4] = a2;
    v11[5] = v5;
    v11[6] = a4;
    WdLogEvent5_WdAssertion(v11);
  }
  return (unsigned int)v10;
}
