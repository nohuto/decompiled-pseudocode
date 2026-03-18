/*
 * XREFs of ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180040CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180041A0C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180041DB4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180042F30 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::VisualSetSize(CDataStreamWriter **this, unsigned int a2, double a3, double a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v7; // eax
  __int64 v8; // r8
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _DWORD v15[4]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v7 = CHandleTable::VerifyHandleTableEntry(this + 2, a2, 189LL);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v7, retaddr, v8);
  v15[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v15[1] = a2;
  v9 = a3;
  v10 = a4;
  *(float *)&v15[2] = v9;
  *(float *)&v15[3] = v10;
  v11 = CChannel::BeginCommand((CChannel *)this, v15, 0x10u, 0);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x77u, 0LL);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v13;
}
