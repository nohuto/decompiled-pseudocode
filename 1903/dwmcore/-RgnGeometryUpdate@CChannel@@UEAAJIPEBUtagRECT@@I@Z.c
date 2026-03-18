/*
 * XREFs of ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180040AA0
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

__int64 __fastcall CChannel::RgnGeometryUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  _DWORD v16[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-10h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v9 = CHandleTable::VerifyHandleTableEntry(this + 2, a2, 140LL);
  if ( v9 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v9, retaddr, v10);
  v16[0] = 569;
  v17 = 0;
  v16[1] = a2;
  v11 = 16LL * a4;
  if ( v11 > 0xFFFFFFFF )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0xB74u, 0LL);
  }
  else
  {
    v17 = 16 * a4;
    v12 = CChannel::BeginCommand((CChannel *)this, v16, 0xCu, v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB75u, 0LL);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v17);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v14;
}
