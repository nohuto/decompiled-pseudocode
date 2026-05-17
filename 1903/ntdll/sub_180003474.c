/*
 * XREFs of sub_180003474 @ 0x180003474
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180002AB0 (RtlCheckPortableOperatingSystem.c)
 *     sub_180002B80 @ 0x180002B80 (sub_180002B80.c)
 *     sub_18000329C @ 0x18000329C (sub_18000329C.c)
 *     RtlQueryRegistryValuesEx @ 0x180003450 (RtlQueryRegistryValuesEx.c)
 *     RtlQueryRegistryValues @ 0x1800EB490 (RtlQueryRegistryValues.c)
 * Callees:
 *     sub_180003870 @ 0x180003870 (sub_180003870.c)
 *     sub_180003BA4 @ 0x180003BA4 (sub_180003BA4.c)
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009C940 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E110 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003474(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  int v9; // r12d
  __int64 result; // rax
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // ebx
  unsigned int v15; // r13d
  int v16; // eax
  const WCHAR *v17; // rdx
  int v18; // r14d
  int v19; // eax
  int v20; // eax
  int v21; // r15d
  unsigned int i; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v28; // [rsp+50h] [rbp-41h] BYREF
  __int64 v29; // [rsp+58h] [rbp-39h] BYREF
  __int64 v30; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING v32; // [rsp+78h] [rbp-19h] BYREF
  int v33; // [rsp+88h] [rbp-9h] BYREF
  __int64 v34; // [rsp+90h] [rbp-1h]
  UNICODE_STRING *v35; // [rsp+98h] [rbp+7h]
  int v36; // [rsp+A0h] [rbp+Fh]
  __int128 v37; // [rsp+A8h] [rbp+17h]

  v6 = a4;
  v9 = a1;
  result = sub_180003D40(a1, a2, 0LL, &v30);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
    {
      *(_QWORD *)&v32.Length = 0LL;
      v32.Buffer = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&v32, a2);
    }
    v28 = 4096LL;
    v12 = sub_180003BA4(&v28, 0LL, 0LL, &v26);
    v13 = v12;
    if ( v12 )
    {
      v14 = v26;
      *(_DWORD *)(v12 + 8) = 0;
      v15 = v28 - 2;
      v29 = v30;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        v16 = *(_DWORD *)(a3 + 8);
        if ( (v16 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (v16 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (v16 & 3) != 0 && v29 != v30 )
          {
            ZwClose(v29);
            v29 = v30;
            v16 = *(_DWORD *)(a3 + 8);
          }
          v17 = *(const WCHAR **)(a3 + 16);
          if ( (v16 & 1) == 0 )
          {
            if ( v17 )
            {
              RtlInitUnicodeString(&DestinationString, v17);
              v18 = 0;
              while ( 1 )
              {
                v19 = v18++;
                if ( v19 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
                  goto LABEL_25;
                }
                v14 = ZwQueryValueKey(v29, &DestinationString, 1LL, v13, v15, &v27);
                if ( v14 == -2147483643 )
                  v14 = -1073741789;
                v26 = v14;
                if ( v14 >= 0 )
                {
                  if ( *(_DWORD *)(v13 + 4) == 7 )
                  {
                    *(_WORD *)(v27 + v13) = 0;
                    *(_DWORD *)(v13 + 12) += 2;
                  }
                  v27 = v15;
                  v20 = sub_180003870(v29, a3, v13, (unsigned int)&v27, v6, a5, a6);
                  v26 = v20;
                  v14 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_25;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(v29, &DestinationString);
LABEL_23:
                    if ( v14 >= 0 )
                    {
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_25;
                  }
                }
                else
                {
                  if ( v14 == -1073741772 )
                  {
                    *(_DWORD *)(v13 + 4) = 0;
                    *(_DWORD *)(v13 + 12) = 0;
                    v27 = v15;
                    v14 = sub_180003870(v29, a3, v13, (unsigned int)&v27, v6, a5, a6);
                    v26 = v14;
                  }
                  if ( v14 != -1073741789 )
                    goto LABEL_23;
                }
                v28 = v27 + 10LL;
                v23 = sub_180003BA4(&v28, v13, v28, &v26);
                v14 = v26;
                v13 = v23;
                if ( !v23 )
                  goto LABEL_25;
                *(_DWORD *)(v23 + 8) = 0;
                v15 = v28 - 2;
              }
            }
            if ( (v16 & 8) != 0 )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_23;
            }
            goto LABEL_41;
          }
          if ( v17 )
          {
            RtlInitUnicodeString(&v32, v17);
            v34 = v30;
            v33 = 48;
            v35 = &v32;
            v36 = 576;
            v37 = 0LL;
            v14 = ZwOpenKey(&v29, 0x2000000LL, &v33);
            if ( v14 < 0 )
              goto LABEL_25;
            if ( !*(_QWORD *)a3 )
              goto LABEL_23;
LABEL_41:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v14 = ZwEnumerateValueKey(v29, i, 1LL, v13, v15, &v27);
              if ( v14 == -2147483643 )
                v14 = -1073741789;
              v26 = v14;
              if ( v14 == -2147483622 )
              {
                if ( i || (v14 = -1073741772, (*(_BYTE *)(a3 + 8) & 4) == 0) )
                  v14 = 0;
                goto LABEL_54;
              }
              if ( v14 >= 0 )
              {
                v27 = v15;
                v14 = sub_180003870(v29, a3, v13, (unsigned int)&v27, a4, a5, a6);
                v26 = v14;
              }
              if ( v14 == -1073741789 )
              {
                v28 = v27 + 10LL;
                v24 = sub_180003BA4(&v28, v13, v28, &v26);
                v13 = v24;
                if ( !v24 )
                {
                  v14 = v26;
                  goto LABEL_54;
                }
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                v25 = v21;
                v15 = v28 - 2;
                ++v21;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v14 = v26;
LABEL_54:
                  v6 = a4;
                  goto LABEL_23;
                }
              }
              else
              {
                if ( v14 < 0 )
                  goto LABEL_25;
                v21 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  DestinationString.Buffer = (wchar_t *)(v13 + 20);
                  DestinationString.Length = *(_WORD *)(v13 + 16);
                  DestinationString.MaximumLength = *(_WORD *)(v13 + 16);
                  if ( (int)ZwDeleteValueKey(v29, &DestinationString) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v14 = -1073741811;
      }
LABEL_25:
      if ( v30 && !v11 )
        ZwClose(v30);
      if ( v29 )
      {
        if ( v29 != v30 )
          ZwClose(v29);
      }
      sub_180003BA4(0LL, v13, v28, 0LL);
      return (unsigned int)v14;
    }
    else
    {
      if ( !v11 )
        ZwClose(v30);
      return v26;
    }
  }
  return result;
}
