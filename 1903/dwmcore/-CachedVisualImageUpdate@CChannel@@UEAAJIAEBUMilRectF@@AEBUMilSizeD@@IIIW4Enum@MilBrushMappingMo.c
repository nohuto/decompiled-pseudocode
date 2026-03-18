/*
 * XREFs of ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@@Z @ 0x1800D31A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180040B8C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CChannel::CachedVisualImageUpdate(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // ebx
  int v19; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-4Ch] BYREF
  __int128 v21; // [rsp+28h] [rbp-48h]
  __int128 v22; // [rsp+38h] [rbp-38h]
  unsigned int v23; // [rsp+48h] [rbp-28h]
  unsigned int v24; // [rsp+4Ch] [rbp-24h]
  unsigned int v25; // [rsp+50h] [rbp-20h]
  int v26; // [rsp+54h] [rbp-1Ch]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+A0h] [rbp+30h] BYREF

  v27 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 15);
  v12 = a5;
  CChannel::CheckOptionalHandle(a1, a5, 138LL);
  v13 = a6;
  CChannel::CheckOptionalHandle(a1, a6, 169LL);
  v14 = a7;
  CChannel::CheckOptionalHandle(a1, a7, 189LL);
  v19 = 31;
  memset_0(&v20, 0, 0x44uLL);
  v15 = *a3;
  v16 = *a4;
  v20 = a2;
  v23 = v12;
  v21 = v15;
  v24 = v13;
  v22 = v16;
  v25 = v14;
  v26 = a8;
  v17 = CChannel::SendCommand((CChannel *)a1, &v19, 0x48u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v27);
  return v17;
}
