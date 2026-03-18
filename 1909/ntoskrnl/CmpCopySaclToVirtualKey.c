/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x14082D7AC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14082C7C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400C9B30 (RtlGetDaclSecurityDescriptor.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DD2F0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140658920 (RtlGetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14069D1F0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14069D250 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14069E970 (RtlSetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406D1530 (RtlGetOwnerSecurityDescriptor.c)
 *     CmpFreeSecurityDescriptor @ 0x1406DBF24 (CmpFreeSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406FFFD0 (RtlGetGroupSecurityDescriptor.c)
 *     CmpAssignSecurityDescriptor @ 0x14082D5FC (CmpAssignSecurityDescriptor.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  __int64 v9; // rdx
  __int64 v10; // rax
  int SaclSecurityDescriptor; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  _WORD *v15; // rsi
  PACL Sacl; // [rsp+30h] [rbp-50h] BYREF
  PSID Owner; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-38h] BYREF
  _WORD SecurityDescriptor[24]; // [rsp+50h] [rbp-30h] BYREF
  void *SaclDefaulted; // [rsp+C0h] [rbp+40h] BYREF
  BOOLEAN SaclPresent; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+58h]

  v23 = a4;
  v5 = *(_DWORD *)(a4 + 44);
  v19[1] = 0;
  v19[0] = -1;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v9 = *(unsigned int *)(a2 + 44);
  v18[0] = -1;
  Sacl = 0LL;
  v18[1] = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, v9, v19);
  if ( !v10 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v10 + 20),
                             &SaclPresent,
                             &Sacl,
                             (PBOOLEAN)&SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v5, v18);
      v14 = v13;
      if ( v13 )
      {
        v15 = (_WORD *)(v13 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v13 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          SecurityDescriptor[1] = v15[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(
                                     SecurityDescriptor,
                                     SaclPresent,
                                     Sacl,
                                     (BOOLEAN)SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v15, &Owner, (PBOOLEAN)&SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, (BOOLEAN)SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v15, &Owner, (PBOOLEAN)&SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(
                                             SecurityDescriptor,
                                             Owner,
                                             (BOOLEAN)SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                               v15,
                                               &SaclPresent,
                                               &Sacl,
                                               (PBOOLEAN)&SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 (BOOLEAN)SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        SaclSecurityDescriptor = SeCaptureSecurityDescriptor(
                                                   (__int64)SecurityDescriptor,
                                                   0,
                                                   PagedPool,
                                                   1,
                                                   &SaclDefaulted);
                        if ( SaclSecurityDescriptor >= 0 )
                        {
                          if ( (unsigned __int8)HvMarkCellDirty(a3, v5, 0LL)
                            && (unsigned __int8)HvMarkCellDirty(a3, *(unsigned int *)(v14 + 4), 0LL)
                            && (unsigned __int8)HvMarkCellDirty(a3, *(unsigned int *)(v14 + 8), 0LL) )
                          {
                            CmpFreeSecurityDescriptor(a3, a5);
                            SaclSecurityDescriptor = CmpAssignSecurityDescriptor(a3, a5, v23, SaclDefaulted, 0);
                            SeReleaseSecurityDescriptor(SaclDefaulted, 0, 1);
                          }
                          else
                          {
                            SeReleaseSecurityDescriptor(SaclDefaulted, 0, 1);
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v18);
      }
    }
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v19);
  return (unsigned int)SaclSecurityDescriptor;
}
