/*
 * XREFs of ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C01D38AC
 * Callers:
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C01D4258 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 * Callees:
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C002EC00 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

int __fastcall GenerateUmdFileName(unsigned __int16 *const a1, const unsigned __int16 *a2, size_t *a3)
{
  size_t *NtSystemRoot; // rax
  __int64 v6; // rdx
  int result; // eax
  __int64 v8; // rdx
  unsigned __int16 *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  char *v14; // r8
  unsigned __int16 v15; // r9
  unsigned __int16 *v16; // rax
  __int64 v17; // rdx

  RtlStringCbCopyW(a1, 0x208uLL, (size_t *)L"\\??\\");
  NtSystemRoot = (size_t *)RtlGetNtSystemRoot();
  result = RtlStringCbCatW(a1, v6, NtSystemRoot);
  if ( result >= 0 )
  {
    v8 = 260LL;
    v9 = a1;
    v10 = 260LL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    v11 = -1073741811;
    if ( v10 )
    {
      v12 = &a1[260 - v10];
      v8 = v10;
      v13 = 2147483646LL;
      v14 = (char *)((char *)L"\\System32\\" - (char *)v12);
      do
      {
        if ( !v13 )
          break;
        v15 = *(unsigned __int16 *)((char *)v12 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v12 = v15;
        --v13;
        ++v12;
        --v8;
      }
      while ( v8 );
      v16 = v12 - 1;
      if ( v8 )
        v16 = v12;
      v11 = -2147483643;
      if ( v8 )
        v11 = 0;
      *v16 = 0;
    }
    if ( v11 < 0 )
    {
      return v11;
    }
    else
    {
      result = RtlStringCbCatW(a1, v8, (size_t *)L"HostDriverStore");
      if ( result >= 0 )
        return RtlStringCbCatW(a1, v17, a3);
    }
  }
  return result;
}
