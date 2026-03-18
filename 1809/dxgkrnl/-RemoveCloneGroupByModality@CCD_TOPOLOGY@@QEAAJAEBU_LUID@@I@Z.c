/*
 * XREFs of ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0288C00
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B4FBC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00C99A4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C0289078 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveCloneGroupByModality(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned int v5; // ebx
  __int16 v9; // ax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r8

  v3 = *((_QWORD *)this + 8);
  v4 = -1;
  v5 = 0;
  if ( v3 )
    v9 = *(_WORD *)(v3 + 20);
  else
    v9 = 0;
  if ( v9 )
  {
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
    v10 = *((_QWORD *)this + 8);
    v11 = 0;
    if ( *(_WORD *)(v10 + 20) )
    {
      while ( 1 )
      {
        v12 = 272LL * v11;
        if ( *(_DWORD *)(v12 + v10 + 72) == a3
          && *(_DWORD *)(v12 + v10 + 64) == a2->LowPart
          && *(_DWORD *)(v12 + v10 + 68) == a2->HighPart )
        {
          break;
        }
        if ( ++v11 >= *(unsigned __int16 *)(v10 + 20) )
          goto LABEL_12;
      }
      v4 = *(_DWORD *)(v12 + v10 + 232);
    }
LABEL_12:
    v13 = 0;
    if ( *(_WORD *)(v10 + 20) )
    {
      v14 = *((_QWORD *)this + 8);
      do
      {
        v10 = v14;
        if ( v4 != *(_DWORD *)(272LL * v13 + v14 + 232) )
        {
          if ( v5 != v13 )
          {
            CCD_TOPOLOGY::SwapPathsDescriptors(this, v13, v5);
            v10 = *((_QWORD *)this + 8);
          }
          ++v5;
        }
        ++v13;
        v14 = v10;
      }
      while ( v13 < *(unsigned __int16 *)(v10 + 20) );
    }
    *(_WORD *)(v10 + 20) = v5;
  }
  return 0LL;
}
