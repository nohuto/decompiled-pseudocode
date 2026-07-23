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
 *     LdrpCompareServiceChecksum @ 0x18008182C (LdrpCompareServiceChecksum.c)
 *     LdrpGetParentLangId @ 0x1800830D4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800E2A84 (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(PVOID BaseOfImage, __int64 a2, DWORD a3, ULONG a4, ULONG **a5)
{
  PVOID v5; // r10
  unsigned int v6; // ecx
  unsigned int v8; // eax
  unsigned int MessageInAlternateModule; // esi
  LANGID v11; // bx
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
  NTSTATUS v25; // eax
  ULONG *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  char v31; // al
  int IsReparsePoint; // eax
  int ParentLangId; // eax
  _WORD *v34; // rax
  _DWORD *RcConfig; // rax
  BOOLEAN v36; // al
  char v37; // [rsp+30h] [rbp-D0h]
  _WORD v38[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v39; // [rsp+38h] [rbp-C8h]
  _BYTE v40[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-C4h]
  char v42; // [rsp+40h] [rbp-C0h]
  PVOID DllHandle; // [rsp+48h] [rbp-B8h]
  _DWORD *v44; // [rsp+50h] [rbp-B0h]
  unsigned int v45; // [rsp+58h] [rbp-A8h]
  ULONG **v46; // [rsp+60h] [rbp-A0h]
  DWORD Lcid[2]; // [rsp+68h] [rbp-98h] BYREF
  PVOID ResourceDllBase; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h]
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _WORD v52[64]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = BaseOfImage;
  DllHandle = BaseOfImage;
  v6 = 0;
  v46 = a5;
  Lcid[1] = a3;
  v8 = a3 - 3;
  v49 = a2;
  ResourceDllBase = 0LL;
  v38[0] = 0;
  MessageInAlternateModule = -1073020927;
  v42 = 0;
  v11 = 0;
  v41 = 0;
  v12 = 0;
  v45 = 0;
  v13 = 0LL;
  v44 = 0LL;
  v14 = 0;
  v37 = 0;
  v15 = 0LL;
  v16 = 0;
  if ( v8 > 1 )
    return (unsigned int)-1073741583;
  v17 = *(unsigned __int16 *)(a2 + 16);
  v39 = v17;
  v40[0] = 0;
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
          v38[0] = -3346;
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
            v38[0] = 0;
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
                  (unsigned int)v38,
                  (__int64)v40);
                v11 = v38[0];
                v6 = 0;
LABEL_10:
                if ( !v11 )
                {
                  v11 = -4370;
                  v38[0] = -4370;
LABEL_48:
                  v15 = v44;
                  goto LABEL_49;
                }
                if ( v40[0] && (a4 & 0x100000) != 0 )
                {
                  v11 = -4370;
                  v38[0] = -4370;
                }
                ++v14;
                v12 = v18;
                v45 = v14;
                goto LABEL_13;
              }
              v6 = 0;
            }
            v38[0] = 0;
            v11 = 0;
            goto LABEL_10;
          }
          if ( (_DWORD)v22 == 1 )
          {
            v6 = 0;
            if ( v15 || (RcConfig = LdrpGetRcConfig(v5, v13, 0, 1), v6 = 0, v44 = RcConfig, (v15 = RcConfig) != 0LL) )
            {
              if ( *v15 == -20054323 && (v15[6] & 2) != 0 && v15[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v15 + (unsigned int)v15[31]));
                v36 = RtlCultureNameToLCID(&DestinationString, Lcid);
                v6 = 0;
                if ( v36 )
                {
                  v11 = Lcid[0];
                  v38[0] = Lcid[0];
                  if ( (a4 & 0x100000) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(
                      0,
                      NtCurrentTeb()->MergedPrefLanguages,
                      0,
                      (unsigned int)v38,
                      (__int64)v40);
                    v15 = v44;
                    v6 = 0;
                    v5 = DllHandle;
                    v17 = v39;
                    v16 = v37;
                    if ( v40[0] )
                    {
                      v11 = -4370;
                      v38[0] = -4370;
                    }
                    else
                    {
                      v11 = v38[0];
                    }
                    goto LABEL_14;
                  }
LABEL_13:
                  v16 = v37;
                  v17 = v39;
                  v5 = DllHandle;
                  v15 = v44;
LABEL_14:
                  v13 = v41;
                  goto LABEL_19;
                }
                v15 = v44;
                MessageInAlternateModule = -1073020923;
              }
            }
            v11 = -4370;
            v38[0] = -4370;
