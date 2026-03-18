/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00D10C0
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D1038 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C001B3EC (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D0EA0 (DxgkGetAdapterDefaultScaling.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00DE9D4 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v3; // ebp
  int v4; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _LUID *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r10d
  int v14; // r10^4
  DWORD HighPart; // eax
  int v16; // eax
  int v17; // eax
  struct _LUID *v18; // rdi
  int v19; // eax
  _QWORD *v21; // rax
  struct _LUID v22; // rax
  LONG *p_HighPart; // rsi
  unsigned int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // eax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  DWORD LowPart; // [rsp+60h] [rbp+8h] BYREF
  DWORD v35; // [rsp+64h] [rbp+Ch]
  __int64 v36; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v8 = (struct _LUID *)PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v4 )
      goto LABEL_21;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v32);
      }
      v8[29].HighPart |= 1u;
      v18 = v8 + 21;
      v8[22].LowPart = v8[12].LowPart;
      v8[22].HighPart = v8[12].HighPart;
      v19 = 0;
      v8[21].HighPart = 0;
      v8[21].LowPart = 0;
      goto LABEL_17;
    }
    v9 = *((_DWORD *)PathDescriptor + 33);
    v36 = *((_QWORD *)PathDescriptor + 12);
    if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v9) - 2) & 0xFFFFFFFD) != 0 )
    {
      LowPart = v8[19].LowPart;
      HighPart = v8[19].HighPart;
    }
    else
    {
      LowPart = v8[19].HighPart;
      HighPart = v8[19].LowPart;
    }
    v35 = HighPart;
    if ( (v8->LowPart & 0x800000) == 0 )
      goto LABEL_23;
    v11 = (unsigned int)v8[21].HighPart;
    if ( (int)v11 < 0 )
      break;
    v16 = v8[21].LowPart;
    if ( v16 < 0 )
      break;
    v10 = v8[22].LowPart;
    if ( (int)v10 <= v16 )
      break;
    v17 = v8[22].HighPart;
    if ( v17 <= (int)v11 || (int)v10 > v13 || v17 > v14 )
      break;
LABEL_21:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (v8[1].LowPart & 0x800000) == 0 )
  {
LABEL_23:
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
    v21[3] = v3;
    v21[4] = v8[3].LowPart;
    v21[5] = (unsigned int)v8[3].HighPart;
    v7 = 0x40000000000LL;
    v22 = *v8;
    if ( (*(_QWORD *)v8 & 0x40000000000LL) == 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(0x40000000000LL, v6);
      WdLogEvent5_WdAssertion(v26);
      v22 = *v8;
    }
    if ( v8[17].LowPart == 1 )
    {
      p_HighPart = &v8[17].HighPart;
      if ( (*(_QWORD *)&v22 & 0x10000) != 0 )
      {
        if ( *p_HighPart == 5 )
        {
          DxgkGetAdapterDefaultScaling(v8 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v8[17].HighPart);
          v8[29].HighPart |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling(v8 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v8[17].HighPart);
        *(_QWORD *)v8 |= 0x10000uLL;
        v8[29].HighPart |= 0x80u;
      }
      v18 = v8 + 21;
      v24 = ConvertDmmToDisplayConfigScaling((unsigned int)*p_HighPart);
      if ( !CalculateScaling(v24, (unsigned int *)&v36, &LowPart, (unsigned int *)&v8[21]) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v28 + 24) = *p_HighPart;
        WdLogEvent5_WdAssertion(v28);
        DxgkGetAdapterDefaultScaling(v8 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v8[17].HighPart);
        v29 = ConvertDmmToDisplayConfigScaling((unsigned int)*p_HighPart);
        v30 = CalculateScaling(v29, (unsigned int *)&v36, &LowPart, (unsigned int *)&v8[21]);
        v8[29].HighPart |= 0x40u;
        if ( !v30 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v7, v6);
          *(_QWORD *)(v31 + 24) = 3742LL;
          WdLogEvent5_WdAssertion(v31);
        }
      }
    }
    else
    {
      if ( (v22.LowPart & 0x100) == 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v27);
      }
      v8[29].HighPart |= 1u;
      v18 = v8 + 21;
      v8[22].LowPart = v8[12].LowPart;
      v8[22].HighPart = v8[12].HighPart;
      v8[21].HighPart = 0;
      v8[21].LowPart = 0;
    }
    v19 = v8[21].HighPart;
LABEL_17:
    *(_QWORD *)v8 |= 0x800000uLL;
    if ( v19 < 0 || (v7 = v18->LowPart, (int)v7 < 0) || (signed int)v8[22].LowPart <= (int)v7 || v8[22].HighPart <= v19 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v33 + 24) = 3762LL;
      WdLogEvent5_WdAssertion(v33);
    }
    goto LABEL_21;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
  v25[3] = v3;
  v25[4] = v8[3].LowPart;
  v25[5] = (unsigned int)v8[3].HighPart;
  WdLogEvent5_WdError(v25);
  return 3221225485LL;
}
