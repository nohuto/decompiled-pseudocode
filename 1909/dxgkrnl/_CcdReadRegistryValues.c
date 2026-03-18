/*
 * XREFs of _CcdReadRegistryValues @ 0x1C00DC4C8
 * Callers:
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00DC61C (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00DD668 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00DB1CC (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdReadRegistryValues(HANDLE a1, PCWSTR SourceString, void *Src, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  SIZE_T v14; // rax
  unsigned __int64 v15; // rbp
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r15
  char *v24; // rcx
  __int64 v25; // rdx
  _DWORD *v26; // rax
  int RegistryValues; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( SourceString && *SourceString )
  {
    v9 = CcdOpenRegistrySubkey((int)&Handle, 131097, (int)a1, SourceString, 0LL);
    v13 = v9;
    if ( v9 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
      v32[7] = a5;
      v32[3] = v13;
      v32[4] = a1;
      v32[5] = SourceString;
      v32[6] = Src;
      WdLogEvent5_WdError(v32);
      return (unsigned int)v13;
    }
  }
  else
  {
    Handle = a1;
  }
  v14 = 56 * v5;
  v15 = v5;
  if ( !is_mul_ok(v5, 0x38uLL) )
    v14 = -1LL;
  v16 = (char *)operator new[](v14, 0x63644356u, (POOL_TYPE)512);
  v21 = v16;
  if ( v16 )
  {
    memmove(v16, Src, 56 * v5);
    v22 = v5 - 1;
    v23 = a5;
    if ( v22 )
    {
      v24 = v21 + 40;
      v25 = v22;
      do
      {
        *((_QWORD *)v24 - 2) += v23;
        v26 = (_DWORD *)*((_QWORD *)v24 - 2);
        *((_DWORD *)v24 - 2) = 0x4000000;
        *(_QWORD *)v24 = 0LL;
        *((_DWORD *)v24 + 2) = 0;
        v24 += 56;
        *v26 = 0;
        --v25;
      }
      while ( v25 );
    }
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v21, 0LL, 0LL);
    v13 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v34[3] = v13;
      v34[4] = Handle;
      v34[5] = Src;
      v34[6] = v15;
      v34[7] = v23;
      WdLogEvent5_WdWarning(v34);
    }
    if ( Handle != a1 )
      ZwClose(Handle);
    operator delete[](v21);
    return (unsigned int)v13;
  }
  v33 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
  *(_QWORD *)(v33 + 24) = v5;
  *(_QWORD *)(v33 + 32) = 56 * v5;
  WdLogEvent5_WdLowResource(v33);
  return 3221225495LL;
}
