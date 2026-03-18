/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180040320
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180041A0C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180041DB4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180042F30 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800AEF40 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        const struct MilRectF *a5,
        const struct MilRectF *a6,
        const unsigned int *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+20h] [rbp-30h]
  _DWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-10h]
  unsigned int v23[3]; // [rsp+44h] [rbp-Ch]
  void *retaddr; // [rsp+68h] [rbp+18h]

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v12 = CHandleTable::VerifyHandleTableEntry(this + 2, a2, 7LL);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v12, retaddr, v13);
  v21[0] = 548;
  v14 = -1;
  v22 = 0;
  *(_QWORD *)v23 = 0LL;
  v21[1] = a2;
  v21[2] = a3;
  v21[3] = a4;
  if ( 16 * (unsigned __int64)a4 > 0xFFFFFFFF )
  {
    v20 = 2714;
    goto LABEL_17;
  }
  v15 = 4LL * a4;
  v22 = 16 * a4;
  v23[0] = 16 * a4;
  if ( v15 > 0xFFFFFFFF )
  {
    v20 = 2716;
    goto LABEL_17;
  }
  v14 = 32 * a4;
  v23[1] = 4 * a4;
  if ( 32 * a4 < 16 * a4 )
  {
    v20 = 2719;
    goto LABEL_17;
  }
  if ( (unsigned int)v15 + v14 < v14 )
  {
    v20 = 2720;
LABEL_17:
    v18 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, v20, 0LL);
    goto LABEL_8;
  }
  v16 = CChannel::BeginCommand((CChannel *)this, v21, 0x1Cu, v14 + v15);
  v18 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xAA1u, 0LL);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a5, v22);
    CDataStreamWriter::AddItemData(this[20], a6, v23[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v23[1]);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_8:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v18;
}
