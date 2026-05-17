/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x18007DE38
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18007D750 (RtlQueryProcessDebugInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x18007DE00 (RtlDestroyQueryDebugBuffer.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9C80 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenProcess @ 0x1800A07A0 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlpChangeQueryDebugBufferTarget(_QWORD *a1, __int64 a2, int a3, HANDLE *a4)
{
  __int64 v4; // rax
  char *v5; // r14
  __int64 v10; // rcx
  HANDLE v11; // rdx
  _QWORD *v12; // rdi
  char *v13; // r8
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  __int64 result; // rax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // esi
  HANDLE v20; // rdx
  HANDLE Handle[3]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp-11h] BYREF
  int v24; // [rsp+90h] [rbp-1h] BYREF
  __int64 v25; // [rsp+98h] [rbp+7h]
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  int v27; // [rsp+A8h] [rbp+17h]
  __int128 v28; // [rsp+B0h] [rbp+1Fh]
  HANDLE v29; // [rsp+F8h] [rbp+67h] BYREF

  v4 = a1[6];
  v5 = (char *)a1 + a1[11];
  v24 = 48;
  v25 = 0LL;
  v27 = 0;
  v26 = 0LL;
  v28 = 0LL;
  if ( v4 )
  {
    v22[0] = v4;
    v22[1] = 0LL;
    result = NtOpenProcess(Handle, 0x1FFFFFLL, &v24, v22);
    if ( (int)result < 0 )
      return result;
    v10 = (__int64)Handle[0];
  }
  else
  {
    v10 = -1LL;
    Handle[0] = (HANDLE)-1LL;
  }
  if ( a2 )
  {
    v23[0] = a2;
    v23[1] = 0LL;
    v17 = NtOpenProcess(&v29, 0x1FFFFFLL, &v24, v23);
    v10 = (__int64)Handle[0];
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( Handle[0] != (HANDLE)-1LL )
        NtClose(Handle[0]);
      return v18;
    }
    v11 = v29;
  }
  else
  {
    v11 = 0LL;
    v29 = 0LL;
  }
  v12 = a1 + 2;
  if ( v10 == -1 )
  {
    v13 = (char *)a1[11];
    *v12 = &v13[a1[1]];
  }
  else
  {
    if ( *v12 )
    {
      NtUnmapViewOfSection(v10);
      v10 = (__int64)Handle[0];
      *v12 = 0LL;
    }
    NtClose((HANDLE)v10);
    v13 = (char *)a1[11];
    v11 = v29;
  }
  Handle[1] = v13;
  Handle[2] = v13;
  if ( v11 )
  {
    v19 = ZwMapViewOfSection(*a1, v11, a1 + 2);
    if ( v19 == -1073741800 )
    {
      v20 = v29;
      *v12 = 0LL;
      v19 = ZwMapViewOfSection(*a1, v20, a1 + 2);
    }
    if ( v19 < 0 )
    {
      NtClose(v29);
      return (unsigned int)v19;
    }
    if ( a4 )
      *a4 = v29;
    else
      NtClose(v29);
  }
  a1[6] = a2;
  a1[3] = (char *)a1 - *v12;
  if ( a3 == 1 )
  {
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = *(_DWORD *)v12;
    *((_DWORD *)v5 + 2) = *(_DWORD *)v12;
    *((_DWORD *)v5 + 3) = *((_DWORD *)a1 + 6);
    *((_DWORD *)v5 + 4) = *((_DWORD *)a1 + 8);
    *((_DWORD *)v5 + 5) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v5 + 7) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v5 + 8) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v5 + 9) = *((_DWORD *)a1 + 18);
    *((_DWORD *)v5 + 10) = *((_DWORD *)a1 + 20);
    *((_DWORD *)v5 + 11) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v5 + 20) = *((_DWORD *)a1 + 40);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *((_OWORD *)v5 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v5 + 2) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)a1 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)a1 + 4);
    *((_OWORD *)v5 + 5) = *((_OWORD *)a1 + 5);
    *((_OWORD *)v5 + 6) = *((_OWORD *)a1 + 6);
    v14 = *((_OWORD *)a1 + 7);
    v15 = a1 + 16;
    *((_OWORD *)v5 + 7) = v14;
    *((_OWORD *)v5 + 8) = *v15;
    *((_OWORD *)v5 + 9) = v15[1];
    *((_OWORD *)v5 + 10) = v15[2];
    *((_OWORD *)v5 + 11) = v15[3];
    *((_OWORD *)v5 + 12) = v15[4];
    *((_QWORD *)v5 + 1) = *((_QWORD *)v5 + 2);
    *(_QWORD *)v5 = 0LL;
  }
  return 0LL;
}
