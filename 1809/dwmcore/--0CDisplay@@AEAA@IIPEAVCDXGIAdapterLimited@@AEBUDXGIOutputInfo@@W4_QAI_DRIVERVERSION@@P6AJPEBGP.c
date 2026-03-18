/*
 * XREFs of ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x18007E1A0
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180080124 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x18007E4F8 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ??$SetInterface@UIDXGIOutput@@U1@@@YAXAEAPEAUIDXGIOutput@@PEAU0@@Z @ 0x18007E574 (--$SetInterface@UIDXGIOutput@@U1@@@YAXAEAPEAUIDXGIOutput@@PEAU0@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::CDisplay(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  int v9; // ecx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rdx
  __int16 v13; // r8
  _WORD *v14; // rax
  enum DXGI_FORMAT DefaultSRGBFormat; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rcx
  bool v26; // zf
  __int64 result; // rax
  _BYTE v28[160]; // [rsp+30h] [rbp-91h] BYREF
  int v29; // [rsp+D0h] [rbp+Fh]

  *(_QWORD *)a1 = &CDisplay::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 252) = 0;
  (**(void (__fastcall ***)(__int64))a1)(a1);
  v9 = *(_DWORD *)(a5 + 200) & 2;
  *(_BYTE *)(a1 + 320) = v9 != 0;
  if ( v9 )
    *(_QWORD *)(a1 + 232) = a7;
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a4 + 336);
  *(_DWORD *)(a1 + 248) = *(_DWORD *)(a5 + 120);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a5 + 124);
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a5 + 128);
  *(_DWORD *)(a1 + 252) = *(_DWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 24) = a4;
  (**(void (__fastcall ***)(__int64))a4)(a4);
  SetInterface<IDXGIOutput,IDXGIOutput>(a1 + 32, *(_QWORD *)a5);
  v10 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)(a1 + 40) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (_WORD *)(a1 + 160);
  v12 = 32LL;
  *(_BYTE *)(a1 + 321) = (*(_DWORD *)(a5 + 200) & 4) != 0;
  *(_BYTE *)(a1 + 322) = (*(_DWORD *)(a5 + 200) & 8) != 0;
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
  *(_DWORD *)(a1 + 264) = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a1 + 268) = *(_DWORD *)(a4 + 300);
  *(_DWORD *)(a1 + 272) = *(_DWORD *)(a5 + 140);
  *(_DWORD *)(a1 + 276) = *(_DWORD *)(a5 + 144);
  DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
  v16 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 288) = DefaultSRGBFormat;
  *(_DWORD *)(a1 + 300) = 0;
  *(_DWORD *)(a1 + 280) = *(_DWORD *)(a5 + 152);
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a5 + 156);
  *(_DWORD *)(a1 + 304) = *(_DWORD *)(a5 + 160);
  *(_DWORD *)(a1 + 292) = *(_DWORD *)(a5 + 164);
  *(_DWORD *)(a1 + 296) = 0;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  v18 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 325) = v17 != 0;
  if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 32LL))(v18, v28) >= 0 )
  {
    *(_BYTE *)(a1 + 326) = v28[88] & 1;
    *(_DWORD *)(a1 + 316) = v29;
  }
  *(_QWORD *)(a1 + 88) = 0LL;
  v19 = 0;
  v20 = *(_DWORD *)(a5 + 140);
  *(_DWORD *)(a1 + 96) = v20;
  v21 = *(_DWORD *)(a5 + 144);
  *(_DWORD *)(a1 + 100) = v21;
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a5 + 184);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a5 + 168);
  if ( *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120) >= 0 )
    v19 = *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120);
  v22 = 0;
  if ( v20 >= 0 )
    v22 = v20;
  if ( v19 != v22 )
    goto LABEL_23;
  v23 = 0;
  if ( *(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124) >= 0 )
    v23 = *(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124);
  v24 = 0;
  if ( v21 >= 0 )
    v24 = v21;
  if ( v23 != v24 )
LABEL_23:
    *(_BYTE *)(a1 + 323) = 1;
  *(_DWORD *)(a1 + 260) = a6;
  v25 = *(_QWORD *)(a1 + 40);
  *(_WORD *)(a1 + 308) = 0;
  v26 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v25 + 80LL))(v25) == 0;
  result = a1;
  *(_BYTE *)(a1 + 310) = !v26;
  return result;
}
