/*
 * XREFs of sub_180018A84 @ 0x180018A84
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 *     RtlIntegerToUnicodeString @ 0x1800213C0 (RtlIntegerToUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180018A84(__int64 a1)
{
  __int64 v2; // rbx
  NTSTATUS inited; // edi
  __int64 v4; // r15
  unsigned int v5; // r14d
  __int64 v6; // r8
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  _QWORD *v10; // rcx
  __int16 v11; // ax
  unsigned int v12; // r10d
  PWCH Buffer; // r9
  WCHAR *v14; // r11
  int v15; // r10d
  __int64 v16; // r9
  LCID v18; // ecx
  __int64 Length; // r8
  unsigned __int8 *v20; // r9
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  _UNICODE_STRING String; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v31; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v33[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v34; // [rsp+68h] [rbp-A0h]
  _BYTE v35[176]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  memset(v35, 0, 0xAAuLL);
  inited = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return 3221225485LL;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_18;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(unsigned __int16 *)(v6 + 6LL * v5);
    memset(v33, 0, sizeof(v33));
    v34 = 0;
    if ( v7 )
      break;
LABEL_16:
    if ( ++v5 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) + 28LL * *(__int16 *)(v6 + 6LL * v5 + 4));
      goto LABEL_8;
    }
    if ( v9 != 1 )
      return (unsigned int)-1073741595;
    HIWORD(v33[0]) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  else
  {
    WORD2(v33[0]) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  v10 = v33;
LABEL_8:
  v11 = *((_WORD *)v10 + 3);
  if ( v11 > 0 )
  {
    inited = RtlInitUnicodeStringEx(
               &DestinationString,
               (PCWSTR)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL)
                      + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 16LL) + 2LL * v11)));
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (PWCH)v35;
    RtlCopyUnicodeString(&String, &DestinationString);
LABEL_11:
    if ( !v2 )
    {
      v12 = 314159;
      Buffer = String.Buffer;
      v14 = &String.Buffer[(unsigned __int64)String.Length >> 1];
      while ( Buffer < v14 )
      {
        v31 = sub_18001A234(*Buffer);
        Buffer = (PWCH)(v16 + 2);
        v12 = HIBYTE(v31) + 37 * ((unsigned __int8)v31 + 37 * v15);
      }
      v2 = v12;
      goto LABEL_16;
    }
    RtlUpcaseUnicodeString(&String, &String, 0);
    Length = String.Length;
    v20 = (unsigned __int8 *)String.Buffer;
    if ( String.Length >= 8uLL )
    {
      v21 = (unsigned __int64)String.Length >> 3;
      Length = String.Length - 8 * v21;
      do
      {
        v22 = v20[6]
            + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v2))))));
        v23 = v20[7];
        v20 += 8;
        v2 = v23 + 37 * v22;
        --v21;
      }
      while ( v21 );
    }
    if ( (unsigned __int64)(Length - 1) > 6 )
      goto LABEL_28;
    v24 = Length - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_28;
                LODWORD(v2) = *v20++ + 37 * v2;
              }
              LODWORD(v2) = *v20++ + 37 * v2;
            }
            LODWORD(v2) = *v20++ + 37 * v2;
          }
          LODWORD(v2) = *v20++ + 37 * v2;
        }
        LODWORD(v2) = *v20++ + 37 * v2;
      }
      LODWORD(v2) = *v20++ + 37 * v2;
    }
    LODWORD(v2) = *v20 + 37 * v2;
LABEL_28:
    v2 = (unsigned int)v2;
    goto LABEL_16;
  }
  v18 = *((unsigned __int16 *)v10 + 2);
  String.Buffer = (PWCH)v35;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v18, &String) )
    goto LABEL_11;
  inited = -1073741595;
LABEL_17:
  if ( inited < 0 )
    return (unsigned int)inited;
LABEL_18:
  *(_DWORD *)&String.Length = 1310720;
  String.Buffer = (PWCH)(a1 + 44);
  return (unsigned int)RtlIntegerToUnicodeString(v2, 0x10u, &String);
}
