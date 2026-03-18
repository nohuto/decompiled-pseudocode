/*
 * XREFs of DrvChangeD3RequestsState @ 0x1C00D36C4
 * Callers:
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvChangeD3RequestsState(char a1, __int64 a2)
{
  wchar_t *i; // rbx

  if ( !gProtocolType )
  {
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
      {
        LOBYTE(a2) = a1;
        ((void (__fastcall *)(_QWORD, __int64))qword_1C01A1EF0)(*((_QWORD *)i + 30), a2);
      }
    }
  }
  return 0LL;
}
