/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180003E2C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800045B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180015108 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800151C8 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v3; // esi
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rax
  _WORD *v8; // rax
  _WORD *v9; // rdi
  _DWORD *v10; // rcx
  _DWORD *v11; // r8
  __int64 v12; // r8
  unsigned __int16 v13; // dx
  __int64 v14; // rsi
  _WORD *v15; // r15
  _WORD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  SIZE_T v25; // rbx
  HANDLE v26; // rax
  LPVOID v27; // rbp
  HANDLE v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  void *v32; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_8;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    *((_QWORD *)this + 3) = v7;
    v2 = v7;
    if ( v7 )
    {
      v8 = v7 + 200;
      *((_DWORD *)this + 8) = 5;
      if ( v2 != v8 )
      {
        do
        {
          *v2 = 80;
          v2 += 40;
        }
        while ( v2 != v8 );
        v2 = (_WORD *)*((_QWORD *)this + 3);
      }
      if ( v2 )
      {
LABEL_8:
        v9 = v2;
        if ( !v3 || (v10 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v10) )
        {
LABEL_15:
          v12 = 1LL;
          v13 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
          *((_WORD *)this + 17) = v13;
          v14 = 10LL * v13;
          v15 = &v9[40 * v13];
          *((_DWORD *)v15 + 1) = _InterlockedIncrement(*((volatile signed __int32 **)this + 1));
          v16 = v15;
          *((_DWORD *)v15 + 2) = *((_DWORD *)a2 + 1);
          v17 = -1LL;
          *((_QWORD *)v15 + 2) = 0LL;
          v15[12] = *((_WORD *)a2 + 28);
          *((_BYTE *)v15 + 26) = *(_BYTE *)a2;
          *((_QWORD *)v16 + 4) = 0LL;
          *((_QWORD *)v15 + 5) = *((_QWORD *)a2 + 16);
          *((_QWORD *)v15 + 6) = *((_QWORD *)a2 + 17);
          *((_QWORD *)v16 + 7) = 0LL;
          v18 = *((_QWORD *)a2 + 6);
          if ( v18 )
          {
            v20 = -1LL;
            do
              ++v20;
            while ( *(_BYTE *)(v18 + v20) );
            v19 = v20 + 1;
          }
          else
          {
            v19 = 1LL;
          }
          v21 = *((_QWORD *)a2 + 15);
          if ( v21 )
          {
            v22 = -1LL;
            do
              ++v22;
            while ( *(_BYTE *)(v21 + v22) );
            v12 = v22 + 1;
          }
          v23 = *((_QWORD *)a2 + 2);
          if ( v23 )
          {
            do
              ++v17;
            while ( *(_WORD *)(v23 + 2 * v17) );
            v24 = 2 * v17 + 2;
          }
          else
          {
            v24 = 2LL;
          }
          v25 = v19 + v24 + v12;
          if ( !*(_QWORD *)&v9[4 * v14 + 32] || *(_QWORD *)&v9[4 * v14 + 36] < v25 )
          {
            v26 = GetProcessHeap();
            v27 = HeapAlloc(v26, 8u, v25);
            if ( v27 )
            {
              v28 = GetProcessHeap();
              HeapFree(v28, 0, *(LPVOID *)&v9[4 * v14 + 32]);
              *(_QWORD *)&v9[4 * v14 + 32] = v27;
              *(_QWORD *)&v9[4 * v14 + 36] = v25;
            }
          }
          v29 = *(_QWORD *)&v9[4 * v14 + 32];
          if ( v29 )
          {
            v30 = v29 + *(_QWORD *)&v9[4 * v14 + 36];
            v31 = wil::details::WriteResultString<char const *>(v29, v30, *((_QWORD *)a2 + 6), v15 + 8);
            v32 = (void *)wil::details::WriteResultString<char const *>(v31, v30, *((_QWORD *)a2 + 15), v16 + 16);
            wil::details::WriteResultString<unsigned short const *>(v32);
          }
        }
        else
        {
          v11 = v2 + 4;
          while ( *(v11 - 1) <= *((_DWORD *)this + 4) || *v11 != *((_DWORD *)a2 + 1) )
          {
            v11 += 20;
            if ( v11 - 2 == v10 )
            {
              v9 = (_WORD *)*((_QWORD *)this + 3);
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
}
