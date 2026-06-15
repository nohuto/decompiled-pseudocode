/*
 * XREFs of ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800DF340
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18004473C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  int PropertyStoreProperty; // ebx
  struct IMMDevice *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !a2 || !a5 )
  {
    PropertyStoreProperty = -2147467261;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyValue", 2452, PropertyStoreProperty);
    goto LABEL_7;
  }
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a2,
                            &v9);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_6;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty((struct IUnknown *)v9, a3, a4, a5);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_6;
LABEL_7:
  if ( v9 )
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
  return (unsigned int)PropertyStoreProperty;
}
