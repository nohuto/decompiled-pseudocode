/*
 * XREFs of ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x1800E0BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800E0B20 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::SetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        const struct tagPROPVARIANT *a5)
{
  int v7; // ebx
  struct IMMDevice *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !a2 || !a5 )
  {
    v7 = -2147467261;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyValue", 2487, v7);
    goto LABEL_7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                        + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v9);
  if ( v7 < 0 )
    goto LABEL_6;
  v7 = CPolicyConfig::SetPropertyStoreProperty(v9, a3, a4, a5);
  if ( v7 < 0 )
    goto LABEL_6;
LABEL_7:
  if ( v9 )
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v7;
}
