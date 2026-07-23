/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x1406F5DDC
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082C75C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140832CA4 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PnpMultiSzContainsString @ 0x14016B884 (PnpMultiSzContainsString.c)
 *     PiDevCfgCompareDrivers @ 0x140192B14 (PiDevCfgCompareDrivers.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1402894DC (PiDevCfgMatchDriverConfigurationId.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405911B0 (PnpIsNullGuid.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F6E50 (PiDevCfgQueryDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406F7860 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F7A40 (PiDevCfgFreeDriverNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  unsigned int v3; // r15d
  __int64 v4; // r14
  int ObjectProperty; // esi
  int v6; // edi
  __int64 v7; // r13
  int v8; // eax
  SIZE_T v9; // rbx
  const wchar_t *v10; // rcx
  __int64 v11; // r11
  const WCHAR *v12; // r14
  wchar_t *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rcx
  __int64 v17; // rcx
  int i; // r12d
  __int64 v20; // rax
  const wchar_t *v21; // rdi
  wchar_t *v22; // rax
  wchar_t *v23; // rbx
  int v24; // eax
  int v25; // eax
  const WCHAR *v26; // r10
  char v27; // bl
  int v28; // edx
  int DriverNode; // eax
  __int64 v30; // rdi
  const WCHAR *v31; // r14
  __int64 v32; // rax
  unsigned int v33; // r12d
  PCWSTR *v34; // r15
  PCWSTR v35; // rax
  const WCHAR *v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // rcx
  __int64 **v40; // rdx
  __int64 v41; // rax
  PVOID PoolWithTag; // rax
  __int64 *v43; // rax
  bool matched; // al
  __int64 *v45; // rax
  int v46; // eax
  wchar_t *v47; // rax
  wchar_t *v48; // rbx
  wchar_t *v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r11d
  unsigned int v52; // edx
  unsigned int v53; // ebx
  unsigned int v54; // r8d
  __int64 v55; // r14
  _QWORD *v56; // r10
  __int64 v57; // rcx
  int v58; // ecx
  const wchar_t *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 j; // rbx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 *v65; // rax
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 *v70; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v71; // [rsp+68h] [rbp-51h]
  __int64 v72; // [rsp+70h] [rbp-49h] BYREF
  __int64 *v73; // [rsp+78h] [rbp-41h]
  int v74; // [rsp+80h] [rbp-39h] BYREF
  int v75; // [rsp+84h] [rbp-35h]
  const WCHAR *v76; // [rsp+88h] [rbp-31h]
  wchar_t *Str; // [rsp+90h] [rbp-29h]
  const wchar_t *v78; // [rsp+98h] [rbp-21h]
  int v79; // [rsp+A0h] [rbp-19h]
  unsigned int v80; // [rsp+A4h] [rbp-15h]
  PVOID P; // [rsp+A8h] [rbp-11h]
  __int64 v82; // [rsp+B0h] [rbp-9h] BYREF
  int v83; // [rsp+B8h] [rbp-1h]
  __int64 v84; // [rsp+C0h] [rbp+7h]
  const wchar_t *v85; // [rsp+C8h] [rbp+Fh]
  SIZE_T NumberOfBytes; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v88; // [rsp+130h] [rbp+77h]
  int v89; // [rsp+138h] [rbp+7Fh]

  v88 = a3;
  v3 = 0;
  v71 = (__int64 *)&v70;
  v70 = (__int64 *)&v70;
  v73 = &v72;
  v72 = (__int64)&v72;
  v75 = 0;
  v4 = a1;
  Str = 0LL;
  ObjectProperty = 0;
  v85 = 0LL;
  v6 = 0;
  v74 = 1;
  v7 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v82 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v41 = -1LL;
    do
      ++v41;
    while ( a2[v41] );
    v85 = (const wchar_t *)((unsigned __int64)&a2[v41 + 1] & -(__int64)(a2[v41 + 1] != 0));
  }
  v8 = 1;
  LODWORD(v9) = 520;
  if ( PnpSetupInProgress )
    v8 = 3;
  v84 = 520LL;
  v83 = v8;
  P = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v10 = (const wchar_t *)P;
  if ( !P )
  {
    ObjectProperty = -1073741670;
    goto LABEL_13;
  }
  v80 = 0;
  v11 = 0LL;
  do
  {
    v12 = *(const WCHAR **)(v4 + 16 * (v3 + 2LL));
    v76 = v12;
    if ( !v12 )
      goto LABEL_7;
    for ( i = v11; ; ++i )
    {
      v79 = i;
      if ( *v12 == (_WORD)v11 )
        break;
      v74 = 1;
      LODWORD(NumberOfBytes) = v11;
      do
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v12,
                           0xBu,
                           -1LL,
                           v11,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v74,
                           (__int64)v10,
                           v9,
                           (__int64)&NumberOfBytes,
                           v11);
        if ( ObjectProperty != -1073741789 )
        {
          v10 = (const wchar_t *)P;
          v11 = 0LL;
          goto LABEL_24;
        }
        if ( (unsigned int)NumberOfBytes <= (unsigned int)v9 )
        {
          v11 = 0LL;
          goto LABEL_30;
        }
        v9 = (unsigned int)NumberOfBytes;
        v84 = (unsigned int)NumberOfBytes;
        if ( P )
          ExFreePoolWithTag(P, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
        v11 = 0LL;
        P = PoolWithTag;
        v10 = (const wchar_t *)PoolWithTag;
      }
      while ( PoolWithTag );
      ObjectProperty = -1073741670;
LABEL_24:
      if ( ObjectProperty == -1073741670 )
        break;
      if ( ObjectProperty >= 0 )
      {
        if ( v74 != 8210 )
          goto LABEL_31;
        v21 = v10;
        if ( !*v10 )
          goto LABEL_31;
        while ( 2 )
        {
          v22 = wcschr(v21, 0x5Cu);
          v11 = 0LL;
          v23 = v22;
          if ( v22 )
          {
            v24 = DrvDbSplitDeviceIdDriverInfMatch(v21, 0LL, 0LL);
            v11 = 0LL;
            ObjectProperty = v24;
            if ( v24 < 0 )
              goto LABEL_31;
            v25 = v83;
            v26 = v21;
            *v23 = 0;
            v21 = v23 + 1;
            v27 = v89;
            v28 = v25;
            v78 = v21;
            if ( v3 == 2 )
            {
              if ( (_BYTE)v89 == 3 )
              {
                v28 = v25 | 8;
                goto LABEL_42;
              }
            }
            else
            {
LABEL_42:
              if ( (_BYTE)v89 == 1 || (_BYTE)v89 == 2 || (_BYTE)v89 == 3 )
              {
                DriverNode = PiDevCfgQueryDriverNode(v26, v12, v28, (__int64)&v82);
                v11 = 0LL;
                ObjectProperty = DriverNode;
                if ( DriverNode < 0 )
                {
                  ObjectProperty = 0;
                }
                else
                {
                  v30 = v82;
                  v31 = *(const WCHAR **)(v82 + 168);
                  if ( v31 )
                  {
                    if ( *v31 )
                    {
                      do
                      {
                        v33 = 0;
                        v34 = (PCWSTR *)(a1 + 32);
                        while ( 1 )
                        {
                          if ( *v34 )
                          {
                            v35 = PnpMultiSzContainsString(*v34, v31);
                            v11 = 0LL;
                            if ( v35 )
                              break;
                          }
                          ++v33;
                          v34 += 2;
                          if ( v33 >= 3 )
                          {
                            v36 = *(const WCHAR **)(v30 + 176);
                            goto LABEL_61;
                          }
                        }
                        *(_QWORD *)(v30 + 176) = v31;
                        v36 = v31;
LABEL_61:
                        if ( v36 )
                          break;
                        v37 = -1LL;
                        do
                          ++v37;
                        while ( v31[v37] );
                        v31 += v37 + 1;
                      }
                      while ( *v31 );
                      v27 = v89;
                      v3 = v80;
                      i = v79;
                    }
                    if ( *(_QWORD *)(v30 + 176) )
                      *(_DWORD *)(v30 + 108) |= 0xFFFFu;
                  }
                  if ( v27 == 3 )
                  {
                    v43 = v73;
                    if ( (__int64 *)*v73 != &v72 )
                      goto LABEL_81;
                    *(_QWORD *)(v30 + 8) = v73;
                    *(_QWORD *)v30 = &v72;
                    *v43 = v30;
                    v73 = (__int64 *)v30;
                  }
                  else
                  {
                    if ( Str )
                    {
                      matched = PiDevCfgMatchDriverConfigurationId(v30, Str);
                      v11 = 0LL;
                      if ( !matched )
                        goto LABEL_71;
                    }
                    if ( *(_QWORD *)(v30 + 176) )
                      goto LABEL_71;
                    if ( !v7 )
                      goto LABEL_49;
                    if ( (int)PiDevCfgCompareDrivers(v30, v7) >= 0 )
                    {
LABEL_71:
                      v38 = v71;
                      if ( (__int64 **)*v71 != &v70 )
                        goto LABEL_81;
                      *(_QWORD *)v30 = &v70;
                      *(_QWORD *)(v30 + 8) = v38;
                      *v38 = v30;
                      v71 = (__int64 *)v30;
                    }
                    else
                    {
                      v45 = v71;
                      if ( (__int64 **)*v71 != &v70 )
LABEL_81:
                        __fastfail(3u);
                      *(_QWORD *)(v7 + 8) = v71;
                      *(_QWORD *)v7 = &v70;
                      *v45 = v7;
                      v71 = (__int64 *)v7;
                      if ( (*(_DWORD *)(v7 + 184) & 0xC) != 0 )
                      {
                        v46 = *(_DWORD *)(v30 + 184);
                        if ( (v46 & 4) == 0 )
                          *(_DWORD *)(v30 + 184) = v46 | 8;
                      }
LABEL_49:
                      v7 = v30;
                    }
                  }
                  v12 = v76;
                  v21 = v78;
                }
              }
            }
          }
          v32 = -1LL;
          do
            ++v32;
          while ( v21[v32] != (_WORD)v11 );
          v21 += v32 + 1;
          if ( *v21 == (_WORD)v11 )
            goto LABEL_31;
          continue;
        }
      }
      if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
      {
        if ( v6 != -1073741772 )
          v6 = ObjectProperty;
        v75 = v6;
      }
      else if ( ObjectProperty == -1073741772 )
      {
        v75 = -1073741772;
      }
LABEL_30:
      ObjectProperty = 0;
LABEL_31:
      v20 = -1LL;
      do
        ++v20;
      while ( v12[v20] != (_WORD)v11 );
      v6 = v75;
      LODWORD(v9) = v84;
      v12 += v20 + 1;
      v10 = (const wchar_t *)P;
      v76 = v12;
    }
    if ( ObjectProperty < 0 )
      goto LABEL_13;
    LODWORD(v9) = v84;
LABEL_7:
    v4 = a1;
    v80 = ++v3;
  }
  while ( v3 < 3 );
  v13 = Str;
  if ( !Str )
    goto LABEL_9;
  if ( v7 )
  {
LABEL_10:
    while ( 1 )
    {
      v14 = v70;
      if ( v70 == (__int64 *)&v70 )
        break;
      if ( (__int64 **)v70[1] != &v70 )
        goto LABEL_81;
      v39 = (__int64 *)*v70;
      if ( *(__int64 **)(*v70 + 8) != v70 )
        goto LABEL_81;
      v70 = (__int64 *)*v70;
      v39[1] = (__int64)&v70;
      v40 = *(__int64 ***)(v7 + 232);
      if ( *v40 != (__int64 *)(v7 + 224) )
        goto LABEL_81;
      *v14 = v7 + 224;
      v14[1] = (__int64)v40;
      *v40 = v14;
      *(_QWORD *)(v7 + 232) = v14;
    }
    while ( 1 )
    {
      v15 = v72;
      if ( (__int64 *)v72 == &v72 )
      {
        *v88 = v7;
        v7 = 0LL;
        goto LABEL_13;
      }
      if ( *(__int64 **)(v72 + 8) != &v72 )
        goto LABEL_81;
      v50 = *(_QWORD *)v72;
      if ( *(_QWORD *)(*(_QWORD *)v72 + 8LL) != v72 )
        goto LABEL_81;
      v72 = *(_QWORD *)v72;
      *(_QWORD *)(v50 + 8) = &v72;
      if ( PnpIsNullGuid((void *)(v15 + 188)) || *(_QWORD *)(v15 + 176) )
        goto LABEL_131;
      if ( *(_QWORD *)(v15 + 144) )
      {
        v51 = *(_DWORD *)(v7 + 152);
        v52 = 0;
        if ( !v51 )
          goto LABEL_131;
        v53 = *(_DWORD *)(v15 + 152);
        while ( 1 )
        {
          v54 = 0;
          if ( v53 )
          {
            v55 = *(_QWORD *)(v7 + 144);
            while ( 1 )
            {
              v56 = (_QWORD *)(*(_QWORD *)(v15 + 144) + 16LL * v54);
              v57 = *(_QWORD *)(v55 + 16LL * v52) - *v56;
              if ( !v57 )
                v57 = *(_QWORD *)(v55 + 16LL * v52 + 8) - v56[1];
              if ( !v57 )
                break;
              if ( ++v54 >= v53 )
                goto LABEL_129;
            }
            if ( v56 )
              break;
          }
LABEL_129:
          if ( ++v52 >= v51 )
          {
            v13 = Str;
            goto LABEL_131;
          }
        }
        v13 = Str;
      }
      if ( v13 )
      {
        if ( v85 )
        {
          v58 = *v85 - asc_140767D10[0];
          if ( !v58 )
            v58 = v85[1] - asc_140767D10[1];
          if ( !v58 )
            goto LABEL_145;
          v59 = v85;
          if ( *v85 )
          {
            while ( !PiDevCfgMatchDriverConfigurationId(v15, v59) )
            {
              v60 = -1LL;
              do
                ++v60;
              while ( v59[v60] );
              v59 += v60 + 1;
              if ( !*v59 )
                goto LABEL_131;
            }
            goto LABEL_145;
          }
        }
LABEL_131:
        PiDevCfgFreeDriverNode(v15);
      }
      else
      {
LABEL_145:
        v61 = v7 + 208;
        for ( j = *(_QWORD *)(v7 + 208); ; j = *(_QWORD *)j )
        {
          if ( j == v61 )
            goto LABEL_155;
          v63 = *(_QWORD *)(j + 188) - *(_QWORD *)(v15 + 188);
          if ( !v63 )
            v63 = *(_QWORD *)(j + 196) - *(_QWORD *)(v15 + 196);
          if ( !v63 && RtlEqualUnicodeString((PCUNICODE_STRING)(j + 72), (PCUNICODE_STRING)(v15 + 72), 1u) )
            break;
        }
        v64 = *(_QWORD *)(v15 + 144);
        if ( *(_QWORD *)(j + 144) )
        {
          if ( !v64 )
            goto LABEL_152;
        }
        else if ( v64 )
        {
          goto LABEL_163;
        }
        if ( (int)PiDevCfgCompareDrivers(v15, j) >= 0 )
        {
LABEL_152:
          j = v15;
          v15 = 0LL;
          goto LABEL_153;
        }
LABEL_163:
        v66 = *(_QWORD *)j;
        if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j )
          goto LABEL_81;
        v67 = *(__int64 **)(j + 8);
        if ( *v67 != j )
          goto LABEL_81;
        *v67 = v66;
        *(_QWORD *)(v66 + 8) = v67;
LABEL_153:
        if ( j )
          PiDevCfgFreeDriverNode(j);
LABEL_155:
        if ( v15 )
        {
          v65 = *(__int64 **)(v7 + 216);
          if ( *v65 != v61 )
            goto LABEL_81;
          *(_QWORD *)v15 = v61;
          *(_QWORD *)(v15 + 8) = v65;
          *v65 = v15;
          *(_QWORD *)(v7 + 216) = v15;
        }
        v13 = Str;
      }
    }
  }
  v47 = wcschr(Str, 0x3Au);
  v48 = v47;
  if ( !v47 || (*v47 = 0, (v49 = wcschr(v47 + 1, 0x2Cu)) == 0LL) )
  {
    ObjectProperty = -1073741773;
    goto LABEL_13;
  }
  *v49 = 0;
  if ( (int)PiDevCfgQueryDriverNode(v13, v48 + 1, 4, (__int64)&v82) < 0 )
    goto LABEL_77;
  v7 = v82;
LABEL_9:
  if ( v7 )
    goto LABEL_10;
LABEL_77:
  if ( v6 && v6 != -1073741772 )
    ObjectProperty = v6;
  else
    ObjectProperty = -1073740656;
LABEL_13:
  while ( 1 )
  {
    v16 = v70;
    if ( v70 == (__int64 *)&v70 )
      break;
    if ( (__int64 **)v70[1] != &v70 )
      goto LABEL_81;
    v68 = *v70;
    if ( *(__int64 **)(*v70 + 8) != v70 )
      goto LABEL_81;
    v70 = (__int64 *)*v70;
    *(_QWORD *)(v68 + 8) = &v70;
    PiDevCfgFreeDriverNode(v16);
  }
  while ( 1 )
  {
    v17 = v72;
    if ( (__int64 *)v72 == &v72 )
      break;
    if ( *(__int64 **)(v72 + 8) != &v72 )
      goto LABEL_81;
    v69 = *(_QWORD *)v72;
    if ( *(_QWORD *)(*(_QWORD *)v72 + 8LL) != v72 )
      goto LABEL_81;
    v72 = *(_QWORD *)v72;
    *(_QWORD *)(v69 + 8) = &v72;
    PiDevCfgFreeDriverNode(v17);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
