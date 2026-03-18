/*
 * XREFs of ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180096E70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::InteractionUpdateConfiguration(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        unsigned int a7)
{
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _DWORD v15[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v15[0] = 215;
  v15[4] = a5;
  v15[1] = a2;
  v15[2] = a3;
  v15[3] = a4;
  v11 = CChannel::BeginCommand((CChannel *)a1, v15, 0x14u, a7);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x9D4u);
  }
  else
  {
    CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 160), a6, a7);
    CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 160));
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v13;
}
