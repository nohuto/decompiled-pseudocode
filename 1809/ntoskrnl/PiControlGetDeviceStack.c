/*
 * XREFs of PiControlGetDeviceStack @ 0x14083CB14
 * Callers:
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1401367AC (IoGetLowerDeviceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, _WORD *a3, unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // r15d
  int v7; // edi
  UNICODE_STRING *v8; // r14
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  void *i; // rax
  PVOID *PoolWithTag; // rax
  PVOID *v12; // rcx
  void *v13; // rbx
  PVOID *v14; // r13
  unsigned int v15; // edx
  _WORD *v16; // r12
  int v17; // esi
  __int64 v18; // r15
  unsigned __int16 Length; // bx
  unsigned int v20; // r8d
  _WORD *v21; // r12
  unsigned int v22; // esi
  PVOID *v23; // rbx
  __int64 v24; // rax
  int v26; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+48h]

  v4 = *(_QWORD *)(a1 + 32);
  p_P = &P;
  v5 = a2;
  P = &P;
  v7 = 0;
  v8 = 0LL;
  DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v4, 0x43706E50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v7 = -1073741808;
    goto LABEL_45;
  }
  for ( i = IoGetAttachedDeviceReferenceWithTag(DeviceAttachmentBaseRefWithTag, 0x43706E50u);
        ;
        i = IoGetLowerDeviceObjectWithTag((__int64)v13, 0x43706E50u) )
  {
    v13 = i;
    if ( !i )
      break;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x47706E50u);
    if ( !PoolWithTag )
    {
      ObfDereferenceObjectWithTag(v13, 0x43706E50u);
      v7 = -1073741670;
      goto LABEL_45;
    }
    PoolWithTag[2] = v13;
    v12 = p_P;
    if ( *p_P != &P )
LABEL_49:
      __fastfail(3u);
    PoolWithTag[1] = p_P;
    *PoolWithTag = &P;
    *v12 = PoolWithTag;
    p_P = PoolWithTag;
  }
  v14 = (PVOID *)P;
  v15 = v5;
  v31 = v5;
  v16 = a3;
  v17 = 0;
  if ( P == &P )
  {
LABEL_37:
    if ( v16 && v15 >= 2 )
      *v16 = 0;
    v22 = v17 + 2;
    *a4 = v22;
    if ( !a3 || v22 > v5 )
      v7 = -1073741789;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v14[2] + 1);
    if ( v18 )
      break;
    RtlInitUnicodeString(&DestinationString, L"?");
LABEL_28:
    Length = DestinationString.Length;
LABEL_29:
    if ( v16 && v31 >= (unsigned __int64)Length + 2 )
    {
      memmove(v16, DestinationString.Buffer, Length);
      v21 = &v16[(unsigned __int64)Length >> 1];
      *v21 = 0;
      v16 = v21 + 1;
      v31 += -2 - Length;
    }
    v14 = (PVOID *)*v14;
    v17 += Length + 2;
    if ( v14 == &P )
      goto LABEL_35;
  }
  if ( *(_QWORD *)(v18 + 64) && *(_WORD *)(v18 + 56) >= 2u )
  {
    Length = _mm_cvtsi128_si32(*(__m128i *)(v18 + 56));
    DestinationString = *(UNICODE_STRING *)(v18 + 56);
    for ( DestinationString.Length = Length; Length >= 2u; DestinationString.Length = Length )
    {
      if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
        break;
      Length -= 2;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    Length = DestinationString.Length;
  }
  if ( Length )
    goto LABEL_29;
  v20 = 272;
  v26 = 272;
  if ( v8 )
  {
LABEL_22:
    v7 = ObQueryNameStringMode((char *)v18, (__int64)v8, v20, &v26, 0);
    if ( v7 >= 0 && v26 && v8->Length >= 2u )
    {
      DestinationString = *v8;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"?");
      v7 = 0;
    }
    goto LABEL_28;
  }
  v8 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x110uLL, 0x47706E50u);
  if ( v8 )
  {
    v20 = v26;
    goto LABEL_22;
  }
  v7 = -1073741670;
LABEL_35:
  if ( v7 >= 0 )
  {
    v15 = v31;
    v5 = a2;
    goto LABEL_37;
  }
LABEL_43:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_45:
  while ( 1 )
  {
    v23 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_49;
    v24 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_49;
    P = *(PVOID *)P;
    *(_QWORD *)(v24 + 8) = &P;
    ObfDereferenceObjectWithTag(v23[2], 0x43706E50u);
    ExFreePoolWithTag(v23, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  return (unsigned int)v7;
}
