/*
 * XREFs of RtlGetUILanguageInfo @ 0x180083E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitializeLangRegistryInfo @ 0x180005EE0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180005F10 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18000EE3C @ 0x18000EE3C (sub_18000EE3C.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18001583C @ 0x18001583C (sub_18001583C.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     sub_180016414 @ 0x180016414 (sub_180016414.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180074480 (RtlUnicodeStringToInteger.c)
 *     sub_180084128 @ 0x180084128 (sub_180084128.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800EBD90 @ 0x1800EBD90 (sub_1800EBD90.c)
 *     sub_1800FDDB4 @ 0x1800FDDB4 (sub_1800FDDB4.c)
 *     sub_1800FDF7C @ 0x1800FDF7C (sub_1800FDF7C.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, WCHAR *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  char v5; // bl
  _WORD *v7; // r12
  WCHAR *v8; // rdi
  unsigned int v9; // r13d
  const WCHAR *v11; // rdi
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v16; // r15d
  int v17; // eax
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // r15
  wchar_t *Heap; // rax
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rsi
  char v26; // [rsp+30h] [rbp-61h]
  _WORD v27[2]; // [rsp+34h] [rbp-5Dh] BYREF
  _WORD *v28; // [rsp+38h] [rbp-59h]
  unsigned int v29; // [rsp+40h] [rbp-51h] BYREF
  int v30; // [rsp+44h] [rbp-4Dh]
  __int64 v31; // [rsp+48h] [rbp-49h] BYREF
  int v32; // [rsp+50h] [rbp-41h]
  int v33; // [rsp+54h] [rbp-3Dh]
  wchar_t *v34; // [rsp+58h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  int *v36; // [rsp+70h] [rbp-21h]
  UNICODE_STRING v37; // [rsp+78h] [rbp-19h] BYREF
  __int128 v38; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+98h] [rbp+7h]
  int v40; // [rsp+A0h] [rbp+Fh]

  v5 = a1;
  v32 = a1;
  v28 = a3;
  v36 = a5;
  v31 = 0LL;
  v7 = a3;
  v27[0] = -1;
  v8 = a2;
  LOBYTE(v30) = 0;
  v34 = 0LL;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  if ( !a2 || !*a2 || (a1 & 0xC) == 0xC || (a1 & 0xFFFFFF73) != 0 || v9 && !a3 )
    return 3221225485LL;
  v15 = 4LL;
  v16 = a1 & 4;
  if ( (a1 & 4) == 0 )
    v15 = 85LL;
  if ( (int)sub_18000EE3C(v8, v15) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( v7 )
  {
    if ( v9 )
      *v7 = 0;
    if ( v9 > 1 )
      v7[1] = 0;
  }
  if ( a4 )
    *a4 = 2;
  if ( a5 )
    *a5 = 0;
  v33 = v5 & 0x80;
  if ( v5 < 0 )
    v17 = RtlpInitializeLangRegistryInfo(&v31);
  else
    v17 = RtlpCreateProcessRegistryInfo(&v31);
  v25 = v31;
  v14 = v17;
  if ( v17 >= 0 )
  {
    if ( v31 )
    {
      v18 = *(_QWORD *)(v31 + 24);
      if ( v16 )
      {
        v26 = 1;
        Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
        v34 = Heap;
        if ( Heap )
        {
          DestinationString.Buffer = Heap;
          *(_DWORD *)&DestinationString.Length = 11141120;
          RtlInitUnicodeString(&v37, v8);
          if ( (int)sub_1800EBD90(&v37, &v29) < 0 || !RtlLCIDToCultureName(v29, (__int64)&DestinationString) )
          {
            v25 = v31;
            v14 = -1073741811;
            goto LABEL_66;
          }
          v25 = v31;
          v19 = sub_180016414(v31, v29, 1, v27);
LABEL_50:
          v14 = v19;
          if ( v19 < 0 )
          {
            v7 = v28;
            if ( v19 == -1073741823 )
              v14 = -1073741772;
            goto LABEL_20;
          }
          if ( v27[0] >= 0 && v27[0] < (int)*(unsigned __int16 *)(v18 + 6) )
          {
            v21 = *(_QWORD *)(v18 + 16) + 28LL * v27[0];
            while ( *v8 )
              ++v8;
            v11 = v8 + 1;
            v38 = *(_OWORD *)v21;
            v39 = *(_QWORD *)(v21 + 16);
            v40 = *(_DWORD *)(v21 + 24);
            if ( (*(_BYTE *)v21 & 1) == 0 )
            {
              LOBYTE(v12) = v30;
              if ( *v11 )
              {
                while ( !(_BYTE)v12 )
                {
                  if ( v26 )
                  {
                    RtlInitUnicodeString(&v37, v11);
                    if ( (int)RtlUnicodeStringToInteger(&v37.Length, 0x10u, (int *)&v29) < 0 )
                      break;
                    LOBYTE(v23) = 1;
                    v24 = sub_1800FDDB4(v25, (unsigned int)&v38, (unsigned __int16)v29, v23, (__int64)&v38);
                  }
                  else
                  {
                    LOBYTE(v20) = 1;
                    v24 = sub_1800FDF7C(v25, &v38, v11, v20, &v38);
                  }
                  v14 = v24;
                  if ( v24 < 0 )
                    goto LABEL_66;
                  v12 = (unsigned __int8)v30;
                  if ( (v38 & 0x20) != 0 )
                    v12 = 1;
                  v30 = v12;
                  while ( *v11 )
                    ++v11;
                  if ( !*++v11 )
                    goto LABEL_13;
                }
                v14 = -1073741811;
                goto LABEL_66;
              }
              goto LABEL_13;
            }
            if ( (*(_BYTE *)v21 & 6) != 0 )
            {
              v14 = -1073741595;
              goto LABEL_66;
            }
            if ( !*v11 )
            {
              LOBYTE(v12) = v30;
LABEL_13:
              if ( v36 )
              {
                v13 = *(_WORD *)v21 & 0x419F | 0x20;
                if ( (*(_WORD *)v21 & 0x1000) != 0 )
                  v13 = *(_WORD *)v21 & 0x419F;
                *v36 = v13 | 0x40;
              }
              if ( a4 )
              {
                v7 = v28;
                *a4 = v9;
                if ( (_BYTE)v12 )
                  *a4 = 2;
                else
                  v14 = sub_180084128(v32, v25, (unsigned int)&v38, (_DWORD)a4, (__int64)v7);
LABEL_20:
                if ( v34 )
                {
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v34);
                  v25 = v31;
                }
                goto LABEL_22;
              }
LABEL_66:
              v7 = v28;
              goto LABEL_20;
            }
          }
          v14 = -1073741772;
          goto LABEL_66;
        }
        v25 = v31;
        v14 = -1073741801;
      }
      else
      {
        v26 = 0;
        RtlInitUnicodeString(&DestinationString, v8);
        if ( RtlCultureNameToLCID(&DestinationString.Length, &v29) )
        {
          v19 = sub_18001583C(v25, v8, 1, v27);
          goto LABEL_50;
        }
        v14 = -1073741811;
      }
      v7 = v28;
    }
    else
    {
      v14 = -1073741823;
    }
  }
LABEL_22:
  if ( v33 && v25 )
    RtlpMuiFreeLangRegistryInfo(v25);
  if ( !v14 && a4 && *a4 > v9 )
  {
    if ( v7 )
      return (unsigned int)-1073741789;
  }
  return v14;
}
