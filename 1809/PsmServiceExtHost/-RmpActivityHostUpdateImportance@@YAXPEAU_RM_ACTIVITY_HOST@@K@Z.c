/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180017F54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180018F20 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001E720 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180020A10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800229C0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180029B00 (RmpActivityImportanceMergeVectors.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18003CF68 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
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
  __int64 v16; // rcx
  __int64 v17; // rax
  __int16 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v19; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v21; // [rsp+3Eh] [rbp-CAh] BYREF
  int v22; // [rsp+40h] [rbp-C8h]
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  int v30; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v31; // [rsp+64h] [rbp-A4h] BYREF
  BOOL v32; // [rsp+68h] [rbp-A0h] BYREF
  int v33; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v38; // [rsp+A8h] [rbp-60h]
  int v39; // [rsp+B0h] [rbp-58h]
  int v40; // [rsp+B4h] [rbp-54h]
  __int64 *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  int *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  BOOL *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  __int16 *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  __int16 *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  __int16 *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  __int16 *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  int *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  int *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  int *v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  int *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  int *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  int *v65; // [rsp+178h] [rbp+70h]
  __int64 v66; // [rsp+180h] [rbp+78h]
  BOOL *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  BOOL *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  int *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]
  __int64 *v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]

  if ( (a2 & 2) != 0 )
  {
    v3 = *((_DWORD *)a1 + 352);
    if ( (*((_BYTE *)a1 + 812) & 1) != 0 )
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
      v6 = *((_DWORD *)a1 + 176);
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
      v12 = (char *)a1 + 1080;
      v13 = (char *)*((_QWORD *)a1 + 135);
      v22 = 1;
      v6 = 1;
      v14 = 0LL;
      if ( v13 != v12 )
        v14 = v13 - 1416;
      while ( v14 )
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v14) )
          v6 = RmpActivityImportanceMergeVectors(v6, *((unsigned int *)v14 + 368));
        v15 = *((_QWORD *)v14 + 177);
        v16 = 3 * (*((int *)v14 + 362) + 44LL);
        v17 = *((_QWORD *)v14 + 180);
        v14 = 0LL;
        if ( v15 != v17 + 8 * v16 )
          v14 = (char *)(v15 - 1416);
      }
    }
    *((_DWORD *)a1 + 352) = v6;
    if ( (*((_WORD *)a1 + 704) & 0x400) == 0 )
    {
      v9 = *((_DWORD *)a1 + 296);
      if ( (v9 & 2) != 0 )
        *((_DWORD *)a1 + 296) = v9 & 0xFFFFFFFD;
    }
    v10 = *((_DWORD *)a1 + 352);
    if ( v3 != v10 && dword_18009B0B0 > 4u && (qword_18009B0C0 & 9) != 0 && (qword_18009B0C8 & 9) == qword_18009B0C8 )
    {
      v35 = *((_QWORD *)a1 + 4);
      v41 = &v35;
      v42 = 8LL;
      v23 = v3 & 1;
      v44 = 4LL;
      v43 = &v23;
      v46 = 4LL;
      v24 = (v10 & 1) != 0;
      v45 = &v24;
      v48 = 2LL;
      v18 = ((unsigned __int16)v3 >> 1) & 7;
      v47 = &v18;
      v50 = 2LL;
      v19 = ((unsigned __int16)v10 >> 1) & 7;
      v49 = &v19;
      v52 = 2LL;
      v20 = ((unsigned __int16)v3 >> 4) & 3;
      v51 = &v20;
      v54 = 2LL;
      v21 = ((unsigned __int16)v10 >> 4) & 3;
      v53 = &v21;
      v56 = 4LL;
      v25 = (v3 >> 6) & 1;
      v55 = &v25;
      v58 = 4LL;
      v26 = ((unsigned __int16)v10 >> 6) & 1;
      v57 = &v26;
      v60 = 4LL;
      v27 = (v3 >> 7) & 1;
      v59 = &v27;
      v62 = 4LL;
      v28 = ((unsigned __int16)v10 >> 7) & 1;
      v61 = &v28;
      v29 = (v3 >> 8) & 1;
      v63 = &v29;
      v64 = 4LL;
      v66 = 4LL;
      v30 = BYTE1(v10) & 1;
      v68 = 4LL;
      v65 = &v30;
      v70 = 4LL;
      v72 = 4LL;
      v31 = (v3 & 0x200) != 0;
      v74 = 4LL;
      v67 = &v31;
      v32 = (v10 & 0x200) != 0;
      v69 = &v32;
      v33 = (v3 >> 10) & 1;
      v71 = &v33;
      v73 = &v34;
      LODWORD(v34) = ((unsigned __int16)v10 >> 10) & 1;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18009B0B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180085FEA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_18009B0B8;
      v38 = &unk_180085FF5;
      UserData.Reserved = 2;
      v39 = 399;
      v40 = 1;
      EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
}
