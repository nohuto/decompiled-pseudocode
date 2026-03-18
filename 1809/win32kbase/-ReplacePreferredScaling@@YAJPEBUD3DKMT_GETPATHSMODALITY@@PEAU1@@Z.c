/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C01034AC
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0103E88 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0100FC4 (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall ReplacePreferredScaling(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  const struct D3DKMT_GETPATHSMODALITY *v4; // r14
  unsigned int i; // esi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = a2;
  v4 = (const struct D3DKMT_GETPATHSMODALITY *)a1;
  for ( i = 0; i < *(unsigned __int16 *)(v3 + 20); ++i )
  {
    v6 = v3 + 272LL * i;
    if ( (*(_DWORD *)(v6 + 48) & 0x10000) == 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
      WdLogEvent5_WdAssertion(v7);
    }
    if ( *(_DWORD *)(v6 + 184) == 253 )
    {
      v8 = 0x1000000000LL;
      if ( (*(_QWORD *)(v6 + 48) & 0x1000000000LL) != 0 )
      {
        ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v6 + 48), a2, (__int64)a3);
      }
      else
      {
        a3 = (_DWORD *)(v6 + 64);
        if ( v6 == -64 || !v4 )
        {
          v9 = 0LL;
        }
        else
        {
          a2 = 0LL;
          if ( !*((_WORD *)v4 + 10) )
            goto LABEL_14;
          while ( 1 )
          {
            v8 = 272LL * (unsigned int)a2;
            v9 = (char *)v4 + v8 + 48;
            if ( *((_DWORD *)v9 + 7) == *(_DWORD *)(v6 + 76)
              && *((_DWORD *)v9 + 4) == *a3
              && *((_DWORD *)v9 + 5) == *(_DWORD *)(v6 + 68) )
            {
              break;
            }
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= *((unsigned __int16 *)v4 + 10) )
              goto LABEL_14;
          }
        }
        if ( !v9 )
        {
LABEL_14:
          v10 = WdLogNewEntry5_WdError(v8, a2, a3);
          *(_QWORD *)(v10 + 24) = *(unsigned int *)(v6 + 72);
          *(_QWORD *)(v10 + 32) = *(unsigned int *)(v6 + 76);
          WdLogEvent5_WdError(v10);
          return 3221225473LL;
        }
        v12 = *(_QWORD *)v9;
        a1 = 0x40000000000LL;
        if ( (*(_QWORD *)v9 & 0x40000000000LL) == 0 )
        {
          v13 = WdLogNewEntry5_WdAssertion(0x40000000000LL, a2, a3);
          WdLogEvent5_WdAssertion(v13);
          v12 = *(_QWORD *)v9;
        }
        if ( (v12 & 0x10000) == 0 )
        {
          v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
          WdLogEvent5_WdAssertion(v14);
        }
        *(_DWORD *)(v6 + 184) = *((_DWORD *)v9 + 34);
        *(_DWORD *)(v6 + 188) = *((_DWORD *)v9 + 35);
        *(_QWORD *)(v6 + 48) |= 0x40000010000uLL;
      }
    }
  }
  return 0LL;
}
