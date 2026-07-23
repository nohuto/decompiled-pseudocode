/*
 * XREFs of PpmSetProfilePolicySetting @ 0x14058BBB4
 * Callers:
 *     PopSetNewPolicyValue @ 0x14058C120 (PopSetNewPolicyValue.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14087BA90 (PpmProcessSettingsFromQueryTable.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmInfoAdjustSetting @ 0x14058C9B8 (PpmInfoAdjustSetting.c)
 *     PpmInfoReleaseLocks @ 0x14058CB8C (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x140757050 (PpmGetPolicyAction.c)
 *     PpmEventTraceProfileSetting @ 0x140757988 (PpmEventTraceProfileSetting.c)
 *     PpmReapplyIdlePolicy @ 0x1408685A0 (PpmReapplyIdlePolicy.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r12
  __int64 v9; // rax
  unsigned int v10; // r9d
  GUID **v11; // rdx
  GUID **v12; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // r8d
  unsigned __int8 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // r13d
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r15
  char v22; // al
  __int64 v23; // rdx
  int v24; // r9d
  unsigned int v25; // ecx
  bool v27; // bp
  __int64 v28; // r12
  _QWORD *v29; // r15
  __int64 v30; // r8
  char v31; // cl
  unsigned __int8 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rbp
  __int64 v35; // rcx
  __int64 v36; // r15
  bool v37; // zf
  int v38; // ecx
  int v39; // r9d
  char v40; // [rsp+40h] [rbp-88h]
  bool v41; // [rsp+44h] [rbp-84h]
  bool v42; // [rsp+48h] [rbp-80h]
  int v43; // [rsp+50h] [rbp-78h]
  __int16 v44; // [rsp+58h] [rbp-70h] BYREF
  __int64 v45; // [rsp+60h] [rbp-68h]
  __int64 v46; // [rsp+68h] [rbp-60h] BYREF
  __int64 v47; // [rsp+70h] [rbp-58h]
  __int64 v48; // [rsp+78h] [rbp-50h]
  GUID v49; // [rsp+80h] [rbp-48h]

  v5 = 0;
  v6 = a3;
  v48 = a4;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( !a5 || !a4 )
    return (unsigned int)-1073741811;
  if ( a3 )
    goto LABEL_7;
  v9 = *a1 - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  if ( *a1 == *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1 )
    v9 = a1[1] - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( v9 )
  {
LABEL_7:
    v10 = 0;
    v11 = &off_140541A38;
LABEL_8:
    v12 = v11 - 1;
    v13 = 0;
    v14 = ((*((_BYTE *)v11 + 29) & 4) != 0) + 1;
    v49 = **v11;
    v15 = v49.Data4[7];
    while ( 1 )
    {
      v16 = *(_QWORD *)&v49.Data1 - *a2;
      if ( *(_QWORD *)&v49.Data1 == *a2 )
        v16 = *(_QWORD *)v49.Data4 - a2[1];
      if ( !v16 )
        break;
      ++v15;
      ++v13;
      v49.Data4[7] = v15;
      if ( v13 >= v14 )
      {
        ++v10;
        v11 += 5;
        if ( v10 < 0x34 )
          goto LABEL_8;
        return (unsigned int)-1073741275;
      }
    }
    v17 = 1LL << *((_BYTE *)v12 + 36);
    v18 = v13;
    if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    else
      PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    *(_QWORD *)&v49.Data1 = PpmCurrentProfile;
    v43 = dword_14041918C;
    v19 = *a1 - *(_QWORD *)&NullGuid.Data1;
    if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
      v19 = a1[1] - *(_QWORD *)NullGuid.Data4;
    if ( v19 )
    {
      v33 = 0LL;
      if ( !PpmProfileCount )
      {
LABEL_57:
        PpmInfoReleaseLocks(v12, v33);
        return (unsigned int)-1073741275;
      }
      while ( 1 )
      {
        v34 = PpmProfiles + 5536LL * (unsigned int)v33;
        v35 = *(_QWORD *)(v34 + 12) - *a1;
        if ( !v35 )
          v35 = *(_QWORD *)(v34 + 20) - a1[1];
        if ( !v35 )
          break;
        v33 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v33 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_57;
      }
      LODWORD(v45) = *((_DWORD *)v12 + 8);
      v36 = v34 + 2728 * v6 + 40;
      v37 = (*((_BYTE *)v12 + 37) & 4) == 0;
      v46 = (__int64)v12[3] + v13 * (unsigned int)v45 + v36;
      if ( !v37 && !v13 && (v17 & *(_QWORD *)(v36 + 8)) == 0 )
        v18 = 1;
      LOBYTE(v38) = PpmInfoAdjustSetting((_DWORD)v12, (int)v34 + 2728 * (int)v6 + 40, v13, v18, v48, a5);
      *(_QWORD *)(v36 + 8LL * v13) |= v17;
      if ( !(_BYTE)v38 )
        goto LABEL_25;
      LOBYTE(v39) = v13;
      LOBYTE(v38) = *(_BYTE *)(v34 + 8);
      PpmEventTraceProfileSetting(v38, (unsigned int)*v12, (unsigned int)v12[1], v39, v46, v45, v6, 0);
      if ( *(_QWORD *)&v49.Data1 == v34 )
        v41 = v43 == (_DWORD)v6;
      if ( PpmBackgroundProfile == v34 || PpmMultimediaQosProfile == v34 || PpmEntryLevelPerfProfile == v34 )
        v42 = v43 == (_DWORD)v6;
    }
    else
    {
      v46 = v6;
      v47 = 2728 * v6;
      v20 = &PpmDefaultProfile[341 * v6 + 5];
      LODWORD(v45) = *((_DWORD *)v12 + 8);
      v21 = (__int64)v12[3] + v13 * (unsigned int)v45 + (_QWORD)v20;
      if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 && (v17 & v20[1]) == 0 )
      {
        v40 = 1;
        v18 = 1;
      }
      v22 = PpmInfoAdjustSetting((_DWORD)v12, 2728 * v6 + (unsigned int)&PpmDefaultProfile[5], v13, v18, v48, a5);
      v25 = v13;
      v20[v13] |= v17;
      if ( !v22 )
        goto LABEL_25;
      LOBYTE(v24) = v13;
      LOBYTE(v25) = byte_14040F828;
      PpmEventTraceProfileSetting(v25, (unsigned int)*v12, (unsigned int)v12[1], v24, v21, v45, v6, 0);
      v27 = 0;
      if ( *(__int64 **)&v49.Data1 == PpmDefaultProfile )
      {
        v27 = v43 == (_DWORD)v6;
        v41 = v43 == (_DWORD)v6;
      }
      if ( PpmProfileCount )
      {
        v28 = (unsigned __int8)PpmProfileCount;
        v23 = v47 + 40;
        v29 = (_QWORD *)(v47 + 40 + PpmProfiles);
        v45 = v47 + 40;
        v30 = -40LL;
        v47 = -40LL;
        do
        {
          if ( (*(_QWORD *)((char *)&v29[v13 + 5] + v30) & v17) == 0 && (!v13 || (v17 & *v29) == 0) )
          {
            if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
            {
              if ( v40 )
              {
                if ( (v17 & *(_QWORD *)((char *)v29 + v30 + 48)) == 0 )
                  v18 = 1;
              }
              else
              {
                v18 = 0;
              }
            }
            PpmInfoAdjustSetting((_DWORD)v12, (_DWORD)v29, v13, v18, v48, a5);
            v30 = v47;
            if ( *(_QWORD **)&v49.Data1 == (_QWORD *)((char *)v29 - v45) && v43 == v46 )
              v27 = 1;
          }
          v29 += 692;
          --v28;
        }
        while ( v28 );
        v41 = v27;
      }
    }
    if ( v41 )
    {
LABEL_44:
      v31 = *((_BYTE *)v12 + 36);
      v44 = 0;
      v46 = 1LL << v31;
      PpmGetPolicyAction(&v46, &v44);
      if ( (v32 & *((_BYTE *)v12 + 37)) != 0 )
      {
        PpmReapplyPerfPolicy(&v44);
      }
      else
      {
        PpmReapplyIdlePolicy();
        PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
      }
      return v5;
    }
LABEL_25:
    if ( !PopHeteroSystem || !PpmPerfSchedulerDirectedPerfStatesSupported || !v42 )
    {
      PpmInfoReleaseLocks(v12, v23);
      return v5;
    }
    goto LABEL_44;
  }
  return v5;
}
