/*
 * XREFs of ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x18009A260
 * Callers:
 *     <none>
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeSetBounds(
        CDataStreamWriter **this,
        int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v17; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+34h] [rbp-44h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-30h]
  __int128 v21; // [rsp+58h] [rbp-20h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v17 = 445;
  memset_0(&v18, 0, 0x34uLL);
  v10 = (__int128)*a3;
  v11 = (__int128)*a4;
  v18 = a2;
  v19 = v10;
  v12 = (__int128)*a5;
  v20 = v11;
  v21 = v12;
  v13 = CChannel::BeginCommand((CChannel *)this, &v17, 0x38u, 0);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x78u);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v15;
}
