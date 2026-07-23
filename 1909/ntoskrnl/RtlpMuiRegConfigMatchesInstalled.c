/*
 * XREFs of RtlpMuiRegConfigMatchesInstalled @ 0x140944AEC
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x14034E138 (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x14018E518 (_MuiRegAllocArray.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x14076B670 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1408D4620 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x140944F28 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140945290 (RtlpMuiRegLangInfoMatchesSpec.c)
 */

char __fastcall RtlpMuiRegConfigMatchesInstalled(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5,
        __int64 *a6,
        unsigned __int16 *a7)
{
  __int64 v7; // r15
  __int16 v8; // r14
  wchar_t *v11; // r13
  char v12; // bl
  __int64 *v13; // rdi
  unsigned __int16 *v14; // rdi
  __int64 v15; // rdx
  unsigned __int16 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  const WCHAR *v20; // rdx
  wchar_t *v21; // rax
  __int64 v22; // r8
  const wchar_t *v23; // rdx
  __int64 v24; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int16 v27; // [rsp+88h] [rbp+48h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+58h] BYREF

  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = a3;
  v11 = 0LL;
  if ( a2 == a4 )
  {
    v11 = 0LL;
    v12 = (_WORD)a3 == a5;
LABEL_3:
    v7 = 0LL;
    goto LABEL_4;
  }
  if ( a2 && a4 )
  {
    v14 = a7;
    if ( a7 )
      *a7 = -1;
    if ( a2 == 2 )
    {
      if ( a1 )
      {
        if ( (a3 & 0x8000u) == 0LL )
        {
          v15 = *(_QWORD *)(a1 + 24);
          if ( (__int16)a3 < (int)*(unsigned __int16 *)(v15 + 6) )
          {
            LOBYTE(a3) = a4;
            v7 = *(_QWORD *)(v15 + 16) + 28LL * v8;
            v12 = RtlpMuiRegLangInfoMatchesSpec(a1, v7, a3, a5);
            goto LABEL_4;
          }
        }
      }
    }
    else if ( a4 == 2 )
    {
      if ( a1 )
      {
        v16 = a5;
        if ( (a5 & 0x8000u) == 0 )
        {
          v17 = *(_QWORD *)(a1 + 24);
          if ( (__int16)a5 < (int)*(unsigned __int16 *)(v17 + 6) )
          {
            v18 = (unsigned __int16)a3;
            LOBYTE(a3) = a2;
            v11 = (wchar_t *)(*(_QWORD *)(v17 + 16) + 28LL * (__int16)a5);
            v12 = RtlpMuiRegLangInfoMatchesSpec(a1, v11, a3, v18);
            if ( v12 && v11 && v14 )
              *v14 = v16;
            goto LABEL_3;
          }
        }
      }
    }
    else
    {
      v12 = 1;
      if ( a2 == 1 )
      {
        if ( a4 == 3 )
        {
          v19 = *(_QWORD *)(a1 + 32);
          if ( v19 && (a5 & 0x8000u) == 0 && (__int16)a5 < (int)*(unsigned __int16 *)(v19 + 6) )
            v20 = (const WCHAR *)(*(_QWORD *)(v19 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v19 + 16) + 2LL * (__int16)a5));
          else
            v20 = 0LL;
          if ( v20 )
          {
            RtlInitUnicodeString(&DestinationString, v20);
            if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            {
              v12 = v8 == (__int16)Lcid;
              goto LABEL_4;
            }
          }
        }
      }
      else if ( a2 == 3 && a4 == 1 )
      {
        v21 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
        v11 = v21;
        if ( v21 )
        {
          DestinationString.Buffer = v21;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( RtlLCIDToCultureName((__int16)a5, &DestinationString) )
          {
            v22 = *(_QWORD *)(a1 + 32);
            if ( v22 && v8 >= 0 && v8 < (int)*(unsigned __int16 *)(v22 + 6) )
              v23 = (const wchar_t *)(*(_QWORD *)(v22 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v22 + 16) + 2LL * v8));
            else
              v23 = 0LL;
            if ( v23 && !wcsicmp(DestinationString.Buffer, v23) )
              goto LABEL_47;
          }
        }
      }
    }
  }
  v12 = 0;
LABEL_47:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v11 = 0LL;
  v7 = 0LL;
LABEL_4:
  v13 = a6;
  if ( a6 )
  {
    if ( v12 )
    {
      if ( v11 )
      {
        *a6 = (__int64)v11;
      }
      else if ( v7 )
      {
        *a6 = v7;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, a2, (unsigned __int16)v8, &v27) >= 0 && v27 >= 0 )
        {
          v24 = *(_QWORD *)(a1 + 24);
          if ( v27 < (int)*(unsigned __int16 *)(v24 + 6) )
            *v13 = *(_QWORD *)(v24 + 16) + 28LL * v27;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v12;
}
