/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1405C5D08
 * Callers:
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003EC4 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     ObpDereferenceNamedObject @ 0x14008BD14 (ObpDereferenceNamedObject.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14008D490 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReferenceNamedObject @ 0x14012D9E0 (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReleaseObjectSecurity @ 0x1405C6D90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7180 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x1405C8A20 (ObpAssignSecurity.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     RtlGetControlSecurityDescriptor @ 0x14063E560 (RtlGetControlSecurityDescriptor.c)
 *     ObpGrantAccess @ 0x1406BECCC (ObpGrantAccess.c)
 *     ObpDeleteDirectoryEntry @ 0x1406CD93C (ObpDeleteDirectoryEntry.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        _QWORD *a7)
{
  char *v7; // rdi
  char *v11; // r14
  char v12; // al
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // r8d
  __int64 v16; // r9
  int ObjectSecurity; // ebx
  __int64 v18; // r9
  PVOID v19; // r15
  char *v20; // rdi
  __int64 *v21; // rax
  BOOLEAN v22; // r13
  __int64 v23; // rcx
  char v24; // bl
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v29; // r9
  int v30; // eax
  void *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  _DWORD *v40; // rdi
  BOOLEAN DaclDefaulted[8]; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[8]; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  ULONG Revision[2]; // [rsp+88h] [rbp-78h] BYREF
  PACL Dacl; // [rsp+90h] [rbp-70h] BYREF
  char *v46; // [rsp+98h] [rbp-68h]
  __int64 v47[5]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+C8h] [rbp-38h]
  _DWORD *v49; // [rsp+D0h] [rbp-30h]
  _QWORD *v50; // [rsp+D8h] [rbp-28h]
  _OWORD v51[10]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = 0LL;
  *(_QWORD *)DaclPresent = a3;
  v46 = a2;
  v49 = a6;
  v50 = a7;
  Object = 0LL;
  memset(v47, 0, sizeof(v47));
  memset(v51, 0, sizeof(v51));
  v11 = a2 - 48;
  *a7 = 0LL;
  v12 = *(a2 - 22);
  Dacl = 0LL;
  if ( (v12 & 2) != 0 )
    v7 = &v11[-ObpInfoMaskToOffset[v12 & 3]];
  v13 = v11[27];
  *(_QWORD *)Revision = v7;
  CurrentSilo = PsGetCurrentSilo();
  v15 = *a6;
  v16 = (unsigned __int8)(ObHeaderCookie ^ BYTE1(v11) ^ v11[24]);
  v48 = (unsigned __int64)v11 >> 8;
  ObjectSecurity = ObpLookupObjectName(
                     *((_QWORD *)a6 + 1),
                     (int)v7 + 8,
                     v15,
                     ObTypeIndexTable[v16],
                     (v13 & 2) == 0,
                     0LL,
                     *((_QWORD *)a6 + 5),
                     a2,
                     (__int64)CurrentSilo,
                     a4,
                     (__int64)v47,
                     0LL,
                     (__int64)&Object);
  if ( ObjectSecurity < 0 )
    goto LABEL_45;
  v19 = Object;
  v20 = 0LL;
  if ( Object != v46 )
  {
    if ( BYTE6(v47[3]) )
    {
      v20 = (char *)Object - 48;
      ObpReferenceNamedObject((__int64)Object - 48);
    }
    ObpReleaseLookupContext((__int64)v47);
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v20 )
        ObpDereferenceNamedObject((__int64)v20);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v30 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      *(_DWORD *)(a4 + 16) = v30;
      LOBYTE(v29) = a5;
      ObjectSecurity = ObpGrantAccess(1LL, v19, a4, v29, *a6, *(_QWORD *)DaclPresent);
      if ( ObjectSecurity < 0 )
      {
        if ( v20 )
          ObpDereferenceNamedObject((__int64)v20);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(
                           1,
                           *(_DWORD *)DaclPresent,
                           BugCheckParameter1,
                           (_DWORD)v19,
                           a5,
                           *a6,
                           0LL);
        if ( v20 )
          ObpDereferenceNamedObject((__int64)v20);
        if ( ObjectSecurity >= 0 )
          goto LABEL_19;
      }
    }
    ObfDereferenceObject(v19);
    return (unsigned int)ObjectSecurity;
  }
  v21 = *(__int64 **)Revision;
  v22 = 0;
  *(_QWORD *)DaclPresent = 0LL;
  DaclDefaulted[0] = 0;
  LODWORD(Object) = 0;
  v23 = **(_QWORD **)Revision;
  if ( **(_QWORD **)Revision )
  {
    if ( (*(_DWORD *)(v23 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      LODWORD(Object) = 3;
    LOBYTE(v18) = a5;
    ObjectSecurity = ObpGetObjectSecurity(v23, DaclPresent, DaclDefaulted, v18);
    if ( ObjectSecurity < 0 )
      goto LABEL_54;
    v20 = *(char **)DaclPresent;
    v22 = DaclDefaulted[0];
    v21 = *(__int64 **)Revision;
  }
  v24 = 0;
  if ( !*v21 || (*(_DWORD *)(*v21 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v31 = *(void **)(a4 + 64);
  if ( !v31 )
    goto LABEL_13;
  *(_DWORD *)DaclPresent = RtlGetDaclSecurityDescriptor(v31, DaclPresent, &Dacl, DaclDefaulted);
  if ( *(int *)DaclPresent < 0 )
  {
    if ( v20 )
      ObReleaseObjectSecurity(v20, v22);
    ObpDeleteDirectoryEntry(v47);
    ObpReleaseLookupContext((__int64)v47);
    ObpDecrementHandleCount(BugCheckParameter1);
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
        v32 = *(_OWORD *)(a4 + 16);
        v51[0] = *(_OWORD *)a4;
        v33 = *(_OWORD *)(a4 + 32);
        v51[1] = v32;
        v34 = *(_OWORD *)(a4 + 48);
        v51[2] = v33;
        v35 = *(_OWORD *)(a4 + 64);
        v51[3] = v34;
        v36 = *(_OWORD *)(a4 + 80);
        v51[4] = v35;
        v37 = *(_OWORD *)(a4 + 96);
        v51[5] = v36;
        v38 = *(_OWORD *)(a4 + 128);
        v51[6] = v37;
        v51[7] = *(_OWORD *)(a4 + 112);
        v39 = *(_OWORD *)(a4 + 144);
        v51[8] = v38;
        v51[9] = v39;
        *(_QWORD *)&v51[4] = 0LL;
        v25 = v51;
        goto LABEL_14;
      }
LABEL_13:
      v25 = (_OWORD *)a4;
LABEL_14:
      if ( !*((_QWORD *)v25 + 8) )
      {
        if ( (_DWORD)Object )
          v24 = 1;
      }
      ObjectSecurity = ObpAssignSecurity(
                         (_DWORD)v25,
                         (_DWORD)v20,
                         (_DWORD)v46,
                         ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v48 ^ *(v46 - 24))],
                         (_DWORD)Object,
                         v24);
      if ( v20 )
      {
        ObReleaseObjectSecurity(v20, v22);
        goto LABEL_17;
      }
      if ( ObjectSecurity >= 0 )
      {
        v40 = v49;
        LOBYTE(v26) = *((_BYTE *)v49 + 16);
        SeReleaseSecurityDescriptor(*((_QWORD *)v49 + 4), v26, 1LL, v27);
        *((_QWORD *)v40 + 4) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
        if ( ObjectSecurity >= 0 )
        {
          ObpReleaseLookupContext((__int64)v47);
LABEL_19:
          *v50 = v19;
          return (unsigned int)ObjectSecurity;
        }
      }
LABEL_54:
      ObpDeleteDirectoryEntry(v47);
      ObpReleaseLookupContext((__int64)v47);
LABEL_45:
      ObpDecrementHandleCount(BugCheckParameter1);
      return (unsigned int)ObjectSecurity;
    }
    if ( v20 )
      ObReleaseObjectSecurity(v20, v22);
    ObpDeleteDirectoryEntry(v47);
    ObpReleaseLookupContext((__int64)v47);
    ObpDecrementHandleCount(BugCheckParameter1);
    return Revision[0];
  }
}
