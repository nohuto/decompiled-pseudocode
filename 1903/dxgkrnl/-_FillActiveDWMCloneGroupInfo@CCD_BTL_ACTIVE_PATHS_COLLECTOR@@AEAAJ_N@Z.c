/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00D88F0
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00D87C4 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C014ABC8 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rcx
  __int16 v5; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned int i; // edi
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  SESSION_VIEW *v17; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int j; // ebp
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rdx
  __int64 v27; // rax
  unsigned int v29; // eax
  unsigned int k; // ebp
  __int64 v31; // rax
  unsigned __int16 v32; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  _QWORD *v36; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( !v5 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v10 = *((_QWORD *)Current + 12);
    if ( v10 )
    {
      for ( i = 0; ; ++i )
      {
        v12 = *((_QWORD *)*this + 8);
        if ( v12 )
          v13 = *(_WORD *)(v12 + 20);
        else
          v13 = 0;
        if ( i >= v13 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v16 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v16 | 0x4000000000000LL;
          if ( (v16 & 0x1000000000LL) != 0 )
          {
            v29 = i | 0xFE5A0000;
            goto LABEL_26;
          }
          if ( v16 >= 0 )
          {
            v29 = i | 0xFE580000;
LABEL_26:
            *((_DWORD *)PathDescriptor + 46) = v29;
            continue;
          }
          v17 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 32);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v17 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v17);
            v19 = *((unsigned int *)PathDescriptor + 6);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v19 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v10 + 296))(
                      (__int64)PathDescriptor + 16,
                      v19,
                      (__int64)PathDescriptor + 144) )
              {
                v36 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
                v36[3] = *((int *)PathDescriptor + 5);
                v36[4] = *((unsigned int *)PathDescriptor + 4);
                v36[5] = *((unsigned int *)PathDescriptor + 6);
                v36[6] = *this;
                v36[7] = *((_QWORD *)*this + 8);
                WdLogEvent5_WdError(v36);
              }
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v24 = *((_QWORD *)*this + 8);
                v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
                if ( j >= v25 )
                  break;
                v26 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v27 = *(_QWORD *)v26;
                if ( (*(_QWORD *)v26 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 32) == *((_QWORD *)v26 + 32) )
                {
                  *((_DWORD *)v26 + 46) = i | 0xFE590000;
                  *(_QWORD *)v26 = v27 | 0x4000000000800LL;
                  *((_QWORD *)v26 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( a2 )
          {
            for ( k = i; ; ++k )
            {
              v31 = *((_QWORD *)*this + 8);
              v32 = v31 ? *(_WORD *)(v31 + 20) : 0;
              if ( k >= v32 )
                break;
              v33 = CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( *((_DWORD *)PathDescriptor + 6) == *((_DWORD *)v33 + 6)
                && *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v33 + 4)
                && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v33 + 5) )
              {
                *(_QWORD *)v33 |= 0x4000000000000uLL;
                *((_DWORD *)v33 + 46) = i | 0xFE580000;
              }
            }
          }
          else
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdError(0LL, 0x1000000000LL, v15);
            v34[3] = *((int *)PathDescriptor + 5);
            v34[4] = *((unsigned int *)PathDescriptor + 4);
            v34[5] = *((unsigned int *)PathDescriptor + 6);
            v34[6] = *((unsigned int *)PathDescriptor + 7);
            WdLogEvent5_WdError(v34);
          }
        }
      }
    }
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
  v35[3] = PsGetCurrentProcess();
  v35[4] = *this;
  v35[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v35);
  return 3221225473LL;
}
