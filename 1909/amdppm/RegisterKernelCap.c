/*
 * XREFs of RegisterKernelCap @ 0x1C002A380
 * Callers:
 *     PccCapWorker @ 0x1C000DB30 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // r9d
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // r9d
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  _DWORD v14[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 1184);
  v3 = 2LL;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 32);
    v5 = *(_DWORD *)(v2 + 24) - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 2 )
          v3 = 16LL;
      }
      else
      {
        v3 = 8LL;
      }
    }
    else
    {
      v3 = 4LL;
    }
  }
  else if ( *(_QWORD *)(a1 + 232) || *(_QWORD *)(a1 + 240) )
  {
    v4 = *(_DWORD *)(a1 + 724);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 216);
    if ( !v7 )
      return 0LL;
    v8 = *(_QWORD *)(v7 + 24);
    v9 = 0;
    v10 = *(_DWORD *)(v8 + 68);
    if ( !v10 || (v9 = *(_DWORD *)(a1 + 448), v9 == v10 - 1) )
    {
      if ( *(_DWORD *)(v8 + 72) )
        v9 = v10 + *(_DWORD *)(a1 + 496);
    }
    v4 = *(unsigned __int8 *)(32LL * v9 + *(_QWORD *)(v8 + 56) + 24);
  }
  v15 = 0LL;
  v14[0] = 62;
  if ( *(_BYTE *)(a1 + 78) )
  {
    v11 = *(_DWORD *)(a1 + 80);
    BYTE4(v15) = 1;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 56);
  }
  v14[1] = v11;
  v14[3] = *(_DWORD *)(a1 + 720);
  v12 = v15;
  if ( v4 < 0x64 )
    v12 = v3;
  v14[2] = v4;
  LODWORD(v15) = v12;
  ((void (__fastcall *)(_DWORD *, __int64, __int64))qword_1C0013638)(v14, a1, v3);
  return 0LL;
}
