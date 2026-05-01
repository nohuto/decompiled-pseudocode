/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180022810
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000C770 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001B930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800207E0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180022DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024190 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180024350 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x18002BD10 (RmpActivityImportanceMergeVectors.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18003DD64 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostUpdateImportance(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  unsigned int v3; // ebx
  DWORD v4; // r15d
  _QWORD *Value; // rdi
  unsigned int v6; // edi
  _QWORD *v7; // rax
  int v9; // eax
  int v10; // r8d
  char *v12; // rdx
  char *v13; // rcx
  char *v14; // r14
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v20; // [rsp+3Eh] [rbp-CAh] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  int v25; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  int v28; // [rsp+5Ch] [rbp-ACh] BYREF
  int v29; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v30; // [rsp+64h] [rbp-A4h] BYREF
  BOOL v31; // [rsp+68h] [rbp-A0h] BYREF
  int v32; // [rsp+6Ch] [rbp-9Ch] BYREF
  _DWORD v33[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  __int64 *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  int *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  BOOL *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  __int16 *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int16 *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  int *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  int *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  int *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  int *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  int *v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  int *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  BOOL *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  BOOL *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  int *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]

  if ( (a2 & 2) != 0 )
  {
    v3 = *((_DWORD *)a1 + 366);
    if ( (*((_BYTE *)a1 + 836) & 1) != 0 )
    {
      v4 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockShared((char *)a1 + 64);
      v6 = *((_DWORD *)a1 + 182);
      if ( HampLockTrackerId != -1 )
      {
        v7 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v7 & 2) == 0 )
          __int2c();
        if ( v7[2]-- == 1LL )
          *v7 &= ~2uLL;
      }
      RtlReleaseSRWLockShared((char *)a1 + 64);
    }
    else
    {
      v12 = (char *)a1 + 1136;
      v18 = 0;
      v13 = (char *)*((_QWORD *)a1 + 142);
      LOWORD(v18) = 1;
      v6 = 1;
      v14 = 0LL;
      if ( v13 != v12 )
        v14 = v13 - 1296;
      while ( v14 )
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v14) )
          v6 = RmpActivityImportanceMergeVectors(v6, *((unsigned int *)v14 + 338));
        v15 = *((_QWORD *)v14 + 162);
        v16 = *((int *)v14 + 332);
        v17 = *((_QWORD *)v14 + 165);
        v14 = 0LL;
        if ( v15 != v17 + 1112 + 24 * v16 )
          v14 = (char *)(v15 - 1296);
      }
    }
    *((_DWORD *)a1 + 366) = v6;
    if ( (*((_WORD *)a1 + 732) & 0x400) == 0 )
    {
      v9 = *((_DWORD *)a1 + 310);
      if ( (v9 & 2) != 0 )
        *((_DWORD *)a1 + 310) = v9 & 0xFFFFFFFD;
    }
    v10 = *((_DWORD *)a1 + 366);
    if ( v3 != v10 && hProvider > 4u && (byte_1800AB290 & 9) != 0 && (qword_1800AB298 & 9) == qword_1800AB298 )
    {
      v34 = *((_QWORD *)a1 + 4);
      v40 = &v34;
      v41 = 8LL;
      v22 = v3 & 1;
      v43 = 4LL;
      v42 = &v22;
      v45 = 4LL;
      v23 = (v10 & 1) != 0;
      v44 = &v23;
      v47 = 2LL;
      v19 = ((unsigned __int16)v3 >> 1) & 7;
      v46 = &v19;
      v20 = ((unsigned __int16)v10 >> 1) & 7;
      v49 = 2LL;
      v48 = &v20;
      v51 = 2LL;
      LOWORD(v21) = ((unsigned __int16)v3 >> 4) & 3;
      v50 = &v21;
      v52 = &v18;
      LOWORD(v18) = ((unsigned __int16)v10 >> 4) & 3;
      v24 = (v3 >> 6) & 1;
      v54 = &v24;
      v53 = 2LL;
      v25 = ((unsigned __int16)v10 >> 6) & 1;
      v56 = &v25;
      v55 = 4LL;
      v26 = (v3 >> 7) & 1;
      v58 = &v26;
      v57 = 4LL;
      v27 = ((unsigned __int16)v10 >> 7) & 1;
      v60 = &v27;
      v59 = 4LL;
      v28 = (v3 >> 8) & 1;
      v62 = &v28;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v64 = &v29;
      v29 = BYTE1(v10) & 1;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      v30 = (v3 & 0x200) != 0;
      v66 = &v30;
      v31 = (v10 & 0x200) != 0;
      v68 = &v31;
      v32 = (v3 >> 10) & 1;
      v70 = &v32;
      v72 = v33;
      v33[0] = ((unsigned __int16)v10 >> 10) & 1;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_1800AB288;
      v37 = &unk_180093DB2;
      UserData.Reserved = 2;
      v38 = 399;
      v39 = 1;
      v33[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
}
