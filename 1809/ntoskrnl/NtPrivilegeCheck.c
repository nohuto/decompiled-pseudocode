/*
 * XREFs of NtPrivilegeCheck @ 0x14060A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SepPrivilegeCheck @ 0x1400A7C90 (SepPrivilegeCheck.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BDE84 (SeReleaseLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14060B1F8 (SeCaptureLuidAndAttributesArray.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  char PreviousMode; // r14
  NTSTATUS result; // eax
  PVOID v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  ULONG Control; // r12d
  NTSTATUS v11; // ebx
  void *v12; // rbx
  BOOLEAN v13; // di
  int Object; // [rsp+20h] [rbp-88h]
  int HandleInformation; // [rsp+28h] [rbp-80h]
  int v16; // [rsp+30h] [rbp-78h]
  ULONG PrivilegeCount; // [rsp+50h] [rbp-58h]
  NTSTATUS v18; // [rsp+54h] [rbp-54h]
  unsigned int Size; // [rsp+5Ch] [rbp-4Ch] BYREF
  ULONG Size_4; // [rsp+60h] [rbp-48h]
  PVOID v21; // [rsp+68h] [rbp-40h] BYREF
  void *Src; // [rsp+70h] [rbp-38h] BYREF

  Src = 0LL;
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v21, 0LL);
  v18 = result;
  if ( result >= 0 )
  {
    v7 = v21;
    if ( *((_DWORD *)v21 + 48) == 2 && *((int *)v21 + 49) < 1 )
    {
      v11 = -1073741659;
    }
    else
    {
      if ( ((unsigned __int8)RequiredPrivileges & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)RequiredPrivileges < 0x7FFFFFFF0000LL )
        v9 = (__int64)RequiredPrivileges;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 19) = *(_BYTE *)(v9 + 19);
      PrivilegeCount = RequiredPrivileges->PrivilegeCount;
      Size_4 = 12 * (RequiredPrivileges->PrivilegeCount - 1) + 20;
      ProbeForWrite(RequiredPrivileges, Size_4, 4u);
      if ( (unsigned __int64)Result < 0x7FFFFFFF0000LL )
        v8 = (__int64)Result;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      Control = RequiredPrivileges->Control;
      v11 = v18;
      if ( v18 >= 0 )
      {
        v11 = SeCaptureLuidAndAttributesArray(
                RequiredPrivileges->Privilege,
                Object,
                HandleInformation,
                v16,
                (__int64)&Src,
                (__int64)&Size);
        if ( v11 >= 0 )
        {
          v12 = Src;
          v13 = SepPrivilegeCheck((__int64)v21, (__int64)Src, PrivilegeCount, Control, PreviousMode);
          ObfDereferenceObject(v21);
          memmove(RequiredPrivileges->Privilege, v12, Size);
          *Result = v13;
          SeReleaseLuidAndAttributesArray(v12, PreviousMode);
          return 0;
        }
      }
      v7 = v21;
    }
    ObfDereferenceObject(v7);
    return v11;
  }
  return result;
}
