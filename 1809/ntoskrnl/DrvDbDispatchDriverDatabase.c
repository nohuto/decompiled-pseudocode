/*
 * XREFs of DrvDbDispatchDriverDatabase @ 0x1406D3A20
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetObjectContext @ 0x1406D3C58 (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverDatabaseList @ 0x1406D4B78 (DrvDbGetDriverDatabaseList.c)
 *     DrvDbFindDatabaseNode @ 0x1406D4E18 (DrvDbFindDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140754B2C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140902768 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140904CB0 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbDestroyDatabaseNode @ 0x140904D70 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbDispatchDriverDatabase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r11
  unsigned int v10; // r8d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v18; // r10d
  int v19; // r10d
  int DatabaseNode; // eax
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF

  v22 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, &v22);
  v10 = ObjectContext;
  if ( ObjectContext < 0 )
    return v10;
  v11 = v8 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbValidateDriverDatabaseName(v6, v9, (unsigned int)ObjectContext);
  v12 = v11 - 1;
  if ( !v12 )
  {
    LOBYTE(v7) = *((_BYTE *)a5 + 4);
    return (unsigned int)DrvDbOpenDriverDatabaseRegKey(v22, v9, *(unsigned int *)a5, v7, a5[1], a5 + 2);
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v18 = v15 - 1;
        if ( v18 )
        {
          v19 = v18 - 2;
          if ( v19 )
          {
            if ( v19 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverDatabaseMappedProperty(
                                   v22,
                                   v9,
                                   *a5,
                                   a5[2],
                                   *((_DWORD *)a5 + 6),
                                   a5[4],
                                   *((_DWORD *)a5 + 10));
          }
          else
          {
            return (unsigned int)DrvDbGetDriverDatabaseMappedProperty(
                                   v22,
                                   v9,
                                   *a5,
                                   a5[2],
                                   a5[3],
                                   a5[4],
                                   *((_DWORD *)a5 + 10),
                                   a5[6]);
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverDatabaseMappedPropertyKeys(v22, v9, *a5, a5[3], *((_DWORD *)a5 + 8), a5[5]);
        }
      }
      else
      {
        return (unsigned int)DrvDbGetDriverDatabaseList(v22, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4]);
      }
    }
    else
    {
      v21 = 0LL;
      DatabaseNode = DrvDbFindDatabaseNode(v22, v9, &v21);
      v10 = DatabaseNode;
      if ( DatabaseNode < 0 )
        return v10;
      if ( (*(_DWORD *)(v21 + 56) & 0x10) == 0 )
        return (unsigned int)-1073741790;
      return (unsigned int)DrvDbDestroyDatabaseNode(v22, v21, (unsigned int)DatabaseNode);
    }
  }
  LODWORD(v21) = 0;
  LOBYTE(v7) = 1;
  v10 = DrvDbOpenDriverDatabaseRegKey(v22, v9, *(unsigned int *)a5, v7, a5 + 1, &v21);
  if ( (v10 & 0x80000000) == 0 )
    *((_BYTE *)a5 + 16) = (_DWORD)v21 == 1;
  return v10;
}
