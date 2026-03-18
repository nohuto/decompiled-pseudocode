/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00C9674
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00C95D8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C013A264 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rcx
  __int16 v5; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int i; // edi
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v13; // rax
  SESSION_VIEW *v14; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int j; // ebp
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rdx
  __int64 v22; // rax
  unsigned int v24; // eax
  unsigned int k; // ebp
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rbx
  _QWORD *v31; // rax

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
    v8 = *((_QWORD *)Current + 13);
    if ( v8 )
    {
      for ( i = 0; ; ++i )
      {
        v10 = *((_QWORD *)*this + 8);
        if ( v10 )
          v11 = *(_WORD *)(v10 + 20);
        else
          v11 = 0;
        if ( i >= v11 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v13 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v13 | 0x4000000000000LL;
          if ( (v13 & 0x1000000000LL) != 0 )
          {
            v24 = i | 0xFE5A0000;
            goto LABEL_26;
          }
          if ( v13 >= 0 )
          {
            v24 = i | 0xFE580000;
LABEL_26:
            *((_DWORD *)PathDescriptor + 46) = v24;
            continue;
          }
          v14 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 32);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v14 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v14);
            v16 = *((unsigned int *)PathDescriptor + 6);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v16 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v8 + 304))(
                      (__int64)PathDescriptor + 16,
                      v16,
                      (__int64)PathDescriptor + 144) )
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdError(v17);
                v31[3] = *((int *)PathDescriptor + 5);
                v31[4] = *((unsigned int *)PathDescriptor + 4);
                v31[5] = *((unsigned int *)PathDescriptor + 6);
                v31[6] = *this;
                v31[7] = *((_QWORD *)*this + 8);
                WdLogEvent5_WdError(v31);
              }
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v19 = *((_QWORD *)*this + 8);
                v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
                if ( j >= v20 )
                  break;
                v21 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v22 = *(_QWORD *)v21;
                if ( (*(_QWORD *)v21 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 32) == *((_QWORD *)v21 + 32) )
                {
                  *((_DWORD *)v21 + 46) = i | 0xFE590000;
                  *(_QWORD *)v21 = v22 | 0x4000000000800LL;
                  *((_QWORD *)v21 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( a2 )
          {
            for ( k = i; ; ++k )
            {
              v26 = *((_QWORD *)*this + 8);
              v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
              if ( k >= v27 )
                break;
              v28 = CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( *((_DWORD *)PathDescriptor + 6) == *((_DWORD *)v28 + 6)
                && *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v28 + 4)
                && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v28 + 5) )
              {
                *(_QWORD *)v28 |= 0x4000000000000uLL;
                *((_DWORD *)v28 + 46) = i | 0xFE580000;
              }
            }
          }
          else
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
            v29[3] = *((int *)PathDescriptor + 5);
            v29[4] = *((unsigned int *)PathDescriptor + 4);
            v29[5] = *((unsigned int *)PathDescriptor + 6);
            v29[6] = *((unsigned int *)PathDescriptor + 7);
            WdLogEvent5_WdError(v29);
          }
        }
      }
    }
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v30[3] = PsGetCurrentProcess();
  v30[4] = *this;
  v30[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v30);
  return 3221225473LL;
}
