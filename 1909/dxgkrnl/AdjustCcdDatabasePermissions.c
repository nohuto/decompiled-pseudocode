/*
 * XREFs of AdjustCcdDatabasePermissions @ 0x1C02C5A68
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C02C5A68 (AdjustCcdDatabasePermissions.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02C648C (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C0055FF4 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-FreePoolWithTag@-$pool_helpers@PEAX.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@Z$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0056004 (-reset@-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@Z$1-FreePool.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00DB1CC (_CcdOpenRegistrySubkey.c)
 *     AdjustCcdDatabasePermissions @ 0x1C02C5A68 (AdjustCcdDatabasePermissions.c)
 */

__int64 __fastcall AdjustCcdDatabasePermissions(__int64 a1, const WCHAR *a2, unsigned int a3, void *a4)
{
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  ULONG v14; // eax
  PVOID PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  PACL v24; // rsi
  ULONG v25; // ebx
  NTSTATUS v26; // eax
  unsigned __int8 v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  PVOID v30; // rbx
  __int64 v31; // rax
  ULONG v32; // eax
  ULONG v33; // esi
  struct _ACL *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _ACL *v38; // r14
  __int64 v39; // rax
  NTSTATUS Acl; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  NTSTATUS v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  ULONG v52; // eax
  PVOID v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  NTSTATUS v58; // eax
  NTSTATUS v59; // eax
  void *v60; // rcx
  unsigned int v61; // r15d
  unsigned int *v62; // rbx
  ULONG i; // r14d
  PVOID v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  NTSTATUS v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  size_t Size; // [rsp+30h] [rbp-39h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int8 DaclDefaulted[4]; // [rsp+40h] [rbp-29h] BYREF
  ULONG Length; // [rsp+44h] [rbp-25h] BYREF
  PACL Dacl; // [rsp+48h] [rbp-21h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  ULONG v80; // [rsp+60h] [rbp-9h] BYREF
  PVOID AceList; // [rsp+68h] [rbp-1h] BYREF
  _BYTE AbsoluteSecurityDescriptor[48]; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int8 DaclPresent; // [rsp+E0h] [rbp+77h] BYREF

  if ( a3 > 5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v6);
    return 0LL;
  }
  v80 = 2;
  Handle = 0LL;
  v8 = CcdOpenRegistrySubkey((int)&Handle, 983103, a1, a2, &v80);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
    goto LABEL_73;
  }
  v14 = 336;
  SecurityDescriptor = 0LL;
  for ( Length = 336; ; v14 = Length )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x4B677844u);
    wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
      &SecurityDescriptor,
      PoolWithTag);
    if ( !SecurityDescriptor )
      break;
    LODWORD(v12) = ZwQuerySecurityObject(Handle, 4u, SecurityDescriptor, Length, &Length);
    if ( (_DWORD)v12 != -1073741789 )
      goto LABEL_10;
  }
  LODWORD(v12) = -1073741801;
LABEL_10:
  if ( (int)v12 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = (int)v12;
LABEL_70:
    WdLogEvent5_WdError(v19);
    goto LABEL_71;
  }
  Dacl = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted);
  v12 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
  {
LABEL_13:
    v19 = WdLogNewEntry5_WdError(v22, v21, v23);
LABEL_69:
    *(_QWORD *)(v19 + 24) = v12;
    goto LABEL_70;
  }
  if ( !DaclPresent || (v24 = Dacl) == 0LL )
  {
    v19 = WdLogNewEntry5_WdError(v22, v21, v23);
    v12 = -1073741275LL;
    goto LABEL_69;
  }
  DaclPresent = 0;
  v25 = 0;
  if ( !Dacl->AceCount )
    goto LABEL_24;
  while ( 1 )
  {
    v26 = RtlGetAce(v24, v25, &Ace);
    v12 = v26;
    if ( v26 < 0 )
      goto LABEL_13;
    if ( !*(_BYTE *)Ace && (*((_DWORD *)Ace + 1) & 0x2001F) == 0x2001F && RtlEqualSid((char *)Ace + 8, a4) )
      break;
    v24 = Dacl;
    if ( ++v25 >= Dacl->AceCount )
    {
      v27 = DaclPresent;
      goto LABEL_23;
    }
  }
  v24 = Dacl;
  v27 = 1;
  DaclPresent = 1;
