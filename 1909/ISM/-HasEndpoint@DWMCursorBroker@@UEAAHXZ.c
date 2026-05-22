/*
 * XREFs of ?HasEndpoint@DWMCursorBroker@@UEAAHXZ @ 0x1800297B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::HasEndpoint(DWMCursorBroker *this)
{
  int v1; // eax
  _QWORD *i; // rcx

  v1 = 0;
  for ( i = (_QWORD *)((char *)this + 216); !*i; i += 3 )
  {
    if ( (unsigned int)++v1 >= 0xA )
      return 0LL;
  }
  return 1LL;
}
