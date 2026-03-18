/*
 * XREFs of ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x180055F60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180056B1C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180056EC4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800A18A0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::WindowNodeSetBounds(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v10; // eax
  __int64 v11; // r8
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-44h] BYREF
  __int128 v21; // [rsp+38h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-30h]
  __int128 v23; // [rsp+58h] [rbp-20h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v10 = CHandleTable::VerifyHandleTableEntry(this + 2, a2, 197LL);
  if ( v10 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v10, retaddr, v11);
  v19 = 521;
  memset_0(&v20, 0, 0x34uLL);
  v12 = (__int128)*a3;
  v13 = (__int128)*a4;
  v20 = a2;
  v21 = v12;
  v14 = (__int128)*a5;
  v22 = v13;
  v23 = v14;
  v15 = CChannel::BeginCommand((CChannel *)this, &v19, 0x38u, 0);
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v17;
}
