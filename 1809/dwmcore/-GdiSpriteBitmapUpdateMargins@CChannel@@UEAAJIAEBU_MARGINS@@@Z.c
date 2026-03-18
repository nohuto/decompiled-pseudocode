/*
 * XREFs of ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18009A510
 * Callers:
 *     <none>
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapUpdateMargins(CDataStreamWriter **this, int a2, const struct _MARGINS *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int128 v7; // xmm0
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _DWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+38h] [rbp-20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v7 = (__int128)*a3;
  v12[0] = 166;
  v12[1] = a2;
  v13 = v7;
  v8 = CChannel::BeginCommand((CChannel *)this, v12, 0x18u, 0);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x78u);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
