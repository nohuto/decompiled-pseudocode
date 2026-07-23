/*
 * XREFs of ObpGetObjectSecurity @ 0x1405CA580
 * Callers:
 *     ObCheckObjectAccess @ 0x1405968F0 (ObCheckObjectAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1405C93B0 (ObCheckCreateObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1405CA050 (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     MiAllowImageMap @ 0x1405F58B8 (MiAllowImageMap.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     ObGetObjectSecurity @ 0x1407021D0 (ObGetObjectSecurity.c)
 *     PopBootStatAccessCheck @ 0x140754560 (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x140862B84 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14088ABC8 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408C4280 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpReferenceSecurityDescriptor @ 0x1405CA750 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObpGetObjectSecurity(__int64 a1, PVOID *a2, _BYTE *a3, char a4)
{
  ULONG_PTR v8; // r14
  PVOID PoolWithTag; // rax
  int v11; // r12d
  int v12; // eax
  SIZE_T v13; // rdx
  PVOID v14; // rax
  int v15; // [rsp+40h] [rbp-48h]
  _DWORD v16[4]; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+8h] BYREF

  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(_UNKNOWN **)(v8 + 152) == &SeDefaultObjectMethod )
  {
    *a2 = (PVOID)ObpReferenceSecurityDescriptor(a1 - 48);
    *a3 = 0;
    if ( *a2 || (*(_BYTE *)(v8 + 66) & 8) == 0 && (*(_BYTE *)(a1 - 22) & 2) == 0 )
      return 0LL;
LABEL_17:
    KeBugCheckEx(0x189u, a1 - 48, v8, 1uLL, 0LL);
  }
  v16[0] = 447;
  LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *a3 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, __int64, _DWORD, ULONG_PTR, char))(v8 + 152))(
          a1,
          1LL,
          v16,
          *a2,
          &NumberOfBytes,
          a1 - 8,
          *(_DWORD *)(v8 + 100),
          v8 + 76,
          a4);
  if ( v11 == -1073741789 )
  {
    ExFreePoolWithTag(*a2, 0);
    v12 = NumberOfBytes;
    v13 = (unsigned int)NumberOfBytes;
    *a3 = 0;
    LODWORD(ObpDefaultSecurityDescriptorLength) = v12;
    v14 = ExAllocatePoolWithTag(PagedPool, v13, 0x7153624Fu);
    *a2 = v14;
    if ( v14 )
    {
      *a3 = 1;
      LOBYTE(v15) = a4;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, __int64, _DWORD, ULONG_PTR, int))(v8 + 152))(
              a1,
              1LL,
              v16,
              *a2,
              &NumberOfBytes,
              a1 - 8,
              *(_DWORD *)(v8 + 100),
              v8 + 76,
              v15);
      goto LABEL_6;
    }
    return 3221225626LL;
  }
LABEL_6:
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a3 = 0;
  }
  else if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
  {
    goto LABEL_17;
  }
  return (unsigned int)v11;
}
