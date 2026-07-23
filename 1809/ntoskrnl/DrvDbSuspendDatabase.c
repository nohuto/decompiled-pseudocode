/*
 * XREFs of DrvDbSuspendDatabase @ 0x14073BBA4
 * Callers:
 *     PiDrvDbSuspendNodes @ 0x14073BB44 (PiDrvDbSuspendNodes.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     DrvDbFindDatabaseNode @ 0x1406D4E18 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbSuspendDatabase(__int64 a1, const WCHAR *a2, char a3)
{
  __int64 v3; // rsi
  int DatabaseNode; // edi
  __int64 *i; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  const UNICODE_STRING *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = PiDrvDbCtx;
  DatabaseNode = 0;
  v11 = 0LL;
  if ( a2 && wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode(v3, a2, &v11);
    if ( DatabaseNode >= 0 )
    {
      if ( a3 )
        LODWORD(v11[3].Buffer) |= 4u;
      else
        LODWORD(v11[3].Buffer) &= ~4u;
    }
  }
  else
  {
    for ( i = *(__int64 **)(v3 + 16); i != (__int64 *)(v3 + 16); i = (__int64 *)*i )
    {
      v9 = *((_DWORD *)i + 14);
      if ( a3 )
        v10 = v9 | 4;
      else
        v10 = v9 & 0xFFFFFFFB;
      *((_DWORD *)i + 14) = v10;
    }
  }
  return (unsigned int)DatabaseNode;
}
