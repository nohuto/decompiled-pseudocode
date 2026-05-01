/*
 * XREFs of ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180010C0C
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180010ACC (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180010CEC (-HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180010D0C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180036040 (CemRcTableFindOrInsertEx.c)
 *     ?HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z @ 0x180040EB8 (-HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        union _RM_SID *a2,
        unsigned int a3,
        struct _HAM_USER **a4)
{
  struct _HAM_USER *v5; // rbx
  int v7; // eax
  struct _HAM_SESSION *v8; // rsi
  unsigned int v9; // edi
  struct _HAM_SESSION *v10; // rax
  int v12; // eax
  struct _HAM_USER *v13; // [rsp+30h] [rbp-18h] BYREF
  struct _HAM_SESSION *v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v7 = HampSessionFindOrCreate(a1, a3, &v14);
  v8 = v14;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = HampUserFindInSession(v14, a2);
    if ( v10 )
      goto LABEL_3;
    v12 = HampUserCreate(v8, a2, &v13);
    v5 = v13;
    v9 = v12;
    if ( v12 >= 0 )
    {
      CemRcTableFindOrInsertEx((_DWORD)v8 + 40, (_DWORD)a2, (unsigned int)HampUserCompareByIdentity, (_DWORD)v13);
      v10 = v14;
      if ( v14 == v5 )
      {
        *a4 = v5;
        v5 = 0LL;
        goto LABEL_4;
      }
LABEL_3:
      *a4 = v10;
LABEL_4:
      v9 = 0;
    }
  }
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v5 )
    CemRcObjectDereference(v5);
  return v9;
}
