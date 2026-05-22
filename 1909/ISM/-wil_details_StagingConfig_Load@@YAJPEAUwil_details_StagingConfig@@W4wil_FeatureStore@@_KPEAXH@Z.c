/*
 * XREFs of ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18001DFA0
 * Callers:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18001DDF0 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800521E0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18001E170 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, int a2, __int64 a3, void *a4)
{
  const struct __WIL__WNF_TYPE_ID *v7; // rdx
  const void *v8; // r8
  int v9; // edi
  __int64 v10; // r13
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  SIZE_T v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r12d
  const struct __WIL__WNF_TYPE_ID *v17; // r8
  char *v18; // rdx
  __int64 result; // rax
  unsigned __int64 v20; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v22; // rax
  const struct __WIL__WNF_TYPE_ID *v23; // rdx
  const void *v24; // r8
  __int64 v25; // r10
  const struct __WIL__WNF_TYPE_ID *v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  HANDLE v32; // rax
  unsigned int v33; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v35[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF

  LODWORD(v36) = a2;
  *(_QWORD *)v35 = a4;
  memset_0((void *)(a1 + 8), 0, 0x50uLL);
  v9 = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v10 = 200LL;
  v11 = 0LL;
  v12 = 0x418A073AA3BC88F5LL;
  v13 = 0LL;
  v14 = -(__int64)(a4 != 0LL) & 0xC8;
  if ( !(_DWORD)v36 )
    v12 = 0x418A073AA3BC7C75LL;
  v37 = v12;
  v33 = a4 != 0LL ? 0xC8 : 0;
  v15 = wil_details_NtQueryWnfStateData(
          (const struct __WIL__WNF_STATE_NAME *)&v37,
          v7,
          v8,
          (unsigned int *)(a1 + 8),
          a4,
          &v33);
  v16 = v15;
  if ( !v15 )
  {
    v13 = *(char **)v35;
    if ( !*(_QWORD *)v35 )
      goto LABEL_15;
  }
  while ( v15 == -1073741789 )
  {
LABEL_15:
    if ( v14 < 0xC8 )
      v14 = 200LL;
    v20 = v14;
    v14 = v33;
    if ( v20 >= v33 )
      v14 = v20;
    if ( v14 < 0x10 )
      v14 = 16LL;
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    v22 = GetProcessHeap();
    v11 = (char *)HeapAlloc(v22, 0, v14);
    if ( !v11 )
      return 3221225626LL;
    v33 = v14;
    v15 = wil_details_NtQueryWnfStateData(
            (const struct __WIL__WNF_STATE_NAME *)&v37,
            v23,
            v24,
            (unsigned int *)(a1 + 8),
            v11,
            &v33);
    v16 = v15;
    v13 = v11;
  }
  if ( v16 || !v13 )
  {
    if ( v11 )
    {
      v32 = GetProcessHeap();
      HeapFree(v32, 0, v11);
    }
    return v16;
  }
  else
  {
    v17 = (const struct __WIL__WNF_TYPE_ID *)v33;
    if ( v33 > 4 )
      *(_BYTE *)(a1 + 12) = *v13;
    if ( (unsigned int)v17 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && *((_WORD *)v13 + 1) >= 0x10u
      && (v25 = *((unsigned __int16 *)v13 + 2),
          v26 = (const struct __WIL__WNF_TYPE_ID *)(*((unsigned __int16 *)v13 + 1)
                                                  + 16LL * *((unsigned __int16 *)v13 + 3)
                                                  + 12 * v25),
          v17 >= v26) )
    {
      v34 = 0;
      v27 = 0;
      if ( (_WORD)v25 )
      {
        v28 = 0x418A073AA3BC90F5LL;
        if ( !(_DWORD)v36 )
          v28 = 0x418A073AA3BC8075LL;
        v36 = v28;
        v35[0] = 0;
        wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v36, v26, v17, &v34, 0LL, v35);
        LODWORD(v17) = v33;
        v27 = v34;
      }
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 32) = v13 + 16;
      *(_QWORD *)(a1 + 40) = &v13[12 * *((unsigned __int16 *)v13 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v27 != 0;
      if ( *v13 == 2 && (unsigned __int8)v13[1] < 2u )
      {
        v29 = 16 * *((unsigned __int16 *)v13 + 3);
        v30 = 3 * *((unsigned __int16 *)v13 + 2);
        v31 = *((unsigned __int16 *)v13 + 1);
        *(_DWORD *)(a1 + 16) = 1;
        LODWORD(v17) = v31 + v29 + 4 * v30;
      }
    }
    else
    {
      v33 = 16;
      *(_QWORD *)v13 = 0LL;
      *((_QWORD *)v13 + 1) = 0LL;
      *((_WORD *)v13 + 1) = 16;
      *v13 = 2;
      v13[1] = 2;
      LODWORD(v17) = v33;
      *(_QWORD *)(a1 + 24) = v13;
      v18 = &v13[*((unsigned __int16 *)v13 + 1)];
      *(_QWORD *)(a1 + 32) = v18;
      *(_QWORD *)(a1 + 40) = &v18[12 * *((unsigned __int16 *)v13 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v17;
    if ( v11 )
      v10 = v14;
    *(_QWORD *)(a1 + 56) = v13;
    *(_QWORD *)(a1 + 72) = v10;
    LOBYTE(v9) = v13 == v11;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v9;
  }
  return result;
}
