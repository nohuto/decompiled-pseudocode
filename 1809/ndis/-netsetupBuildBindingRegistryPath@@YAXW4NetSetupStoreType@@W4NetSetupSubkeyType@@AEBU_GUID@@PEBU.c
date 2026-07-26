/*
 * XREFs of ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C0103B7C
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1C01060C4 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0106168 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C01061F8 (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ @ 0x1C0081BE4 (--$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ.c)
 */

errno_t __fastcall netsetupBuildBindingRegistryPath(
        int a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6,
        wchar_t *a7)
{
  errno_t result; // eax
  _DWORD *v9; // rdx
  const wchar_t *v10; // rcx
  unsigned int v11; // r10d
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  unsigned int v18; // edi
  unsigned int v19; // r11d
  unsigned int v20; // esi
  unsigned int v21; // r14d
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  unsigned int v24; // r9d
  __int64 v25; // [rsp+20h] [rbp-198h]
  __int64 v26; // [rsp+28h] [rbp-190h]
  __int64 v27; // [rsp+30h] [rbp-188h]
  __int64 v28; // [rsp+38h] [rbp-180h]
  __int64 v29; // [rsp+40h] [rbp-178h]
  __int64 v30; // [rsp+48h] [rbp-170h]
  __int64 v31; // [rsp+50h] [rbp-168h]
  __int64 v32; // [rsp+58h] [rbp-160h]
  __int64 v33; // [rsp+60h] [rbp-158h]
  int v34; // [rsp+80h] [rbp-138h]
  int v35; // [rsp+88h] [rbp-130h]
  int v36; // [rsp+90h] [rbp-128h]
  unsigned int v37; // [rsp+98h] [rbp-120h]
  unsigned int v38; // [rsp+A0h] [rbp-118h]
  __int64 v39; // [rsp+D0h] [rbp-E8h]
  _DWORD *v40; // [rsp+D8h] [rbp-E0h]
  wchar_t Src[40]; // [rsp+120h] [rbp-98h] BYREF

  result = (int)a7;
  HIDWORD(v39) = HIDWORD(a5);
  v40 = a4;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v9 = a4;
      if ( !a4 )
        v9 = a5;
      v10 = L"Protocols";
      if ( !a4 )
        v10 = L"Filters";
      v34 = *((unsigned __int16 *)v9 + 2);
      v35 = *((unsigned __int16 *)v9 + 3);
      v36 = *((unsigned __int8 *)v9 + 8);
      v37 = *((unsigned __int8 *)v9 + 9);
      v38 = *((unsigned __int8 *)v9 + 10);
      LODWORD(v39) = v35;
      LODWORD(v40) = v34;
      result = swprintf_s(
                 a7,
                 0x100uLL,
                 L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02"
                  "x}\\Bindings\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                 *a3,
                 *((unsigned __int16 *)a3 + 2),
                 *((unsigned __int16 *)a3 + 3),
                 *((unsigned __int8 *)a3 + 8),
                 *((unsigned __int8 *)a3 + 9),
                 *((unsigned __int8 *)a3 + 10),
                 *((unsigned __int8 *)a3 + 11),
                 *((unsigned __int8 *)a3 + 12),
                 *((unsigned __int8 *)a3 + 13),
                 *((unsigned __int8 *)a3 + 14),
                 *((unsigned __int8 *)a3 + 15),
                 v10,
                 *v9,
                 v34,
                 v35,
                 v36,
                 v37,
                 v38,
                 *((unsigned __int8 *)v9 + 11),
                 *((unsigned __int8 *)v9 + 12),
                 *((unsigned __int8 *)v9 + 13),
                 *((unsigned __int8 *)v9 + 14),
                 *((unsigned __int8 *)v9 + 15),
                 v39,
                 v40,
                 __PAIR64__(v37, v38),
                 v36);
      if ( a6 )
      {
        LODWORD(v33) = *((unsigned __int8 *)a6 + 15);
        LODWORD(v32) = *((unsigned __int8 *)a6 + 14);
        LODWORD(v31) = *((unsigned __int8 *)a6 + 13);
        LODWORD(v30) = *((unsigned __int8 *)a6 + 12);
        LODWORD(v29) = *((unsigned __int8 *)a6 + 11);
        LODWORD(v28) = *((unsigned __int8 *)a6 + 10);
        LODWORD(v27) = *((unsigned __int8 *)a6 + 9);
        LODWORD(v26) = *((unsigned __int8 *)a6 + 8);
        LODWORD(v25) = *((unsigned __int16 *)a6 + 3);
        swprintf_s<40>(
          Src,
          L"-{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          *a6,
          *((unsigned __int16 *)a6 + 2),
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        return wcscat_s(a7, 0x100uLL, Src);
      }
    }
  }
  else
  {
    v11 = a3[1];
    v12 = *a3;
    LOWORD(v13) = v11;
    v14 = a3[2];
    v15 = *a3 ^ a3[3];
    v16 = HIWORD(v11);
    v17 = HIWORD(v14);
    v18 = HIBYTE(v15);
    v19 = HIWORD(v15);
    v20 = v15 >> 8;
    v21 = HIBYTE(v14);
    v22 = v14 >> 8;
    LOBYTE(v23) = v15;
    LOBYTE(v24) = v14;
    if ( v40 )
    {
      v12 = v11 ^ *v40;
      v11 = v14 ^ v40[1];
      v14 = v15 ^ v40[2];
      v15 = v12 ^ v40[3];
      v16 = HIWORD(v11);
      v21 = HIBYTE(v14);
      v18 = HIBYTE(v15);
      v19 = HIWORD(v15);
      v20 = v15 >> 8;
      v17 = HIWORD(v14);
      v22 = v14 >> 8;
      LOBYTE(v23) = v15;
      LOBYTE(v24) = v14;
      LOWORD(v13) = v11;
    }
    if ( a5 )
    {
      v12 = v11 ^ *a5;
      v11 = v14 ^ a5[1];
      v14 = v15 ^ a5[2];
      v15 = v12 ^ a5[3];
      v16 = HIWORD(v11);
      v21 = HIBYTE(v14);
      v18 = HIBYTE(v15);
      v19 = HIWORD(v15);
      v20 = v15 >> 8;
      v17 = HIWORD(v14);
      v22 = v14 >> 8;
      LOBYTE(v23) = v15;
      LOBYTE(v24) = v14;
      LOWORD(v13) = v11;
    }
    if ( a6 )
    {
      v12 = v11 ^ *a6;
      v13 = v14 ^ a6[1];
      v24 = v15 ^ a6[2];
      v23 = v12 ^ a6[3];
      v16 = HIWORD(v13);
      v18 = HIBYTE(v23);
      v19 = HIWORD(v23);
      v20 = v23 >> 8;
      v21 = HIBYTE(v24);
      v17 = HIWORD(v24);
      v22 = v24 >> 8;
    }
    return swprintf_s(
             a7,
             0x100uLL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\BindPaths\\{%08x-%04x-%04x-%02x%02x"
              "-%02x%02x%02x%02x%02x%02x}\\Properties",
             v12,
             (unsigned __int16)v13,
             v16,
             v24 & 0x1F | 0xC0,
             (unsigned __int8)v22,
             (unsigned __int8)v17,
             v21,
             (unsigned __int8)v23,
             (unsigned __int8)v20,
             (unsigned __int8)v19,
             v18);
  }
  return result;
}
