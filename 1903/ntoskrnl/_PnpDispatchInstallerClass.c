/*
 * XREFs of _PnpDispatchInstallerClass @ 0x140700900
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140088114 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmOpenInstallerClassRegKey @ 0x1405BD0C4 (_CmOpenInstallerClassRegKey.c)
 *     _CmValidateInstallerClassName @ 0x1405BD10C (_CmValidateInstallerClassName.c)
 *     _CmGetInstallerClassMappedProperty @ 0x140700A4C (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetMatchingCommonClassList @ 0x140767FAC (_CmGetMatchingCommonClassList.c)
 *     _CmCreateInstallerClass @ 0x140933D44 (_CmCreateInstallerClass.c)
 *     _CmDeleteInstallerClass @ 0x1409358A8 (_CmDeleteInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14093CB54 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyLocales @ 0x14093CF04 (_CmGetInstallerClassMappedPropertyLocales.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14093D87C (_CmSetInstallerClassMappedProperty.c)
 */

__int64 __fastcall PnpDispatchInstallerClass(__int64 a1, const WCHAR *a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(); // r8
  __int64 *v6; // rbx
  int v7; // r9d
  __int64 v8; // r9
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int InstallerClassMappedProperty; // eax
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-10h]

  LODWORD(v5) = 0;
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v6) = 0;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    InstallerClassMappedProperty = CmSetInstallerClassMappedProperty(
                                                     a1,
                                                     (_DWORD)a2,
                                                     a5[2],
                                                     *((_DWORD *)a5 + 6),
                                                     a5[4],
                                                     *((_DWORD *)a5 + 10));
                  else
                    InstallerClassMappedProperty = -1073741811;
                }
                else
                {
                  InstallerClassMappedProperty = CmGetInstallerClassMappedProperty(
                                                   a1,
                                                   (_DWORD)a2,
                                                   *a5,
                                                   a5[1],
                                                   a5[2],
                                                   a5[3],
                                                   a5[4],
                                                   *((_DWORD *)a5 + 10),
                                                   a5[6]);
                }
              }
              else
              {
                InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyLocales(
                                                 a1,
                                                 (_DWORD)a2,
                                                 0,
                                                 a5[1],
                                                 a5[2],
                                                 *((_DWORD *)a5 + 6),
                                                 a5[4]);
              }
            }
            else
            {
              InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyKeys(
                                               a1,
                                               (_DWORD)a2,
                                               *a5,
                                               0,
                                               a5[3],
                                               *((_DWORD *)a5 + 8),
                                               a5[5]);
            }
          }
          else
          {
            if ( *a5 )
            {
              v17 = *a5;
              v5 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              v18 = a5[1];
            }
            InstallerClassMappedProperty = CmGetMatchingCommonClassList(
                                             a1,
                                             2,
                                             (_DWORD)v5,
                                             (_DWORD)v6,
                                             a5[2],
                                             *((_DWORD *)a5 + 6),
                                             a5[4],
                                             (_DWORD)a5[5] & 0xFFFF0000);
          }
        }
        else
        {
          InstallerClassMappedProperty = CmDeleteInstallerClass(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        InstallerClassMappedProperty = CmCreateInstallerClass(
                                         a1,
                                         (_DWORD)a2,
                                         *(_DWORD *)a5,
                                         (int)a5 + 8,
                                         (__int64)(a5 + 2),
                                         *((_DWORD *)a5 + 5) & 0xFFFF0000);
      }
    }
    else
    {
      InstallerClassMappedProperty = CmOpenInstallerClassRegKey(
                                       a1,
                                       (int)a2,
                                       0LL,
                                       v8,
                                       *(_DWORD *)a5,
                                       *((_BYTE *)a5 + 4),
                                       a5[1],
                                       (__int64)(a5 + 2));
    }
  }
  else
  {
    InstallerClassMappedProperty = CmValidateInstallerClassName(a1, a2);
  }
  return PnpMapCmStatusToDispatchStatus(InstallerClassMappedProperty);
}
