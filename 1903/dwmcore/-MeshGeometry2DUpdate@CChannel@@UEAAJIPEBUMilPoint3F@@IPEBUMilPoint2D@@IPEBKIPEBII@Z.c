/*
 * XREFs of ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180158A10
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180041A0C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180042F30 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800AEF40 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
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
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  signed int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+20h] [rbp-30h]
  _DWORD v25[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-18h]
  unsigned int v27[2]; // [rsp+3Ch] [rbp-14h]
  unsigned int v28; // [rsp+44h] [rbp-Ch]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+70h] [rbp+20h] BYREF

  v11 = a4;
  v29 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 106);
  v25[0] = 567;
  v26 = 0;
  v15 = 12 * v11;
  *(_QWORD *)v27 = 0LL;
  v28 = 0;
  v25[1] = a2;
  if ( (unsigned __int64)(12 * v11) > 0xFFFFFFFF )
  {
    v24 = 2658;
    goto LABEL_18;
  }
  v16 = 16LL * a6;
  v26 = 12 * v11;
  if ( v16 > 0xFFFFFFFF )
  {
    v24 = 2659;
    goto LABEL_18;
  }
  v14 = 4LL * a8;
  v27[0] = 16 * a6;
  if ( v14 > 0xFFFFFFFF )
  {
    v24 = 2660;
    goto LABEL_18;
  }
  v17 = 4LL * a10;
  v27[1] = 4 * a8;
  if ( v17 > 0xFFFFFFFF )
  {
    v24 = 2661;
    goto LABEL_18;
  }
  v18 = v16 + v15;
  v28 = 4 * a10;
  if ( (unsigned int)v16 + v15 < v15 )
  {
    v24 = 2664;
    goto LABEL_18;
  }
  v19 = v18 + v14;
  if ( v18 + (unsigned int)v14 < v18 )
  {
    v24 = 2665;
    goto LABEL_18;
  }
  if ( v19 + (unsigned int)v17 < v19 )
  {
    v24 = 2666;
LABEL_18:
    v22 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070216, v24, 0LL);
    goto LABEL_19;
  }
  v20 = CChannel::BeginCommand(this, v25, 0x18u, v19 + (unsigned int)v17);
  v22 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xA6Bu, 0LL);
  }
  else
  {
    CDataStreamWriter::AddItemData(this[20], a3, v26);
    CDataStreamWriter::AddItemData(this[20], a5, v27[0]);
    CDataStreamWriter::AddItemData(this[20], a7, v27[1]);
    CDataStreamWriter::AddItemData(this[20], a9, v28);
    CDataStreamWriter::EndItem(this[20]);
  }
LABEL_19:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v29);
  return v22;
}
