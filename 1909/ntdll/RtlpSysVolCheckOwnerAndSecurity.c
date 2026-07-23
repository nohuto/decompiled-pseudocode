/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1800870A4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086CB0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlSetOwnerSecurityDescriptor @ 0x180010010 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x180067260 (RtlEqualSid.c)
 *     RtlMakeSelfRelativeSD @ 0x1800682D0 (RtlMakeSelfRelativeSD.c)
 *     RtlGetAce @ 0x18006F0A0 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1800725C0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800787D0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180087730 (RtlSelfRelativeToAbsoluteSD2.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQuerySecurityObject @ 0x18009F920 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x1800A02A0 (NtSetSecurityObject.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned __int32 v2; // ebx
  PVOID Heap; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  ULONG i; // r14d
  NTSTATUS v8; // eax
  _BYTE *v9; // rsi
  char v10; // al
  void *v11; // r8
  void *ProcessHeap; // rcx
  NTSTATUS v14; // eax
  PVOID v15; // rax
  void *v16; // rsi
  NTSTATUS SelfRelativeSD; // r14d
  void *v18; // r8
  PVOID v19; // rax
  void *v20; // rsi
  ULONG BufferSize; // [rsp+30h] [rbp-29h] BYREF
  ULONG Length; // [rsp+34h] [rbp-25h] BYREF
  BOOLEAN DaclPresent; // [rsp+38h] [rbp-21h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+39h] [rbp-20h] BYREF
  BOOLEAN OwnerDefaulted[6]; // [rsp+3Ah] [rbp-1Fh] BYREF
  PACL Dacla; // [rsp+40h] [rbp-19h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-11h] BYREF
  PSID Owner; // [rsp+50h] [rbp-9h] BYREF
  __int16 Sid2; // [rsp+58h] [rbp-1h] BYREF
  int v30; // [rsp+5Ah] [rbp+1h]
  __int16 v31; // [rsp+5Eh] [rbp+5h]
  int v32; // [rsp+60h] [rbp+7h]
  int v33; // [rsp+64h] [rbp+Bh]
  __int16 v34; // [rsp+70h] [rbp+17h] BYREF
  int v35; // [rsp+72h] [rbp+19h]
  __int16 v36; // [rsp+76h] [rbp+1Dh]
  int v37; // [rsp+78h] [rbp+1Fh]

  v2 = 0;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, Heap, Length, &Length);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Heap, &DaclPresent, &Dacla, &DaclDefaulted),
        DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &Owner, OwnerDefaulted), DaclSecurityDescriptor < 0) )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    goto LABEL_24;
  }
  v35 = 0;
  v30 = 0;
  v34 = 257;
  v36 = 1280;
  v37 = 18;
  Sid2 = 513;
  v31 = 1280;
  v32 = 32;
  v33 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      v8 = RtlGetAce(Dacla, i, &Ace);
      v9 = Ace;
      if ( v8 < 0 )
        v9 = 0LL;
      Ace = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v34) )
      {
        v10 = v9[1];
        if ( (v10 & 1) == 0 || (v10 & 2) == 0 )
        {
          v9[1] = v10 | 3;
          v14 = NtSetSecurityObject(Handle, 4u, Heap);
          goto LABEL_26;
        }
        goto LABEL_18;
      }
    }
  }
  BufferSize = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(Heap, &BufferSize) != -1073741789 )
    goto LABEL_32;
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferSize);
  v16 = v15;
  if ( !v15 )
  {
LABEL_38:
    v2 = -1073741670;
    goto LABEL_18;
  }
  memmove(v15, Heap, Length);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  Length = BufferSize;
  Heap = v16;
  SelfRelativeSD = RtlSelfRelativeToAbsoluteSD2(v16, &Length);
  if ( SelfRelativeSD >= 0 )
  {
LABEL_32:
    v14 = RtlSetOwnerSecurityDescriptor(Heap, &Sid2, 0);
    if ( v14 < 0 || (v14 = RtlSetDaclSecurityDescriptor(Heap, 1u, Dacl, 0), v14 < 0) )
    {
LABEL_26:
      v2 = v14;
LABEL_18:
      v11 = Heap;
      goto LABEL_19;
    }
    BufferSize = 0;
    DaclSecurityDescriptor = RtlMakeSelfRelativeSD(Heap, 0LL, &BufferSize);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( DaclSecurityDescriptor == -1073741789 )
    {
      v19 = RtlAllocateHeap(ProcessHeap, 0, BufferSize);
      v20 = v19;
      if ( v19 )
      {
        SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, v19, &BufferSize);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        v18 = v20;
        if ( SelfRelativeSD < 0 )
          goto LABEL_31;
        Length = BufferSize;
        v2 = NtSetSecurityObject(Handle, 5u, v20);
        v11 = v20;
LABEL_19:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        return v2;
      }
      goto LABEL_38;
    }
LABEL_24:
    RtlFreeHeap(ProcessHeap, 0, Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v18 = v16;
LABEL_31:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  return (unsigned int)SelfRelativeSD;
}
