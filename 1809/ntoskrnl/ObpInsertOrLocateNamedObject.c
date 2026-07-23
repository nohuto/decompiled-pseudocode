/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1405C95A8
 * Callers:
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 * Callees:
 *     ObpDereferenceNamedObject @ 0x14000FB64 (ObpDereferenceNamedObject.c)
 *     ObpReleaseLookupContext @ 0x140016078 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReferenceNamedObject @ 0x14012E2B8 (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObpGrantAccess @ 0x14059678C (ObpGrantAccess.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     RtlGetControlSecurityDescriptor @ 0x1405BA5F0 (RtlGetControlSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1405CA3E0 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405CA580 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x1405CBFE8 (ObpAssignSecurity.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteDirectoryEntry @ 0x1406A7F3C (ObpDeleteDirectoryEntry.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        _KPROCESS *BugCheckParameter1,
        char *a2,
        ACCESS_MASK *a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // rsi
  char v10; // al
  unsigned __int64 v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // r8d
  __int64 v16; // r9
  int ObjectSecurity; // ebx
  PVOID v18; // r15
  char *v19; // rdi
  __int64 *v20; // rax
  BOOLEAN v21; // bl
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v26; // r9
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  int v36; // [rsp+28h] [rbp-D8h]
  BOOLEAN MemoryAllocated[4]; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[4]; // [rsp+74h] [rbp-8Ch] BYREF
  BOOLEAN DaclDefaulted[8]; // [rsp+78h] [rbp-88h] BYREF
  char *v40; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  ULONG Revision[2]; // [rsp+90h] [rbp-70h] BYREF
  ACCESS_MASK *v43; // [rsp+98h] [rbp-68h]
  PACL Dacl; // [rsp+A0h] [rbp-60h] BYREF
  char *v45; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-50h]
  _QWORD *v47; // [rsp+B8h] [rbp-48h]
  __int64 v48[3]; // [rsp+C0h] [rbp-40h] BYREF
  char v49; // [rsp+DEh] [rbp-22h]
  _OWORD v50[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v51; // [rsp+130h] [rbp+30h]
  __int128 v52; // [rsp+140h] [rbp+40h]
  __int128 v53; // [rsp+150h] [rbp+50h]
  __int128 v54; // [rsp+160h] [rbp+60h]
  __int128 v55; // [rsp+170h] [rbp+70h]
  __int128 v56; // [rsp+180h] [rbp+80h]

  v7 = (unsigned __int64)(a2 - 48);
  v47 = a7;
  v45 = a2;
  *a7 = 0LL;
  v10 = *(a2 - 22);
  v43 = a3;
  Object = 0LL;
  Dacl = 0LL;
  if ( (v10 & 2) != 0 )
    v12 = v7 - ObpInfoMaskToOffset[v10 & 3];
  else
    v12 = 0LL;
  v13 = *(_BYTE *)(v7 + 27);
  *(_QWORD *)Revision = v12;
  CurrentSilo = PsGetCurrentSilo();
  v15 = *a6;
  v16 = (unsigned __int8)(ObHeaderCookie ^ BYTE1(v7) ^ *(_BYTE *)(v7 + 24));
  v46 = v7 >> 8;
  ObjectSecurity = ObpLookupObjectName(
                     *((_QWORD *)a6 + 1),
                     (int)v12 + 8,
                     v15,
                     ObTypeIndexTable[v16],
                     (v13 & 2) == 0,
                     0LL,
                     *((_QWORD *)a6 + 5),
                     a2,
                     (__int64)CurrentSilo,
                     a4,
                     (__int64)v48,
                     0LL,
                     (__int64)&Object);
  if ( ObjectSecurity < 0 )
    goto LABEL_45;
  v18 = Object;
  v19 = 0LL;
  if ( Object != v45 )
  {
    if ( v49 )
    {
      v19 = (char *)Object - 48;
      ObpReferenceNamedObject((__int64)Object - 48);
    }
    ObpReleaseLookupContext((__int64)v48);
    ObpDecrementHandleCount(BugCheckParameter1, v7);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v19 )
        ObpDereferenceNamedObject((__int64)v19);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v27 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      *(_DWORD *)(a4 + 16) = v27;
      LOBYTE(v26) = a5;
      ObjectSecurity = ObpGrantAccess(1, v18, (struct _ACCESS_STATE *)a4, v26, *a6, v43);
      if ( ObjectSecurity < 0 )
      {
        if ( v19 )
          ObpDereferenceNamedObject((__int64)v19);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(
                           1,
                           (_DWORD)v43,
                           (_DWORD)BugCheckParameter1,
                           (_DWORD)v18,
                           a5,
                           *a6,
                           0LL);
        if ( v19 )
          ObpDereferenceNamedObject((__int64)v19);
        if ( ObjectSecurity >= 0 )
          goto LABEL_18;
      }
    }
    ObfDereferenceObject(v18);
    return (unsigned int)ObjectSecurity;
  }
  v20 = *(__int64 **)Revision;
  v21 = 0;
  v40 = 0LL;
  MemoryAllocated[0] = 0;
  LODWORD(Object) = 0;
  v22 = **(_QWORD **)Revision;
  if ( **(_QWORD **)Revision )
  {
    if ( (*(_DWORD *)(v22 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      LODWORD(Object) = 3;
    ObjectSecurity = ObpGetObjectSecurity(v22, &v40, MemoryAllocated);
    if ( ObjectSecurity < 0 )
      goto LABEL_55;
    v19 = v40;
    v21 = MemoryAllocated[0];
    v20 = *(__int64 **)Revision;
  }
  v23 = *v20;
  LOBYTE(v22) = 0;
  LODWORD(v40) = v22;
  v43 = (ACCESS_MASK *)a4;
  if ( !v23 || (*(_DWORD *)(v23 + 336) & 8) == 0 && !ObpObjectSecurityInheritance || !*(_QWORD *)(a4 + 64) )
  {
LABEL_13:
    if ( !*((_QWORD *)v43 + 8) )
    {
      if ( (_DWORD)Object )
        LOBYTE(v22) = 1;
    }
    LOBYTE(v36) = v22;
    ObjectSecurity = ObpAssignSecurity(
                       v43,
                       v19,
                       v45,
                       ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v46 ^ *(v45 - 24))],
                       (_DWORD)Object,
                       v36);
    if ( v19 )
    {
      ObReleaseObjectSecurity(v19, MemoryAllocated[0]);
      goto LABEL_16;
    }
    if ( ObjectSecurity >= 0 )
    {
      LOBYTE(v24) = *((_BYTE *)a6 + 16);
      SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), v24, 1LL);
      *((_QWORD *)a6 + 4) = 0LL;
      *(_QWORD *)(a4 + 64) = 0LL;
LABEL_16:
      if ( ObjectSecurity >= 0 )
      {
        ObpReleaseLookupContext((__int64)v48);
LABEL_18:
        *v47 = v18;
        return (unsigned int)ObjectSecurity;
      }
    }
LABEL_55:
    ObpDeleteDirectoryEntry(v48);
    ObpReleaseLookupContext((__int64)v48);
LABEL_45:
    ObpDecrementHandleCount(BugCheckParameter1, v7);
    return (unsigned int)ObjectSecurity;
  }
  *(_DWORD *)DaclPresent = RtlGetDaclSecurityDescriptor(
                             *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                             DaclPresent,
                             &Dacl,
                             DaclDefaulted);
  if ( *(int *)DaclPresent < 0 )
  {
    if ( v19 )
      ObReleaseObjectSecurity(v19, v21);
    ObpDeleteDirectoryEntry(v48);
    ObpReleaseLookupContext((__int64)v48);
    ObpDecrementHandleCount(BugCheckParameter1, v7);
    return *(unsigned int *)DaclPresent;
  }
  else
  {
    Revision[0] = RtlGetControlSecurityDescriptor(
                    *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                    (PSECURITY_DESCRIPTOR_CONTROL)DaclPresent,
                    Revision);
    if ( (Revision[0] & 0x80000000) == 0 )
    {
      if ( !Dacl && (*(_WORD *)DaclPresent & 0x1000) == 0 )
      {
        v28 = *(_OWORD *)(a4 + 16);
        v50[0] = *(_OWORD *)a4;
        v29 = *(_OWORD *)(a4 + 32);
        v50[1] = v28;
        v30 = *(_OWORD *)(a4 + 48);
        v50[2] = v29;
        v31 = *(_OWORD *)(a4 + 64);
        v50[3] = v30;
        v32 = *(_OWORD *)(a4 + 80);
        v51 = v31;
        v33 = *(_OWORD *)(a4 + 96);
        v52 = v32;
        v34 = *(_OWORD *)(a4 + 128);
        v53 = v33;
        v54 = *(_OWORD *)(a4 + 112);
        v35 = *(_OWORD *)(a4 + 144);
        v55 = v34;
        v56 = v35;
        *(_QWORD *)&v51 = 0LL;
        v43 = (ACCESS_MASK *)v50;
      }
      LOBYTE(v22) = (_BYTE)v40;
      goto LABEL_13;
    }
    if ( v19 )
      ObReleaseObjectSecurity(v19, v21);
    ObpDeleteDirectoryEntry(v48);
    ObpReleaseLookupContext((__int64)v48);
    ObpDecrementHandleCount(BugCheckParameter1, v7);
    return Revision[0];
  }
}
