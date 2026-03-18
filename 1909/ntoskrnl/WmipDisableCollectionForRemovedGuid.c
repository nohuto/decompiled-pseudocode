/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x140735738
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140734FA8 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14077DAB4 (WmipUpdateDataSource.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WmipEnterSMCritSection @ 0x14032B5A8 (WmipEnterSMCritSection.c)
 *     WmipLeaveSMCritSection @ 0x14032B5D4 (WmipLeaveSMCritSection.c)
 *     WmipFindGEByGuid @ 0x1405C0B60 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x140696B78 (WmipUnreferenceEntry.c)
 *     WmipDoDisableRequest @ 0x14072C09C (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x14073CFBC (WmipReleaseCollectionEnabled.c)
 *     WmipDeliverWnodeToDS @ 0x1408F1530 (WmipDeliverWnodeToDS.c)
 */

int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[6]; // [rsp+20h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    WmipEnterSMCritSection();
    if ( *((_DWORD *)v5 + 22) && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      *((_DWORD *)v5 + 4) |= 2u;
      WmipLeaveSMCritSection();
      v6 = *(_QWORD *)(a2 + 64);
      HIDWORD(v11[2]) = 0;
      v11[5] = 0LL;
      *(_OWORD *)((char *)v11 + 4) = 0LL;
      LOBYTE(v7) = 5;
      LODWORD(v11[0]) = 48;
      *(_OWORD *)&v11[3] = *(_OWORD *)a1;
      ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))WmipDeliverWnodeToDS)(v7, v6, v11, 48LL);
      WmipEnterSMCritSection();
      if ( *((_DWORD *)v5 + 22) )
        *((_DWORD *)v5 + 4) &= ~2u;
      else
        WmipDoDisableRequest(v5, 1, 2LL);
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      WmipLeaveSMCritSection();
      v8 = *(_QWORD *)(a2 + 64);
      HIDWORD(v11[2]) = 0;
      v11[5] = 0LL;
      *(_OWORD *)((char *)v11 + 4) = 0LL;
      LOBYTE(v9) = 7;
      LODWORD(v11[0]) = 48;
      *(_OWORD *)&v11[3] = *(_OWORD *)a1;
      ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))WmipDeliverWnodeToDS)(v9, v8, v11, 48LL);
      WmipEnterSMCritSection();
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0, 4LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = WmipLeaveSMCritSection();
  }
  return (int)GEByGuid;
}
