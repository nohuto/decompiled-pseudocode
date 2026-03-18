/*
 * XREFs of ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180077A90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryAnimationScenarioBegin(
        CChannel *this,
        const void *a2,
        unsigned int a3,
        const struct _GUID *a4)
{
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  char *v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v9 = a3 + 16;
  v16 = 298;
  v10 = -1;
  if ( a3 + 16 >= a3 )
    v10 = a3 + 16;
  v11 = v9 < a3 ? 0x80070216 : 0;
  if ( v9 < a3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v11, 0x3C0u);
  }
  else
  {
    v12 = CChannel::BeginCommand(this, &v16, 4u, v10);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3C1u);
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a2, a3);
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a4, 0x10u);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v11;
}
