/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18003E440
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpIsReparsePoint @ 0x1800347F0 (LdrpIsReparsePoint.c)
 *     LdrpFindMessageInAlternateModule @ 0x18003A848 (LdrpFindMessageInAlternateModule.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003F110 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003F388 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     LdrpCompareServiceChecksum @ 0x18008181C (LdrpCompareServiceChecksum.c)
 *     LdrpGetParentLangId @ 0x1800830C4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800E2A84 (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 *a5)
{
  unsigned __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned int v8; // eax
  unsigned int MessageInAlternateModule; // esi
  unsigned __int16 v11; // bx
  int v12; // r12d
  __int64 v13; // rdx
  unsigned int v14; // r14d
  _DWORD *v15; // r8
  char v16; // r11
  __int64 v17; // r9
  int v18; // edi
  int v19; // r13d
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  char v23; // al
  unsigned __int16 *MergedPrefLanguages; // rcx
  int AlternateResourceModule; // eax
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  char v31; // al
  int IsReparsePoint; // eax
  int ParentLangId; // eax
  _WORD *v34; // rax
  _DWORD *RcConfig; // rax
  char v36; // al
  __int64 v37; // r9
  char v38; // [rsp+30h] [rbp-D0h]
  _WORD v39[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v40; // [rsp+38h] [rbp-C8h]
  _BYTE v41[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-C4h]
  char v43; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v44; // [rsp+48h] [rbp-B8h]
  _DWORD *v45; // [rsp+50h] [rbp-B0h]
  unsigned int v46; // [rsp+58h] [rbp-A8h]
  __int64 *v47; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v48[2]; // [rsp+68h] [rbp-98h] BYREF
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
  MessageInAlternateModule = -1073020927;
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
          goto LABEL_19;
        }
        v20 = v12++;
        if ( !v20 )
          break;
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = (unsigned int)(v21 - 1);
          if ( !(_DWORD)v22 )
          {
            v39[0] = 0;
            v23 = LdrpSetThreadPreferredLangList(v22, v13);
            v6 = 0;
            if ( v23 )
            {
              MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
              if ( v14 < MergedPrefLanguages[2] )
              {
                GetLCIDFromLangListNodeWithLICCheck(
                  (_DWORD)MergedPrefLanguages,
                  NtCurrentTeb()->MergedPrefLanguages,
                  v14,
                  (unsigned int)v39,
                  (__int64)v41);
                v11 = v39[0];
                v6 = 0;
LABEL_10:
                if ( !v11 )
                {
                  v11 = -4370;
                  v39[0] = -4370;
LABEL_47:
                  v15 = v45;
                  goto LABEL_48;
                }
                if ( v41[0] && (a4 & 0x100000) != 0 )
                {
                  v11 = -4370;
                  v39[0] = -4370;
                }
                ++v14;
                v12 = v18;
                v46 = v14;
                goto LABEL_13;
              }
              v6 = 0;
            }
            v39[0] = 0;
            v11 = 0;
            goto LABEL_10;
          }
          if ( (_DWORD)v22 == 1 )
          {
            v6 = 0;
            if ( v15 || (RcConfig = LdrpGetRcConfig(v5, v13, 0, 1), v6 = 0, v45 = RcConfig, (v15 = RcConfig) != 0LL) )
            {
              if ( *v15 == -20054323 && (v15[6] & 2) != 0 && v15[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v15 + (unsigned int)v15[31]));
                v36 = RtlCultureNameToLCID(&DestinationString, v48);
                v6 = 0;
                if ( v36 )
                {
                  v11 = v48[0];
                  v39[0] = v48[0];
                  if ( (a4 & 0x100000) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(
                      0,
                      NtCurrentTeb()->MergedPrefLanguages,
                      0,
                      (unsigned int)v39,
                      (__int64)v41);
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
                    goto LABEL_14;
                  }
LABEL_13:
                  v16 = v38;
                  v17 = v40;
                  v5 = v44;
                  v15 = v45;
LABEL_14:
                  v13 = v42;
                  goto LABEL_19;
                }
                v15 = v45;
                MessageInAlternateModule = -1073020923;
              }
            }
            v11 = -4370;
            v39[0] = -4370;
LABEL_48:
            v13 = v42;
            v5 = v44;
            v17 = v40;
            v16 = v38;
          }
          else
          {
            if ( v16 )
              return MessageInAlternateModule;
            if ( v43 )
              return MessageInAlternateModule;
            IsReparsePoint = LdrpIsReparsePoint(v5);
            v6 = 0;
            if ( IsReparsePoint < 0 )
              return MessageInAlternateModule;
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
            goto LABEL_35;
          if ( (a4 & 4) != 0 )
          {
            v11 = -4370;
            v39[0] = -4370;
            v12 = -2;
            goto LABEL_72;
          }
          if ( (v17 & 0x3FF) == 0 )
          {
LABEL_35:
            v6 = 0;
            goto LABEL_36;
          }
          ParentLangId = LdrpGetParentLangId(v11, v39, v15, v17);
          v15 = v45;
          v6 = 0;
          v13 = v42;
          v5 = v44;
          v17 = v40;
          v16 = v38;
          if ( ParentLangId >= 0 )
          {
            v11 = v39[0];
            if ( v39[0] )
            {
              v12 = v18;
              goto LABEL_19;
            }
          }
          v12 = -2;
LABEL_36:
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
LABEL_19:
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
        goto LABEL_21;
    }
LABEL_72:
    v6 = 0;
  }
LABEL_21:
  if ( (unsigned int)v13 >= 0x40 )
    return MessageInAlternateModule;
  v52 = 0LL;
  v42 = v13 + 1;
  v54[(unsigned int)v13] = v11;
  AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v5, v11, (unsigned int)&v50, (unsigned int)&v52, a4);
  v6 = 0;
  MessageInAlternateModule = AlternateResourceModule;
  if ( AlternateResourceModule < 0 )
  {
    if ( AlternateResourceModule == -1073741766 || AlternateResourceModule == -1073741772 )
      MessageInAlternateModule = -1073020927;
    if ( v19 )
      return MessageInAlternateModule;
    goto LABEL_47;
  }
  v26 = v50;
  v27 = v51;
  v43 = 1;
  *(_QWORD *)(v51 + 16) = v11;
  v28 = LdrpSearchResourceSection_U(v26, v27, 3u, 0x30u, v47);
  MessageInAlternateModule = v28;
  if ( (a4 & 0x40) == 0 )
    goto LABEL_24;
  if ( v28 < 0 )
    goto LABEL_41;
  MessageInAlternateModule = LdrpFindMessageInAlternateModule(v26, (unsigned int *)*v47, 0LL, *(_DWORD *)(v51 + 24), 0);
  if ( (MessageInAlternateModule & 0x80000000) != 0 )
  {
    *v47 = 0LL;
LABEL_24:
    if ( (MessageInAlternateModule & 0x80000000) != 0 )
    {
LABEL_41:
      v31 = LdrpCompareServiceChecksum(v44, v26);
      v6 = 0;
      if ( v31 )
        return MessageInAlternateModule;
      goto LABEL_87;
    }
  }
  if ( *v47 <= v26 || v52 && *v47 >= v26 + v52 )
  {
    *v47 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(85LL, 2LL, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v6 = 0;
LABEL_87:
    if ( v19 )
      return MessageInAlternateModule;
    v14 = v46;
    goto LABEL_47;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v26 = v50;
    v29 = (__int64)NtCurrentPeb()->SharedData + 555;
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
    LdrpMUIEtwOutput(v26, v51, v49, v37);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v44;
  return MessageInAlternateModule;
}