LABEL_49:
            v13 = v41;
            v5 = DllHandle;
            v17 = v39;
            v16 = v37;
          }
          else
          {
            if ( v16 )
              return MessageInAlternateModule;
            if ( v42 )
              return MessageInAlternateModule;
            IsReparsePoint = LdrpIsReparsePoint(v5);
            v6 = 0;
            if ( IsReparsePoint < 0 )
              return MessageInAlternateModule;
            v15 = v44;
            v16 = 1;
            v5 = DllHandle;
            a4 |= 0x400000u;
            v17 = v39;
            v12 = 0;
            v37 = 1;
            v13 = 0LL;
            v41 = 0;
            v14 = 0;
            v45 = 0;
          }
        }
        else
        {
          if ( v11 == 0xEEEE )
            goto LABEL_36;
          if ( (a4 & 4) != 0 )
          {
            v11 = -4370;
            v38[0] = -4370;
            v12 = -2;
            goto LABEL_73;
          }
          if ( (v17 & 0x3FF) == 0 )
          {
LABEL_36:
            v6 = 0;
            goto LABEL_37;
          }
          ParentLangId = LdrpGetParentLangId(v11, v38, v15, v17);
          v15 = v44;
          v6 = 0;
          v13 = v41;
          v5 = DllHandle;
          v17 = v39;
          v16 = v37;
          if ( ParentLangId >= 0 )
          {
            v11 = v38[0];
            if ( v38[0] )
            {
              v12 = v18;
              goto LABEL_19;
            }
          }
          v12 = -2;
LABEL_37:
          v11 = -4370;
          v38[0] = -4370;
        }
      }
      if ( (v17 & 0xF3FF) != 0 || (_WORD)v17 == 3072 )
      {
        v11 = v17;
        v38[0] = v17;
      }
      else
      {
        v11 = -4370;
        v38[0] = -4370;
      }
      v6 = 0;
LABEL_19:
      ;
    }
    while ( v11 == 0xEEEE );
    if ( !(_DWORD)v13 )
      break;
    v34 = v52;
    while ( *v34 != v11 )
    {
      ++v6;
      ++v34;
      if ( v6 >= (unsigned int)v13 )
        goto LABEL_21;
    }
LABEL_73:
    v6 = 0;
  }
LABEL_21:
  if ( (unsigned int)v13 >= 0x40 )
    return MessageInAlternateModule;
  ResourceOffset = 0LL;
  v41 = v13 + 1;
  v52[(unsigned int)v13] = v11;
  v25 = LdrLoadAlternateResourceModuleEx(v5, v11, &ResourceDllBase, &ResourceOffset, a4);
  v6 = 0;
  MessageInAlternateModule = v25;
  if ( v25 < 0 )
  {
    if ( v25 == -1073741766 || v25 == -1073741772 )
      MessageInAlternateModule = -1073020927;
    if ( v19 )
      return MessageInAlternateModule;
    goto LABEL_48;
  }
  v26 = (ULONG *)ResourceDllBase;
  v27 = v49;
  v42 = 1;
  *(_QWORD *)(v49 + 16) = v11;
  v28 = LdrpSearchResourceSection_U(v26, v27, 3u, 0x30u, (__int64)v46);
  MessageInAlternateModule = v28;
  if ( (a4 & 0x40) == 0 )
    goto LABEL_24;
  if ( v28 < 0 )
    goto LABEL_42;
  MessageInAlternateModule = LdrpFindMessageInAlternateModule(
                               (unsigned __int64)v26,
                               *v46,
                               0LL,
                               *(_DWORD *)(v49 + 24),
                               0);
  if ( (MessageInAlternateModule & 0x80000000) != 0 )
  {
    *v46 = 0LL;
LABEL_24:
    if ( (MessageInAlternateModule & 0x80000000) != 0 )
    {
LABEL_42:
      v31 = LdrpCompareServiceChecksum(DllHandle, v26);
      v6 = 0;
      if ( v31 )
        return MessageInAlternateModule;
      goto LABEL_88;
    }
  }
  if ( *v46 <= v26 || ResourceOffset && *v46 >= (ULONG *)((char *)v26 + ResourceOffset) )
  {
    *v46 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v6 = 0;
LABEL_88:
    if ( v19 )
      return MessageInAlternateModule;
    v14 = v45;
    goto LABEL_48;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v26 = (ULONG *)ResourceDllBase;
    v29 = (__int64)NtCurrentPeb()->SharedData + 555;
  }
  else
  {
    v29 = 2147353477LL;
  }
  if ( (*(_BYTE *)v29 & 2) != 0 )
    LdrpMUIEtwOutput(v26);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
  return MessageInAlternateModule;
}
