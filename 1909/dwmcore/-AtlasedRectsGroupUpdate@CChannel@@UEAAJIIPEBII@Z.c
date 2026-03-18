/*
 * XREFs of ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800CC4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180055C9C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180056B1C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800A18A0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B7B10 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::AtlasedRectsGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 6);
  CChannel::CheckOptionalHandle((__int64)this, a3, 82LL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = 4LL * a5;
  si128.m128i_i32[1] = a2;
  si128.m128i_i32[2] = a3;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, 0x80070216, 0xAB9u, 0LL);
  }
  else
  {
    si128.m128i_i32[3] = 4 * a5;
    v10 = CChannel::BeginCommand(this, &si128, 0x10u, v9);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xABAu, 0LL);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a4, si128.m128i_u32[3]);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v12;
}
