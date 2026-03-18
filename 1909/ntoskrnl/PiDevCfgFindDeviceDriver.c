/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x1406FCABC
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14086BB08 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PnpMultiSzContainsString @ 0x14016F994 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x1401A2640 (wcschr.c)
 *     PiDevCfgCompareDrivers @ 0x14029EF5C (PiDevCfgCompareDrivers.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x14029F25C (PiDevCfgMatchDriverConfigurationId.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405B6474 (PnpIsNullGuid.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x1406FB80C (PiDevCfgFreeDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406FC8E4 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FE080 (PiDevCfgQueryDriverNode.c)
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
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  __int64 v12; // r11
  const WCHAR *v13; // r14
  wchar_t *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int i; // r12d
  __int64 v21; // rax
  const wchar_t *v22; // rdi
  wchar_t *v23; // rax
  wchar_t *v24; // rbx
  int v25; // eax
  unsigned int v26; // eax
  const WCHAR *v27; // r10
  char v28; // bl
  int DriverNode; // eax
  __int64 v30; // rdi
  const WCHAR *v31; // r14
  __int64 v32; // rax
  unsigned int v33; // r12d
  PCWSTR *v34; // r15
  PCWSTR v35; // rax
  const WCHAR *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  PVOID PoolWithTag; // rax
  __int64 *v40; // rax
  bool matched; // al
  __int64 *v42; // rax
  __int64 *v43; // rax
  int v44; // eax
  wchar_t *v45; // rax
  wchar_t *v46; // rbx
  wchar_t *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // r11d
  unsigned int v51; // edi
  unsigned int v52; // r8d
  __int64 v53; // r14
  _QWORD *v54; // r10
  __int64 v55; // rcx
  int v56; // ecx
  const wchar_t *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 j; // rdi
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v69; // [rsp+68h] [rbp-51h]
  __int64 v70; // [rsp+70h] [rbp-49h] BYREF
  __int64 *v71; // [rsp+78h] [rbp-41h]
  int v72; // [rsp+80h] [rbp-39h] BYREF
  int v73; // [rsp+84h] [rbp-35h]
  const WCHAR *v74; // [rsp+88h] [rbp-31h]
  wchar_t *Str; // [rsp+90h] [rbp-29h]
  const wchar_t *v76; // [rsp+98h] [rbp-21h]
  int v77; // [rsp+A0h] [rbp-19h]
  unsigned int v78; // [rsp+A4h] [rbp-15h]
  PVOID P; // [rsp+A8h] [rbp-11h]
  __int64 v80; // [rsp+B0h] [rbp-9h] BYREF
  int v81; // [rsp+B8h] [rbp-1h]
  __int64 v82; // [rsp+C0h] [rbp+7h]
  const wchar_t *v83; // [rsp+C8h] [rbp+Fh]
  int v85; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v86; // [rsp+130h] [rbp+77h]
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+7Fh] BYREF

  v86 = a3;
  v3 = 0;
  v69 = &v68;
  v68 = (__int64)&v68;
  v71 = &v70;
  v70 = (__int64)&v70;
  v73 = 0;
  v4 = a1;
  Str = 0LL;
  ObjectProperty = 0;
  v83 = 0LL;
  v6 = 0;
  v85 = 0;
  v7 = 0LL;
  v72 = 1;
  LODWORD(NumberOfBytes) = 0;
  v80 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v38 = -1LL;
    do
      ++v38;
    while ( a2[v38] );
    v83 = (const wchar_t *)((unsigned __int64)&a2[v38 + 1] & -(__int64)(a2[v38 + 1] != 0));
  }
  v8 = 1;
  LODWORD(v9) = 520;
  if ( PnpSetupInProgress )
    v8 = 3;
  v82 = 520LL;
  v81 = v8;
  P = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v11 = (const wchar_t *)P;
  if ( !P )
  {
    ObjectProperty = -1073741670;
    goto LABEL_13;
  }
  v78 = 0;
  v12 = 0LL;
  do
  {
    v13 = *(const WCHAR **)(v4 + 16 * (v3 + 2LL));
    v74 = v13;
    if ( !v13 )
      goto LABEL_7;
    for ( i = v12; ; ++i )
    {
      v77 = i;
      if ( *v13 == (_WORD)v12 )
        break;
      v72 = 1;
      LODWORD(NumberOfBytes) = v12;
      do
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v13,
                           11LL,
                           -1LL,
                           v12,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v72,
                           (__int64)v11,
                           v9,
                           (__int64)&NumberOfBytes,
                           v12);
        if ( ObjectProperty != -1073741789 )
        {
          v11 = (const wchar_t *)P;
          v12 = 0LL;
          goto LABEL_24;
        }
        if ( (unsigned int)NumberOfBytes <= (unsigned int)v9 )
        {
          v12 = 0LL;
          goto LABEL_30;
        }
        v9 = (unsigned int)NumberOfBytes;
        v82 = (unsigned int)NumberOfBytes;
        if ( P )
          ExFreePoolWithTag(P, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
        v12 = 0LL;
        P = PoolWithTag;
        v11 = (const wchar_t *)PoolWithTag;
      }
      while ( PoolWithTag );
      ObjectProperty = -1073741670;
LABEL_24:
      if ( ObjectProperty == -1073741670 )
        break;
      if ( ObjectProperty >= 0 )
      {
        if ( v72 != 8210 )
          goto LABEL_31;
        v22 = v11;
        if ( !*v11 )
          goto LABEL_31;
        while ( 2 )
        {
          v23 = wcschr(v22, 0x5Cu);
          v12 = 0LL;
          v24 = v23;
          if ( v23 )
          {
            v25 = DrvDbSplitDeviceIdDriverInfMatch(v22, 0LL, 0LL, (__int64)&v85);
            v12 = 0LL;
            ObjectProperty = v25;
            if ( v25 < 0 )
              goto LABEL_31;
            v26 = v81;
            v27 = v22;
            *v24 = 0;
            v22 = v24 + 1;
            v28 = v85;
            v10 = v26;
            v76 = v22;
            if ( v3 == 2 )
            {
              if ( (_BYTE)v85 == 3 )
              {
                v10 = v26 | 8;
                goto LABEL_42;
              }
            }
            else
            {
LABEL_42:
              if ( (_BYTE)v85 == 1 || (_BYTE)v85 == 2 || (_BYTE)v85 == 3 )
              {
                DriverNode = PiDevCfgQueryDriverNode(v27, v13, v10, (__int64)&v80);
                v12 = 0LL;
                ObjectProperty = DriverNode;
                if ( DriverNode < 0 )
                {
                  ObjectProperty = 0;
                }
                else
                {
                  v30 = v80;
                  v31 = *(const WCHAR **)(v80 + 168);
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
                            v12 = 0LL;
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
                      v28 = v85;
                      v3 = v78;
                      i = v77;
                    }
                    if ( *(_QWORD *)(v30 + 176) )
                      *(_DWORD *)(v30 + 108) |= 0xFFFFu;
                  }
                  if ( v28 == 3 )
                  {
                    v40 = v71;
                    if ( (__int64 *)*v71 != &v70 )
                      goto LABEL_156;
                    *(_QWORD *)(v30 + 8) = v71;
                    *(_QWORD *)v30 = &v70;
                    *v40 = v30;
                    v71 = (__int64 *)v30;
                  }
                  else
                  {
                    if ( Str )
                    {
                      matched = PiDevCfgMatchDriverConfigurationId(v30, Str);
                      v12 = 0LL;
                      if ( !matched )
                        goto LABEL_92;
                    }
                    if ( *(_QWORD *)(v30 + 176) )
                      goto LABEL_92;
                    if ( !v7 )
                      goto LABEL_49;
                    if ( (int)PiDevCfgCompareDrivers(v30, v7) >= 0 )
                    {
LABEL_92:
                      v42 = v69;
                      if ( (__int64 *)*v69 != &v68 )
                        goto LABEL_156;
                      *(_QWORD *)v30 = &v68;
                      *(_QWORD *)(v30 + 8) = v42;
                      *v42 = v30;
                      v69 = (__int64 *)v30;
                    }
                    else
                    {
                      v43 = v69;
                      if ( (__int64 *)*v69 != &v68 )
LABEL_156:
                        __fastfail(3u);
                      *(_QWORD *)(v7 + 8) = v69;
                      *(_QWORD *)v7 = &v68;
                      *v43 = v7;
                      v69 = (__int64 *)v7;
                      if ( (*(_DWORD *)(v7 + 184) & 0xC) != 0 )
                      {
                        v44 = *(_DWORD *)(v30 + 184);
                        if ( (v44 & 4) == 0 )
                          *(_DWORD *)(v30 + 184) = v44 | 8;
                      }
LABEL_49:
                      v7 = v30;
                    }
                  }
                  v13 = v74;
                  v22 = v76;
                }
              }
            }
          }
          v32 = -1LL;
          do
            ++v32;
          while ( v22[v32] != (_WORD)v12 );
          v22 += v32 + 1;
          if ( *v22 == (_WORD)v12 )
            goto LABEL_31;
          continue;
        }
      }
      if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
      {
        if ( v6 != -1073741772 )
          v6 = ObjectProperty;
        v73 = v6;
      }
      else if ( ObjectProperty == -1073741772 )
      {
        v73 = -1073741772;
      }
LABEL_30:
      ObjectProperty = 0;
LABEL_31:
      v21 = -1LL;
      do
        ++v21;
      while ( v13[v21] != (_WORD)v12 );
      v6 = v73;
      LODWORD(v9) = v82;
      v13 += v21 + 1;
      v11 = (const wchar_t *)P;
      v74 = v13;
    }
    if ( ObjectProperty < 0 )
      goto LABEL_13;
    LODWORD(v9) = v82;
