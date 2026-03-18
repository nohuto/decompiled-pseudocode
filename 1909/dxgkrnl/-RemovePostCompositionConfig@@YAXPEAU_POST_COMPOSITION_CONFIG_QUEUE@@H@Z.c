/*
 * XREFs of ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C01F3A00
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0142E78 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C0143234 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C014AE6C (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePostCompositionConfig(struct _POST_COMPOSITION_CONFIG_QUEUE *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax

  v3 = (int)a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 8843LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v5 + 24) = 8844LL;
    WdLogEvent5_WdAssertion(v5);
  }
  memset((char *)a1 + 32 * v3 + 4 * v3 + 8, 0, 0x24uLL);
  v6 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 == (_DWORD)v3 )
  {
    if ( v6 == (_DWORD)v3 )
    {
      *((_DWORD *)a1 + 1) = -1;
      *(_DWORD *)a1 = -1;
    }
    else
    {
      *(_DWORD *)a1 = GetPreviousConfigIndex(v3);
    }
  }
  else if ( v6 == (_DWORD)v3 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v3);
  }
}
