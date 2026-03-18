/*
 * XREFs of ?VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x180055EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180056B1C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180056EC4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800A18A0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::VisualSetTouchTargetRect(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct tagRECT *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v7; // eax
  __int64 v8; // r8
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v7 = CHandleTable::VerifyHandleTableEntry(this + 2, a2, 189LL);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v7, retaddr, v8);
  v9 = (__int128)*a3;
  v14[0] = 504;
  v14[1] = a2;
  v15 = v9;
  v10 = CChannel::BeginCommand((CChannel *)this, v14, 0x18u, 0);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v12;
}