LABEL_7:
    v4 = a1;
    v78 = ++v3;
  }
  while ( v3 < 3 );
  v14 = Str;
  if ( !Str )
    goto LABEL_9;
  if ( v7 )
  {
LABEL_10:
    while ( 1 )
    {
      v15 = (_QWORD *)v68;
      if ( (__int64 *)v68 == &v68 )
        break;
      if ( *(__int64 **)(v68 + 8) != &v68 )
        goto LABEL_156;
      v48 = *(_QWORD *)v68;
      if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
        goto LABEL_156;
      v68 = *(_QWORD *)v68;
      *(_QWORD *)(v48 + 8) = &v68;
      v10 = *(_QWORD *)(v7 + 232);
      if ( *(_QWORD *)v10 != v7 + 224 )
        goto LABEL_156;
      *v15 = v7 + 224;
      v15[1] = v10;
      *(_QWORD *)v10 = v15;
      *(_QWORD *)(v7 + 232) = v15;
    }
    while ( 1 )
    {
      v16 = v70;
      if ( (__int64 *)v70 == &v70 )
      {
        *v86 = v7;
        v7 = 0LL;
        goto LABEL_13;
      }
      if ( *(__int64 **)(v70 + 8) != &v70 )
        goto LABEL_156;
      v49 = *(_QWORD *)v70;
      if ( *(_QWORD *)(*(_QWORD *)v70 + 8LL) != v70 )
        goto LABEL_156;
      v70 = *(_QWORD *)v70;
      *(_QWORD *)(v49 + 8) = &v70;
      if ( PnpIsNullGuid((void *)(v16 + 188)) || *(_QWORD *)(v16 + 176) )
        goto LABEL_130;
      if ( *(_QWORD *)(v16 + 144) )
      {
        v50 = *(_DWORD *)(v7 + 152);
        v10 = 0LL;
        if ( !v50 )
          goto LABEL_130;
        v51 = *(_DWORD *)(v16 + 152);
        while ( 1 )
        {
          v52 = 0;
          if ( v51 )
          {
            v53 = *(_QWORD *)(v7 + 144);
            while ( 1 )
            {
              v54 = (_QWORD *)(*(_QWORD *)(v16 + 144) + 16LL * v52);
              v55 = *(_QWORD *)(v53 + 16LL * (unsigned int)v10) - *v54;
              if ( !v55 )
                v55 = *(_QWORD *)(v53 + 16LL * (unsigned int)v10 + 8) - v54[1];
              if ( !v55 )
                break;
              if ( ++v52 >= v51 )
                goto LABEL_128;
            }
            if ( v54 )
              break;
          }
LABEL_128:
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= v50 )
          {
            v14 = Str;
            goto LABEL_130;
          }
        }
        v14 = Str;
      }
      if ( v14 )
      {
        v10 = (__int64)v83;
        if ( v83 )
        {
          v56 = *v83 - asc_14078F970[0];
          if ( !v56 )
            v56 = v83[1] - asc_14078F970[1];
          if ( !v56 )
            goto LABEL_144;
          v57 = v83;
          if ( *v83 )
          {
            while ( !PiDevCfgMatchDriverConfigurationId(v16, v57) )
            {
              v58 = -1LL;
              do
                ++v58;
              while ( v57[v58] );
              v57 += v58 + 1;
              if ( !*v57 )
                goto LABEL_130;
            }
            goto LABEL_144;
          }
        }
LABEL_130:
        PiDevCfgFreeDriverNode(v16, v10);
      }
      else
      {
LABEL_144:
        v59 = v7 + 208;
        for ( j = *(_QWORD *)(v7 + 208); ; j = *(_QWORD *)j )
        {
          if ( j == v59 )
            goto LABEL_154;
          v61 = *(_QWORD *)(j + 188) - *(_QWORD *)(v16 + 188);
          if ( !v61 )
            v61 = *(_QWORD *)(j + 196) - *(_QWORD *)(v16 + 196);
          if ( !v61 && RtlEqualUnicodeString((PCUNICODE_STRING)(j + 72), (PCUNICODE_STRING)(v16 + 72), 1u) )
            break;
        }
        v62 = *(_QWORD *)(v16 + 144);
        if ( *(_QWORD *)(j + 144) )
        {
          if ( !v62 )
            goto LABEL_151;
        }
        else if ( v62 )
        {
          goto LABEL_162;
        }
        if ( (int)PiDevCfgCompareDrivers(v16, j) >= 0 )
        {
LABEL_151:
          j = v16;
          v16 = 0LL;
          goto LABEL_152;
        }
LABEL_162:
        v64 = *(_QWORD *)j;
        if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j )
          goto LABEL_156;
        v65 = *(__int64 **)(j + 8);
        if ( *v65 != j )
          goto LABEL_156;
        *v65 = v64;
        *(_QWORD *)(v64 + 8) = v65;
LABEL_152:
        if ( j )
          PiDevCfgFreeDriverNode(j, v10);
LABEL_154:
        if ( v16 )
        {
          v63 = *(__int64 **)(v7 + 216);
          if ( *v63 != v59 )
            goto LABEL_156;
          *(_QWORD *)v16 = v59;
          *(_QWORD *)(v16 + 8) = v63;
          *v63 = v16;
          *(_QWORD *)(v7 + 216) = v16;
        }
        v14 = Str;
      }
    }
  }
  v45 = wcschr(Str, 0x3Au);
  v46 = v45;
  if ( !v45 || (*v45 = 0, (v47 = wcschr(v45 + 1, 0x2Cu)) == 0LL) )
  {
    ObjectProperty = -1073741773;
    goto LABEL_13;
  }
  *v47 = 0;
  if ( (int)PiDevCfgQueryDriverNode(v14, v46 + 1, 4, (__int64)&v80) < 0 )
    goto LABEL_105;
  v7 = v80;
