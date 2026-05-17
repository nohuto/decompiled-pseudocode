/*
 * XREFs of sub_180086A04 @ 0x180086A04
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086610 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlSetOwnerSecurityDescriptor @ 0x180010010 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x180067010 (RtlEqualSid.c)
 *     RtlMakeSelfRelativeSD @ 0x180068080 (RtlMakeSelfRelativeSD.c)
 *     RtlGetAce @ 0x18006EE50 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x180072020 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x180078350 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180087090 (RtlSelfRelativeToAbsoluteSD2.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x18009F170 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x18009FAF0 (ZwSetSecurityObject.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180086A04(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *Heap; // rdi
  int DaclSecurityDescriptor; // esi
  unsigned int i; // r14d
  int Ace; // eax
  _BYTE *v9; // rsi
  char v10; // al
  __int64 v11; // r8
  void *ProcessHeap; // rcx
  int v14; // eax
  void *v15; // rax
  void *v16; // rsi
  int SelfRelativeSD; // r14d
  __int64 v18; // r8
  char *v19; // rax
  char *v20; // rsi
  unsigned int v21; // [rsp+30h] [rbp-29h] BYREF
  unsigned int Size; // [rsp+34h] [rbp-25h] BYREF
  bool Size_4; // [rsp+38h] [rbp-21h] BYREF
  bool Size_5; // [rsp+39h] [rbp-20h] BYREF
  char Size_6; // [rsp+3Ah] [rbp-1Fh] BYREF
  __int64 v26; // [rsp+40h] [rbp-19h] BYREF
  _BYTE *v27; // [rsp+48h] [rbp-11h] BYREF
  unsigned __int8 *v28; // [rsp+50h] [rbp-9h] BYREF
  __int16 v29; // [rsp+58h] [rbp-1h] BYREF
  int v30; // [rsp+5Ah] [rbp+1h]
  __int16 v31; // [rsp+5Eh] [rbp+5h]
  int v32; // [rsp+60h] [rbp+7h]
  int v33; // [rsp+64h] [rbp+Bh]
  __int16 v34; // [rsp+70h] [rbp+17h] BYREF
  int v35; // [rsp+72h] [rbp+19h]
  __int16 v36; // [rsp+76h] [rbp+1Dh]
  int v37; // [rsp+78h] [rbp+1Fh]

  v2 = 0;
  v26 = 0LL;
  if ( (unsigned int)ZwQuerySecurityObject(a1, 5LL, 0LL, 0LL, &Size) != -1073741789 )
    return 0LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = ZwQuerySecurityObject(a1, 5LL, Heap, Size, &Size);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor((__int64)Heap, &Size_4, &v26, &Size_5),
        DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor((__int64)Heap, &v28, &Size_6), DaclSecurityDescriptor < 0) )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    goto LABEL_24;
  }
  v35 = 0;
  v30 = 0;
  v34 = 257;
  v36 = 1280;
  v37 = 18;
  v29 = 513;
  v31 = 1280;
  v32 = 32;
  v33 = 544;
  if ( v28 && RtlEqualSid(v28, &v29) && Size_4 && v26 )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(v26, i, &v27);
      v9 = v27;
      if ( Ace < 0 )
        v9 = 0LL;
      v27 = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v34) )
      {
        v10 = v9[1];
        if ( (v10 & 1) == 0 || (v10 & 2) == 0 )
        {
          v9[1] = v10 | 3;
          v14 = ZwSetSecurityObject(a1, 4LL, Heap);
          goto LABEL_26;
        }
        goto LABEL_18;
      }
    }
  }
  v21 = Size;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2(Heap, &v21) != -1073741789 )
    goto LABEL_32;
  v15 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
  v16 = v15;
  if ( !v15 )
  {
LABEL_38:
    v2 = -1073741670;
    goto LABEL_18;
  }
  memmove(v15, Heap, Size);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  Size = v21;
  Heap = v16;
  SelfRelativeSD = RtlSelfRelativeToAbsoluteSD2(v16, &Size);
  if ( SelfRelativeSD >= 0 )
  {
LABEL_32:
    v14 = RtlSetOwnerSecurityDescriptor((__int64)Heap, (__int64)&v29, 0);
    if ( v14 < 0 || (v14 = RtlSetDaclSecurityDescriptor((__int64)Heap, 1, a2, 0), v14 < 0) )
    {
LABEL_26:
      v2 = v14;
LABEL_18:
      v11 = (__int64)Heap;
      goto LABEL_19;
    }
    v21 = 0;
    DaclSecurityDescriptor = RtlMakeSelfRelativeSD((int *)Heap, 0LL, &v21);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( DaclSecurityDescriptor == -1073741789 )
    {
      v19 = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, v21);
      v20 = v19;
      if ( v19 )
      {
        SelfRelativeSD = RtlMakeSelfRelativeSD((int *)Heap, v19, &v21);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        v18 = (__int64)v20;
        if ( SelfRelativeSD < 0 )
          goto LABEL_31;
        Size = v21;
        v2 = ZwSetSecurityObject(a1, 5LL, v20);
        v11 = (__int64)v20;
LABEL_19:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
        return v2;
      }
      goto LABEL_38;
    }
LABEL_24:
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v18 = (__int64)v16;
LABEL_31:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
  return (unsigned int)SelfRelativeSD;
}
