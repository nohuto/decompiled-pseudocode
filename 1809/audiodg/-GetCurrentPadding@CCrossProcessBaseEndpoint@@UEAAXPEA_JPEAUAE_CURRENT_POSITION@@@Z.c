/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140054BF0
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140054AE0 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140014AE8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     WPP_SF_ii @ 0x140037F40 (WPP_SF_ii.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x14005477C (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x140062150 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentPadding(
        CCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  char *v4; // rbp
  signed __int64 v7; // rdi
  signed __int64 v8; // rbx
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // esi
  unsigned __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp-48h]

  v3 = *((_QWORD *)this + 7);
  v4 = (char *)this - 8;
  v7 = *(_QWORD *)(v3 + 16);
  v8 = *(_QWORD *)(v3 + 24);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(
         (CCrossProcessBaseEndpoint *)((char *)this - 8),
         v7,
         (unsigned __int8)a3)
    && CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v8, v9) )
  {
    if ( v7 >= v8 )
    {
      v12 = v7 - v8;
    }
    else
    {
      v11 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_ii(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
          v7,
          v8);
      }
      AEWMILOG_POSITION(v11, v4, v10, 4u, 0LL, v7, v8, 0LL);
      v12 = 0;
      ShipAssert(65537LL, 0LL);
    }
    AEWMILOG_POSITION(
      v8 / *((unsigned int *)this + 18),
      v4,
      v12 / *((_DWORD *)this + 18),
      3u,
      0LL,
      v7 / *((unsigned int *)this + 18),
      v8 / *((unsigned int *)this + 18),
      v12 / *((_DWORD *)this + 18));
    v13 = v12 / *((_DWORD *)this + 18);
    v14 = (unsigned int)(int)((double)(int)v13
                            * 10000000.0
                            / (double)(int)(*(_DWORD *)(*((_QWORD *)this + 8) + 180LL)
                                          / (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this + 8) + 184LL))
                            + 0.5);
    *a2 = v14;
    AEWMILOG_GENERIC(v14, 0LL, v13, 0x64u, v7, v8, v14, v13, 0.0, 0.0, 0.0, 0.0);
  }
  else
  {
    *a2 = 0LL;
  }
}
