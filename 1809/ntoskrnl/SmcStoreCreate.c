/*
 * XREFs of SmcStoreCreate @ 0x1408B0350
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x1408AD674 (SmcProcessStoreCreateRequest.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmAlloc @ 0x1400E4BD4 (SmAlloc.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmStoreCreate @ 0x1408ACAF4 (SmStoreCreate.c)
 *     SmKmKeyGenGenerate @ 0x1408ADFFC (SmKmKeyGenGenerate.c)
 *     SmKmRegParamsLoad @ 0x1408AE620 (SmKmRegParamsLoad.c)
 *     SmcCacheReference @ 0x1408AFF08 (SmcCacheReference.c)
 *     SmcStoreSlotAbort @ 0x1408B0AF8 (SmcStoreSlotAbort.c)
 *     SmcStoreSlotCommit @ 0x1408B0B8C (SmcStoreSlotCommit.c)
 *     SmcStoreSlotReserve @ 0x1408B0C34 (SmcStoreSlotReserve.c)
 */

__int64 __fastcall SmcStoreCreate(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  struct _PRIVILEGE_SET *v9; // r15
  struct _EX_RUNDOWN_REF v10; // rsi
  int v11; // edi
  __int64 v12; // r14
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // ebx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  struct _PRIVILEGE_SET *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+28h] [rbp-81h] BYREF
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-79h] BYREF
  char NumberOfBytes_4; // [rsp+34h] [rbp-75h]
  __int128 v27[5]; // [rsp+38h] [rbp-71h] BYREF
  int v28; // [rsp+88h] [rbp-21h] BYREF
  __int64 v29; // [rsp+90h] [rbp-19h]
  _QWORD v30[8]; // [rsp+98h] [rbp-11h] BYREF
  char v31; // [rsp+120h] [rbp+77h]

  v31 = a4;
  memset(v27, 0, 0x48uLL);
  v9 = 0LL;
  v24 = 0;
  v10.Count = SmcCacheReference(a1, a4).Count;
  if ( !v10.Count )
    return (unsigned int)-1073741672;
  if ( !a3[3] )
  {
    v11 = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v10.Count + 24) != a3[2] || (unsigned __int8)*a3 != 1 )
  {
    v11 = -1073741637;
    goto LABEL_23;
  }
  v12 = SmcStoreSlotReserve(v10.Count);
  if ( v12 )
  {
    v13 = *(_OWORD *)a3;
    v14 = *(_DWORD *)(v10.Count + 8);
    v15 = *(_DWORD *)(v10.Count + 28);
    v27[0] = v13;
    HIDWORD(v27[0]) = v14;
    v16 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)v15 << 13)) & 0x6000;
    DWORD2(v27[1]) = *(_DWORD *)(v10.Count + 4);
    v17 = *(_DWORD *)(v10.Count + 32);
    LODWORD(v27[0]) = v16;
    LODWORD(v27[1]) = v17;
    memset(v30, 0, sizeof(v30));
    v30[0] = *(_QWORD *)(v10.Count + 40);
    v30[1] = *(_QWORD *)(v10.Count + 48);
    v30[2] = *(_QWORD *)(v10.Count + 56);
    v30[3] = *(_QWORD *)(v10.Count + 64);
    v30[6] = *(_QWORD *)(v10.Count + 88);
    LODWORD(v30[7]) = *(_DWORD *)(v10.Count + 96);
    *(_QWORD *)&v27[3] = v30;
    v11 = SmKmRegParamsLoad((__int64)&NumberOfBytes);
    if ( v11 >= 0 )
    {
      if ( (*(_DWORD *)(v10.Count + 28) & 1) == 0 )
      {
        v18 = NumberOfBytes_4 & 3;
        if ( v18 == 2 || v18 == 1 && (v16 & 0x800) != 0 )
        {
          v19 = 0;
          goto LABEL_19;
        }
      }
      v19 = NumberOfBytes;
      v20 = (struct _PRIVILEGE_SET *)SmAlloc(NumberOfBytes, 0x4B456D73u);
      v9 = v20;
      if ( v20 )
      {
        v11 = SmKmKeyGenGenerate((signed __int64 *)(a1 + 512), (void *)(v10.Count + 552), v20, v19);
        if ( v11 >= 0 )
        {
LABEL_19:
          v21 = *(_QWORD *)(v12 + 8);
          v28 = *(_DWORD *)(v10.Count + 8);
          *(_QWORD *)&v27[4] = &v28;
          v29 = v21;
          *((_QWORD *)&v27[3] + 1) = v10.Count + 104;
          *(_QWORD *)&v27[2] = v9;
          DWORD2(v27[2]) = v19;
          v11 = SmStoreCreate(a2, v27, &v24);
          if ( v11 >= 0 )
          {
            v22 = v24;
            SmcStoreSlotCommit(v10.Count, v12, v24, a2);
            v12 = 0LL;
            v11 = 0;
            *a5 = v22;
          }
        }
      }
      else
      {
        v11 = -1073741670;
      }
    }
    if ( v12 )
      SmcStoreSlotAbort(v10.Count, v12, 0LL);
    goto LABEL_23;
  }
  v11 = -1073741697;
LABEL_23:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (v31 & 0xF) + a1 + 8));
  if ( v9 )
    CmSiFreeMemory(v9);
  return (unsigned int)v11;
}
