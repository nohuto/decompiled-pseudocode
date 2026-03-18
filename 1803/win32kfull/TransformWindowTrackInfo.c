/*
 * XREFs of TransformWindowTrackInfo @ 0x1C0062D38
 * Callers:
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0062C7C (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01F6F30 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 */

int __fastcall TransformWindowTrackInfo(__int64 a1, INT *a2, INT *a3, int a4)
{
  __int64 v4; // r11
  __int64 v8; // rax
  __int16 v9; // r9
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  INT v12; // ebx
  INT v13; // edi
  INT v14; // eax
  INT v15; // ecx
  INT v16; // eax
  INT v17; // ecx

  v4 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v4 + 232) & 0x8000000) != 0 )
  {
    LODWORD(v8) = GetWindowDpiLastNotify(a1);
    v9 = v8;
  }
  else if ( (*(_DWORD *)(v4 + 288) & 0xF) == 0
         && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
         && (LODWORD(v8) = *(_DWORD *)(**(_QWORD **)(v8 + 8) + 52LL), (v8 & 1) != 0) )
  {
    v9 = 96;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_WORD *)(*(_QWORD *)(v8 + 416) + 284LL);
  }
  v10 = *(_WORD *)(v4 + 284);
  if ( v10 != v9 )
  {
    v11 = v9;
    if ( a4 )
    {
      v11 = *(_WORD *)(v4 + 284);
      v10 = v9;
    }
    v12 = v10;
    v13 = v11;
    v14 = EngMulDiv(*a2, v10, v11);
    v15 = a2[1];
    *a2 = v14;
    a2[1] = EngMulDiv(v15, v12, v13);
    v16 = EngMulDiv(*a3, v12, v13);
    v17 = a3[1];
    *a3 = v16;
    LODWORD(v8) = EngMulDiv(v17, v12, v13);
    a3[1] = v8;
  }
  return v8;
}
