/*
 * XREFs of ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00DF2DC
 * Callers:
 *     NtUserProcessConnect @ 0x1C00DEEF0 (NtUserProcessConnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitMapSharedSection(struct _EPROCESS *a1, struct _USERCONNECT *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp-8h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process && *(_QWORD *)(ProcessWin32Process + 736) )
  {
    v15 = *(_QWORD *)(PsGetProcessWin32Process(a1) + 736);
    v8 = *(_QWORD *)(PsGetProcessWin32Process(a1) + 744);
    v14 = v8;
  }
  else
  {
    v13 = 0LL;
    v12 = 0x200000LL;
    result = MmMapViewOfSection(ghSectionShared, a1, &v15, 0LL, 0LL, &v13, &v12, 2, 0x400000, 2);
    if ( (int)result < 0 )
      return result;
    v12 = 0LL;
    v13 = 2101248LL;
    v6 = MmMapViewOfSection(ghSectionShared, a1, &v14, 0LL, 0LL, &v13, &v12, 2, 0x400000, 2);
    if ( v6 < 0 )
    {
      MmUnmapViewOfSection(a1, v15);
      return (unsigned int)v6;
    }
    v7 = PsGetProcessWin32Process(a1);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 736) = v15;
      *(_QWORD *)(v7 + 744) = v14;
    }
    v8 = v14;
  }
  *((_QWORD *)a2 + 5) = v8;
  v9 = 31LL;
  *((_QWORD *)a2 + 1) = v8 + gSharedInfo[0] - gpvSharedAlloc;
  *((_QWORD *)a2 + 2) = v15 + gSharedInfo[1] - gpvSharedBase;
  *((_DWORD *)a2 + 6) = gSharedInfo[2];
  *((_QWORD *)a2 + 4) = v8 + gSharedInfo[3] - gpvSharedAlloc;
  *((_DWORD *)a2 + 136) = gSharedInfo[67];
  *((_QWORD *)a2 + 69) = v8 + gSharedInfo[68] - gpvSharedAlloc;
  *((_DWORD *)a2 + 140) = gSharedInfo[69];
  v10 = (_QWORD *)((char *)a2 + 56);
  *((_QWORD *)a2 + 71) = v8 + gSharedInfo[70] - gpvSharedAlloc;
  do
  {
    *((_DWORD *)v10 - 2) = *(_DWORD *)((char *)v10 + gSharedInfo[0] - (_QWORD)a2 - 16);
    v11 = *(_QWORD *)((char *)v10 + gSharedInfo[0] - (_QWORD)a2 - 8);
    if ( v11 )
      v11 = v8 + v11 - gpvSharedAlloc;
    *v10 = v11;
    v10 += 2;
    --v9;
  }
  while ( v9 );
  return 0LL;
}
