/*
 * XREFs of ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C028FA14
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C029030C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z @ 0x1C0290A98 (-GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z.c)
 *     ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x1C0290BB8 (-InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateResourceSecurityDescriptor(
        DXGVAILOBJECT *this,
        char a2,
        ACCESS_MASK a3,
        void **a4)
{
  int v5; // r15d
  ULONG v6; // r14d
  ULONG v7; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rax
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  int HandleProcessSession; // eax
  NTSTATUS OwnerSecurityDescriptor; // eax
  NTSTATUS GroupSecurityDescriptor; // eax
  struct _ACL *v24; // rcx
  WORD v25; // di
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  ULONG v30; // eax
  __int64 v31; // rax
  ULONG v32; // r15d
  SIZE_T v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  char *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rax
  NTSTATUS v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  NTSTATUS v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  NTSTATUS v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  struct _ACL *v54; // r14
  NTSTATUS Acl; // eax
  unsigned __int16 v56; // si
  struct _ACL *v57; // rax
  NTSTATUS v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  NTSTATUS v62; // eax
  __int64 v63; // rax
  NTSTATUS v64; // eax
  NTSTATUS v65; // eax
  __int64 v66; // rax
  unsigned __int8 DaclPresent; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+31h] [rbp-38h] BYREF
  unsigned __int8 MemoryAllocated[6]; // [rsp+32h] [rbp-37h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v72; // [rsp+40h] [rbp-29h] BYREF
  PACL Dacl; // [rsp+48h] [rbp-21h] BYREF
  ACCESS_MASK AccessMask; // [rsp+50h] [rbp-19h]
  PSID Owner; // [rsp+58h] [rbp-11h] BYREF
  PSID Group; // [rsp+60h] [rbp-9h] BYREF
  PVOID Ace; // [rsp+68h] [rbp-1h] BYREF
  _BYTE Sid[24]; // [rsp+70h] [rbp+7h] BYREF

  v72 = -1;
  AccessMask = a3;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  MemoryAllocated[0] = 0;
  v5 = 0;
  Owner = 0LL;
  v6 = 0;
  Group = 0LL;
  v7 = 0;
  LODWORD(v12) = ObGetObjectSecurity(this, &SecurityDescriptor, MemoryAllocated);
  if ( !SecurityDescriptor )
  {
    LODWORD(v12) = -1073741786;
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v13);
    *(_QWORD *)(v14 + 24) = -1073741786LL;
    WdLogEvent5_WdWarning(v14);
  }
  if ( (int)v12 >= 0 )
  {
    DaclPresent = 0;
    DaclDefaulted = 0;
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
    v12 = DaclSecurityDescriptor;
    if ( DaclSecurityDescriptor < 0 )
    {
LABEL_5:
      v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v19 + 24) = v12;
      WdLogEvent5_WdWarning(v19);
      goto LABEL_51;
    }
    if ( !DaclPresent || DaclDefaulted )
    {
      LODWORD(v12) = -1073741786;
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = -1073741786LL;
      WdLogEvent5_WdWarning(v20);
    }
    if ( (int)v12 >= 0 )
    {
      HandleProcessSession = DXGVAILOBJECT::GetHandleProcessSession(this, &v72);
      v12 = HandleProcessSession;
      if ( HandleProcessSession < 0 )
        goto LABEL_5;
      if ( a2 )
      {
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &DaclDefaulted);
        v12 = OwnerSecurityDescriptor;
        if ( OwnerSecurityDescriptor < 0 )
          goto LABEL_5;
        if ( Owner )
          v6 = RtlLengthSid(Owner);
        GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &DaclPresent);
        v12 = GroupSecurityDescriptor;
        if ( GroupSecurityDescriptor < 0 )
          goto LABEL_5;
        if ( Group )
          v7 = RtlLengthSid(Group);
      }
      v24 = Dacl;
      v25 = 0;
      if ( Dacl->AceCount )
      {
        while ( 1 )
        {
          v26 = RtlGetAce(v24, v25, &Ace);
          v12 = v26;
          if ( v26 < 0 )
            break;
          v30 = RtlLengthSid((char *)Ace + 8);
          v24 = Dacl;
          ++v25;
          v5 += v30 + 12;
          if ( v25 >= Dacl->AceCount )
            goto LABEL_23;
        }
        v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
        *(_QWORD *)(v31 + 24) = v12;
        WdLogEvent5_WdWarning(v31);
      }
LABEL_23:
      if ( (int)v12 >= 0 )
      {
        DXGVAILOBJECT::InitializeDWMSid((DXGVAILOBJECT *)v24, v72, Sid);
        v32 = RtlLengthSid(Sid) + 12 + v5;
        v33 = v32 + v7 + v6 + 48;
        v34 = (unsigned int)v33;
        v37 = (char *)operator new(v33, 0x4B677844u, 1, PagedPool);
        if ( !v37 )
        {
          LODWORD(v12) = -1073741801;
          v39 = WdLogNewEntry5_WdWarning(v36, v35, v38);
          *(_QWORD *)(v39 + 24) = v34;
          *(_QWORD *)(v39 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v39);
        }
        if ( (int)v12 < 0 )
          goto LABEL_47;
        v40 = RtlCreateSecurityDescriptor(v37, 1u);
        v12 = v40;
        if ( v40 < 0 )
          goto LABEL_46;
        if ( Owner )
        {
          RtlCopySid(v6, v37 + 40, Owner);
          v44 = RtlSetOwnerSecurityDescriptor(v37, v37 + 40, 0);
          v12 = v44;
          if ( v44 >= 0 )
            goto LABEL_32;
          v48 = WdLogNewEntry5_WdWarning(v46, v45, v47);
          *(_QWORD *)(v48 + 24) = v12;
          WdLogEvent5_WdWarning(v48);
        }
        if ( (int)v12 < 0 )
          goto LABEL_47;
LABEL_32:
        if ( Group )
        {
          RtlCopySid(v7, &v37[v6 + 40], Group);
          v49 = RtlSetGroupSecurityDescriptor(v37, &v37[v6 + 40], 0);
          v12 = v49;
          if ( v49 >= 0 )
          {
LABEL_36:
            v54 = (struct _ACL *)&v37[v6 + 40 + v7];
            Acl = RtlCreateAcl(v54, v32, 4u);
            v56 = 0;
            v12 = Acl;
            if ( Acl >= 0 )
            {
              v57 = Dacl;
              if ( Dacl->AceCount )
              {
                while ( 1 )
                {
                  v58 = RtlGetAce(v57, v56, &Ace);
                  v12 = v58;
                  if ( v58 < 0 )
                    break;
                  v62 = RtlAddAce(v54, 4u, 0, Ace, *((unsigned __int16 *)Ace + 1));
                  v12 = v62;
                  if ( v62 < 0 )
                    break;
                  v57 = Dacl;
                  if ( ++v56 >= Dacl->AceCount )
                    goto LABEL_43;
                }
                v63 = WdLogNewEntry5_WdWarning(v60, v59, v61);
                *(_QWORD *)(v63 + 24) = v12;
                WdLogEvent5_WdWarning(v63);
              }
LABEL_43:
              if ( (int)v12 < 0 )
                goto LABEL_47;
              v64 = RtlAddAccessAllowedAce(v54, 4u, AccessMask, Sid);
              v12 = v64;
              if ( v64 >= 0 )
              {
                v65 = RtlSetDaclSecurityDescriptor(v37, 1u, v54, 0);
                v12 = v65;
                if ( v65 >= 0 )
                  goto LABEL_47;
              }
            }
LABEL_46:
            v66 = WdLogNewEntry5_WdWarning(v42, v41, v43);
            *(_QWORD *)(v66 + 24) = v12;
            WdLogEvent5_WdWarning(v66);
LABEL_47:
            if ( v37 )
            {
              if ( (int)v12 < 0 )
                operator delete[](v37);
              else
                *a4 = v37;
            }
            goto LABEL_51;
          }
          v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
          *(_QWORD *)(v53 + 24) = v12;
          WdLogEvent5_WdWarning(v53);
        }
        if ( (int)v12 < 0 )
          goto LABEL_47;
        goto LABEL_36;
      }
    }
  }
LABEL_51:
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
  return (unsigned int)v12;
}
