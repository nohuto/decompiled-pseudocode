/*
 * XREFs of NtGdiStartDoc @ 0x1C00F7C50
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x1C00F8110 (ULongLongMult.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00F8214 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rdi
  unsigned int started; // r12d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  const WCHAR *v11; // rax
  ULONGLONG v12; // rdi
  const void *v13; // rdx
  LPCWSTR lpszDocName; // rsi
  unsigned __int64 v15; // rax
  ULONGLONG v16; // r9
  const WCHAR *v17; // rax
  ULONGLONG v18; // rdi
  LPCWSTR lpszOutput; // rsi
  const WCHAR *v20; // rax
  ULONGLONG v21; // rdi
  LPCWSTR lpszDatatype; // rsi
  int v24; // [rsp+20h] [rbp-88h]
  int v25; // [rsp+24h] [rbp-84h] BYREF
  int v26; // [rsp+28h] [rbp-80h]
  ULONGLONG pullResult; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-70h]
  _DOCINFOW v29; // [rsp+40h] [rbp-68h] BYREF

  v4 = a3;
  started = 0;
  v25 = 0;
  memset(&v29, 0, sizeof(v29));
  v24 = 1;
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = *(_DWORD *)a2;
    v29.cbSize = v26;
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
      if ( v10 + 1 >= v10 )
      {
        v28 = v10 + 1;
        if ( ULongLongMult(v10 + 1, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( (_DWORD)pullResult )
            v11 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v11 = 0LL;
          v29.lpszDocName = v11;
        }
      }
      if ( v29.lpszDocName )
      {
        if ( pullResult && (pullResult + v6 > MmUserProbeAddress || pullResult + v6 < v6) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v12 = pullResult;
        v13 = (const void *)v6;
        lpszDocName = v29.lpszDocName;
        memmove((void *)v29.lpszDocName, v13, pullResult);
        if ( v12 >= 2 )
          lpszDocName[(v12 >> 1) - 1] = 0;
      }
      else
      {
        v24 = 0;
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
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v7 + 2 * v15) );
      if ( v15 + 1 >= v15 )
      {
        v28 = v15 + 1;
        if ( ULongLongMult(v15 + 1, 2uLL, &pullResult) >= 0 && pullResult <= v16 )
        {
          if ( (_DWORD)pullResult )
            v17 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v17 = 0LL;
          v29.lpszOutput = v17;
        }
      }
      if ( v29.lpszOutput )
      {
        if ( pullResult && (pullResult + v7 > MmUserProbeAddress || pullResult + v7 < v7) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v18 = pullResult;
        lpszOutput = v29.lpszOutput;
        memmove((void *)v29.lpszOutput, (const void *)v7, pullResult);
        if ( v18 >= 2 )
          lpszOutput[(v18 >> 1) - 1] = 0;
      }
      else
      {
        v24 = 0;
      }
    }
    if ( (unsigned __int64)v26 >= 0x28 && v8 )
    {
      if ( (v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + 2 > MmUserProbeAddress || v8 + 2 < v8 )
        *(_BYTE *)MmUserProbeAddress = 0;
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
      if ( v9 + 1 >= v9 )
      {
        v28 = v9 + 1;
        if ( ULongLongMult(v9 + 1, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( pullResult && (pullResult + v8 > MmUserProbeAddress || pullResult + v8 < v8) )
            *(_BYTE *)MmUserProbeAddress = 0;
          if ( (_DWORD)pullResult )
            v20 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v20 = 0LL;
          v29.lpszDatatype = v20;
        }
      }
      if ( v29.lpszDatatype )
      {
        v21 = pullResult;
        lpszDatatype = v29.lpszDatatype;
        memmove((void *)v29.lpszDatatype, (const void *)v8, pullResult);
        if ( v21 >= 2 )
          lpszDatatype[(v21 >> 1) - 1] = 0;
      }
      else
      {
        v24 = 0;
      }
      v4 = a3;
    }
    else
    {
      v4 = a3;
    }
  }
  if ( v24 )
  {
    started = GreStartDocInternal(a1, &v29, &v25, a4);
    if ( started )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v25;
    }
  }
  if ( v29.lpszDocName )
    FreeThreadBufferWithTag(v29.lpszDocName);
  if ( v29.lpszOutput )
    FreeThreadBufferWithTag(v29.lpszOutput);
  if ( v29.lpszDatatype )
    FreeThreadBufferWithTag(v29.lpszDatatype);
  return started;
}
