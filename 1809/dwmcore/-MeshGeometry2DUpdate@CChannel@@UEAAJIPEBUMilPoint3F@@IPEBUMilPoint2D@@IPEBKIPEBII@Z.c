/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180146BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        struct CCommandBatch **this,
        int a2,
        const struct MilPoint3F *a3,
        unsigned int a4,
        const struct MilPoint2D *a5,
        unsigned int a6,
        const unsigned int *a7,
        unsigned int a8,
        const unsigned int *a9,
        unsigned int a10)
{
  __int64 v11; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-30h]
  _DWORD v33[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-18h]
  unsigned int v35[2]; // [rsp+3Ch] [rbp-14h]
  unsigned int v36; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+70h] [rbp+20h] BYREF

  v11 = a4;
  v37 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v33[0] = 491;
  v14 = 0xFFFFFFFFLL;
  v34 = 0;
  v33[1] = a2;
  v15 = 12 * v11;
  v16 = -1;
  *(_QWORD *)v35 = 0LL;
  v36 = 0;
  if ( (unsigned __int64)(12 * v11) <= 0xFFFFFFFF )
    v16 = 12 * v11;
  v34 = v16;
  v17 = v15 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v15 > 0xFFFFFFFF )
  {
    v32 = 2602;
    goto LABEL_32;
  }
  v18 = -1;
  v19 = 16LL * a6;
  if ( v19 <= 0xFFFFFFFF )
    v18 = 16 * a6;
  v35[0] = v18;
  v17 = v19 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v19 > 0xFFFFFFFF )
  {
    v32 = 2603;
    goto LABEL_32;
  }
  v20 = -1;
  v21 = 4LL * a8;
  if ( v21 <= 0xFFFFFFFF )
    v20 = 4 * a8;
  v35[1] = v20;
  v17 = v21 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v21 > 0xFFFFFFFF )
  {
    v32 = 2604;
    goto LABEL_32;
  }
  v22 = -1;
  v23 = 4LL * a10;
  if ( v23 <= 0xFFFFFFFF )
    v22 = 4 * a10;
  v36 = v22;
  v17 = v23 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v23 > 0xFFFFFFFF )
  {
    v32 = 2605;
    goto LABEL_32;
  }
  v24 = v18 + v16;
  v25 = -1;
  if ( v24 >= v16 )
    v25 = v24;
  v17 = v24 < v16 ? 0x80070216 : 0;
  if ( v24 < v16 )
  {
    v32 = 2608;
    goto LABEL_32;
  }
  v26 = v20 + v25;
  v27 = -1;
  if ( v20 + v25 >= v25 )
    v27 = v20 + v25;
  v17 = v26 < v25 ? 0x80070216 : 0;
  if ( v26 < v25 )
  {
    v32 = 2609;
    goto LABEL_32;
  }
  v28 = v22 + v27;
  if ( v22 + v27 >= v27 )
    v14 = v28;
  v17 = v28 < v27 ? 0x80070216 : 0;
  if ( v28 < v27 )
  {
    v32 = 2610;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v17, v32);
    goto LABEL_33;
  }
  v29 = CChannel::BeginCommand(this, v33, 0x18u, v14);
  v17 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xA33u);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v34);
    CDataStreamWriter::AddItemData(this[20], a5, v35[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v35[1]);
    CDataStreamWriter::AddItemData(this[20], a9, v36);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_33:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v37);
  return v17;
}
