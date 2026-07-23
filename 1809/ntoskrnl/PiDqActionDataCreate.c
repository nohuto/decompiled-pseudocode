/*
 * XREFs of PiDqActionDataCreate @ 0x140592404
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140592044 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140591E50 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataFree @ 0x1405925B4 (PiDqActionDataFree.c)
 *     PiDqGetPnpObjectType @ 0x140596A78 (PiDqGetPnpObjectType.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DC4E4 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14082B86C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14082BAF8 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 */

__int64 __fastcall PiDqActionDataCreate(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int PWSTR; // ebx
  _QWORD *v8; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi
  _QWORD *v11; // r12
  unsigned int PnpObjectType; // eax
  int v13; // r8d
  unsigned int v14; // r9d
  int v15; // ecx
  unsigned int v16; // ebp
  char v17; // cl
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // r8
  int RequestedProperties; // eax
  __int64 v23; // r9
  int AllPropertiesInBestLanguage; // eax
  __int64 v25; // [rsp+28h] [rbp-70h]
  unsigned int v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  _DWORD v30[18]; // [rsp+50h] [rbp-48h] BYREF

  PWSTR = 0;
  v30[0] = 0;
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
      v15 = *(_DWORD *)(a1 + 40);
      v16 = PnpObjectType;
      if ( (v15 & 2) == 0 )
      {
        v17 = v15 & 4;
        v18 = PnpObjectType;
        v19 = v13 == 1;
        v20 = *v11;
        if ( v19 )
        {
          RequestedProperties = PiDqActionDataGetRequestedProperties(
                                  a2,
                                  PnpObjectType,
                                  v20,
                                  v17,
                                  *(const wchar_t **)(a1 + 56),
                                  *(_QWORD *)(a1 + 72),
                                  v14,
                                  (_QWORD *)v10 + 4,
                                  v10 + 6);
LABEL_9:
          v8 = a4;
          PWSTR = RequestedProperties;
          goto LABEL_10;
        }
        v29 = (__int64)(v10 + 6);
        v28 = (__int64)(v10 + 8);
        v27 = *(_QWORD *)(a3 + 24);
        v26 = v14;
        v25 = *(_QWORD *)(a1 + 72);
LABEL_18:
        LOBYTE(v14) = v17;
        RequestedProperties = PiDqActionDataGetChangedProperties(
                                a2,
                                v18,
                                v20,
                                v14,
                                *(_QWORD *)(a1 + 56),
                                v25,
                                v26,
                                v27,
                                v28,
                                v29);
        goto LABEL_9;
      }
      if ( v13 != 1 )
      {
        v17 = v15 & 4;
        v20 = *v11;
        v18 = PnpObjectType;
        v29 = (__int64)(v10 + 6);
        v28 = (__int64)(v10 + 8);
        v27 = *(_QWORD *)(a3 + 24);
        v26 = 0;
        v25 = 0LL;
        goto LABEL_18;
      }
      v23 = *v11;
      if ( (v15 & 4) != 0 )
      {
        PWSTR = PiDqActionDataGetAllPropertiesInBestLanguage(
                  a2,
                  0LL,
                  PnpObjectType,
                  v23,
                  *(_QWORD *)(a1 + 56),
                  v10 + 8,
                  v10 + 6,
                  v30);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInBestLanguage(
                                          a2,
                                          1LL,
                                          v16,
                                          *v11,
                                          *(_QWORD *)(a1 + 56),
                                          v10 + 8,
                                          v10 + 6,
                                          v30);
          goto LABEL_28;
        }
      }
      else
      {
        PWSTR = PiDqActionDataGetAllPropertiesInAllLanguages(
                  a2,
                  0,
                  PnpObjectType,
                  v23,
                  (__int64)(v10 + 8),
                  (__int64)(v10 + 6),
                  (__int64)v30);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInAllLanguages(
                                          a2,
                                          1,
                                          v16,
                                          *v11,
                                          (__int64)(v10 + 8),
                                          (__int64)(v10 + 6),
                                          (__int64)v30);
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
  *v10 = 0;
  v10[2] = 1;
LABEL_10:
  if ( PWSTR < 0 || *v10 == 2 && !v10[6] )
    goto LABEL_31;
  *v8 = v10;
  return (unsigned int)PWSTR;
}
