/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140052280
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140052170 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400028D8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     WPP_SF_ii @ 0x140032A84 (WPP_SF_ii.c)
 *     McTemplateU0pqxxxx @ 0x140053638 (McTemplateU0pqxxxx.c)
 *     McTemplateU0pqxxxxffff @ 0x1400536F4 (McTemplateU0pqxxxxffff.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentPadding(
        CCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  CCrossProcessBaseEndpoint *v4; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // edx
  double v15; // xmm1_8
  __int64 v16; // rcx

  v3 = *((_QWORD *)this + 8);
  v4 = (CCrossProcessBaseEndpoint *)((char *)this - 8);
  v7 = *(_QWORD *)(v3 + 16);
  v8 = *(_QWORD *)(v3 + 24);
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)((char *)this - 8), v7)
    && CCrossProcessBaseEndpoint::IsValidOffset(v4, v8) )
  {
    if ( v7 >= v8 )
    {
      v11 = v7 - v8;
    }
    else
    {
      v10 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_ii(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
          v7,
          v8);
      }
      if ( (byte_140086281 & 4) != 0 )
        McTemplateU0pqxxxx(v10, v9, (_DWORD)v4, 4, 0, v7, v8, 0);
      v11 = 0;
      ShipAssert(65537LL, 0LL);
    }
    if ( (byte_140086281 & 4) != 0 )
      McTemplateU0pqxxxx(
        v8 / *((unsigned int *)this + 20),
        v7 % *((unsigned int *)this + 20),
        (_DWORD)v4,
        3,
        0,
        v7 / *((unsigned int *)this + 20),
        v8 / *((unsigned int *)this + 20),
        v11 / *((_DWORD *)this + 20));
    v12 = v11 / *((_DWORD *)this + 20);
    v13 = *((_QWORD *)this + 9);
    v14 = *(_DWORD *)(v13 + 180) % (unsigned int)*(unsigned __int16 *)(v13 + 184);
    v15 = (double)v12
        * 10000000.0
        / (double)(int)(*(_DWORD *)(v13 + 180) / (unsigned int)*(unsigned __int16 *)(v13 + 184))
        + 0.5;
    v16 = (unsigned int)(int)v15;
    *a2 = v16;
    if ( (byte_140086281 & 4) != 0 )
      McTemplateU0pqxxxxffff(v16, v14, 0, 100, v7, v8, (int)v15, v12, 0, 0, 0, 0);
  }
  else
  {
    *a2 = 0LL;
  }
}
