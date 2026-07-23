/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x1800173F0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 * Callees:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800136CC (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x180013968 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x180018940 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     LdrpIsReparsePoint @ 0x180054A60 (LdrpIsReparsePoint.c)
 *     LdrpFindMessageInAlternateModule @ 0x180067F64 (LdrpFindMessageInAlternateModule.c)
 *     LdrpCompareServiceChecksum @ 0x18007D284 (LdrpCompareServiceChecksum.c)
 *     LdrpGetParentLangId @ 0x18007E8F4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800E062C (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(PVOID DllHandle, __int64 a2, DWORD a3, ULONG a4, _QWORD *a5)
{
  PVOID v5; // r10
  unsigned int v6; // ecx
  unsigned int v8; // eax
  unsigned int MessageInAlternateModule; // esi
  LANGID v11; // bx
  int v12; // r12d
  unsigned int v13; // edx
  unsigned int v14; // r14d
  __int64 v15; // r8
  char v16; // r11
  unsigned __int16 v17; // r9
  int v18; // edi
  int v19; // r13d
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  char v23; // al
  unsigned __int16 *MergedPrefLanguages; // rcx
  NTSTATUS v25; // eax
  PVOID v26; // rdi
  int v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  char v31; // al
  int IsReparsePoint; // eax
  int ParentLangId; // eax
  _WORD *v34; // rax
  __int64 RcConfig; // rax
  BOOLEAN v36; // al
  char v37; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v38[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v39; // [rsp+38h] [rbp-C8h]
  bool v40[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-C4h]
  char v42; // [rsp+40h] [rbp-C0h]
  PVOID DllHandlea; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  unsigned int v45; // [rsp+58h] [rbp-A8h]
  _QWORD *v46; // [rsp+60h] [rbp-A0h]
  DWORD Lcid[2]; // [rsp+68h] [rbp-98h] BYREF
  PVOID ResourceDllBase; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h]
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _WORD v52[64]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = DllHandle;
  DllHandlea = DllHandle;
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
  v13 = 0;
  v44 = 0LL;
  v14 = 0;
  v37 = 0;
  v15 = 0LL;
  v16 = 0;
  if ( v8 > 1 )
    return (unsigned int)-1073741583;
  v17 = *(_WORD *)(a2 + 16);
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
            v38[0] = 0;
            v23 = LdrpSetThreadPreferredLangList();
            v6 = 0;
            if ( v23 )
            {
              MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
              if ( v14 < MergedPrefLanguages[2] )
                GetLCIDFromLangListNodeWithLICCheck(
                  (__int64)MergedPrefLanguages,
                  (__int64)NtCurrentTeb()->MergedPrefLanguages,
                  v14,
                  v38,
                  v40);
              v11 = v38[0];
              v6 = 0;
            }
            if ( !v11 )
            {
              v11 = -4370;
              v38[0] = -4370;
LABEL_49:
              v15 = v44;
              goto LABEL_50;
            }
            if ( v40[0] && (a4 & 0x100000) != 0 )
            {
              v11 = -4370;
              v38[0] = -4370;
            }
            ++v14;
            v12 = v18;
            v45 = v14;
            goto LABEL_14;
          }
          if ( v22 == 1 )
          {
            v6 = 0;
            if ( v15 || (RcConfig = LdrpGetRcConfig(v5), v6 = 0, v44 = RcConfig, (v15 = RcConfig) != 0) )
            {
              if ( *(_DWORD *)v15 == -20054323 && (*(_BYTE *)(v15 + 24) & 2) != 0 && *(_DWORD *)(v15 + 124) )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)(v15 + *(unsigned int *)(v15 + 124)));
                v36 = RtlCultureNameToLCID(&DestinationString, Lcid);
                v6 = 0;
                if ( v36 )
                {
                  v11 = Lcid[0];
                  v38[0] = Lcid[0];
                  if ( (a4 & 0x100000) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(0LL, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v38, v40);
                    v15 = v44;
                    v6 = 0;
                    v5 = DllHandlea;
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
                    goto LABEL_15;
                  }
LABEL_14:
                  v16 = v37;
                  v17 = v39;
                  v5 = DllHandlea;
                  v15 = v44;
LABEL_15:
                  v13 = v41;
                  goto LABEL_20;
                }
                v15 = v44;
                MessageInAlternateModule = -1073020923;
              }
            }
            v11 = -4370;
            v38[0] = -4370;
