/*
 * XREFs of ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180005C1C
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180008D6C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180008F70 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z @ 0x18006C44C (-wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x1800056D8 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_StagingConfig_PrepareSessionChangeUpdate@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x180005AA8 (-wil_details_StagingConfig_PrepareSessionChangeUpdate@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(
        unsigned int *a1,
        unsigned int a2,
        SIZE_T a3,
        char *a4,
        unsigned int a5)
{
  const struct __WIL__WNF_TYPE_ID *v9; // rdx
  const void *v10; // r8
  __int64 v11; // rax
  char *v12; // r14
  SIZE_T v13; // rsi
  char *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  HANDLE ProcessHeap; // rax
  HANDLE v18; // rax
  const struct __WIL__WNF_TYPE_ID *v19; // rdx
  const void *v20; // r8
  const struct __WIL__WNF_TYPE_ID *v21; // r8
  __int64 v22; // r10
  const struct __WIL__WNF_TYPE_ID *v23; // rdx
  int v24; // r15d
  unsigned int v25; // r9d
  __int64 v26; // rax
  char *v28; // rdx
  unsigned int v29; // eax
  HANDLE v30; // rax
  unsigned int v31; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-30h] BYREF
  __int64 v34; // [rsp+40h] [rbp-28h] BYREF
  __int64 v35; // [rsp+48h] [rbp-20h] BYREF

  LODWORD(v34) = a2;
  memset_0(a1, 0, 0x58uLL);
  a1[1] = a5;
  *a1 = a2;
  v11 = 0x418A073AA3BC88F5LL;
  v12 = 0LL;
  v13 = a3 & -(__int64)(a4 != 0LL);
  v14 = 0LL;
  if ( !a2 )
    v11 = 0x418A073AA3BC7C75LL;
  v35 = v11;
  v31 = a4 != 0LL ? a3 : 0;
  v15 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v35, v9, v10, a1 + 2, a4, &v31);
  v16 = v15;
  if ( !v15 )
  {
    if ( !a4 )
      goto LABEL_7;
    v14 = a4;
  }
  if ( v15 == -1073741789 )
  {
    while ( 1 )
    {
LABEL_7:
      if ( v13 < a3 )
        v13 = a3;
      if ( v13 < v31 )
        v13 = v31;
      if ( v13 < 0x10 )
        v13 = 16LL;
      if ( v12 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v12);
      }
      v18 = GetProcessHeap();
      v12 = (char *)HeapAlloc(v18, 0, v13);
      if ( !v12 )
        return 3221225626LL;
      v31 = v13;
      v16 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v35, v19, v20, a1 + 2, v12, &v31);
      v14 = v12;
      if ( v16 != -1073741789 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    if ( v16 || !v14 )
    {
      if ( v12 )
      {
        v30 = GetProcessHeap();
        HeapFree(v30, 0, v12);
      }
      return v16;
    }
    else
    {
      v21 = (const struct __WIL__WNF_TYPE_ID *)v31;
      if ( v31 > 4 )
        *((_BYTE *)a1 + 12) = *v14;
      if ( (unsigned int)v21 >= 0x10
        && *((_BYTE *)a1 + 12) == 2
        && *((_WORD *)v14 + 1) >= 0x10u
        && (v22 = *((unsigned __int16 *)v14 + 2),
            v23 = (const struct __WIL__WNF_TYPE_ID *)(*((unsigned __int16 *)v14 + 1)
                                                    + 16LL * *((unsigned __int16 *)v14 + 3)
                                                    + 12 * v22),
            v21 >= v23) )
      {
        v32 = 0;
        v24 = 0;
        v25 = 0;
        if ( (_WORD)v22 )
        {
          v26 = 0x418A073AA3BC90F5LL;
          if ( !(_DWORD)v34 )
            v26 = 0x418A073AA3BC8075LL;
          v34 = v26;
          v33 = 0;
          wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v34, v23, v21, &v32, 0LL, &v33);
          LODWORD(v21) = v31;
          v25 = v32;
        }
        *((_QWORD *)a1 + 3) = v14;
        *((_QWORD *)a1 + 4) = v14 + 16;
        *((_QWORD *)a1 + 5) = &v14[12 * *((unsigned __int16 *)v14 + 2) + 16];
        a1[12] = v25 != 0;
        if ( *v14 == 2 && (unsigned __int8)v14[1] < 2u )
        {
          LODWORD(v21) = *((unsigned __int16 *)v14 + 1)
                       + 16 * *((unsigned __int16 *)v14 + 3)
                       + 12 * *((unsigned __int16 *)v14 + 2);
          a1[4] = 1;
          v31 = (unsigned int)v21;
        }
      }
      else
      {
        v31 = 16;
        *(_QWORD *)v14 = 0LL;
        v24 = 1;
        *((_QWORD *)v14 + 1) = 0LL;
        *((_WORD *)v14 + 1) = 16;
        *v14 = 2;
        v14[1] = 2;
        LODWORD(v21) = v31;
        *((_QWORD *)a1 + 3) = v14;
        v28 = &v14[*((unsigned __int16 *)v14 + 1)];
        *((_QWORD *)a1 + 4) = v28;
        *((_QWORD *)a1 + 5) = &v28[12 * *((unsigned __int16 *)v14 + 2)];
      }
      *((_QWORD *)a1 + 8) = (unsigned int)v21;
      v29 = 0;
      if ( v12 )
        a3 = v13;
      *((_QWORD *)a1 + 7) = v14;
      *((_QWORD *)a1 + 9) = a3;
      LOBYTE(v29) = v14 == v12;
      a1[20] = v29;
      if ( a5 && !v24 && !a1[12] )
        wil_details_StagingConfig_PrepareSessionChangeUpdate((struct wil_details_StagingConfig *)a1);
      return 0LL;
    }
  }
}
