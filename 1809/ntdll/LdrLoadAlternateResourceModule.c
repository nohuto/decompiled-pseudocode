/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x1800815F0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003F110 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003F388 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     LdrpCompareServiceChecksum @ 0x18008182C (LdrpCompareServiceChecksum.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModule(
        PVOID DllHandle,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  PVOID v7; // r10
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  PVOID v10; // r12
  NTSTATUS v11; // esi
  ULONG v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  char v15; // al
  unsigned int v16; // r11d
  unsigned __int16 *MergedPrefLanguages; // rcx
  LANGID v18; // bx
  unsigned int v19; // ecx
  PVOID *v20; // r14
  PVOID *v21; // r8
  NTSTATUS AlternateResourceModule; // eax
  _DWORD *RcConfig; // rax
  BOOLEAN v25; // al
  _WORD *v26; // rax
  bool v27[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-CCh]
  unsigned int v29; // [rsp+38h] [rbp-C8h]
  ULONG v30; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-BCh]
  PVOID DllHandlea; // [rsp+48h] [rbp-B8h]
  PVOID *ResourceDllBasea; // [rsp+50h] [rbp-B0h]
  DWORD Lcid; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v36; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _WORD v38[64]; // [rsp+80h] [rbp-80h] BYREF

  v28 = 0;
  ResourceDllBasea = ResourceDllBase;
  DllHandlea = DllHandle;
  memset(v38, 0, sizeof(v38));
  v7 = DllHandlea;
  v32 = 0;
  v8 = 0LL;
  v29 = 0;
  v9 = 0LL;
  v36 = 0LL;
  v10 = 0LL;
  v11 = -1073020927;
  if ( !DllHandlea || !ResourceDllBase )
    return -1073741811;
  v27[0] = 0;
  v12 = Flags & 0x1000000;
  v30 = Flags & 0x1000000;
LABEL_4:
  while ( 2 )
  {
    v13 = v28;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = v13;
        if ( v12 )
          break;
        v28 = v13 + 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            v20 = ResourceDllBasea;
            goto LABEL_20;
          }
          RcConfig = LdrpGetRcConfig(v7, v8, 1, 1);
          v13 = v28;
          v8 = v29;
          v12 = v30;
          v9 = RcConfig;
          v7 = DllHandlea;
          if ( RcConfig )
          {
            if ( *RcConfig == -20054323 && (RcConfig[6] & 2) != 0 )
            {
              if ( RcConfig[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                v25 = RtlCultureNameToLCID(&DestinationString, &Lcid);
                v13 = v28;
                v8 = v29;
                v12 = v30;
                v7 = DllHandlea;
                if ( v25 )
                {
                  v18 = Lcid;
                  v31[0] = Lcid;
                  if ( (Flags & 0x80u) == 0 && (v9[5] & 0x100) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(v28, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v31, v27);
                    v13 = v28;
                    v8 = v29;
                    v12 = v30;
                    v7 = DllHandlea;
                    if ( v27[0] )
                      v18 = -4370;
                    else
                      v18 = v31[0];
                  }
                  goto LABEL_13;
                }
              }
            }
          }
        }
        else
        {
          v31[0] = 0;
          v15 = LdrpSetThreadPreferredLangList();
          v16 = v32;
          if ( v15
            && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                v32 < MergedPrefLanguages[2]) )
          {
            GetLCIDFromLangListNodeWithLICCheck(
              (__int64)MergedPrefLanguages,
              (__int64)NtCurrentTeb()->MergedPrefLanguages,
              v32,
              v31,
              v27);
            v16 = v32;
            v18 = v31[0];
          }
          else
          {
            v18 = 0;
          }
          v13 = v28;
          v8 = v29;
          v12 = v30;
          v7 = DllHandlea;
          if ( v18 )
          {
            if ( (Flags & 0x80u) == 0 && v27[0] )
            {
              if ( (v9 || (v9 = LdrpGetRcConfig(DllHandlea, v29, 0, 1)) != 0LL) && *v9 == -20054323 )
              {
                v16 = v32;
                if ( (v9[5] & 0x100) != 0 )
                  v18 = -4370;
              }
              else
              {
                v16 = v32;
              }
            }
            v8 = v29;
            v12 = v30;
            v13 = v14;
            v7 = DllHandlea;
            v32 = v16 + 1;
            v28 = v14;
            goto LABEL_13;
          }
        }
      }
      v18 = -3346;
LABEL_13:
      if ( v18 != 0xEEEE )
      {
        v19 = 0;
        if ( (_DWORD)v8 )
        {
          v26 = v38;
          while ( *v26 != v18 )
          {
            ++v19;
            ++v26;
            if ( v19 >= (unsigned int)v8 )
              goto LABEL_15;
          }
          goto LABEL_4;
        }
LABEL_15:
        v20 = ResourceDllBasea;
        if ( (unsigned int)v8 >= 0x40 )
          goto LABEL_20;
        v29 = v8 + 1;
        v21 = ResourceDllBasea;
        v38[(unsigned int)v8] = v18;
        AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v7, v18, v21, ResourceOffset, Flags);
        v12 = v30;
        v11 = AlternateResourceModule;
        if ( v30 )
          goto LABEL_20;
        v13 = v28;
        v8 = v29;
        v7 = DllHandlea;
        if ( AlternateResourceModule >= 0 )
          break;
      }
    }
    if ( (Flags & 0x80u) != 0 && !(unsigned __int8)LdrpCompareServiceChecksum(DllHandlea, *v20) )
    {
      if ( !v10 )
      {
        v10 = *v20;
        if ( ResourceOffset )
          v36 = *ResourceOffset;
        else
          v36 = 0LL;
      }
      v8 = v29;
      v11 = -1073020927;
      v12 = v30;
      v7 = DllHandlea;
      continue;
    }
    break;
  }
LABEL_20:
  if ( v11 < 0 && (Flags & 0x80u) != 0 && v10 )
  {
    *v20 = v10;
    if ( ResourceOffset )
      *ResourceOffset = v36;
    return 0;
  }
  return v11;
}
