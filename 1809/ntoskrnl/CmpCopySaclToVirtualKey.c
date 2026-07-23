/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x1407F5D50
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     CmpDereferenceSecurityNode @ 0x1401B3530 (CmpDereferenceSecurityNode.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFreeSecurityDescriptor @ 0x1405B034C (CmpFreeSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14060ECC0 (RtlGetSaclSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140655450 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140656770 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1406AE460 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406CD310 (RtlGetGroupSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406D1DC8 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  unsigned int v10; // r14d
  __int64 v11; // rax
  int SaclSecurityDescriptor; // ebx
  __int64 v14; // rax
  __int64 v15; // r13
  _WORD *v16; // rsi
  int v17; // eax
  void *v18; // rsi
  __int64 v19; // r14
  unsigned int v20; // [rsp+30h] [rbp-41h] BYREF
  PACL Sacl; // [rsp+38h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-31h]
  PSID Owner; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v24[2]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v25[2]; // [rsp+58h] [rbp-19h] BYREF
  void *v26; // [rsp+60h] [rbp-11h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+68h] [rbp-9h] BYREF
  __int16 v28; // [rsp+6Ah] [rbp-7h]
  BOOLEAN SaclDefaulted; // [rsp+D0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+77h]

  v31 = a4;
  v5 = *(_DWORD *)(a4 + 44);
  v7 = *(unsigned int *)(a2 + 44);
  Sacl = 0LL;
  v26 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v10 = -1;
  v25[0] = -1;
  v25[1] = 0;
  v24[0] = -1;
  v24[1] = 0;
  v20 = -1;
  LODWORD(BugCheckParameter3) = v5;
  v11 = v9(a1, v7, v25);
  if ( !v11 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v11 + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v5, v24);
      v15 = v14;
      if ( v14 )
      {
        v16 = (_WORD *)(v14 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v14 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          v28 = v16[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, Sacl, SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v16, &Owner, &SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v16, &Owner, &SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v16, &SaclPresent, &Sacl, &SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v26);
                        v18 = v26;
                        SaclSecurityDescriptor = v17;
                        if ( v17 >= 0 )
                        {
                          if ( HvpMarkCellDirty(a3, (unsigned int)BugCheckParameter3, 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v15 + 4), 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v15 + 8), 0) )
                          {
                            v19 = v31;
                            SaclSecurityDescriptor = CmpGetSecurityDescriptorNode(a3, a5, v31, v18, 0, &v20);
                            if ( SaclSecurityDescriptor < 0 )
                            {
                              v10 = v20;
                            }
                            else
                            {
                              CmpFreeSecurityDescriptor(a3, a5);
                              *(_DWORD *)(v19 + 44) = v20;
                              v10 = -1;
                            }
                          }
                          else
                          {
                            SeReleaseSecurityDescriptor(v18, 0, 1);
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                        if ( v18 )
                          SeReleaseSecurityDescriptor(v18, 0, 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v24);
      }
    }
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
  if ( v10 != -1 )
    CmpDereferenceSecurityNode(a3, v10);
  return (unsigned int)SaclSecurityDescriptor;
}
