/*
 * XREFs of WmipOpenBlock @ 0x1405C0778
 * Callers:
 *     WmipIoControl @ 0x140668340 (WmipIoControl.c)
 *     IoWMIOpenBlock @ 0x14070B840 (IoWMIOpenBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     WmipEnterSMCritSection @ 0x14032BB58 (WmipEnterSMCritSection.c)
 *     WmipLeaveSMCritSection @ 0x14032BB84 (WmipLeaveSMCritSection.c)
 *     WmipFindGEByGuid @ 0x1405C0690 (WmipFindGEByGuid.c)
 *     WmipOpenGuidObject @ 0x1405C0B60 (WmipOpenGuidObject.c)
 *     WmipEnableCollectOrEvent @ 0x1406D25EC (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406DA72C (WmipIsQuerySetGuid.c)
 *     WmipAllocGuidEntry @ 0x140774E74 (WmipAllocGuidEntry.c)
 */

__int64 __fastcall WmipOpenBlock(int a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rax
  char v6; // r14
  __int64 v8; // rcx
  int v9; // edi
  char *v10; // rbx
  _QWORD *GEByGuid; // rdi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  PVOID Object[3]; // [rsp+20h] [rbp-18h] BYREF

  Object[0] = 0LL;
  v5 = (unsigned int)(a1 - 2244872);
  v6 = a2;
  if ( (unsigned int)v5 > 0x38 )
    return (unsigned int)-1073741649;
  v8 = 0x110000000000001LL;
  if ( !_bittest64(&v8, v5) )
    return (unsigned int)-1073741649;
  v9 = WmipOpenGuidObject(a3, a2, a4, Object);
  if ( v9 >= 0 )
  {
    v10 = (char *)Object[0];
    *((_DWORD *)Object[0] + 16) = a1;
    if ( a1 == 2244872 )
    {
      *((_DWORD *)v10 + 41) |= 1u;
    }
    else
    {
      GEByGuid = WmipFindGEByGuid((_QWORD *)v10 + 3, 0);
      WmipEnterSMCritSection();
      if ( GEByGuid )
      {
        v12 = (_QWORD *)GEByGuid[6];
        v13 = v10 + 40;
        if ( (_QWORD *)*v12 != GEByGuid + 5 )
          goto LABEL_28;
        *v13 = GEByGuid + 5;
        *((_QWORD *)v10 + 6) = v12;
        *v12 = v13;
        GEByGuid[6] = v13;
      }
      *((_QWORD *)v10 + 7) = GEByGuid;
      WmipLeaveSMCritSection();
      if ( a1 == 2244924 )
      {
        if ( !GEByGuid || *((_DWORD *)GEByGuid + 9) == a1 - 2244924 || !(unsigned __int8)WmipIsQuerySetGuid(GEByGuid) )
        {
          v9 = -1073741163;
          goto LABEL_17;
        }
LABEL_12:
        if ( !v6 )
          *((_DWORD *)v10 + 41) |= 2u;
        if ( GEByGuid )
        {
LABEL_15:
          v9 = WmipEnableCollectOrEvent((ULONG_PTR)GEByGuid);
          if ( v9 < 0 )
            goto LABEL_17;
          goto LABEL_16;
        }
        WmipEnterSMCritSection();
        v15 = WmipAllocGuidEntry();
        GEByGuid = (_QWORD *)v15;
        if ( v15 )
        {
          *(_OWORD *)(v15 + 72) = *(_OWORD *)(v10 + 24);
          v16 = (_QWORD *)WmipGEHeadPtr;
          v17 = *(_QWORD *)WmipGEHeadPtr;
          if ( *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) == WmipGEHeadPtr )
          {
            *GEByGuid = v17;
            GEByGuid[1] = v16;
            *(_QWORD *)(v17 + 8) = GEByGuid;
            *v16 = GEByGuid;
            v18 = v10 + 40;
            v19 = (_QWORD *)GEByGuid[6];
            if ( (_QWORD *)*v19 == GEByGuid + 5 )
            {
              *v18 = GEByGuid + 5;
              *((_QWORD *)v10 + 6) = v19;
              *v19 = v18;
              GEByGuid[6] = v18;
              *((_QWORD *)v10 + 7) = GEByGuid;
              WmipLeaveSMCritSection();
              goto LABEL_15;
            }
          }
LABEL_28:
          __fastfail(3u);
        }
        WmipLeaveSMCritSection();
        v9 = -1073741670;
LABEL_17:
        if ( v10 )
          ObfDereferenceObject(v10);
        return (unsigned int)v9;
      }
      if ( a1 == 2244928 )
        goto LABEL_12;
    }
LABEL_16:
    *a5 = v10;
    v10 = 0LL;
    v9 = 0;
    goto LABEL_17;
  }
  return (unsigned int)v9;
}
