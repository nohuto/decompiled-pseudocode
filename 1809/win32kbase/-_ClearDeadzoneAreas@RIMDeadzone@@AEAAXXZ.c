/*
 * XREFs of ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C012DFBC
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C012DAE0 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C012DD18 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C012DEF4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 i; // rdi
  __int64 v5; // rcx

  *((_DWORD *)this + 10) = 0;
  v1 = *((_DWORD *)this + 4) == 2;
  *(_DWORD *)this = 1;
  *(_QWORD *)((char *)this + 44) = 0LL;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      {
        v3 = *((_QWORD *)this + 3);
        v5 = *(_QWORD *)(v3 + 24 * i + 8);
        if ( v5 )
        {
          Win32FreePool(v5);
          v3 = *((_QWORD *)this + 3);
        }
      }
      Win32FreePool(v3);
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
