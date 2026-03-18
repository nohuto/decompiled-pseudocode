/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801477F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::VisualGroupUpdate(
        struct CCommandBatch **this,
        __int32 a2,
        const unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // edx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-28h]
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v10 = 4LL * a4;
  v11 = -1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( v10 > 0xFFFFFFFF )
  {
    v17 = 1791;
    goto LABEL_12;
  }
  v9 = 4LL * a5;
  si128.m128i_i32[2] = v10;
  if ( v9 > 0xFFFFFFFF )
  {
    v17 = 1792;
LABEL_12:
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, v17);
    goto LABEL_13;
  }
  v12 = v9 + v10;
  si128.m128i_i32[3] = 4 * a5;
  if ( (int)v9 + (int)v10 >= (unsigned int)v10 )
    v11 = v10 + v9;
  v13 = v12 < (unsigned int)v10 ? 0x80070216 : 0;
  if ( v12 < (unsigned int)v10 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, 0x703u);
  }
  else
  {
    v14 = CChannel::BeginCommand(this, &si128, 0x10u, v11);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x704u);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v11);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
LABEL_13:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return v13;
}
