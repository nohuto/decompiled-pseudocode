/*
 * XREFs of PinBuildDescriptors @ 0x1C0021660
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C00206A4 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00113C0 (memset.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, char **a2, _DWORD *a3, _DWORD *a4)
{
  char *PoolWithTag; // r13
  __int64 *v7; // r15
  int v8; // edi
  __int64 *v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // ebx
  int v17; // eax
  NTSTATUS v18; // edi
  unsigned int v19; // r8d
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  int v22; // ebx
  unsigned int v23; // edx
  unsigned int v24; // esi
  signed int v25; // ecx
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ebx
  unsigned __int64 v30; // rax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // r10d
  unsigned __int64 v34; // rax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // r9d
  unsigned __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  size_t v41; // rbx
  unsigned int v42; // ebx
  __int64 v43; // r12
  unsigned int v44; // esi
  __int64 v45; // r9
  unsigned int v46; // r14d
  char *v47; // r9
  char *v48; // r12
  char *v49; // r8
  __int64 *v50; // r10
  char *v51; // rbx
  __int64 *v52; // r13
  _QWORD *v53; // r12
  __int64 v54; // rax
  char v55; // cl
  __int64 v56; // rcx
  bool v57; // si
  __int64 v58; // rdx
  char *v59; // rcx
  unsigned int v60; // ecx
  bool v61; // r8
  __int64 v62; // r10
  unsigned int v63; // r11d
  __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // rcx
  unsigned int v67; // edx
  __int64 v68; // rax
  char v69; // cl
  __int64 v70; // rcx
  __int64 v71; // rax
  char v72; // cl
  __int64 v73; // rcx
  unsigned int v74; // r11d
  __int64 v75; // r14
  __int64 v76; // rax
  char v77; // cl
  char v78; // cl
  bool v79; // r10
  __int64 v80; // r8
  __int64 v81; // rax
  char v82; // cl
  char v83; // r9
  __int64 v84; // rcx
  _UNKNOWN **v85; // rax
  char *v86; // rdx
  char v87; // cl
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  char v91; // cl
  bool v92; // cf
  unsigned __int16 *v93; // rcx
  __int64 v94; // r9
  __int64 v95; // r8
  int v96; // ecx
  int v97; // eax
  GUID v98; // xmm0
  GUID v99; // xmm0
  unsigned int v101; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v102; // [rsp+54h] [rbp-25h] BYREF
  int v103; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v104; // [rsp+5Ch] [rbp-1Dh]
  char *v105; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v106; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v107; // [rsp+70h] [rbp-9h]
  char *v108; // [rsp+78h] [rbp-1h]
  char *v109; // [rsp+80h] [rbp+7h]
  char *v110; // [rsp+88h] [rbp+Fh]
  char *v111; // [rsp+90h] [rbp+17h]
  __int64 v112; // [rsp+98h] [rbp+1Fh]
  unsigned int v114; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v115; // [rsp+F8h] [rbp+7Fh] BYREF

  v112 = *(_QWORD *)(a1 + 16);
  v103 = 0;
  v114 = 0;
  PoolWithTag = 0LL;
  v7 = (__int64 *)(v112 + 80);
  v102 = 0;
  v115 = 0;
  v8 = 0;
  v9 = *(__int64 **)(v112 + 80);
  v10 = 0;
  v108 = 0LL;
  v11 = 0;
  v107 = 0;
  v12 = 0;
  v104 = 0;
  v13 = 0;
  v14 = 0;
  if ( v9 != (__int64 *)(v112 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v9 + 5) <= 1u )
      {
        if ( *((_BYTE *)v9 + 72) )
          ++v13;
        else
          ++v14;
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != v7 );
    v104 = v14;
    v107 = v13;
  }
  v15 = v13 + v14;
  *a3 = v13 + v14;
  *a4 = 176;
  v16 = 0;
  if ( v13 )
  {
    do
    {
      v101 = 0;
      LODWORD(v105) = 0;
      LODWORD(v106) = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, unsigned int *, char **, __int64 **))(pExtBusDeviceDispatchTable + 72))(
              a1,
              v16,
              0LL,
              0LL,
              0LL,
              &v103,
              &v101,
              &v105,
              &v106);
      v10 = v114;
      v11 = v102;
      v18 = v17;
      v12 = v115;
      if ( v17 >= 0 )
      {
        v10 = v101 + v114;
        v11 = (_DWORD)v105 + v102;
        v12 = (_DWORD)v106 + v115;
        v115 += (unsigned int)v106;
        v114 += v101;
        v102 += (unsigned int)v105;
      }
      ++v16;
    }
    while ( v16 < v13 );
    PoolWithTag = 0LL;
    if ( v17 < 0 )
      return (unsigned int)v18;
    v8 = v103;
  }
  v19 = -1;
  v20 = v15;
  v21 = 336LL * v15;
  v22 = 0;
  v23 = -1;
  if ( v21 <= 0xFFFFFFFF )
    v23 = 336 * v15;
  v24 = v23;
  v25 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v21 <= 0xFFFFFFFF )
  {
    v26 = v10 * (unsigned __int64)(unsigned int)(v8 + 8);
    v22 = -1;
    if ( v26 <= 0xFFFFFFFF )
      v22 = v10 * (v8 + 8);
    v25 = v26 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  if ( v25 < 0 )
    goto LABEL_37;
  v27 = v22 + v23;
  v28 = -1;
  if ( v22 + v23 >= v23 )
    v28 = v22 + v23;
  v23 = v28;
  v29 = v28;
  if ( v27 < v24 )
    goto LABEL_37;
  v30 = 8LL * v11;
  if ( v30 > 0xFFFFFFFF )
    goto LABEL_37;
  v31 = v29 + v30;
  v32 = -1;
  if ( v31 >= v29 )
    v32 = v31;
  v23 = v32;
  v33 = v32;
  if ( v31 < v29 )
    goto LABEL_37;
  v34 = 16LL * v12;
  if ( v34 > 0xFFFFFFFF )
    goto LABEL_37;
  v35 = v23 + v34;
  v36 = -1;
  if ( v35 >= v23 )
    v36 = v35;
  v23 = v36;
  v37 = v36;
  if ( v35 < v33 )
    goto LABEL_37;
  v38 = 16LL * v104;
  if ( v38 > 0xFFFFFFFF )
    goto LABEL_37;
  v39 = v23 + v38;
  v40 = v23;
  if ( v39 >= v23 )
    v19 = v39;
  v23 = v19;
  v18 = v39 < v40 ? 0xC0000095 : 0;
  if ( v39 < v37 )
  {
LABEL_37:
    v18 = -1073741436;
    v41 = v23;
  }
  else
  {
    v41 = v19;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v19, 0x41627845u);
    v108 = PoolWithTag;
    *a2 = PoolWithTag;
  }
  if ( v18 >= 0 && PoolWithTag )
  {
    memset(PoolWithTag, 0, v41);
    v42 = v104;
    v43 = 5 * v20;
    v44 = 0;
    v45 = 176 * v20;
    v46 = v107;
    v47 = &PoolWithTag[v45];
    v48 = &v47[32 * v43];
    v49 = &v48[16 * v104];
    v110 = v47;
    v111 = v48;
    v109 = &v49[16 * v115];
    v105 = v49;
    v101 = 0;
    v50 = (__int64 *)&v109[8 * v114 + 8 * (unsigned __int64)v102];
    v106 = v50;
    if ( v107 )
    {
      v51 = PoolWithTag + 68;
      v52 = (__int64 *)v109;
      v53 = v47 + 8;
      do
      {
        if ( v18 < 0 )
          break;
        v54 = *v7;
        v55 = 0;
        while ( (__int64 *)v54 != v7 && !v55 )
        {
          if ( *(_DWORD *)(v54 + 20) < 2u && *(_DWORD *)(v54 + 64) == v44 )
            v55 = 1;
          else
            v54 = *(_QWORD *)v54;
        }
        v56 = v54 & -(__int64)(v55 != 0);
        v57 = v56 && *(_DWORD *)(v56 + 68) == 257 && *(_DWORD *)(v56 + 76) == 2;
        *(_QWORD *)(v51 - 68) = &PinDispatch;
        if ( v57 )
        {
          *(_QWORD *)(v51 - 60) = 0LL;
        }
        else
        {
          *(_QWORD *)(v51 - 60) = &v47[48 * v101];
          *((_DWORD *)v53 - 2) = 5;
          *((_DWORD *)v53 - 1) = 72;
          *v53 = &off_1C0013240;
        }
        *(_QWORD *)(v51 - 44) = &PinInterface;
        v58 = v101;
        *((_DWORD *)v51 - 13) = 1;
        *((_DWORD *)v51 - 9) = 1;
        *(_QWORD *)(v51 - 28) = &PinMedium;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *, char *, int *, unsigned int *, unsigned int *, unsigned int *))(pExtBusDeviceDispatchTable + 72))(
                a1,
                v58,
                v52,
                v50,
                v49,
                &v103,
                &v114,
                &v102,
                &v115);
        if ( v18 < 0 )
        {
          v50 = v106;
        }
        else
        {
          v59 = v105;
          *(_QWORD *)(v51 + 100) = v105;
          *((_DWORD *)v51 + 23) = v115;
          v105 = &v59[16 * v115];
          v60 = v114 + v102;
          *((_DWORD *)v51 - 5) = v114 + v102;
          *(_QWORD *)(v51 - 12) = v52;
          if ( v114 <= 1 )
          {
            v51[80] = 0;
            *((_DWORD *)v51 + 10) = 1;
            *((_DWORD *)v51 + 17) = 1;
          }
          else
          {
            *((_DWORD *)v51 + 17) = 1;
            v61 = 0;
            v62 = *v52;
            v63 = v60;
            v64 = (unsigned int)((*(_DWORD *)(*v52 + 4) & 2) != 0) + 1;
            if ( (unsigned int)v64 < v60 )
            {
              do
              {
                if ( v61 )
                  break;
                v65 = v52[v64];
                v66 = *(_QWORD *)(v62 + 32) - *(_QWORD *)(v65 + 32);
                if ( !v66 )
                  v66 = *(_QWORD *)(v62 + 40) - *(_QWORD *)(v65 + 40);
                v61 = v66 != 0;
                v64 = ((*(_DWORD *)(v65 + 4) & 2) != 0) + 1 + (unsigned int)v64;
              }
              while ( (unsigned int)v64 < v63 );
            }
            v51[80] = v61;
            *((_DWORD *)v51 + 10) = v61 + 1;
          }
          *((_DWORD *)v51 + 11) = 0;
          v18 = -1073741275;
          *((_DWORD *)v51 + 18) = 0;
          v52 += v114 + v102;
          v67 = v101;
          v50 = (__int64 *)((char *)v106 + v103 * v114);
          v68 = *v7;
          v69 = 0;
          v106 = v50;
          while ( (__int64 *)v68 != v7 && !v69 )
          {
            if ( *(_DWORD *)(v68 + 20) < 2u && *(_DWORD *)(v68 + 64) == v101 )
              v69 = 1;
            else
              v68 = *(_QWORD *)v68;
          }
          v70 = v68 & -(__int64)(v69 != 0);
          if ( v70 )
          {
            *((_DWORD *)v51 - 1) = (*(_DWORD *)(v70 + 20) != 0) + 1;
            v18 = 0;
          }
          if ( v18 >= 0 )
          {
            *((_DWORD *)v51 + 9) = 2;
            if ( v57 )
            {
              *(_QWORD *)(v51 + 60) = PinMIDIDataFormatIntersection;
              *(_QWORD *)(v51 + 4) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
              if ( *((_DWORD *)v51 - 1) == 1 )
              {
                *(_DWORD *)v51 = 1;
                *((_DWORD *)v51 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v51 = 3;
                *((_DWORD *)v51 + 9) |= 8u;
              }
            }
            else
            {
              *(_QWORD *)(v51 + 60) = PinDataFormatIntersection;
              if ( *((_DWORD *)v51 - 1) == 1 )
              {
                *(_DWORD *)v51 = 1;
                *(_QWORD *)(v51 + 4) = &KSCATEGORY_AUDIO;
                *((_DWORD *)v51 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v51 = 3;
                *(_QWORD *)(v51 + 4) = &PINNAME_VIDEO_CAPTURE;
                *((_DWORD *)v51 + 9) |= 0x10000u;
              }
              v71 = *v7;
              v18 = -1073741275;
              v72 = 0;
              while ( (__int64 *)v71 != v7 && !v72 )
              {
                if ( *(_DWORD *)(v71 + 20) < 2u && *(_DWORD *)(v71 + 64) == v67 )
                  v72 = 1;
                else
                  v71 = *(_QWORD *)v71;
              }
              v73 = v71 & -(__int64)(v72 != 0);
              if ( v73 )
              {
                v18 = 0;
                *((_DWORD *)v51 + 19) = *(_DWORD *)(v73 + 28);
              }
            }
            *(_QWORD *)(v51 + 52) = &AllocatorFraming;
          }
        }
        v49 = v105;
        v44 = v101 + 1;
        v53 += 6;
        v47 = v110;
        v51 += 176;
        v101 = v44;
      }
      while ( v44 < v46 );
      PoolWithTag = v108;
      v42 = v104;
      v48 = v111;
    }
    v74 = 0;
    if ( v42 )
    {
      v75 = v112;
      while ( 1 )
      {
        if ( v18 < 0 )
          goto LABEL_174;
        v76 = *v7;
        v77 = 0;
        while ( (__int64 *)v76 != v7 && !v77 )
        {
          if ( *(_DWORD *)(v76 + 20) < 2u && *(_DWORD *)(v76 + 64) == v44 )
            v77 = 1;
          else
            v76 = *(_QWORD *)v76;
        }
        v78 = -v77;
        v79 = (v76 & -(__int64)(v78 != 0)) != 0 && *(_DWORD *)((v76 & -(__int64)(v78 != 0)) + 0x44) == 2305;
        v80 = 176LL * v44;
        *(_DWORD *)&PoolWithTag[v80 + 136] = 0;
        *(_DWORD *)&PoolWithTag[v80 + 140] = 0;
        v81 = *v7;
        v82 = 0;
        while ( (__int64 *)v81 != v7 && !v82 )
        {
          if ( *(_DWORD *)(v81 + 20) < 2u && *(_DWORD *)(v81 + 64) == v44 )
            v82 = 1;
          else
            v81 = *(_QWORD *)v81;
        }
        v83 = 0;
        v84 = v81 & -(__int64)(v82 != 0);
        if ( v84 && *(_DWORD *)(v84 + 20) == 1 && (*(_DWORD *)(v84 + 68) == 1538 || *(_DWORD *)(v84 + 68) == 1541) )
          v83 = 1;
        PoolWithTag[v80 + 149] = v83;
        *(_QWORD *)&PoolWithTag[v80] = 0LL;
        *(_QWORD *)&PoolWithTag[v80 + 8] = 0LL;
        v18 = -1073741275;
        *(_DWORD *)&PoolWithTag[v80 + 108] = 0;
        *(_DWORD *)&PoolWithTag[v80 + 112] = 0;
        *(_QWORD *)&PoolWithTag[v80 + 24] = &PinInterface;
        *(_QWORD *)&PoolWithTag[v80 + 40] = &PinMedium;
        v85 = &pAudioBridgePinFormats;
        if ( v79 )
          v85 = &pMIDIBridgePinFormats;
        *(_DWORD *)&PoolWithTag[v80 + 16] = 1;
        v86 = &v48[16 * v74];
        *(_DWORD *)&PoolWithTag[v80 + 32] = 1;
        *(_QWORD *)&PoolWithTag[v80 + 72] = v86;
        v87 = 0;
        *(_DWORD *)&PoolWithTag[v80 + 48] = 1;
        *(_QWORD *)&PoolWithTag[v80 + 56] = v85;
        *(_DWORD *)&PoolWithTag[v80 + 68] = 4;
        v88 = *v7;
        while ( (__int64 *)v88 != v7 && !v87 )
        {
          if ( *(_DWORD *)(v88 + 20) < 2u && *(_DWORD *)(v88 + 64) == v44 )
            v87 = 1;
          else
            v88 = *(_QWORD *)v88;
        }
        v89 = v88 & -(__int64)(v87 != 0);
        if ( v89 )
        {
          *(_DWORD *)&PoolWithTag[v80 + 64] = (*(_DWORD *)(v89 + 20) != 0) + 1;
          v18 = 0;
        }
        if ( v18 >= 0 )
        {
          v90 = *v7;
          v91 = 0;
          while ( (__int64 *)v90 != v7 && !v91 )
          {
            if ( *(_DWORD *)(v90 + 20) < 2u && *(_DWORD *)(v90 + 64) == v44 )
              v91 = 1;
            else
              v90 = *(_QWORD *)v90;
          }
          v92 = v91 != 0;
          v93 = (unsigned __int16 *)&unk_1C0013E12;
          v94 = v90 & -(__int64)v92;
          v95 = 0LL;
          while ( *(_DWORD *)(v75 + 40) != *(v93 - 1) || *(_DWORD *)(v75 + 44) != *v93 )
          {
            v95 = (unsigned int)(v95 + 1);
            v93 += 4;
            if ( (unsigned int)v95 >= 0xA )
            {
              LOBYTE(v96) = 0;
              goto LABEL_147;
            }
          }
          v96 = dword_1C0013E14[2 * v95];
LABEL_147:
          *(GUID *)v86 = GUID_NULL;
          if ( v94 )
            break;
        }
LABEL_171:
        ++v74;
        ++v44;
        if ( v74 >= v42 )
          goto LABEL_172;
      }
      v97 = *(_DWORD *)((v90 & -(__int64)v92) + 0x44);
      if ( v97 == 2305 )
      {
        v98 = KSCATEGORY_AUDIO;
LABEL_170:
        *(GUID *)v86 = v98;
        goto LABEL_171;
      }
      *((_DWORD *)v86 + 1) = 298907407;
      *(_DWORD *)v86 = (unsigned __int16)v97 - 537781792;
      *((_DWORD *)v86 + 2) = -1610606663;
      *((_DWORD *)v86 + 3) = -1775164727;
      if ( (v96 & 1) != 0 )
      {
        if ( *(_QWORD *)v86 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *((_QWORD *)v86 + 1) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
        {
          v99 = KSNODETYPE_COMMUNICATION_SPEAKER;
        }
        else
        {
          if ( *(_QWORD *)v86 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
            || *((_QWORD *)v86 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
          {
            goto LABEL_165;
          }
          v99 = KSNODETYPE_PERSONAL_MICROPHONE;
        }
      }
      else
      {
        if ( (v96 & 2) == 0
          || (*(_QWORD *)v86 != *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
           || *((_QWORD *)v86 + 1) != *(_QWORD *)KSNODETYPE_SPEAKER.Data4)
          && (*(_QWORD *)v86 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
           || *((_QWORD *)v86 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
        {
          goto LABEL_165;
        }
        v99 = KSNODETYPE_HANDSET;
      }
      *(GUID *)v86 = v99;
LABEL_165:
      if ( *(_QWORD *)v86 != *(_QWORD *)&KSNODETYPE_HEADSET.Data1
        || *((_QWORD *)v86 + 1) != *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
      {
        goto LABEL_171;
      }
      if ( *(_DWORD *)(v94 + 20) )
        v98 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v98 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_170;
    }
LABEL_172:
    if ( v18 < 0 || (v18 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool), v18 < 0) )
LABEL_174:
      ExFreePool(PoolWithTag);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v18;
}
