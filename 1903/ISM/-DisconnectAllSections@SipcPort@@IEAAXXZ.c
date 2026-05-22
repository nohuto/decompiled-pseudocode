/*
 * XREFs of ?DisconnectAllSections@SipcPort@@IEAAXXZ @ 0x1800D55D4
 * Callers:
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800D5470 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D5C20 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPort::DisconnectAllSections(SipcPort *this)
{
  char *v1; // rsi
  char *i; // rbx
  __int64 v4; // rax

  v1 = (char *)this + 16;
  for ( i = (char *)*((_QWORD *)this + 2); i != v1; i = *(char **)i )
  {
    v4 = (__int64)(i + 48);
    if ( !i )
      v4 = 56LL;
    if ( !*(_BYTE *)v4 )
    {
      *(_BYTE *)v4 = 1;
      if ( ++*((_DWORD *)this + 11) == 1 )
        SetEvent(*((HANDLE *)this + 1));
    }
  }
}
