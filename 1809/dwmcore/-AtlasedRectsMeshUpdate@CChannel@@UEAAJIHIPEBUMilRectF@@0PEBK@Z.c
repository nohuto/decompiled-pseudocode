/*
 * XREFs of ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x1800BDB40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        struct CCommandBatch **this,
        int a2,
        int a3,
        unsigned int a4,
        const struct MilRectF *a5,
        const struct MilRectF *a6,
        const unsigned int *a7)
{
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  signed int v13; // ebx
  int v14; // r10d
  unsigned int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // ecx
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-30h]
  _DWORD v26[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-10h]
  unsigned int v28[3]; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+70h] [rbp+20h] BYREF

  v29 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v26[0] = 473;
  v26[2] = a3;
  v11 = 16LL * a4;
  v27 = 0;
  *(_QWORD *)v28 = 0LL;
  v26[1] = a2;
  v26[3] = a4;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    v25 = 2656;
    v24 = -2147024362;
    goto LABEL_22;
  }
  v12 = 4LL * a4;
  v27 = 16 * a4;
  v28[0] = 16 * a4;
  if ( v12 > 0xFFFFFFFF )
  {
    LODWORD(v12) = -1;
    v13 = -2147024362;
    v14 = -1;
  }
  else
  {
    v13 = 0;
    v14 = 4 * a4;
  }
  v28[1] = v12;
  if ( v13 < 0 )
  {
    v25 = 2658;
    goto LABEL_19;
  }
  v15 = 32 * a4;
  v16 = -1;
  if ( 32 * a4 >= 16 * a4 )
    v16 = 32 * a4;
  v13 = v15 < (unsigned int)v11 ? 0x80070216 : 0;
  v17 = v16;
  if ( v15 < (unsigned int)v11 )
  {
    v25 = 2661;
    goto LABEL_19;
  }
  v18 = v14 + v16;
  v19 = v16;
  if ( v14 + v16 < v16 )
    v20 = -1;
  else
    v20 = v12 + v16;
  v13 = v18 < v19 ? 0x80070216 : 0;
  if ( v18 < v17 )
  {
    v25 = 2662;
LABEL_19:
    v24 = v13;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x80070216, 0LL, 0, v24, v25);
    goto LABEL_13;
  }
  v21 = CChannel::BeginCommand(this, v26, 0x1Cu, v20);
  v13 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xA67u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a5, v27);
    CDataStreamWriter::AddItemData(this[20], a6, v28[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v28[1]);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_13:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v29);
  return (unsigned int)v13;
}
