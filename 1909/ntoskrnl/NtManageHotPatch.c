/*
 * XREFs of NtManageHotPatch @ 0x1408918F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     RtlDuplicateUnicodeString @ 0x1406F4910 (RtlDuplicateUnicodeString.c)
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x14088EA08 (MiLoadHotPatchForUserSid.c)
 *     MiLogHotPatchManagement @ 0x14088ED68 (MiLogHotPatchManagement.c)
 *     MiQueryLoadedPatches @ 0x140890B3C (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140890DDC (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408916B0 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408917FC (MiUnloadHotPatchForUserSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManageHotPatch(int a1, char *a2, unsigned int a3, unsigned __int64 a4)
{
  SIZE_T v4; // r14
  size_t v7; // rsi
  KPROCESSOR_MODE AccessMode; // r12
  int active; // ebx
  int v10; // edx
  ULONG v11; // r8d
  __int64 v12; // rcx
  PVOID v13; // rdx
  char *v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rdx
  int HotPatchForUserSid; // eax
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+30h] [rbp-108h]
  unsigned int v23; // [rsp+40h] [rbp-F8h] BYREF
  int v24; // [rsp+44h] [rbp-F4h]
  size_t Size; // [rsp+48h] [rbp-F0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-D8h]
  PVOID P; // [rsp+68h] [rbp-D0h] BYREF
  PVOID v29[2]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD Src[14]; // [rsp+80h] [rbp-B8h] BYREF

  v4 = a3;
  v27 = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  LODWORD(v7) = 104;
  Size = 104LL;
  memset(Src, 0, 0x68uLL);
  P = 0LL;
  v29[0] = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v23 = 0;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( !dword_1404645B0 )
  {
    active = -1073741637;
LABEL_3:
    v21 = active;
    goto LABEL_78;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, AccessMode) )
  {
    active = -1073741727;
    goto LABEL_3;
  }
  v10 = 0;
  v24 = 0;
  switch ( a1 )
  {
    case 0:
      goto LABEL_16;
    case 1:
      goto LABEL_20;
    case 2:
      goto LABEL_19;
  }
  if ( a1 != 3 )
  {
    if ( a1 != 4 )
    {
      if ( a1 != 5 )
      {
        if ( a1 != 6 )
        {
          active = -1073741821;
          goto LABEL_3;
        }
        v7 = 40LL;
        goto LABEL_15;
      }
LABEL_19:
      v7 = 96LL;
LABEL_15:
      Size = v7;
      goto LABEL_16;
    }
LABEL_20:
    LODWORD(v7) = 80;
    Size = 80LL;
    v10 = 1;
    v11 = 4;
    v24 = 1;
    goto LABEL_17;
  }
LABEL_16:
  v11 = 8;
LABEL_17:
  if ( (unsigned int)v4 < (unsigned int)v7 )
  {
    active = -1073741820;
    goto LABEL_3;
  }
  if ( AccessMode )
  {
    v12 = a4;
    if ( a4 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( v10 )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((v11 - 1) & (unsigned int)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a2[v4] > 0x7FFFFFFF0000LL || &a2[v4] < a2 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      ProbeForWrite(a2, v4, v11);
    }
    memmove(Src, a2, (unsigned int)Size);
  }
  else
  {
    memmove(Src, a2, (unsigned int)v7);
  }
  switch ( a1 )
  {
    case 0:
      goto LABEL_61;
    case 1:
      goto LABEL_54;
    case 2:
      goto LABEL_45;
    case 3:
LABEL_61:
      if ( LODWORD(Src[0]) != 2 || !LOWORD(Src[1]) )
        goto LABEL_46;
      if ( AccessMode )
      {
        if ( (Src[2] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = Src[2] + LOWORD(Src[1]);
        if ( v16 > 0x7FFFFFFF0000LL || v16 < Src[2] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      active = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)&Src[1], &DestinationString);
      v21 = active;
      if ( active < 0 )
        goto LABEL_78;
      if ( a1 == 3 )
      {
        if ( !RtlValidSid(&Src[3]) )
          goto LABEL_49;
        HotPatchForUserSid = MiLoadHotPatchForUserSid((const void **)&DestinationString, &Src[3], (int *)&Src[11] + 1);
      }
      else
      {
        HotPatchForUserSid = MiLoadHotPatch(
                               (const void **)&DestinationString,
                               1,
                               (int *)&Src[11] + 1,
                               (unsigned int *)&Src[12]);
      }
      v21 = HotPatchForUserSid;
      active = HotPatchForUserSid;
      MiLogHotPatchManagement(a1, (__int64)Src, &DestinationString.Length, HotPatchForUserSid);
      v13 = Src;
      v23 = Size;
      goto LABEL_74;
    case 4:
LABEL_54:
      if ( LODWORD(Src[0]) != 1 )
        goto LABEL_46;
      if ( a1 == 4 )
      {
        if ( !RtlValidSid((char *)&Src[1] + 4) )
          goto LABEL_49;
        v15 = MiUnloadHotPatchForUserSid((char *)&Src[1] + 4, (int *)Src + 1);
      }
      else
      {
        v15 = MiUnloadHotPatch(HIDWORD(Src[0]), Src[1]);
      }
      v21 = v15;
      active = v15;
      MiLogHotPatchManagement(a1, (__int64)Src, 0LL, v15);
      v13 = 0LL;
      goto LABEL_74;
  }
  if ( a1 != 5 )
  {
    active = MiQueryProcessActivePatches((HANDLE)Src[1], (__int64 *)v29, &v23, (__int64)a2, v4, AccessMode);
    v21 = active;
    if ( active < 0 )
      goto LABEL_78;
    if ( v23 > (unsigned int)v4 )
      goto LABEL_42;
    v13 = v29[0];
    goto LABEL_74;
  }
LABEL_45:
  if ( LODWORD(Src[0]) != 2 )
  {
LABEL_46:
    active = -1073741811;
    goto LABEL_43;
  }
  v14 = 0LL;
  if ( a1 == 5 )
  {
    if ( !RtlValidSid((char *)Src + 4) )
    {
LABEL_49:
      active = -1073741704;
      goto LABEL_43;
    }
    v14 = (char *)Src + 4;
  }
  active = MiQueryLoadedPatches(v14, &P, &v23, (__int64)a2, v4);
  v21 = active;
  if ( active < 0 )
    goto LABEL_78;
  if ( v23 > (unsigned int)v4 )
  {
LABEL_42:
    active = -1073741789;
LABEL_43:
    v21 = active;
    goto LABEL_78;
  }
  v13 = P;
LABEL_74:
  if ( !v24 )
  {
    if ( AccessMode )
    {
      memmove(a2, v13, v23);
      v18 = (_DWORD *)a4;
      goto LABEL_79;
    }
    memmove(a2, v13, v23);
  }
LABEL_78:
  v18 = (_DWORD *)a4;
LABEL_79:
  if ( AccessMode )
  {
    v19 = (__int64)v18;
    if ( (unsigned __int64)v18 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    *v18 = v23;
    active = v21;
  }
  else
  {
    *v18 = v23;
  }
  RtlFreeAnsiString(&DestinationString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v29[0] )
    ExFreePoolWithTag(v29[0], 0);
  return (unsigned int)active;
}
