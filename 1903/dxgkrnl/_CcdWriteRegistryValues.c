/*
 * XREFs of _CcdWriteRegistryValues @ 0x1C012C2FC
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C012BF38 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C012C200 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     _CcdOpenRegistrySubkey @ 0x1C00DAB8C (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdWriteRegistryValues(const WCHAR *a1, PCWSTR SourceString, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // r14
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  PCWSTR Path; // [rsp+30h] [rbp-38h] BYREF
  ULONG v26; // [rsp+78h] [rbp+10h] BYREF

  Path = 0LL;
  LODWORD(v9) = -1073741823;
  if ( SourceString && *SourceString )
  {
    v10 = CcdOpenRegistrySubkey((int)&Path, 983103, (int)a1, SourceString, &v26);
    v9 = v10;
    if ( v10 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v23[7] = a5;
      v23[3] = v9;
      v23[4] = a1;
      v23[5] = SourceString;
      v23[6] = a3;
      WdLogEvent5_WdError(v23);
      return (unsigned int)v9;
    }
  }
  else
  {
    Path = a1;
  }
  v14 = 0;
  v15 = a4 - 1;
  if ( v15 )
  {
    v16 = a5;
    v17 = a3 + 24;
    while ( 1 )
    {
      v18 = RtlWriteRegistryValue(
              0x40000000u,
              Path,
              *(PCWSTR *)(v17 - 8),
              *(_DWORD *)(v17 + 8) & 0xFFFFFF,
              (PVOID)(v16 + *(_QWORD *)v17),
              *(_DWORD *)(v17 + 24));
      v9 = v18;
      if ( v18 < 0 )
        break;
      ++v14;
      v17 += 56LL;
      if ( v14 >= v15 )
        goto LABEL_8;
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
    v24[4] = v14;
    v24[3] = v9;
    v24[5] = SourceString;
    v24[6] = a3;
    v24[7] = v16;
    WdLogEvent5_WdError(v24);
  }
LABEL_8:
  if ( Path != a1 )
    ZwClose((HANDLE)Path);
  return (unsigned int)v9;
}
