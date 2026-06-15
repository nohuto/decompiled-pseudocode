/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180001B3C
 * Callers:
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180001A3C (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180001ABC (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D2B5C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D2C20 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1800D2CD0 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001EF78 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        struct IUnknown *a1,
        __int64 a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  struct IUnknown *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  struct IUnknown *v11[3]; // [rsp+28h] [rbp-18h] BYREF

  v11[1] = (struct IUnknown *)-2LL;
  v10 = 0LL;
  v6 = 0;
  if ( !(_DWORD)a2 )
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64 *))a1->lpVtbl[1].AddRef)(a1, a2, &v10);
LABEL_3:
    if ( v6 < 0 )
      AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 0xF40u, v6);
    v7 = v10;
    goto LABEL_6;
  }
  v9 = 0LL;
  v11[0] = 0LL;
  if ( a1 )
  {
    ATL::AtlComQIPtrAssign(v11, a1, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c);
    v9 = v11[0];
    if ( v11[0] )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))v11[0]->lpVtbl[1].Release)(v11[0], 0LL, &v10);
      if ( v11[0] )
        ((void (__fastcall *)(struct IUnknown *))v11[0]->lpVtbl->Release)(v11[0]);
      goto LABEL_3;
    }
  }
  v7 = 0LL;
  v10 = 0LL;
  if ( v9 )
  {
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v6 = 0;
    v7 = v10;
LABEL_7:
    if ( v7 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
             v7,
             a3,
             a4);
      v7 = v10;
    }
    else
    {
      *(_QWORD *)&a4->vt = 0LL;
      a4->hVal.QuadPart = 0LL;
      a4->bstrblobVal.pData = 0LL;
    }
    if ( v6 >= 0 )
      goto LABEL_10;
    goto LABEL_20;
  }
LABEL_6:
  if ( v6 >= 0 )
    goto LABEL_7;
LABEL_20:
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0x1326u, v6);
  v7 = v10;
LABEL_10:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
