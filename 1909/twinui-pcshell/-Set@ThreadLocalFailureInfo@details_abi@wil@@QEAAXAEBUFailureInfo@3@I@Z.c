/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180016560
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180016350 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18001688C (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18001694C (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180016978 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char *v3; // r14
  char *v4; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  SIZE_T v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  HANDLE ProcessHeap; // rax
  LPVOID v18; // rbp
  HANDLE v19; // rax

  *((_DWORD *)this + 1) = a3;
  v3 = (char *)this + 16;
  v4 = (char *)this + 32;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 28);
  *((_BYTE *)this + 26) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 16);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 7) = 0LL;
  v7 = *((_QWORD *)a2 + 2);
  if ( v7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(v7 + 2 * v16) );
  }
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), (const char *)a2);
  v11 = wil::details::ResultStringSize(*(wil::details **)(v9 + 120), (const char *)v9) + v10 + v8;
  if ( !*((_QWORD *)this + 8) || *((_QWORD *)this + 9) < v11 )
  {
    ProcessHeap = GetProcessHeap();
    v18 = HeapAlloc(ProcessHeap, 8u, v11);
    if ( v18 )
    {
      v19 = GetProcessHeap();
      HeapFree(v19, 0, *((LPVOID *)this + 8));
      *((_QWORD *)this + 8) = v18;
      *((_QWORD *)this + 9) = v11;
    }
  }
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
  {
    v13 = v12 + *((_QWORD *)this + 9);
    v14 = wil::details::WriteResultString<char const *>(v12, v13, *((_QWORD *)a2 + 6), v3);
    v15 = (void *)wil::details::WriteResultString<char const *>(v14, v13, *((_QWORD *)a2 + 15), v4);
    wil::details::WriteResultString<unsigned short const *>(v15);
  }
}
