/*
 * XREFs of NtManageHotPatch @ 0x1408596B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MiLogHotPatchManagement @ 0x140857204 (MiLogHotPatchManagement.c)
 *     MiQueryLoadedPatches @ 0x140858B68 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140858DF0 (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x140859458 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140859510 (MiUnloadHotPatchForUserSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManageHotPatch(int a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v4; // r12
  SIZE_T v5; // r14
  KPROCESSOR_MODE AccessMode; // r13
  int active; // ebx
  int v10; // edx
  unsigned int v11; // r12d
  ULONG v12; // r8d
  __int64 v13; // rcx
  const void *v14; // rbx
  int v15; // ecx
  void *v16; // r15
  int *p_Src; // rdx
  unsigned int *p_Sid; // rcx
  int v19; // eax
  wchar_t *v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  int v24; // [rsp+30h] [rbp-108h]
  size_t Size; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-F8h]
  volatile void *Address; // [rsp+48h] [rbp-F0h]
  int v28; // [rsp+50h] [rbp-E8h]
  _DWORD *v29; // [rsp+58h] [rbp-E0h]
  PVOID P; // [rsp+60h] [rbp-D8h] BYREF
  PVOID v31; // [rsp+68h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-C8h] BYREF
  int Src; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int Sid; // [rsp+84h] [rbp-B4h] BYREF
  UNICODE_STRING StringIn; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v36[68]; // [rsp+98h] [rbp-A0h] BYREF
  int v37; // [rsp+DCh] [rbp-5Ch] BYREF
  unsigned int v38[4]; // [rsp+E0h] [rbp-58h] BYREF

  v4 = a4;
  v26 = (unsigned __int64)a4;
  v5 = a3;
  Address = a2;
  v29 = a4;
  P = 0LL;
  v31 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(Size) = 0;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  active = -1073741823;
  v24 = -1073741823;
  if ( !dword_140439F34 )
  {
    active = -1073741637;
LABEL_3:
    v24 = active;
    goto LABEL_84;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, AccessMode) )
  {
    active = -1073741727;
    goto LABEL_3;
  }
  v10 = 0;
  v28 = 0;
  switch ( a1 )
  {
    case 0:
      goto LABEL_17;
    case 1:
      goto LABEL_16;
    case 2:
LABEL_15:
      v11 = 96;
LABEL_18:
      v12 = 8;
      goto LABEL_19;
    case 3:
LABEL_17:
      v11 = 104;
      goto LABEL_18;
  }
  if ( a1 != 4 )
  {
    if ( a1 != 5 )
    {
      if ( a1 != 6 )
      {
        active = -1073741821;
        goto LABEL_3;
      }
      v11 = 40;
      goto LABEL_18;
    }
    goto LABEL_15;
  }
LABEL_16:
  v10 = 1;
  v11 = 80;
  v12 = 4;
  v28 = 1;
LABEL_19:
  if ( (unsigned int)v5 < v11 )
  {
    active = -1073741820;
    v24 = -1073741820;
    goto LABEL_83;
  }
  if ( AccessMode )
  {
    v13 = v26;
    if ( v26 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    if ( v10 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((v12 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address + v5 > 0x7FFFFFFF0000LL || (char *)Address + v5 < Address )
          MEMORY[0x7FFFFFFF0000] = 0;
        v14 = (const void *)Address;
      }
      else
      {
        v14 = (const void *)Address;
      }
    }
    else
    {
      v14 = (const void *)Address;
      ProbeForWrite(Address, v5, v12);
    }
    memmove(&Src, v14, v11);
    active = -1073741823;
  }
  else
  {
    memmove(&Src, (const void *)a2, v11);
  }
  switch ( a1 )
  {
    case 0:
      goto LABEL_65;
    case 1:
LABEL_58:
      if ( Src != 1 )
        goto LABEL_50;
      if ( a1 == 4 )
      {
        if ( !RtlValidSid(&StringIn.MaximumLength + 1) )
          goto LABEL_53;
        v19 = MiUnloadHotPatchForUserSid(&StringIn.MaximumLength + 1, (int *)&Sid);
      }
      else
      {
        v19 = MiUnloadHotPatch(Sid, *(unsigned int *)&StringIn.Length);
      }
      v24 = v19;
      active = v19;
      MiLogHotPatchManagement(a1, (__int64)&Src, 0LL, v19);
      p_Src = 0LL;
LABEL_78:
      v16 = (void *)Address;
      goto LABEL_79;
    case 2:
      goto LABEL_49;
    case 3:
LABEL_65:
      if ( Src != 2 || !StringIn.Length )
        goto LABEL_50;
      if ( AccessMode )
      {
        if ( ((__int64)StringIn.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = (wchar_t *)((char *)StringIn.Buffer + StringIn.Length);
        if ( (unsigned __int64)v20 > 0x7FFFFFFF0000LL || v20 < StringIn.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      active = RtlDuplicateUnicodeString(0, &StringIn, &DestinationString);
      v24 = active;
      if ( active < 0 )
        goto LABEL_83;
      if ( a1 == 3 )
      {
        if ( !RtlValidSid(v36) )
          goto LABEL_53;
        v21 = MiLoadHotPatchForUserSid((const void **)&DestinationString, v36, &v37);
      }
      else
      {
        v21 = MiLoadHotPatch((const void **)&DestinationString, 1, &v37, v38);
      }
      v24 = v21;
      active = v21;
      MiLogHotPatchManagement(a1, (__int64)&Src, &DestinationString.Length, v21);
      p_Src = &Src;
      LODWORD(Size) = v11;
      goto LABEL_78;
    case 4:
      goto LABEL_58;
  }
  v15 = a1 - 5;
  if ( a1 != 5 )
  {
    v16 = (void *)Address;
    if ( v15 != 1 )
    {
      p_Src = 0LL;
      goto LABEL_79;
    }
    active = MiQueryProcessActivePatches(*(void **)&StringIn.Length, &v31, &Size, (__int64)Address, v5, AccessMode);
    v24 = active;
    if ( active < 0 )
      goto LABEL_83;
    if ( (unsigned int)Size > (unsigned int)v5 )
      goto LABEL_46;
    p_Src = (int *)v31;
    goto LABEL_79;
  }
LABEL_49:
  if ( Src != 2 )
  {
LABEL_50:
    active = -1073741811;
    goto LABEL_47;
  }
  p_Sid = 0LL;
  if ( a1 == 5 )
  {
    if ( !RtlValidSid(&Sid) )
    {
LABEL_53:
      active = -1073741704;
      goto LABEL_47;
    }
    p_Sid = &Sid;
  }
  v16 = (void *)Address;
  active = MiQueryLoadedPatches(p_Sid, &P, &Size, (__int64)Address, v5);
  v24 = active;
  if ( active < 0 )
    goto LABEL_83;
  if ( (unsigned int)Size > (unsigned int)v5 )
  {
LABEL_46:
    active = -1073741789;
LABEL_47:
    v24 = active;
    goto LABEL_83;
  }
  p_Src = (int *)P;
LABEL_79:
  if ( !v28 )
  {
    if ( AccessMode )
    {
      memmove(v16, p_Src, (unsigned int)Size);
      v4 = (_DWORD *)v26;
      goto LABEL_84;
    }
    memmove(v16, p_Src, (unsigned int)Size);
  }
LABEL_83:
  v4 = (_DWORD *)v26;
LABEL_84:
  if ( AccessMode )
  {
    v22 = (__int64)v4;
    if ( (unsigned __int64)v4 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    *v4 = Size;
    active = v24;
  }
  else
  {
    *v4 = Size;
  }
  RtlFreeAnsiString(&DestinationString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  return (unsigned int)active;
}
