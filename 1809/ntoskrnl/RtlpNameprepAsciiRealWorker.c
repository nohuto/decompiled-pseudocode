/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x1402F4948
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x140897F90 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     FindEmailAt @ 0x1402F4594 (FindEmailAt.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x140898054 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_encode @ 0x140898850 (punycode_encode.c)
 *     RtlNormalizeString @ 0x14089A790 (RtlNormalizeString.c)
 */

NTSTATUS __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        const WCHAR *a2,
        __int64 a3,
        void *a4,
        LONG *a5,
        char a6,
        PWSTR DestinationString,
        char a8,
        void *Src,
        char a10)
{
  __int16 v10; // r11
  void *v11; // r15
  int v12; // edi
  LONG *v14; // rsi
  int v15; // ebp
  char v16; // r13
  char v17; // dl
  char v18; // r12
  char v19; // al
  LONG v20; // r10d
  NTSTATUS result; // eax
  LONG v22; // ebx
  const void *v23; // rdx
  WCHAR *v24; // r13
  LONG v25; // ecx
  WCHAR *v26; // r9
  int v27; // eax
  LONG EmailAt; // eax
  LONG v29; // r11d
  bool v30; // zf
  bool v31; // zf
  WCHAR v32; // dx
  WCHAR v33; // cx
  void *v34; // r14
  LONG v35; // edi
  bool v36; // cc
  __int64 v37; // rax
  size_t pcchLength; // [rsp+30h] [rbp-38h] BYREF
  int v39; // [rsp+38h] [rbp-30h]
  LONG DestinationStringLength; // [rsp+78h] [rbp+10h] BYREF

  v10 = 0;
  v11 = a4;
  v12 = a3;
  if ( a2 )
  {
    if ( (int)a3 >= -1 )
    {
      v14 = a5;
      if ( a5 )
      {
        v15 = *a5;
        if ( *a5 >= 0 && (v15 <= 0 || a4) && (a1 & 0xFFFFFFF8) == 0 )
        {
          a8 = 0;
          v16 = 0;
          v39 = a1 & 1;
          DestinationStringLength = a1 & 4;
          v17 = DestinationStringLength != 0;
          v18 = (a1 & 2) != 0;
          a10 = DestinationStringLength != 0;
          if ( (_DWORD)a3 != -1 )
          {
LABEL_11:
            if ( v12 > 0 && a2[v12 - 1] == v10 )
            {
              v16 = 1;
              --v12;
              a8 = 1;
            }
            LOBYTE(a3) = v17;
            LOBYTE(a4) = v18;
            v19 = RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v12, a3, a4);
            v20 = 0;
            if ( v19 )
            {
              if ( !v12 )
                return -1073740010;
              v22 = v12 + 1;
              if ( !v16 )
                v22 = v12;
              if ( !v11 || !v15 )
                goto LABEL_24;
              if ( v22 <= v15 )
              {
                v23 = a2;
LABEL_23:
                memmove(v11, v23, 2LL * v22);
LABEL_24:
                *v14 = v22;
                return 0;
              }
              goto LABEL_71;
            }
            v24 = DestinationString;
            v25 = 511;
            v26 = DestinationString;
            v27 = 0;
            v22 = 0;
            if ( !DestinationStringLength )
              goto LABEL_31;
            EmailAt = FindEmailAt((__int64)a2, v12);
            LODWORD(pcchLength) = EmailAt;
            if ( !EmailAt )
              goto LABEL_58;
            DestinationStringLength = v29;
            result = RtlNormalizeString(1u, a2, EmailAt, v24, &DestinationStringLength);
            v22 = DestinationStringLength;
            v20 = 0;
            v30 = result == 0;
            if ( result >= 0 )
            {
              if ( DestinationStringLength )
              {
                v27 = pcchLength;
                v26 = &v24[DestinationStringLength];
                v25 = 511 - DestinationStringLength;
LABEL_31:
                if ( v27 >= v12 )
                {
LABEL_35:
                  if ( v22 > 0 )
                  {
                    v32 = v24[v22 - 1];
                    if ( v32 == 46 )
                    {
                      v33 = a2[v12 - 1];
                      if ( v33 != 46 && v33 != 12290 && v33 != 0xFF0E && v33 != 0xFF61 )
                        goto LABEL_58;
                    }
                    if ( !v32 )
                      goto LABEL_58;
                  }
                  v34 = Src;
                  DestinationStringLength = 515;
                  result = punycode_encode(v24, a10, v18);
                  v35 = DestinationStringLength;
                  v20 = 0;
                  if ( DestinationStringLength )
                  {
                    if ( a6 )
                    {
                      if ( !a8 )
                      {
LABEL_47:
                        if ( v11 && v15 )
                        {
                          if ( v35 > v15 )
                          {
LABEL_71:
                            result = -1073741789;
                            goto LABEL_59;
                          }
                          memmove(v11, v34, 2LL * v35);
                        }
                        *v14 = v35;
                        return 0;
                      }
                      if ( DestinationStringLength < 515 )
                      {
                        *((_WORD *)v34 + DestinationStringLength) = 0;
                        ++v35;
                        goto LABEL_47;
                      }
                      goto LABEL_58;
                    }
                    if ( !a8 )
                    {
LABEL_68:
                      if ( !v11 || !v15 )
                        goto LABEL_24;
                      if ( v22 <= v15 )
                      {
                        v23 = v24;
                        goto LABEL_23;
                      }
                      goto LABEL_71;
                    }
                    if ( v22 <= 511 )
                    {
                      v37 = v22++;
                      v24[v37] = 0;
                      goto LABEL_68;
                    }
LABEL_58:
                    result = -1073740010;
                  }
LABEL_59:
                  *v14 = v20;
                  return result;
                }
                DestinationStringLength = v25;
                result = RtlNormalizeString(
                           (((unsigned __int8)v39 ^ 1) << 8) + 13,
                           &a2[v27],
                           v12 - v27,
                           v26,
                           &DestinationStringLength);
                v20 = 0;
                v31 = result == 0;
                if ( result >= 0 )
                {
                  if ( DestinationStringLength )
                  {
                    v22 += DestinationStringLength;
                    goto LABEL_35;
                  }
                  v31 = result == 0;
                }
                if ( v31 || result == -1073741789 || result == -1073740009 )
                  goto LABEL_58;
                v36 = DestinationStringLength <= 0;
LABEL_57:
                if ( !v36 )
                  goto LABEL_58;
                goto LABEL_59;
              }
              v30 = result == 0;
            }
            if ( v30 || result == -1073741789 || result == -1073740009 )
              goto LABEL_58;
            v36 = DestinationStringLength <= 0;
            goto LABEL_57;
          }
          if ( RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength) >= 0 )
          {
            v17 = a10;
            v12 = pcchLength + 1;
            goto LABEL_11;
          }
        }
      }
    }
  }
  return -1073741811;
}
