/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00CDF30
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00C86D8 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0005B34 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00CE078 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C00CE304 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02886A8 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(CCD_TOPOLOGY *this, unsigned __int16 *a2, unsigned __int16 a3)
{
  __int64 v3; // r8
  unsigned __int16 *v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r15
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // edx
  __int64 result; // rax
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdx
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int16 *v26; // rdx
  unsigned __int16 v27; // ax
  unsigned __int16 *v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int16 v31; // r15
  unsigned __int16 *v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  int v35; // ecx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // [rsp+70h] [rbp+8h]
  unsigned __int16 v40; // [rsp+80h] [rbp+18h] BYREF
  __int64 v41; // [rsp+88h] [rbp+20h]

  v40 = a3;
  v3 = *((_QWORD *)this + 8);
  v4 = a2;
  if ( !*(_WORD *)(v3 + 20) )
  {
    *a2 = 0;
    return 0LL;
  }
  v6 = 0;
  LODWORD(v7) = -1073741823;
  v8 = 0;
  v9 = 16385;
  while ( 1 )
  {
    v10 = 272LL * v6;
    if ( DxgkIsTargetNonStandard((const struct _LUID *)(v3 + v10 + 64), *(_DWORD *)(v3 + v10 + 76)) )
    {
      *(_DWORD *)(v10 + *((_QWORD *)this + 8) + 288) = 0;
      goto LABEL_8;
    }
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v6) )
      break;
LABEL_8:
    v3 = *((_QWORD *)this + 8);
    if ( ++v6 >= *(unsigned __int16 *)(v3 + 20) )
      return (unsigned int)v7;
  }
  if ( !v6 )
  {
LABEL_6:
    v11 = CCD_TOPOLOGY::_QueryMonitorIdStr(
            (const struct _LUID *)(v10 + *((_QWORD *)this + 8) + 64LL),
            *(_DWORD *)(v10 + *((_QWORD *)this + 8) + 76),
            v4,
            v9,
            &v40);
    v7 = v11;
    if ( v11 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v38 = 272LL * v6;
      v36[3] = v7;
      v36[4] = *(unsigned int *)(v10 + *((_QWORD *)this + 8) + 76);
      v36[5] = *((_QWORD *)this + 8);
LABEL_46:
      v36[6] = *(int *)(v38 + *((_QWORD *)this + 8) + 68);
      v36[7] = *(unsigned int *)(v38 + *((_QWORD *)this + 8) + 64);
      WdLogEvent5_WdError(v36);
      return (unsigned int)v7;
    }
    v13 = v8++;
    *(_DWORD *)(v10 + *((_QWORD *)this + 8) + 288) = v13;
    v14 = v6 + 1;
    v9 -= v40;
    v39 = v6 + 1;
    v4 += v40;
    if ( v6 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      while ( 1 )
      {
        if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v6, v14, 0) )
        {
          v21 = *((_QWORD *)this + 8);
          v22 = 272LL * v39;
          v23 = *(_DWORD *)(v21 + v10 + 64);
          v41 = v22;
          if ( *(_DWORD *)(v21 + v22 + 64) == v23
            && *(_DWORD *)(v21 + v22 + 68) == *(_DWORD *)(v21 + v10 + 68)
            && *(_DWORD *)(v21 + v22 + 76) == *(_DWORD *)(v21 + v10 + 76) )
          {
            v24 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v24);
          }
          result = 3221225485LL;
          if ( !v9 )
            return result;
          v25 = v9;
          v26 = v4;
          do
          {
            if ( !(v25 + 2147483646LL - v9) )
              break;
            v27 = *(unsigned __int16 *)((char *)v26 + (char *)L"*" - (char *)v4);
            if ( !v27 )
              break;
            *v26++ = v27;
            --v25;
          }
          while ( v25 );
          v28 = v26 - 1;
          if ( v25 )
            v28 = v26;
          v29 = v41;
          *v28 = 0;
          v30 = -2147483643;
          if ( v25 )
            v30 = 0;
          if ( v30 == -2147483643 )
            return 3221225507LL;
          v31 = v9 - 1;
          v32 = v4 + 1;
          v33 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                  (const struct _LUID *)(v29 + *((_QWORD *)this + 8) + 64LL),
                  *(_DWORD *)(v29 + *((_QWORD *)this + 8) + 76),
                  v32,
                  v31,
                  &v40);
          v7 = v33;
          if ( v33 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v34);
            v37 = v41;
            v36[3] = v7;
            v36[4] = *(unsigned int *)(v37 + *((_QWORD *)this + 8) + 76);
            v36[5] = *((_QWORD *)this + 8);
            v38 = 272LL * v39;
            goto LABEL_46;
          }
          v35 = v8++;
          *(_DWORD *)(v41 + *((_QWORD *)this + 8) + 288) = v35;
          v9 = v31 - v40;
          v4 = &v32[v40];
        }
        v14 = v39 + 1;
        v39 = v14;
        if ( v14 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  result = 3221225485LL;
  if ( !v9 )
    return result;
  v16 = v9;
  v17 = v4;
  do
  {
    if ( !(2147483646LL - v9 + v16) )
      break;
    v18 = *(unsigned __int16 *)((char *)v17 + (char *)L"+" - (char *)v4);
    if ( !v18 )
      break;
    *v17++ = v18;
    --v16;
  }
  while ( v16 );
  v19 = v17 - 1;
  if ( v16 )
    v19 = v17;
  *v19 = 0;
  v20 = -2147483643;
  if ( v16 )
    v20 = 0;
  if ( v20 != -2147483643 )
  {
    --v9;
    ++v4;
    goto LABEL_6;
  }
  return 3221225507LL;
}
