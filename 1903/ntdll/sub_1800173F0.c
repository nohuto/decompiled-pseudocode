/*
 * XREFs of sub_1800173F0 @ 0x1800173F0
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 * Callees:
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_180013968 @ 0x180013968 (sub_180013968.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180067D14 @ 0x180067D14 (sub_180067D14.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_18007E254 @ 0x18007E254 (sub_18007E254.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800E053C @ 0x1800E053C (sub_1800E053C.c)
 */

__int64 __fastcall sub_1800173F0(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned __int64 *a5)
{
  __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned int v8; // eax
  unsigned int v10; // esi
  unsigned __int16 v11; // bx
  int v12; // r12d
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // r8
  char v16; // r11
  __int64 v17; // r9
  int v18; // edi
  int v19; // r13d
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  char v23; // al
  unsigned __int16 *MergedPrefLanguages; // rcx
  int AlternateResourceModule; // eax
  unsigned __int64 v26; // rdi
  int v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  char v31; // al
  int v32; // eax
  int v33; // eax
  _WORD *v34; // rax
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // r9
  char v38; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v39[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v40; // [rsp+38h] [rbp-C8h]
  bool v41[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-C4h]
  char v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h]
  unsigned int v46; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v47; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _WORD v54[64]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1;
  v44 = a1;
  v6 = 0;
  v47 = a5;
  v49 = a3;
  v8 = a3 - 3;
  v51 = a2;
  v50 = 0LL;
  v39[0] = 0;
  v10 = -1073020927;
  v43 = 0;
  v11 = 0;
  v42 = 0;
  v12 = 0;
  v46 = 0;
  v13 = 0LL;
  v45 = 0LL;
  v14 = 0;
  v38 = 0;
  v15 = 0LL;
  v16 = 0;
  if ( v8 > 1 )
    return (unsigned int)-1073741583;
  v17 = *(unsigned __int16 *)(a2 + 16);
  v40 = v17;
  v41[0] = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v18 = v12;
        v19 = a4 & 0x1000000;
        if ( (a4 & 0x1000000) != 0 )
        {
          v11 = -3346;
          v39[0] = -3346;
          goto LABEL_20;
        }
        v20 = v12++;
        if ( !v20 )
          break;
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            v11 = 0;
            v39[0] = 0;
            v23 = sub_180013968();
            v6 = 0;
            if ( v23 )
            {
              MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
              if ( v14 < MergedPrefLanguages[2] )
                sub_1800136CC((__int64)MergedPrefLanguages, (__int64)NtCurrentTeb()->MergedPrefLanguages, v14, v39, v41);
              v11 = v39[0];
              v6 = 0;
            }
            if ( !v11 )
            {
              v11 = -4370;
              v39[0] = -4370;
LABEL_48:
              v15 = v45;
              goto LABEL_49;
            }
            if ( v41[0] && (a4 & 0x100000) != 0 )
            {
              v11 = -4370;
              v39[0] = -4370;
            }
            ++v14;
            v12 = v18;
            v46 = v14;
            goto LABEL_14;
          }
          if ( v22 == 1 )
          {
            v6 = 0;
            if ( v15 || (LOBYTE(v17) = 1, v35 = sub_180018940(v5, v13, 0LL, v17), v6 = 0, v45 = v35, (v15 = v35) != 0) )
            {
              if ( *(_DWORD *)v15 == -20054323 && (*(_BYTE *)(v15 + 24) & 2) != 0 && *(_DWORD *)(v15 + 124) )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)(v15 + *(unsigned int *)(v15 + 124)));
                v36 = RtlCultureNameToLCID(&DestinationString.Length, &v48);
                v6 = 0;
                if ( v36 )
                {
                  v11 = v48;
                  v39[0] = v48;
                  if ( (a4 & 0x100000) != 0 )
                  {
                    sub_1800136CC(0LL, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v39, v41);
                    v15 = v45;
                    v6 = 0;
                    v5 = v44;
                    v17 = v40;
                    v16 = v38;
                    if ( v41[0] )
                    {
                      v11 = -4370;
                      v39[0] = -4370;
                    }
                    else
                    {
                      v11 = v39[0];
                    }
                    goto LABEL_15;
                  }
LABEL_14:
                  v16 = v38;
                  v17 = v40;
                  v5 = v44;
                  v15 = v45;
LABEL_15:
                  v13 = v42;
                  goto LABEL_20;
                }
                v15 = v45;
                v10 = -1073020923;
              }
            }
            v11 = -4370;
            v39[0] = -4370;
