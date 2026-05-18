/*
 * XREFs of ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001978
 * Callers:
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001A68 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 * Callees:
 *     ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x1800018B4 (-LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800038E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800059F6 (memset_0.c)
 */

__int64 __fastcall AddSidMappingToLsa(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *a4)
{
  __int128 v8; // xmm0
  int v9; // edi
  int v10; // esi
  int v11; // eax
  PVOID v12; // rdx
  void *v14; // [rsp+28h] [rbp-60h]
  _OWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  void *v16; // [rsp+50h] [rbp-38h]
  PVOID Buffer; // [rsp+90h] [rbp+8h] BYREF

  memset_0((char *)v15 + 2, 0, 0x2EuLL);
  v8 = (__int128)*a1;
  Buffer = 0LL;
  v9 = 0;
  v15[0] = v8;
  v10 = 1;
  if ( a2 )
    v15[1] = *a2;
  v16 = a3;
  v11 = LsaLookupManageSidNameMapping(0LL, v15, &Buffer);
  if ( v11 < 0 )
  {
    v9 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180008018, 2u, v11 | 0x10000000, 0x1DFu, v14);
  }
  v12 = Buffer;
  if ( Buffer )
  {
    v10 = *(_DWORD *)Buffer;
    if ( v9 < 0 && LsaCollisionResult(v10) )
      v9 = 0;
    LsaLookupFreeMemory(v12);
  }
  *(_DWORD *)a4 = v10;
  return (unsigned int)v9;
}
