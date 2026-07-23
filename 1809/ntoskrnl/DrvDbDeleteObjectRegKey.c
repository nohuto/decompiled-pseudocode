/*
 * XREFs of DrvDbDeleteObjectRegKey @ 0x14090200C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406D3910 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverPackage @ 0x1406D3B40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDeviceId @ 0x1406F62C0 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x140905270 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D40D8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406D4264 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406D42FC (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 */

__int64 __fastcall DrvDbDeleteObjectRegKey(__int64 *a1, int a2, wchar_t *a3, unsigned int a4)
{
  char v7; // r12
  int ObjectDatabaseNode; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // ebx
  int v12; // eax
  __int64 *i; // r14
  int v14; // eax
  __int64 v15; // r8
  void *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  wchar_t *v19; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+58h]

  v20 = a4;
  v19 = a3;
  v17 = 0LL;
  v18 = 0LL;
  v7 = 0;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode((__int64)a1, a3, &v19, &v18);
  v10 = v18;
  v11 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v18 )
    {
      v12 = DrvDbAcquireDatabaseNodeBaseKey(a1, v18, a2, &v17);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v11 = DrvDbDeleteObjectSubKey(a1, v17, v19, a4);
      }
      else if ( v12 == -1073740697 )
      {
        v11 = -1073741662;
      }
    }
    else
    {
      for ( i = (__int64 *)a1[2]; i != a1 + 2; i = (__int64 *)*i )
      {
        v10 = (__int64)i;
        v14 = DrvDbAcquireDatabaseNodeBaseKey(a1, (__int64)i, a2, &v17);
        v11 = v14;
        if ( v14 == -1073740697 )
        {
          v11 = -1073741662;
        }
        else
        {
          if ( v14 < 0 )
            break;
          v11 = DrvDbDeleteObjectSubKey(a1, v17, v19, v20);
          DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, (__int64)i, v15, v17);
          v17 = 0LL;
          if ( v11 < 0 )
          {
            if ( v11 != -1073741772 )
              goto LABEL_17;
          }
          else
          {
            v7 = 1;
          }
        }
      }
      if ( v11 == -1073741772 )
        goto LABEL_18;
LABEL_17:
      if ( v11 != -1073741662 )
        goto LABEL_20;
LABEL_18:
      if ( v7 )
        v11 = 0;
    }
  }
LABEL_20:
  if ( v17 )
    DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, v10, v9, v17);
  return (unsigned int)v11;
}
