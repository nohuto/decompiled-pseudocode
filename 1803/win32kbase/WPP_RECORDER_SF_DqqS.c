/*
 * XREFs of WPP_RECORDER_SF_DqqS @ 0x1C00FBC30
 * Callers:
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DqqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  int v17; // [rsp+20h] [rbp-68h]

  v9 = (__int64)a9;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a9;
    if ( !a9 )
      v15 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const ULONG_PTR *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v15,
      2 * v14,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_WORD *)(v9 + 2 * v10) );
  }
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 3LL, 21LL, &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids, v17, &a6);
}
