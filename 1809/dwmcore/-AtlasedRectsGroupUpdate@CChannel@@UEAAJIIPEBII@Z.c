/*
 * XREFs of ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18009C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::AtlasedRectsGroupUpdate(
        struct CCommandBatch **this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5)
{
  int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v9 = -1;
  v10 = 4LL * a5;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v10 <= 0xFFFFFFFF )
    v9 = 4 * a5;
  si128.m128i_i32[1] = a2;
  si128.m128i_i32[2] = a3;
  si128.m128i_i32[3] = v9;
  v11 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v11, 0xA7Du);
  }
  else
  {
    v12 = CChannel::BeginCommand(this, &si128, 0x10u, v9);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA7Eu);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a4, si128.m128i_u32[3]);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v11;
}
