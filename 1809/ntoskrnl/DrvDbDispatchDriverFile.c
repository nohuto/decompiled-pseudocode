/*
 * XREFs of DrvDbDispatchDriverFile @ 0x140905270
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetObjectContext @ 0x1406D3C58 (_PnpCtxGetObjectContext.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x14090200C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140902A7C (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140902BAC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x140903200 (DrvDbGetObjectList.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140904364 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x140904D14 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverFile(__int64 a1, wchar_t *a2, int a3, __int64 a4, int *a5)
{
  signed int ObjectContext; // r8d
  int v7; // r10d
  __int64 *v8; // r11
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v18; // ecx
  __int64 *v20[3]; // [rsp+40h] [rbp-18h] BYREF

  v20[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v20);
  if ( ObjectContext < 0 )
    return (unsigned int)ObjectContext;
  v8 = v20[0];
  v9 = *((unsigned int *)v20[0] + 3);
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v9 )
      return (unsigned int)-1073740697;
    if ( v7 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_13:
        v9 = (unsigned int)v9 >> 30;
        LOBYTE(v9) = v9 & 1;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v7 <= 2 )
      {
LABEL_11:
        LOBYTE(v9) = 1;
        goto LABEL_15;
      }
      if ( v7 <= 4 )
        goto LABEL_13;
      if ( v7 > 6 && v7 != 8 )
      {
        if ( v7 != 9 )
          goto LABEL_11;
        goto LABEL_13;
      }
    }
    v9 = (unsigned int)v9 >> 31;
LABEL_15:
    ObjectContext = (_BYTE)v9 == 0 ? 0xC0000022 : 0;
    if ( !(_BYTE)v9 )
      return (unsigned int)ObjectContext;
  }
  v10 = v7 - 1;
  if ( !v10 )
    return (unsigned int)DrvDbValidateDriverInfFileName(v9, a2);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbOpenObjectRegKey(
                           v20[0],
                           0LL,
                           4u,
                           a2,
                           *a5,
                           *((_BYTE *)a5 + 4),
                           *((_QWORD *)a5 + 1),
                           a5 + 4);
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverFileMappedProperty(
                                   v20[0],
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_QWORD *)a5 + 4),
                                   a5[10]);
          }
          else
          {
            return (unsigned int)DrvDbGetDriverFileMappedProperty(
                                   v20[0],
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *((_QWORD *)a5 + 2),
                                   *((_DWORD **)a5 + 3),
                                   *((_WORD **)a5 + 4),
                                   a5[10],
                                   *((_DWORD **)a5 + 6));
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverFileMappedPropertyKeys(
                                 v20[0],
                                 (__int64)a2,
                                 *(void **)a5,
                                 *((_QWORD *)a5 + 3),
                                 a5[8],
                                 *((_QWORD *)a5 + 5));
        }
      }
      else
      {
        return (unsigned int)DrvDbGetObjectList(
                               v20[0],
                               4,
                               *(_QWORD *)a5,
                               *((_QWORD *)a5 + 1),
                               *((_QWORD *)a5 + 2),
                               a5[6],
                               *((unsigned int **)a5 + 4),
                               0);
      }
    }
    else
    {
      return (unsigned int)DrvDbDeleteObjectRegKey(v20[0], 4, a2, 0);
    }
  }
  v18 = *a5;
  LODWORD(v20[0]) = 0;
  ObjectContext = DrvDbOpenObjectRegKey(v8, 0LL, 4u, a2, v18, 1, a5 + 2, v20);
  if ( ObjectContext >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v20[0]) == 1;
  return (unsigned int)ObjectContext;
}
