/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x140735154
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

int __fastcall WmipEnableCollectionForNewGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[6]; // [rsp+20h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    WmipEnterSMCritSection();
    if ( *((_DWORD *)v5 + 22) )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        *((_DWORD *)v5 + 4) |= 2u;
        WmipLeaveSMCritSection();
        v7 = *(_QWORD *)(a2 + 64);
        HIDWORD(v12[2]) = 0;
        v12[5] = 0LL;
        *(_OWORD *)((char *)v12 + 4) = 0LL;
        LOBYTE(v8) = 4;
        LODWORD(v12[0]) = 48;
        *(_OWORD *)&v12[3] = *(_OWORD *)a1;
        ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))WmipDeliverWnodeToDS)(v8, v7, v12, 48LL);
        WmipEnterSMCritSection();
        if ( *((_DWORD *)v5 + 22) )
          *((_DWORD *)v5 + 4) &= ~2u;
        else
          WmipDoDisableRequest(v5, 1, 2LL);
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      WmipLeaveSMCritSection();
      v9 = *(_QWORD *)(a2 + 64);
      HIDWORD(v12[2]) = 0;
      v12[5] = 0LL;
      *(_OWORD *)((char *)v12 + 4) = 0LL;
      LOBYTE(v10) = 6;
      LODWORD(v12[0]) = 48;
      *(_OWORD *)&v12[3] = *(_OWORD *)a1;
      ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))WmipDeliverWnodeToDS)(v10, v9, v12, 48LL);
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
