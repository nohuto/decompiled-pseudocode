/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D0D90
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00D4018 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C0620 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003814 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0007868 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00D0FCC (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8CB8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0243CC0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  DXGADAPTERSOURCEHASH *i; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v9; // rdi
  unsigned int v10; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rdi
  unsigned int v12; // r15d
  unsigned int j; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned int v19; // ecx
  int PreferredVidPnSourceList; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r12
  unsigned int k; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rax
  unsigned int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int AdapterAndSourceForHash; // r13d
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned int v40; // [rsp+28h] [rbp-69h] BYREF
  struct _LUID v41; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v42[16]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v43[16]; // [rsp+78h] [rbp-19h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v4 = *((_QWORD *)this + 8);
  v5 = 0;
  v6 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)Global + 1016); v6 < *(unsigned __int16 *)(v4 + 20); ++v6 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    v9 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i) & *((_DWORD *)PathDescriptor + 7)) != 0 )
      {
        v41 = 0LL;
        v32 = (unsigned int)v9[3].HighPart >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v32, &v41, &v40);
        if ( AdapterAndSourceForHash < 0 )
        {
          v37 = WdLogNewEntry5_WdError(v34, v33, v35);
          *(_QWORD *)(v37 + 24) = v32;
          WdLogEvent5_WdError(v37);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v9[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i);
        v9[3].LowPart = v40;
        v9[2] = v41;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
    v4 = *((_QWORD *)this + 8);
  }
  v10 = 0;
  if ( !*(_WORD *)(v4 + 20) )
    return 0LL;
  while ( 1 )
  {
    v11 = CCD_TOPOLOGY::GetPathDescriptor(this, v10);
    if ( (*(_QWORD *)v11 & 0x4000000000000LL) != 0 )
      break;
LABEL_24:
    v29 = *((_QWORD *)this + 8);
    if ( ++v10 >= *(unsigned __int16 *)(v29 + 20) )
    {
      if ( *(_WORD *)(v29 + 20) )
      {
        do
        {
          v30 = CCD_TOPOLOGY::GetPathDescriptor(this, v5++);
          *(_QWORD *)v30 |= 0x4000000000000uLL;
        }
        while ( v5 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
      }
      return 0LL;
    }
  }
  v12 = 0;
  for ( j = v10; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v14 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v11 + 4) == *((_DWORD *)v14 + 4) )
    {
      v17 = *((unsigned int *)v14 + 5);
      if ( *((_DWORD *)v11 + 5) == (_DWORD)v17 )
      {
        v18 = v12;
        if ( v12 >= 0x10 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v17, v15, v16);
          v38[3] = v12;
          v38[4] = *((int *)v11 + 5);
          v38[5] = *((unsigned int *)v11 + 4);
          v38[6] = -1073741811LL;
          WdLogEvent5_WdError(v38);
          return 3221225485LL;
        }
        if ( *((_BYTE *)v14 + 129) )
          v19 = -1;
        else
          v19 = *((_DWORD *)v14 + 6);
        v43[v12++] = v19;
        v42[v18] = *((_DWORD *)v14 + 7);
      }
    }
  }
  PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList((const struct _LUID *)v11 + 2, v12, v42, v43);
  v24 = PreferredVidPnSourceList;
  if ( PreferredVidPnSourceList >= 0 )
  {
    for ( k = v10; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
    {
      v26 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
      v27 = v26;
      if ( *((_DWORD *)v11 + 4) == *((_DWORD *)v26 + 4) && *((_DWORD *)v11 + 5) == *((_DWORD *)v26 + 5) )
      {
        v28 = 0;
        if ( v12 )
        {
          while ( v42[v28] != *((_DWORD *)v27 + 7) )
          {
            if ( ++v28 >= v12 )
              goto LABEL_22;
          }
          *((_DWORD *)v27 + 6) = v43[v28];
        }
LABEL_22:
        *(_QWORD *)v27 &= ~0x4000000000000uLL;
      }
    }
    goto LABEL_24;
  }
  v39 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
  v39[3] = *((int *)v11 + 5);
  v39[4] = *((unsigned int *)v11 + 4);
  v39[5] = v24;
  WdLogEvent5_WdError(v39);
  return (unsigned int)v24;
}
