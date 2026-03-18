/*
 * XREFs of ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C012DA10
 * Callers:
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C012D954 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0236DD0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 */

int __fastcall ShellWindowManagement::TransformWindowTrackInfo(__int64 a1, INT *a2, INT *a3, int a4)
{
  __int64 v4; // r11
  __int64 v7; // rax
  __int16 v8; // r10
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  INT v11; // ebx
  INT v12; // edi
  INT v13; // eax
  INT v14; // ecx
  INT v15; // eax
  INT v16; // ecx

  v4 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v4 + 232) & 0x8000000) != 0 )
  {
    LODWORD(v7) = GetWindowDpiLastNotify(a1);
    v8 = v7;
  }
  else if ( (*(_DWORD *)(v4 + 288) & 0xF) == 0
         && (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
         && (LODWORD(v7) = *(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL), (v7 & 1) != 0) )
  {
    v8 = 96;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(_WORD *)(*(_QWORD *)(v7 + 416) + 284LL);
  }
  v9 = *(_WORD *)(v4 + 284);
  if ( v9 != v8 )
  {
    v10 = v8;
    if ( a4 )
    {
      v10 = *(_WORD *)(v4 + 284);
      v9 = v8;
    }
    v11 = v9;
    v12 = v10;
    v13 = EngMulDiv(*a2, v9, v10);
    v14 = a2[1];
    *a2 = v13;
    a2[1] = EngMulDiv(v14, v11, v12);
    v15 = EngMulDiv(*a3, v11, v12);
    v16 = a3[1];
    *a3 = v15;
    LODWORD(v7) = EngMulDiv(v16, v11, v12);
    a3[1] = v7;
  }
  return v7;
}
