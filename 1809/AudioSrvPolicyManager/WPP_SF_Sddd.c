/*
 * XREFs of WPP_SF_Sddd @ 0x18001B450
 * Callers:
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180020560 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sddd(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  __int64 v9; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v11; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids,
           0x30u,
           v7,
           v6,
           va,
           4LL,
           va1,
           4LL,
           va2,
           4LL,
           0LL);
}
