/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0005BB8
 * Callers:
 *     Display_LPI @ 0x1C0007E48 (Display_LPI.c)
 *     AcpiParseLpiObject @ 0x1C00257C0 (AcpiParseLpiObject.c)
 *     LpiEnumerateDependencies @ 0x1C002E444 (LpiEnumerateDependencies.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+80h] [rbp+8h]
  unsigned int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v18 = a1;
  v6 = L"NULL";
  v7 = (unsigned __int64)(unsigned int)a3 >> 16;
  v8 = -1LL;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((unsigned int)(a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = L"NULL";
    if ( a6 )
      v14 = a6;
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7), 43LL, a5, a4, v14, v13, 0LL);
    a3 = v19;
    a1 = v18;
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v15 = a6 == 0LL;
  }
  if ( !v15 )
    v6 = a6;
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v17, v6);
}
