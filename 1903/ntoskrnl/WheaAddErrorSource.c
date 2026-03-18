/*
 * XREFs of WheaAddErrorSource @ 0x140919650
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x140340960 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapAddErrorSource @ 0x14018AF28 (WheapAddErrorSource.c)
 *     WheapCallErrorSourceInitialize @ 0x14018B030 (WheapCallErrorSourceInitialize.c)
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheapIsNonHestErrorSource @ 0x140340720 (WheapIsNonHestErrorSource.c)
 *     WheapCallErrorSourceReady @ 0x14034108C (WheapCallErrorSourceReady.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WheapInitializeErrorSource @ 0x140759788 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheaAddErrorSource(__int128 *a1, __int64 a2)
{
  __int128 *v2; // rbx
  __int64 v4; // r14
  int v5; // esi
  PVOID PoolWithTag; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int128 *v9; // r8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  char *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _DWORD Src[8]; // [rsp+28h] [rbp-E0h] BYREF
  char v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+414h] [rbp+30Ch]
  char v30; // [rsp+418h] [rbp+310h]

  v2 = a1;
  v4 = 7LL;
  if ( WheapIsNonHestErrorSource(*((_DWORD *)a1 + 2)) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x430uLL, 0x61656857u);
    v7 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x430uLL);
      v8 = v7 + 96;
      v9 = v2;
      v10 = 7LL;
      do
      {
        *(_OWORD *)v8 = *v9;
        *(_OWORD *)(v8 + 16) = v9[1];
        *(_OWORD *)(v8 + 32) = v9[2];
        *(_OWORD *)(v8 + 48) = v9[3];
        *(_OWORD *)(v8 + 64) = v9[4];
        *(_OWORD *)(v8 + 80) = v9[5];
        *(_OWORD *)(v8 + 96) = v9[6];
        v8 += 128LL;
        v11 = v9[7];
        v9 += 8;
        *(_OWORD *)(v8 - 16) = v11;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)v8 = *v9;
      *(_OWORD *)(v8 + 16) = v9[1];
      *(_OWORD *)(v8 + 32) = v9[2];
      *(_OWORD *)(v8 + 48) = v9[3];
      *(_QWORD *)(v8 + 64) = *((_QWORD *)v9 + 8);
      *(_DWORD *)(v8 + 72) = *((_DWORD *)v9 + 18);
      v5 = WheapInitializeErrorSource(v7);
      if ( v5 )
      {
        ExFreePoolWithTag((PVOID)v7, 0x61656857u);
      }
      else
      {
        *(_QWORD *)(v7 + 56) = a2;
        WheapAddErrorSource(v12, v7);
        v5 = 0;
        if ( WheapInitializationComplete )
        {
          v5 = WheapCallErrorSourceInitialize(v7, 1u);
          if ( v5 >= 0 )
          {
            *(_DWORD *)(v7 + 108) = 2;
            WheapCallErrorSourceReady(v7);
          }
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  Src[3] = 0;
  v13 = &v28;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 1009;
  Src[5] = -2147483636;
  Src[4] = 1280201291;
  Src[6] = 3;
  Src[7] = 977;
  do
  {
    v14 = *v2;
    v15 = v2[1];
    v2 += 8;
    *(_OWORD *)v13 = v14;
    v16 = *(v2 - 6);
    *((_OWORD *)v13 + 1) = v15;
    v17 = *(v2 - 5);
    *((_OWORD *)v13 + 2) = v16;
    v18 = *(v2 - 4);
    *((_OWORD *)v13 + 3) = v17;
    v19 = *(v2 - 3);
    *((_OWORD *)v13 + 4) = v18;
    v20 = *(v2 - 2);
    *((_OWORD *)v13 + 5) = v19;
    v21 = *(v2 - 1);
    *((_OWORD *)v13 + 6) = v20;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v21;
    --v4;
  }
  while ( v4 );
  v22 = *((_QWORD *)v2 + 8);
  v23 = v2[1];
  *(_OWORD *)v13 = *v2;
  v24 = v2[2];
  *((_OWORD *)v13 + 1) = v23;
  v25 = v2[3];
  *((_OWORD *)v13 + 2) = v24;
  *((_OWORD *)v13 + 3) = v25;
  *((_QWORD *)v13 + 8) = v22;
  *((_DWORD *)v13 + 18) = *((_DWORD *)v2 + 18);
  v29 = v5;
  v30 = 0;
  WheaLogInternalEvent(Src);
  return (unsigned int)v5;
}
