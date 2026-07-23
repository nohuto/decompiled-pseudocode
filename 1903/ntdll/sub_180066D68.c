/*
 * XREFs of sub_180066D68 @ 0x180066D68
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x180067010 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x18009EB30 (ZwOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x18009ED10 (ZwPrivilegeCheck.c)
 */

char __fastcall sub_180066D68(void *a1, void *a2, char a3, NTSTATUS *a4)
{
  char v4; // bl
  PVOID ProcessHeap; // r13
  NTSTATUS v9; // eax
  NTSTATUS v11; // eax
  PSID *Heap; // r14
  unsigned int v13; // edi
  PSID *v14; // r15
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  BOOLEAN v17; // cl
  BOOLEAN Result[4]; // [rsp+30h] [rbp-89h] BYREF
  ULONG TokenInformationLength; // [rsp+34h] [rbp-85h] BYREF
  HANDLE TokenHandle[2]; // [rsp+38h] [rbp-81h] BYREF
  HANDLE ClientToken; // [rsp+48h] [rbp-71h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-69h] BYREF
  PSID TokenInformation[12]; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  ClientToken = a1;
  if ( !a2 )
  {
LABEL_32:
    *a4 = -1073741734;
    return 0;
  }
  if ( !a3 )
  {
    TokenHandle[0] = a1;
    goto LABEL_4;
  }
  v15 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, TokenHandle);
  *a4 = v15;
  if ( v15 >= 0 )
  {
LABEL_4:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = ZwQueryInformationToken(TokenHandle[0], 1u, TokenInformation, 0x54u, &TokenInformationLength);
    *a4 = v9;
    if ( v9 < 0 )
      goto LABEL_27;
    if ( RtlEqualSid(a2, TokenInformation[0]) )
    {
      if ( a3 )
        ZwClose(TokenHandle[0]);
      return 1;
    }
    v11 = ZwQueryInformationToken(TokenHandle[0], 2u, 0LL, 0, &TokenInformationLength);
    *a4 = v11;
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741789 )
      goto LABEL_27;
    Heap = (PSID *)RtlAllocateHeap(ProcessHeap, 0, TokenInformationLength);
    if ( !Heap )
    {
      *a4 = -1073741801;
LABEL_27:
      if ( a3 )
        ZwClose(TokenHandle[0]);
      return 0;
    }
    *a4 = ZwQueryInformationToken(TokenHandle[0], 2u, Heap, TokenInformationLength, &TokenInformationLength);
    if ( a3 )
      ZwClose(TokenHandle[0]);
    if ( *a4 < 0 )
    {
LABEL_19:
      RtlFreeHeap(ProcessHeap, 0, Heap);
      return v4;
    }
    v13 = 0;
    if ( *(_DWORD *)Heap )
    {
      v14 = Heap + 1;
      while ( !RtlEqualSid(a2, *v14) )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(_DWORD *)Heap )
          goto LABEL_29;
      }
      if ( ((__int64)Heap[2 * v13 + 2] & 0x18) == 8 )
      {
        v4 = 1;
        goto LABEL_19;
      }
    }
LABEL_29:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    TokenHandle[1] = (HANDLE)18;
    RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v16 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Result);
    v17 = Result[0];
    if ( v16 < 0 )
      v17 = 0;
    if ( v17 )
      return 1;
    goto LABEL_32;
  }
  return 0;
}