LABEL_9:
  if ( v7 )
    goto LABEL_10;
LABEL_105:
  if ( !v6 || v6 == -1073741772 )
    ObjectProperty = -1073740656;
  else
    ObjectProperty = v6;
LABEL_13:
  while ( 1 )
  {
    v17 = v68;
    if ( (__int64 *)v68 == &v68 )
      break;
    if ( *(__int64 **)(v68 + 8) != &v68 )
      goto LABEL_156;
    v66 = *(_QWORD *)v68;
    if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
      goto LABEL_156;
    v68 = *(_QWORD *)v68;
    *(_QWORD *)(v66 + 8) = &v68;
    PiDevCfgFreeDriverNode(v17, (__int64)&v68);
  }
  while ( 1 )
  {
    v18 = v70;
    if ( (__int64 *)v70 == &v70 )
      break;
    if ( *(__int64 **)(v70 + 8) != &v70 )
      goto LABEL_156;
    v67 = *(_QWORD *)v70;
    if ( *(_QWORD *)(*(_QWORD *)v70 + 8LL) != v70 )
      goto LABEL_156;
    v70 = *(_QWORD *)v70;
    *(_QWORD *)(v67 + 8) = &v70;
    PiDevCfgFreeDriverNode(v18, (__int64)&v70);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7, v10);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
