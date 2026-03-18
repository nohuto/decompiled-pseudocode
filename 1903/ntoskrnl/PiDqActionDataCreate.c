/*
 * XREFs of PiDqActionDataCreate @ 0x1405B7104
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1405B6D48 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PiDqActionDataFree @ 0x1405B72AC (PiDqActionDataFree.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1405B7424 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqGetPnpObjectType @ 0x1405BB258 (PiDqGetPnpObjectType.c)
 *     PnpAllocatePWSTR @ 0x1405BC774 (PnpAllocatePWSTR.c)
 *     PiDqActionDataGetChangedProperties @ 0x14071DE78 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140864E20 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408650AC (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 */

__int64 __fastcall PiDqActionDataCreate(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int PWSTR; // ebx
  _QWORD *v8; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi
  _QWORD *v11; // r12
  unsigned int PnpObjectType; // ebp
  int v13; // r8d
  __int64 v14; // r9
  int v15; // r10d
  int v16; // eax
  bool v17; // zf
  __int64 v18; // r8
  int RequestedProperties; // eax
  __int64 v21; // r9
  int AllPropertiesInBestLanguage; // eax
  _DWORD v23[18]; // [rsp+50h] [rbp-48h] BYREF

  PWSTR = 0;
  v23[0] = 0;
  *a4 = 0LL;
  v8 = a4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x58706E50u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x28uLL);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v11 = v10 + 4;
    *v10 = *(_DWORD *)(a3 + 32);
    v10[2] = *(_DWORD *)(a1 + 16);
    PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a3 + 16) + 16LL));
    if ( PWSTR >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 40) & 2) == 0 || (unsigned int)(*v10 - 1) > 1 )
        goto LABEL_10;
      PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(a1 + 16));
      v16 = *(_DWORD *)(a1 + 40);
      if ( (v16 & 2) == 0 )
      {
        LOBYTE(v14) = v16 & 4;
        v17 = v13 == 1;
        v18 = *v11;
        if ( v17 )
          RequestedProperties = PiDqActionDataGetRequestedProperties(
                                  a2,
                                  PnpObjectType,
                                  v18,
                                  v14,
                                  *(_QWORD *)(a1 + 56),
                                  *(_QWORD *)(a1 + 72),
                                  v15,
                                  v10 + 8,
                                  v10 + 6);
        else
          RequestedProperties = PiDqActionDataGetChangedProperties(
                                  a2,
                                  PnpObjectType,
                                  v18,
                                  v14,
                                  *(_QWORD *)(a1 + 56),
                                  *(_QWORD *)(a1 + 72),
                                  v15,
                                  *(_QWORD *)(a3 + 24),
                                  (__int64)(v10 + 8),
                                  (__int64)(v10 + 6));
        goto LABEL_9;
      }
      if ( v13 != 1 )
      {
        LOBYTE(v14) = v16 & 4;
        RequestedProperties = PiDqActionDataGetChangedProperties(
                                a2,
                                PnpObjectType,
                                *v11,
                                v14,
                                *(_QWORD *)(a1 + 56),
                                0LL,
                                0,
                                *(_QWORD *)(a3 + 24),
                                (__int64)(v10 + 8),
                                (__int64)(v10 + 6));
LABEL_9:
        v8 = a4;
        PWSTR = RequestedProperties;
        goto LABEL_10;
      }
      v21 = *v11;
      if ( (v16 & 4) != 0 )
      {
        PWSTR = PiDqActionDataGetAllPropertiesInBestLanguage(
                  a2,
                  0LL,
                  PnpObjectType,
                  v21,
                  *(_QWORD *)(a1 + 56),
                  v10 + 8,
                  v10 + 6,
                  v23);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInBestLanguage(
                                          a2,
                                          1LL,
                                          PnpObjectType,
                                          *v11,
                                          *(_QWORD *)(a1 + 56),
                                          v10 + 8,
                                          v10 + 6,
                                          v23);
          goto LABEL_28;
        }
      }
      else
      {
        PWSTR = PiDqActionDataGetAllPropertiesInAllLanguages(
                  a2,
                  0,
                  PnpObjectType,
                  v21,
                  (__int64)(v10 + 8),
                  (__int64)(v10 + 6),
                  (__int64)v23);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInAllLanguages(
                                          a2,
                                          1,
                                          PnpObjectType,
                                          *v11,
                                          (__int64)(v10 + 8),
                                          (__int64)(v10 + 6),
                                          (__int64)v23);
LABEL_28:
          v8 = a4;
          PWSTR = AllPropertiesInBestLanguage;
          if ( AllPropertiesInBestLanguage == -1073741772 )
            PWSTR = 0;
          goto LABEL_10;
        }
      }
    }
LABEL_31:
    PiDqActionDataFree(v10);
    return (unsigned int)PWSTR;
  }
  v10[2] = 1;
LABEL_10:
  if ( PWSTR < 0 || *v10 == 2 && !v10[6] )
    goto LABEL_31;
  *v8 = v10;
  return (unsigned int)PWSTR;
}
