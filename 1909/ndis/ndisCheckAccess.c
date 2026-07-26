/*
 * XREFs of ndisCheckAccess @ 0x1C00199E8
 * Callers:
 *     ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840 (-ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ndisCheckAccess(__int64 a1, __int64 a2, void *a3)
{
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v7; // rdi
  bool v8; // zf
  KPROCESSOR_MODE AccessMode; // bl
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v11; // bl
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-20h] BYREF
  ACCESS_MASK AccessMask; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  Privileges = 0LL;
  AccessMask = 0x10000000;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v7 = *(struct _ACCESS_STATE **)(*(_QWORD *)(a2 + 8) + 8LL);
  SeLockSubjectContext(&v7->SubjectSecurityContext);
  v8 = (*(_BYTE *)(a2 + 2) & 1) == 0;
  AccessMode = 1;
  if ( v8 )
    AccessMode = *(_BYTE *)(a1 + 64);
  GenericMapping = IoGetFileObjectGenericMapping();
  v11 = SeAccessCheck(
          a3,
          &v7->SubjectSecurityContext,
          1u,
          AccessMask,
          0,
          &Privileges,
          GenericMapping,
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(v7, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v11 )
  {
    v7->PreviouslyGrantedAccess |= GrantedAccess;
    v7->RemainingDesiredAccess &= ~(GrantedAccess | 0x2000000);
  }
  SeUnlockSubjectContext(&v7->SubjectSecurityContext);
  return v11;
}
