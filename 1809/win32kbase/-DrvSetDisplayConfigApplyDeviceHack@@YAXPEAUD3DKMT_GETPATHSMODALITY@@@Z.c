/*
 * XREFs of ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004C480
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall DrvSetDisplayConfigApplyDeviceHack(struct D3DKMT_GETPATHSMODALITY *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // edx
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  const wchar_t *v18; // [rsp+98h] [rbp-68h]
  char *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  const wchar_t *v25; // [rsp+D0h] [rbp-30h]
  char *v26; // [rsp+D8h] [rbp-28h]
  int v27; // [rsp+E0h] [rbp-20h]
  int *v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+100h] [rbp+0h]
  const wchar_t *v32; // [rsp+108h] [rbp+8h]
  char *v33; // [rsp+110h] [rbp+10h]
  int v34; // [rsp+118h] [rbp+18h]
  int *v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  int v38; // [rsp+138h] [rbp+38h]
  _BYTE v39[40]; // [rsp+140h] [rbp+40h] BYREF

  QueryTable.DefaultLength = 4;
  v14 = 0uLL;
  v1 = 0LL;
  QueryTable.Flags = 288;
  v17 = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.Name = L"ScreenPosition.Left";
  v20 = 67108868;
  QueryTable.EntryContext = &v14;
  QueryTable.DefaultData = &v13;
  v18 = L"ScreenPosition.Top";
  v19 = (char *)&v14 + 4;
  v21 = &v13;
  v25 = L"ScreenPosition.Right";
  v26 = (char *)&v14 + 8;
  v28 = &v13;
  v32 = L"ScreenPosition.Bottom";
  v33 = (char *)&v14 + 12;
  v24 = 288;
  v27 = 67108868;
  v31 = 288;
  v34 = 67108868;
  v35 = &v13;
  v13 = 0;
  QueryTable.QueryRoutine = 0LL;
  v16 = 0LL;
  v22 = 4;
  v23 = 0LL;
  v29 = 4;
  v30 = 0LL;
  v36 = 4;
  v37 = 0LL;
  v38 = 0;
  memset(v39, 0, sizeof(v39));
  if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0 )
  {
    v5 = DWORD2(v14);
    if ( (int)v14 >= SDWORD2(v14) || (v6 = HIDWORD(v14), SDWORD1(v14) >= SHIDWORD(v14)) )
    {
      v10 = WdLogNewEntry5_WdError(v4, v3, *((_QWORD *)&v14 + 1));
      v11 = (_QWORD *)(v10 + 24);
      do
      {
        v12 = *((int *)&v14 + v1++);
        *v11++ = v12;
      }
      while ( v1 < 4 );
      WdLogEvent5_WdError(v10);
    }
    else
    {
      v7 = 0;
      if ( *((_WORD *)a1 + 10) )
      {
        v8 = v14;
        do
        {
          v9 = 272LL * v7;
          if ( *(_DWORD *)((char *)a1 + v9 + 136) == 0x80000000 && *(_DWORD *)((char *)a1 + v9 + 200) )
          {
            if ( *(_DWORD *)((char *)a1 + v9 + 204) )
            {
              *(_DWORD *)((char *)a1 + v9 + 200) = v5 - v14;
              *(_DWORD *)((char *)a1 + v9 + 204) = v6 - DWORD1(v14);
              *(_OWORD *)((char *)a1 + v9 + 216) = v8;
            }
          }
          ++v7;
        }
        while ( v7 < *((unsigned __int16 *)a1 + 10) );
      }
    }
  }
}
