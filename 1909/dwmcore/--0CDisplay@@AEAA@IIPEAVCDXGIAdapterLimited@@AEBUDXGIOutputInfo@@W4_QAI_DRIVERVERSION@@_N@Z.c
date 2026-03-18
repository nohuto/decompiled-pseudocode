/*
 * XREFs of ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@_N@Z @ 0x180027C90
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800268E4 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x180027FCC (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x180028048 (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::CDisplay(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  char v9; // al
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rdx
  __int16 v13; // r8
  _WORD *v14; // rax
  enum DXGI_FORMAT DefaultSRGBFormat; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 result; // rax

  *(_QWORD *)a1 = &CDisplay::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 244) = 0;
  (**(void (__fastcall ***)(__int64))a1)(a1);
  if ( (*(_BYTE *)(a5 + 200) & 2) != 0 || (v9 = 0, a7) )
    v9 = 1;
  *(_BYTE *)(a1 + 312) = v9;
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a4 + 336);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a5 + 120);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a5 + 124);
  *(_DWORD *)(a1 + 248) = *(_DWORD *)(a5 + 128);
  *(_DWORD *)(a1 + 244) = *(_DWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 24) = a4;
  (**(void (__fastcall ***)(__int64))a4)(a4);
  SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(a1 + 32, *(_QWORD *)a5);
  v10 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)(a1 + 40) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (_WORD *)(a1 + 160);
  v12 = 32LL;
  *(_BYTE *)(a1 + 313) = (*(_DWORD *)(a5 + 200) & 4) != 0;
  *(_BYTE *)(a1 + 314) = (*(_DWORD *)(a5 + 200) & 8) != 0;
  *(_BYTE *)(a1 + 315) = BYTE1(*(_DWORD *)(a5 + 200)) & 1;
  do
  {
    v13 = *(_WORD *)((char *)v11 + a5 - (a1 + 160) + 204);
    if ( !v13 )
      break;
    *v11++ = v13;
    --v12;
  }
  while ( v12 );
  v14 = v11 - 1;
  if ( v12 )
    v14 = v11;
  *v14 = 0;
  *(_DWORD *)(a1 + 228) = *(_DWORD *)(a4 + 312) + *(_DWORD *)(a4 + 320);
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a1 + 260) = *(_DWORD *)(a4 + 300);
  *(_DWORD *)(a1 + 264) = *(_DWORD *)(a5 + 140);
  *(_DWORD *)(a1 + 268) = *(_DWORD *)(a5 + 144);
  DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
  v16 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 280) = DefaultSRGBFormat;
  *(_DWORD *)(a1 + 292) = 0;
  *(_DWORD *)(a1 + 272) = *(_DWORD *)(a5 + 152);
  *(_DWORD *)(a1 + 276) = *(_DWORD *)(a5 + 156);
  *(_DWORD *)(a1 + 296) = *(_DWORD *)(a5 + 160);
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a5 + 164);
  *(_DWORD *)(a1 + 288) = 0;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  v18 = 0;
  *(_BYTE *)(a1 + 319) = v17 != 0;
  *(_BYTE *)(a1 + 320) = *(_BYTE *)(a5 + 200) & 1;
  *(_DWORD *)(a1 + 308) = *(_DWORD *)(a5 + 272);
  *(_QWORD *)(a1 + 88) = 0LL;
  v19 = *(_DWORD *)(a5 + 140);
  *(_DWORD *)(a1 + 96) = v19;
  v20 = *(_DWORD *)(a5 + 144);
  *(_DWORD *)(a1 + 100) = v20;
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a5 + 184);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a5 + 168);
  if ( *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120) >= 0 )
    v18 = *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120);
  v21 = 0;
  if ( v19 >= 0 )
    v21 = v19;
  if ( v18 != v21 )
    goto LABEL_22;
  v22 = 0;
  v23 = 0;
  if ( v20 >= 0 )
    v22 = v20;
  if ( *(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124) >= 0 )
    v23 = *(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124);
  if ( v23 != v22 )
LABEL_22:
    *(_BYTE *)(a1 + 316) = 1;
  *(_DWORD *)(a1 + 252) = a6;
  v24 = *(_QWORD *)(a1 + 40);
  *(_WORD *)(a1 + 300) = 0;
  v25 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v24 + 80LL))(v24) == 0;
  result = a1;
  *(_BYTE *)(a1 + 302) = !v25;
  return result;
}
