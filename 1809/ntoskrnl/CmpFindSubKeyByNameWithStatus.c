/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x14073D0FC
 * Callers:
 *     CmpFindPathByNameEx @ 0x140580574 (CmpFindPathByNameEx.c)
 *     CmpMarkCurrentValueDirty @ 0x1407367B4 (CmpMarkCurrentValueDirty.c)
 *     CmpFindSubKeyByName @ 0x14073D0DC (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x14073D2BC (CmpFindControlSet.c)
 *     CmpWalkUnicodeStringPath @ 0x14073D6CC (CmpWalkUnicodeStringPath.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmpCopySyncTree2 @ 0x1407FCC04 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1407FE948 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyInRoot @ 0x1405D4F64 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D5370 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14073D210 (CmpFindSubKeyByHashWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(__int64 a1, __int64 a2, unsigned __int16 *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v9; // ebx
  __int16 *v10; // rax
  unsigned int SubKeyByHashWithStatus; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+48h] BYREF

  v13[0] = -1;
  *a4 = -1;
  v4 = 0LL;
  v9 = -1073741772;
  v13[1] = 0;
  if ( *(_DWORD *)(a1 + 208) )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a2 + 4 * v4 + 20) )
        goto LABEL_15;
      v10 = (__int16 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                         a1,
                         *(unsigned int *)(a2 + 4 * v4 + 28),
                         v13);
      if ( !v10 )
        return (unsigned int)-1073741670;
      if ( *v10 != 26994 )
        goto LABEL_5;
      if ( (int)CmpFindSubKeyInRoot(a1, (__int64)v10, (__int64)a3, 0, &v14) < 0 )
      {
        v9 = -1073741670;
        goto LABEL_10;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
      if ( v14 != -1 )
        break;
LABEL_15:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 208) )
        return v9;
    }
    v10 = (__int16 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v14, v13);
    if ( !v10 )
      return (unsigned int)-1073741670;
LABEL_5:
    if ( *v10 == 26732 )
      SubKeyByHashWithStatus = CmpFindSubKeyByHashWithStatus(a1, v10, a3, &v14);
    else
      SubKeyByHashWithStatus = CmpFindSubKeyInLeafWithStatus(a1, v10, a3, 0LL, &v14, &v15);
    v9 = SubKeyByHashWithStatus;
    if ( (int)(SubKeyByHashWithStatus + 0x80000000) >= 0 && SubKeyByHashWithStatus != -1073741772 )
      goto LABEL_10;
    if ( v14 != -1 )
    {
      *a4 = v14;
      v9 = 0;
LABEL_10:
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
      return v9;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
    goto LABEL_15;
  }
  return v9;
}
