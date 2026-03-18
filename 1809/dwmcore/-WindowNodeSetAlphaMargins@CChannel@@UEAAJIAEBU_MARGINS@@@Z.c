/*
 * XREFs of ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180099A80
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

__int64 __fastcall CChannel::WindowNodeSetAlphaMargins(CChannel *this, int a2, const struct _MARGINS *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  struct CCommandBatch **v9; // rsi
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  _DWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = (__int128)*a3;
  v17[0] = 444;
  v9 = (struct CCommandBatch **)((char *)this + 160);
  v17[1] = a2;
  v10 = 0;
  v18 = v8;
  if ( !*v9 )
  {
    v15 = CCommandBatch::Create(v7, v9);
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v15, 0x11Au);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v10, 0xFFu);
  }
  else
  {
    v11 = CDataStreamWriter::EnsureItem(*v9, 0x18u);
    v10 = v11;
    if ( v11 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v9);
      CDataStreamWriter::AddItemData(*v9, v17, 0x18u);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x104u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v10, 0x9Au);
LABEL_5:
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v10, 0x78u);
  else
    CDataStreamWriter::EndItem(*v9);
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v10;
}
