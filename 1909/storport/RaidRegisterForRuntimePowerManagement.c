/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C001E684
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C001E354 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003F4F4 (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006EDD0 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     RaidGetStorPoFxComponent @ 0x1C00167E0 (RaidGetStorPoFxComponent.c)
 *     RaidGetStorPoFxFState @ 0x1C001E9DC (RaidGetStorPoFxFState.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(
        __int64 a1,
        unsigned __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // r10d
  int *v7; // rdi
  unsigned int v9; // r9d
  char i; // r14
  char *StorPoFxComponent; // rax
  int v12; // r10d
  char *v13; // r11
  unsigned int v14; // ebx
  __int64 j; // rdx
  __int64 StorPoFxFState; // rax
  int v17; // edx
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  _DWORD *Pool; // rax
  _DWORD *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // r11d
  char *v25; // r12
  char *v26; // rax
  __int64 v27; // r10
  int v28; // r11d
  unsigned int v29; // edx
  __int128 v30; // xmm0
  char v31; // cl
  unsigned int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 (__fastcall *v37)(int, int, int, int, __int64, __int64, __int64); // rax
  __int64 (__fastcall *v38)(PVOID); // rcx
  __int64 (__fastcall *v39)(PVOID); // rdx
  void (__fastcall *v40)(__int64, unsigned int); // r8
  void (__fastcall *v41)(__int64, unsigned int); // r9
  int v42; // esi
  const struct _TlgProvider_t *v43; // rcx
  const struct _TlgProvider_t *v44; // rcx
  unsigned int v45; // ecx
  const GUID *v46; // r8
  const GUID *v47; // r9
  int v48; // r10d
  int v49; // eax
  unsigned int v50; // eax
  int v52; // ebx
  const GUID *v53; // r8
  __int64 v54; // r9
  int v55; // r10d
  int v56; // r11d
  __int64 v57; // rcx
  char v58; // [rsp+30h] [rbp-D0h] BYREF
  char v59; // [rsp+31h] [rbp-CFh] BYREF
  char v60; // [rsp+32h] [rbp-CEh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 *Data4; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  char *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  char *v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  char *v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  unsigned int *v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  struct _TlgProvider_t *v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  struct _TlgProvider_t *p_hProvider; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  unsigned int *v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  char *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  char *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  char *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]

  v4 = *(unsigned int *)(a2 + 8);
  v5 = 0;
  v6 = 0;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4) = a4;
  *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = a3;
  v7 = (int *)a2;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAll + 4) = a2;
  v9 = 80;
  for ( i = 1; v6 < (unsigned int)v4; v6 = v12 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(v7, v6);
    v13 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      v9 += 56;
      if ( *((_DWORD *)StorPoFxComponent + 2) > v5 )
        v5 = *((_DWORD *)StorPoFxComponent + 2);
    }
    v14 = *((_DWORD *)StorPoFxComponent + 2);
    for ( j = 0LL; (unsigned int)j < v14; v9 = v19 )
    {
      StorPoFxFState = RaidGetStorPoFxFState(v13, j);
      v19 = v18 + 24;
      if ( !StorPoFxFState )
        v19 = v18;
      j = (unsigned int)(v17 + 1);
    }
  }
  v20 = v9;
  Pool = RaidAllocatePool(NonPagedPoolNx, v9, 0x4F506152u, a1);
  v22 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v20);
  v23 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
  v24 = 0;
  *v22 = 2;
  v22[18] = v4;
  v25 = (char *)&v22[14 * v4 + 20];
  for ( *((_QWORD *)v22 + 8) = v23; v24 < v22[18]; v25 += 24 * v29 )
  {
    v26 = RaidGetStorPoFxComponent(v7, v24);
    *(_QWORD *)((char *)v22 + v27 + 112) = v25;
    *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = (const unsigned __int16 *)v26;
    v29 = *((_DWORD *)v26 + 2);
    *(_DWORD *)((char *)v22 + v27 + 108) = v29;
    *(_DWORD *)((char *)v22 + v27 + 104) = *((_DWORD *)v26 + 3);
    v30 = *((_OWORD *)v26 + 1);
    *(_QWORD *)((char *)v22 + v27 + 96) = 1LL;
    *(_OWORD *)((char *)v22 + v27 + 80) = v30;
    if ( (v7[3] & 0x100) != 0 )
      *(_QWORD *)((char *)v22 + v27 + 96) = 3LL;
    v31 = 0;
    if ( v29 <= 1 )
      v31 = i;
    v32 = 0;
    i = v31;
    if ( v29 )
    {
      v33 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
      do
      {
        v34 = RaidGetStorPoFxFState(v33, v32++);
        *(_DWORD *)&v25[8 * v35 + 16] = *(_DWORD *)(v34 + 24);
        *(_QWORD *)&v25[8 * v35 + 8] = *(_QWORD *)(v34 + 16);
        *(_QWORD *)&v25[8 * v35] = *(_QWORD *)(v34 + 8);
        v29 = *(_DWORD *)((char *)v22 + v36 + 108);
      }
      while ( v32 < v29 );
      v7 = *(int **)((char *)&hProvider.KeywordAll + 4);
    }
    v24 = v28 + 1;
  }
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = StorPortUnitIdleState;
    v37 = StorPortUnitPowerControl;
    v38 = StorPortUnitPowerRequiredStep1;
    v39 = StorPortUnitPowerNotRequiredStep1;
    v40 = StorPortUnitIdleCondition;
    v41 = StorPortUnitActiveConditionStep1;
  }
  else
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = &StorPortAdapterIdleState;
    v37 = StorPortAdapterPowerControl;
    v38 = StorPortAdapterPowerRequiredStep1;
    v39 = StorPortAdapterPowerNotRequiredStep1;
    v40 = (void (__fastcall *)(__int64, unsigned int))StorPortAdapterIdleCondition;
    v41 = (void (__fastcall *)(__int64, unsigned int))StorPortAdapterActiveCondition;
  }
  *((_QWORD *)v22 + 2) = v41;
  *((_QWORD *)v22 + 3) = v40;
  *((_QWORD *)v22 + 6) = v39;
  *((_QWORD *)v22 + 5) = v38;
  *((_QWORD *)v22 + 7) = v37;
  v42 = PoFxRegisterDevice(a1, v22, *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4));
  ExFreePoolWithTag(v22, 0x4F506152u);
  if ( v42 >= 0 )
  {
    v43 = (const struct _TlgProvider_t *)**(unsigned int **)(a1 + 64);
    if ( (_DWORD)v43 == 1 )
    {
      v52 = 0;
      if ( (unsigned int)*v7 >= 2 )
        v52 = v7[4];
      if ( (unsigned int)dword_1C0062058 > 5 && TlgKeywordOn(v43, 0x400000000000uLL) )
      {
        v57 = *(_QWORD *)(v54 + 24);
        HIDWORD(hProvider.RegHandle) = *(_DWORD *)(v57 + 56);
        v58 = *(_BYTE *)(v54 + 96);
        v59 = *(_BYTE *)(v54 + 97);
        v60 = *(_BYTE *)(v54 + 98);
        hProvider.LevelPlus1 = v7[2];
        HIDWORD(hProvider.KeywordAny) = v7[3];
        Data4 = (unsigned __int8 *)(v57 + 5128);
        v68 = &v58;
        v64 = (char *)(v54 + 1976);
        v70 = (unsigned int *)&v59;
        LODWORD(hProvider.EnableCallback) = v55;
        v72 = (struct _TlgProvider_t *)&v60;
        p_EnableCallback = &hProvider.EnableCallback;
        p_hProvider = &hProvider;
        v78 = &hProvider.LevelPlus1 + 1;
        v80 = (char *)&hProvider.KeywordAny + 4;
        v82 = (char *)&hProvider.KeywordAll + 4;
        v84 = (char *)&hProvider.ProviderMetadataPtr + 4;
        *(&hProvider.LevelPlus1 + 1) = v5;
        HIDWORD(hProvider.KeywordAll) = v52;
        HIDWORD(hProvider.ProviderMetadataPtr) = v56;
        v63 = 16LL;
        v65 = 16LL;
        v66 = (char *)&hProvider.RegHandle + 4;
        v67 = 4LL;
        v69 = 1LL;
        v71 = 1LL;
        v73 = 1LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        TlgWrite(
          (TraceLoggingHProvider)((char *)&hProvider.ProviderMetadataPtr + 4),
          &unk_1C0056DB3,
          v53,
          (LPCGUID)v54,
          0xEu,
          (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
      }
    }
    else if ( !(_DWORD)v43 )
    {
      v44 = 0LL;
      if ( (unsigned int)*v7 >= 2 )
        v44 = (const struct _TlgProvider_t *)(unsigned int)v7[4];
      if ( (unsigned int)dword_1C0062058 > 5 )
      {
        if ( TlgKeywordOn(v44, 0x400000000000uLL) )
        {
          v49 = v7[2];
          hProvider.LevelPlus1 = v45;
          v66 = (char *)&hProvider.KeywordAll + 4;
          HIDWORD(hProvider.KeywordAll) = v49;
          v50 = v7[3];
          v68 = (char *)&hProvider.KeywordAny + 4;
          *(&hProvider.LevelPlus1 + 1) = v50;
          v70 = &hProvider.LevelPlus1 + 1;
          Data4 = v47[320].Data4;
          v72 = &hProvider;
          HIDWORD(hProvider.ProviderMetadataPtr) = v48;
          HIDWORD(hProvider.KeywordAny) = v5;
          v63 = 16LL;
          v64 = (char *)&hProvider.ProviderMetadataPtr + 4;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          TlgWrite(
            &hProvider,
            &unk_1C0056E7A,
            v46,
            v47,
            8u,
            (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
        }
      }
    }
  }
  return (unsigned int)v42;
}