LABEL_50:
            v13 = v41;
            v5 = DllHandlea;
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
            v5 = DllHandlea;
            a4 |= 0x400000u;
            v17 = v39;
            v12 = 0;
            v37 = 1;
            v13 = 0;
            v41 = 0;
            v14 = 0;
            v45 = 0;
          }
        }
        else
        {
          if ( v11 == 0xEEEE )
            goto LABEL_37;
          if ( (a4 & 4) != 0 )
          {
            v11 = -4370;
            v38[0] = -4370;
            v12 = -2;
            goto LABEL_73;
          }
          if ( (v17 & 0x3FF) == 0 )
          {
LABEL_37:
            v6 = 0;
            goto LABEL_38;
          }
          ParentLangId = LdrpGetParentLangId(v11, v38, v15);
          v15 = v44;
          v6 = 0;
          v13 = v41;
          v5 = DllHandlea;
          v17 = v39;
          v16 = v37;
          if ( ParentLangId >= 0 )
          {
            v11 = v38[0];
            if ( v38[0] )
            {
              v12 = v18;
              goto LABEL_20;
            }
          }
          v12 = -2;
LABEL_38:
          v11 = -4370;
          v38[0] = -4370;
        }
      }
      if ( (v17 & 0xF3FF) != 0 || v17 == 3072 )
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
LABEL_20:
      ;
    }
    while ( v11 == 0xEEEE );
    if ( !v13 )
      break;
    v34 = v52;
    while ( *v34 != v11 )
    {
      ++v6;
      ++v34;
      if ( v6 >= v13 )
        goto LABEL_22;
    }
LABEL_73:
    v6 = 0;
  }
LABEL_22:
  if ( v13 >= 0x40 )
    return MessageInAlternateModule;
  ResourceOffset = 0LL;
  v41 = v13 + 1;
  v52[v13] = v11;
  v25 = LdrLoadAlternateResourceModuleEx(v5, v11, &ResourceDllBase, &ResourceOffset, a4);
  v6 = 0;
  MessageInAlternateModule = v25;
  if ( v25 < 0 )
  {
    if ( v25 == -1073741772 || v25 == -1073741766 )
      MessageInAlternateModule = -1073020927;
    if ( v19 )
      return MessageInAlternateModule;
    goto LABEL_49;
  }
  v26 = ResourceDllBase;
  v27 = v49;
  v42 = 1;
  *(_QWORD *)(v49 + 16) = v11;
  v28 = LdrpSearchResourceSection_U((_DWORD)v26, v27, 3, 33554480, (__int64)v46);
  MessageInAlternateModule = v28;
  if ( (a4 & 0x40) == 0 )
  {
LABEL_25:
    if ( (MessageInAlternateModule & 0x80000000) == 0 )
      goto LABEL_26;
LABEL_43:
    v31 = LdrpCompareServiceChecksum(DllHandlea, v26);
    v6 = 0;
    if ( v31 )
      return MessageInAlternateModule;
LABEL_87:
    if ( v19 )
      return MessageInAlternateModule;
    v14 = v45;
    goto LABEL_49;
  }
  if ( v28 < 0 )
    goto LABEL_43;
  MessageInAlternateModule = LdrpFindMessageInAlternateModule((_DWORD)v26, *v46, 0, *(_DWORD *)(v49 + 24), 0);
  if ( (MessageInAlternateModule & 0x80000000) != 0 )
  {
    *v46 = 0LL;
    goto LABEL_25;
  }
LABEL_26:
  if ( *v46 <= (unsigned __int64)v26 || ResourceOffset && *v46 >= (unsigned __int64)v26 + ResourceOffset )
  {
    *v46 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v6 = 0;
    goto LABEL_87;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v26 = ResourceDllBase;
    v29 = (__int64)NtCurrentPeb()->SharedData + 555;
  }
  else
  {
    v29 = 2147353477LL;
  }
  if ( (*(_BYTE *)v29 & 2) != 0 )
    LdrpMUIEtwOutput(v26);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandlea;
  return MessageInAlternateModule;
}
