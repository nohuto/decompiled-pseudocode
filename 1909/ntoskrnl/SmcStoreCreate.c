/*
 * XREFs of SmcStoreCreate @ 0x1408EBA38
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x1408E8C5C (SmcProcessStoreCreateRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     SmAlloc @ 0x1400D8890 (SmAlloc.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SmStoreCreate @ 0x1408E8284 (SmStoreCreate.c)
 *     SmKmKeyGenGenerate @ 0x1408E95E4 (SmKmKeyGenGenerate.c)
 *     SmKmRegParamsLoad @ 0x1408E9C1C (SmKmRegParamsLoad.c)
 *     SmcCacheReference @ 0x1408EB5F0 (SmcCacheReference.c)
 *     SmcStoreSlotAbort @ 0x1408EC204 (SmcStoreSlotAbort.c)
 *     SmcStoreSlotCommit @ 0x1408EC298 (SmcStoreSlotCommit.c)
 *     SmcStoreSlotReserve @ 0x1408EC340 (SmcStoreSlotReserve.c)
 */

__int64 __fastcall SmcStoreCreate(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  struct _PRIVILEGE_SET *v9; // r15
  struct _EX_RUNDOWN_REF v10; // rsi
  int v11; // edi
  __int64 v12; // r14
  int v13; // eax
  __int128 v14; // xmm0
  unsigned __int16 v15; // bx
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  struct _PRIVILEGE_SET *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+28h] [rbp-81h] BYREF
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-79h] BYREF
  __int64 v25; // [rsp+38h] [rbp-71h] BYREF
  __int64 v26; // [rsp+40h] [rbp-69h]
  __int128 v27; // [rsp+48h] [rbp-61h] BYREF
  int v28; // [rsp+58h] [rbp-51h]
  int v29; // [rsp+5Ch] [rbp-4Dh]
  int v30; // [rsp+60h] [rbp-49h]
  int v31; // [rsp+64h] [rbp-45h]
  struct _PRIVILEGE_SET *v32; // [rsp+68h] [rbp-41h]
  unsigned int v33; // [rsp+70h] [rbp-39h]
  int v34; // [rsp+74h] [rbp-35h]
  _QWORD *v35; // [rsp+78h] [rbp-31h]
  unsigned __int64 v36; // [rsp+80h] [rbp-29h]
  __int64 *v37; // [rsp+88h] [rbp-21h]
  _QWORD v38[8]; // [rsp+98h] [rbp-11h] BYREF
  char v39; // [rsp+120h] [rbp+77h]

  v39 = a4;
  memset(v38, 0, sizeof(v38));
  NumberOfBytes = 0LL;
  v9 = 0LL;
  v29 = 0;
  v31 = 0;
  v34 = 0;
  v23 = 0;
  v25 = 0LL;
  v26 = 0LL;
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
    v13 = *(_DWORD *)(v10.Count + 8);
    v14 = *(_OWORD *)a3;
    v15 = (unsigned __int16)*(_DWORD *)(v10.Count + 28) << 13;
    v27 = v14;
    HIDWORD(v27) = v13;
    v16 = v14 ^ ((unsigned __int16)v14 ^ v15) & 0x6000;
    v30 = *(_DWORD *)(v10.Count + 4);
    v28 = *(_DWORD *)(v10.Count + 32);
    v38[0] = *(_QWORD *)(v10.Count + 40);
    v38[1] = *(_QWORD *)(v10.Count + 48);
    v38[2] = *(_QWORD *)(v10.Count + 56);
    v38[3] = *(_QWORD *)(v10.Count + 64);
    v38[6] = *(_QWORD *)(v10.Count + 88);
    LODWORD(v38[7]) = *(_DWORD *)(v10.Count + 96);
    v35 = v38;
    LODWORD(v27) = v16;
    v11 = SmKmRegParamsLoad((__int64)&NumberOfBytes);
    if ( v11 >= 0 )
    {
      if ( (*(_DWORD *)(v10.Count + 28) & 1) == 0 )
      {
        v17 = BYTE4(NumberOfBytes) & 3;
        if ( v17 == 2 || v17 == 1 && (v16 & 0x800) != 0 )
        {
          v18 = 0;
          goto LABEL_19;
        }
      }
      v18 = NumberOfBytes;
      v19 = (struct _PRIVILEGE_SET *)SmAlloc((unsigned int)NumberOfBytes, 0x4B456D73u);
      v9 = v19;
      if ( v19 )
      {
        v11 = SmKmKeyGenGenerate((signed __int64 *)(a1 + 512), (void *)(v10.Count + 552), v19, v18);
        if ( v11 >= 0 )
        {
LABEL_19:
          v20 = *(_QWORD *)(v12 + 8);
          LODWORD(v25) = *(_DWORD *)(v10.Count + 8);
          v37 = &v25;
          v26 = v20;
          v36 = v10.Count + 104;
          v32 = v9;
          v33 = v18;
          v11 = SmStoreCreate(a2, &v27, &v23);
          if ( v11 >= 0 )
          {
            v21 = v23;
            SmcStoreSlotCommit(v10.Count, v12, v23, a2);
            v12 = 0LL;
            v11 = 0;
            *a5 = v21;
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
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (v39 & 0xF) + a1 + 8));
  if ( v9 )
    CmSiFreeMemory(v9);
  return (unsigned int)v11;
}
