/*
 * XREFs of NtGdiStartDoc @ 0x1C00E25D0
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x1C00E2AA4 (ULongLongMult.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00E2D90 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rdi
  unsigned int started; // r12d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  ULONGLONG v9; // r15
  unsigned __int64 v10; // rdx
  ULONGLONG v11; // rcx
  __int64 v12; // r9
  const WCHAR *v13; // rax
  ULONGLONG v14; // rdi
  const void *v15; // rdx
  LPCWSTR lpszDocName; // rsi
  unsigned __int64 v17; // rdx
  ULONGLONG v18; // rcx
  ULONGLONG v19; // r9
  const WCHAR *v20; // rax
  ULONGLONG v21; // rdi
  LPCWSTR lpszOutput; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  const WCHAR *v25; // rax
  ULONGLONG v26; // rdi
  LPCWSTR lpszDatatype; // rsi
  int v29; // [rsp+20h] [rbp-88h]
  int v30; // [rsp+24h] [rbp-84h] BYREF
  int v31; // [rsp+28h] [rbp-80h]
  ULONGLONG pullResult; // [rsp+30h] [rbp-78h] BYREF
  ULONGLONG v33; // [rsp+38h] [rbp-70h]
  _DOCINFOW v34; // [rsp+40h] [rbp-68h] BYREF

  v4 = a3;
  started = 0;
  v30 = 0;
  v29 = 1;
  v34.cbSize = 0;
  memset(&v34.lpszDocName, 0, 24);
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v31 = *(_DWORD *)a2;
    v34.cbSize = v31;
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 24);
    if ( v6 )
    {
      if ( (v6 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 + 2 > MmUserProbeAddress || v6 + 2 < v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v9 = -1LL;
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(v6 + 2 * v10) );
      v11 = -1LL;
      if ( v10 + 1 >= v10 )
        v11 = v10 + 1;
      v33 = v11;
      if ( v10 + 1 >= v10 && ULongLongMult(v11, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
      {
        if ( (_DWORD)pullResult )
          v13 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL, v12);
        else
          v13 = 0LL;
        v34.lpszDocName = v13;
      }
      if ( v34.lpszDocName )
      {
        if ( pullResult && (pullResult + v6 > MmUserProbeAddress || pullResult + v6 < v6) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v14 = pullResult;
        v15 = (const void *)v6;
        lpszDocName = v34.lpszDocName;
        memmove((void *)v34.lpszDocName, v15, pullResult);
        if ( v14 >= 2 )
          lpszDocName[(v14 >> 1) - 1] = 0;
      }
      else
      {
        v29 = 0;
      }
    }
    else
    {
      v9 = -1LL;
    }
    if ( v7 )
    {
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + 2 > MmUserProbeAddress || v7 + 2 < v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(v7 + 2 * v17) );
      v18 = -1LL;
      if ( v17 + 1 >= v17 )
        v18 = v17 + 1;
      v33 = v18;
      if ( v17 + 1 >= v17 && ULongLongMult(v18, 2uLL, &pullResult) >= 0 && pullResult <= v19 )
      {
        if ( (_DWORD)pullResult )
          v20 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL, v19);
        else
          v20 = 0LL;
        v34.lpszOutput = v20;
      }
      if ( v34.lpszOutput )
      {
        if ( pullResult && (pullResult + v7 > MmUserProbeAddress || pullResult + v7 < v7) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v21 = pullResult;
        lpszOutput = v34.lpszOutput;
        memmove((void *)v34.lpszOutput, (const void *)v7, pullResult);
        if ( v21 >= 2 )
          lpszOutput[(v21 >> 1) - 1] = 0;
      }
      else
      {
        v29 = 0;
      }
    }
    if ( (unsigned __int64)v31 >= 0x28 && v8 )
    {
      if ( (v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + 2 > MmUserProbeAddress || v8 + 2 < v8 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v23 = -1LL;
      do
        ++v23;
      while ( *(_WORD *)(v8 + 2 * v23) );
      if ( v23 + 1 >= v23 )
        v9 = v23 + 1;
      v33 = v9;
      if ( v23 + 1 >= v23 && ULongLongMult(v9, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
      {
        if ( pullResult && (pullResult + v8 > MmUserProbeAddress || pullResult + v8 < v8) )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( (_DWORD)pullResult )
          v25 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL, v24);
        else
          v25 = 0LL;
        v34.lpszDatatype = v25;
      }
      if ( v34.lpszDatatype )
      {
        v26 = pullResult;
        lpszDatatype = v34.lpszDatatype;
        memmove((void *)v34.lpszDatatype, (const void *)v8, pullResult);
        if ( v26 >= 2 )
          lpszDatatype[(v26 >> 1) - 1] = 0;
      }
      else
      {
        v29 = 0;
      }
      v4 = a3;
    }
    else
    {
      v4 = a3;
    }
  }
  if ( v29 )
  {
    started = GreStartDocInternal(a1, &v34, &v30, a4);
    if ( started )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v30;
    }
  }
  if ( v34.lpszDocName )
    FreeThreadBufferWithTag(v34.lpszDocName);
  if ( v34.lpszOutput )
    FreeThreadBufferWithTag(v34.lpszOutput);
  if ( v34.lpszDatatype )
    FreeThreadBufferWithTag(v34.lpszDatatype);
  return started;
}