LABEL_23:
  if ( !v27 )
  {
LABEL_24:
    memset(AbsoluteSecurityDescriptor, 0, 0x28uLL);
    v30 = 0LL;
    Ace = 0LL;
    if ( v24->AclSize < 8u )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v31 + 24) = 2525LL;
      WdLogEvent5_WdAssertion(v31);
    }
    v32 = RtlLengthSid(a4);
    v33 = v32 + Dacl->AclSize + 8;
    v34 = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v33, 0x4B677844u);
    v38 = v34;
    if ( !v34 )
    {
      v39 = WdLogNewEntry5_WdError(v36, v35, v37);
      v12 = -1073741670LL;
LABEL_43:
      *(_QWORD *)(v39 + 24) = v12;
      WdLogEvent5_WdError(v39);
LABEL_44:
      if ( v30 )
        ExFreePoolWithTag(v30, 0x4B677844u);
      if ( v38 )
      {
        v60 = v38;
        goto LABEL_48;
      }
      goto LABEL_71;
    }
    Acl = RtlCreateAcl(v34, v33, 2u);
    v12 = Acl;
    if ( Acl < 0 )
      goto LABEL_42;
    v44 = RtlGetAce(Dacl, 0, &AceList);
    v12 = v44;
    if ( v44 < 0 )
      goto LABEL_42;
    v45 = RtlAddAce(v38, 2u, 0, AceList, Dacl->AclSize - 8);
    v12 = v45;
    if ( v45 < 0 )
      goto LABEL_42;
    v46 = RtlAddAccessAllowedAceEx(v38, 2u, 2u, 0x2001Fu, a4);
    v12 = v46;
    if ( v46 < 0 )
      goto LABEL_42;
    v47 = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
    v12 = v47;
    if ( v47 < 0 )
      goto LABEL_42;
    v48 = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v38, 0);
    v12 = v48;
    if ( v48 < 0 )
      goto LABEL_42;
    if ( !RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor)
      || (v52 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor), LODWORD(Size) = v52, v52 < 0x28) )
    {
      v39 = WdLogNewEntry5_WdError(v50, v49, v51);
      v12 = -1073741595LL;
      goto LABEL_43;
    }
    v53 = ExAllocatePoolWithTag(PagedPool, v52, 0x4B677844u);
    wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
      &Ace,
      v53);
    if ( wil::operator==<wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&public: static void wil::details::pool_helpers<void *,1265072196>::FreePoolWithTag(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&Ace) )
    {
      v57 = WdLogNewEntry5_WdError(v55, v54, v56);
      LODWORD(v12) = -1073741670;
      *(_QWORD *)(v57 + 24) = -1073741670LL;
      WdLogEvent5_WdError(v57);
      v30 = Ace;
      goto LABEL_44;
    }
    v30 = Ace;
    memset(Ace, 0, (unsigned int)Size);
    v58 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v30, (PULONG)&Size);
    v12 = v58;
    if ( v58 < 0 || (v59 = ZwSetSecurityObject(Handle, 4u, v30), v12 = v59, v59 < 0) )
    {
LABEL_42:
      v39 = WdLogNewEntry5_WdError(v42, v41, v43);
      goto LABEL_43;
    }
    if ( v30 )
      ExFreePoolWithTag(v30, 0x4B677844u);
    ExFreePoolWithTag(v38, 0x4B677844u);
  }
  v61 = 544;
  v62 = 0LL;
  Ace = 0LL;
  for ( i = 0; ; ++i )
  {
    do
    {
      if ( !v62 )
      {
        v64 = ExAllocatePoolWithTag(PagedPool, v61, 0x4B677844u);
        wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
          &Ace,
          v64);
        v62 = (unsigned int *)Ace;
        if ( !Ace )
        {
          v72 = WdLogNewEntry5_WdError(v66, v65, v67);
          LODWORD(v12) = -1073741670;
          *(_QWORD *)(v72 + 24) = -1073741670LL;
          WdLogEvent5_WdError(v72);
          goto LABEL_71;
        }
      }
      LODWORD(Size) = 0;
      v68 = ZwEnumerateKey(Handle, i, KeyBasicInformation, v62, v61 - 2, (PULONG)&Size);
      v70 = v68;
      if ( v68 == -2147483643 || v68 == -1073741789 )
      {
        v61 = Size + 2;
        wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
          &Ace,
          0LL);
        v62 = (unsigned int *)Ace;
      }
    }
    while ( (_DWORD)v70 == -2147483643 || (_DWORD)v70 == -1073741789 );
    if ( (int)v70 >= 0 )
    {
      *((_WORD *)v62 + ((unsigned __int64)v62[3] >> 1) + 8) = 0;
      AdjustCcdDatabasePermissions(Handle, v62 + 4, a3 + 1, a4);
      continue;
    }
    if ( (_DWORD)v70 == -2147483622 )
      break;
    v71 = WdLogNewEntry5_WdAssertion(0LL, v69);
    *(_QWORD *)(v71 + 24) = v70;
    WdLogEvent5_WdAssertion(v71);
  }
  LODWORD(v12) = 0;
  if ( v62 )
  {
    v60 = v62;
LABEL_48:
    ExFreePoolWithTag(v60, 0x4B677844u);
  }
LABEL_71:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0x4B677844u);
LABEL_73:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
