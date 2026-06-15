/*
 * XREFs of ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800AE13C
 * Callers:
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1800AE5A0 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800AF610 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 * Callees:
 *     _vsnprintf_s @ 0x180061744 (_vsnprintf_s.c)
 */

__int64 wil::details::StringCchPrintfA(wil::details *this, char *a2, const char *a3, const char *a4, ...)
{
  int v4; // edi
  char *v6; // rbx
  int v7; // eax
  const char *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *(_BYTE *)this = 0;
  }
  else
  {
    v6 = a2 - 1;
    v4 = 0;
    v7 = vsnprintf_s((char *const)this, (const size_t)a2, (const size_t)(a2 - 1), a3, (va_list)&v9);
    if ( v7 < 0 || v7 > (unsigned __int64)v6 )
    {
      *((_BYTE *)this + (_QWORD)v6) = 0;
      return (unsigned int)-2147024774;
    }
    else if ( (char *)v7 == v6 )
    {
      *((_BYTE *)this + (_QWORD)v6) = 0;
    }
  }
  return (unsigned int)v4;
}
