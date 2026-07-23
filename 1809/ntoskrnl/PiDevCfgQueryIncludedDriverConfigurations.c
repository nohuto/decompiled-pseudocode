/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F7F10
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PnpDuplicateUnicodeString @ 0x14015DAB8 (PnpDuplicateUnicodeString.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1402892B8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x14028973C (PiDevCfgPushDriverNodeEntry.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x14082C4C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082F238 (PiDevCfgQueryIncludedDriverNode.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // r12d
  _QWORD **v3; // rcx
  int DriverConfiguration; // ebx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  __int64 v8; // rdi
  wchar_t *v9; // rsi
  wchar_t *v10; // r14
  wchar_t *v11; // rdi
  wchar_t *v12; // rax
  const wchar_t *v13; // r13
  wchar_t v14; // cx
  bool v15; // cf
  wchar_t v16; // cx
  int v17; // eax
  wchar_t *v18; // rax
  int v19; // r8d
  wchar_t *v20; // rax
  wchar_t *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 *v24; // rdi
  wchar_t *v25; // r15
  __int64 *v26; // r12
  int v27; // eax
  __int64 *v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  const wchar_t *v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h]
  _QWORD *v35; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+50h]
  __int64 *v40; // [rsp+C0h] [rbp+58h] BYREF
  wchar_t *Str2; // [rsp+C8h] [rbp+60h]

  v1 = a1;
  v2 = 0;
  v35 = &v35;
  v3 = &v35;
  P = &v35;
  if ( *(_QWORD *)(v1 + 360) )
  {
    DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v35, v1);
    if ( DriverConfiguration < 0 )
      goto LABEL_61;
    do
    {
LABEL_6:
      if ( v35 == &v35 )
        return (unsigned int)DriverConfiguration;
      v6 = P;
      if ( *(_QWORD ***)P != &v35 || (v7 = (PVOID *)*((_QWORD *)P + 1), *v7 != P) )
LABEL_64:
        __fastfail(3u);
      P = (PVOID)*((_QWORD *)P + 1);
      *v7 = &v35;
      v8 = v6[2];
      v34 = v8;
      ExFreePoolWithTag(v6, 0);
      v9 = *(wchar_t **)(v8 + 360);
    }
    while ( !v9 );
    while ( 1 )
    {
      if ( !*v9 )
      {
LABEL_58:
        if ( DriverConfiguration < 0 )
          goto LABEL_61;
        goto LABEL_6;
      }
      v10 = v9;
      v11 = v9;
      v12 = wcschr(v9, 0x3Au);
      if ( v12 )
      {
        v13 = v12 + 1;
        *v12 = 0;
        v14 = *v9;
        v9 = v12 + 1;
        v15 = v14 < asc_140767D10[0];
        v33 = v12 + 1;
        if ( v14 != asc_140767D10[0] )
          goto LABEL_15;
        v16 = v11[1];
        v15 = v16 < asc_140767D10[1];
        if ( v16 == asc_140767D10[1] )
          v17 = 0;
        else
LABEL_15:
          v17 = v15 ? -1 : 1;
        Str2 = (wchar_t *)((unsigned __int64)v10 & -(__int64)(v17 != 0));
        v18 = wcsrchr(v13, 0x2Eu);
        if ( v18 )
        {
          *v18 = 0;
          v9 = v18 + 1;
          v19 = v18[1] - asc_140767D10[0];
          if ( !v19 )
            v19 = v18[2] - asc_140767D10[1];
          if ( v19 )
          {
            v39 = 0;
            v9 = v18 + 1;
            if ( v18[1] )
            {
              do
              {
                v20 = wcschr(v9, 0x2Cu);
                if ( v20 )
                {
                  *v20 = 0;
                  v21 = v20 + 1;
                }
                else
                {
                  v22 = -1LL;
                  do
                    ++v22;
                  while ( v9[v22] );
                  v21 = &v9[v22];
                }
                v2 |= PiDevCfgGetDriverConfigurationKeyScope(v9);
                v9 = v21;
              }
              while ( *v21 );
              v39 = v2;
            }
            v2 = 0;
          }
          else
          {
            v39 = -1;
          }
          v40 = 0LL;
          RtlInitUnicodeString(&DestinationString, v13);
          v23 = v1 + 368;
          v24 = *(__int64 **)(v1 + 368);
          if ( v24 != (__int64 *)(v1 + 368) )
          {
            v25 = Str2;
            do
            {
              v40 = v24;
              if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v24 + 11), &DestinationString, 1u) )
              {
                v26 = v24;
                if ( !v25 || !wcsicmp((const wchar_t *)v24[6], v25) )
                  break;
              }
              v24 = (__int64 *)*v24;
              v26 = 0LL;
              v40 = 0LL;
            }
            while ( v24 != (__int64 *)v23 );
            v1 = a1;
            v13 = v33;
            if ( v26 )
            {
              v2 = 0;
              goto LABEL_52;
            }
            v2 = 0;
          }
          v27 = PiDevCfgQueryIncludedDriverNode(v34, Str2, v13, v39, &v40);
          DriverConfiguration = v27;
          if ( v27 < 0 )
          {
            *(_DWORD *)(v1 + 412) = v27;
            goto LABEL_58;
          }
          v28 = *(__int64 **)(v23 + 8);
          if ( *v28 != v23 )
            goto LABEL_64;
          v29 = v40;
          v30 = (__int64)v40;
          *v40 = v23;
          *(_QWORD *)(v30 + 8) = v28;
          *v28 = v30;
          *(_QWORD *)(v23 + 8) = v30;
          DriverConfiguration = PiDevCfgQueryDriverConfiguration(v30);
          if ( DriverConfiguration < 0 )
            goto LABEL_61;
          if ( v29[37] && !*(_QWORD *)(v1 + 296) && !PnpDuplicateUnicodeString(v1 + 288, (__int64)(v29 + 36)) )
          {
            DriverConfiguration = -1073741670;
            goto LABEL_58;
          }
          if ( v29[39] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 304));
            if ( DriverConfiguration < 0 )
              goto LABEL_61;
          }
          if ( v29[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 320));
            if ( DriverConfiguration < 0 )
              goto LABEL_61;
          }
          DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v35, (__int64)v29);
          if ( DriverConfiguration < 0 )
            goto LABEL_61;
        }
      }
LABEL_52:
      v31 = -1LL;
      do
        ++v31;
      while ( v9[v31] );
      v9 += v31 + 1;
    }
  }
  DriverConfiguration = 0;
  while ( v35 != &v35 )
  {
    if ( *v3 != &v35 )
      goto LABEL_64;
    v32 = v3[1];
    if ( (_QWORD **)*v32 != v3 )
      goto LABEL_64;
    P = v3[1];
    *v32 = &v35;
    ExFreePoolWithTag(v3, 0);
LABEL_61:
    v3 = (_QWORD **)P;
  }
  return (unsigned int)DriverConfiguration;
}
