/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180099B60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800584C0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180099C40 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18009AD64 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(CChannel *this, int a2, int a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  unsigned int v9; // ecx
  struct CCommandBatch **v10; // rbp
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  _DWORD v18[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10 = (struct CCommandBatch **)((char *)this + 160);
  v18[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v18[1] = a2;
  v11 = 0;
  v18[2] = a3;
  v18[3] = a4;
  if ( !*v10 )
  {
    v16 = CCommandBatch::Create(v9, v10);
    v11 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v16, 0x11Au);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v11, 0xFFu);
  }
  else
  {
    v12 = CDataStreamWriter::EnsureItem(*v10, 0x10u);
    v11 = v12;
    if ( v12 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v10);
      CDataStreamWriter::AddItemData(*v10, v18, 0x10u);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x104u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v11, 0x9Au);
LABEL_5:
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0x78u);
  else
    CDataStreamWriter::EndItem(*v10);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v11;
}