LABEL_49:
            v13 = v42;
            v5 = v44;
            v17 = v40;
            v16 = v38;
          }
          else
          {
            if ( v16 )
              return v10;
            if ( v43 )
              return v10;
            v32 = sub_1800549C0(v5, v13, v15, v17);
            v6 = 0;
            if ( v32 < 0 )
              return v10;
            v15 = v45;
            v16 = 1;
            v5 = v44;
            a4 |= 0x400000u;
            v17 = v40;
            v12 = 0;
            v38 = 1;
            v13 = 0LL;
            v42 = 0;
            v14 = 0;
            v46 = 0;
          }
        }
        else
        {
          if ( v11 == 0xEEEE )
            goto LABEL_36;
          if ( (a4 & 4) != 0 )
          {
            v11 = -4370;
            v39[0] = -4370;
            v12 = -2;
            goto LABEL_72;
          }
          if ( (v17 & 0x3FF) == 0 )
          {
LABEL_36:
            v6 = 0;
            goto LABEL_37;
          }
          v33 = sub_18007E254(v11, v39, v15);
          v15 = v45;
          v6 = 0;
          v13 = v42;
          v5 = v44;
          v17 = v40;
          v16 = v38;
          if ( v33 >= 0 )
          {
            v11 = v39[0];
            if ( v39[0] )
            {
              v12 = v18;
              goto LABEL_20;
            }
          }
          v12 = -2;
LABEL_37:
          v11 = -4370;
          v39[0] = -4370;
        }
      }
      if ( (v17 & 0xF3FF) != 0 || (_WORD)v17 == 3072 )
      {
        v11 = v17;
        v39[0] = v17;
      }
      else
      {
        v11 = -4370;
        v39[0] = -4370;
      }
      v6 = 0;
LABEL_20:
      ;
    }
    while ( v11 == 0xEEEE );
    if ( !(_DWORD)v13 )
      break;
    v34 = v54;
    while ( *v34 != v11 )
    {
      ++v6;
      ++v34;
      if ( v6 >= (unsigned int)v13 )
        goto LABEL_22;
    }
LABEL_72:
    v6 = 0;
  }
LABEL_22:
  if ( (unsigned int)v13 >= 0x40 )
    return v10;
  v52 = 0LL;
  v42 = v13 + 1;
  v54[(unsigned int)v13] = v11;
  AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v5, v11, (unsigned int)&v50, (unsigned int)&v52, a4);
  v6 = 0;
  v10 = AlternateResourceModule;
  if ( AlternateResourceModule < 0 )
  {
    if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
      v10 = -1073020927;
    if ( v19 )
      return v10;
    goto LABEL_48;
  }
  v26 = v50;
  v27 = v51;
  v43 = 1;
  *(_QWORD *)(v51 + 16) = v11;
  v28 = sub_180018D8C(v26, v27, 3, 33554480, (__int64)v47);
  v10 = v28;
  if ( (a4 & 0x40) == 0 )
  {
LABEL_25:
    if ( (v10 & 0x80000000) == 0 )
      goto LABEL_26;
LABEL_42:
    v31 = sub_18007CBE4(v44, v26);
    v6 = 0;
    if ( v31 )
      return v10;
LABEL_86:
    if ( v19 )
      return v10;
    v14 = v46;
    goto LABEL_48;
  }
  if ( v28 < 0 )
    goto LABEL_42;
  v10 = sub_180067D14(v26, *v47, 0, *(_DWORD *)(v51 + 24), 0);
  if ( (v10 & 0x80000000) != 0 )
  {
    *v47 = 0LL;
    goto LABEL_25;
  }
LABEL_26:
  if ( *v47 <= v26 || v52 && *v47 >= v26 + v52 )
  {
    *v47 = 0LL;
    v10 = -1073741701;
    DbgPrintEx(85LL, 2LL, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v6 = 0;
    goto LABEL_86;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v26 = v50;
    v29 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  }
  else
  {
    v29 = 2147353477LL;
  }
  if ( (*(_BYTE *)v29 & 2) != 0 )
  {
    if ( (a4 & 0x40) != 0 )
      v37 = 9LL;
    else
      v37 = (a4 & 1) != 0 ? 5 : 3;
    sub_1800E053C(v26, v51, v49, v37);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v44;
  return v10;
}
