/*
 * XREFs of ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800A53A8
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180070E88 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180071588 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180065FE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180094474 (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CreativeFramework::CommonHelper::StringUtils::SplitString(__int64 *a1, void **a2, _WORD *a3)
{
  int v6; // r15d
  void *v7; // rdx
  __int64 v8; // rax
  _WORD *v9; // rcx
  char *v10; // r10
  char *v11; // r8
  __int64 v12; // rdx
  _WORD *v13; // rcx
  char *v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _WORD *v18; // rax
  unsigned __int64 v19; // r10
  _WORD *v20; // rax
  _WORD *i; // rbx
  __int64 v22; // rdx
  _WORD *v23; // rax
  _WORD *v24; // rax
  __int64 v25; // rbx
  void *v27[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = 1;
  v7 = a2[2];
  if ( v7 )
  {
    if ( *a3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
    }
    else
    {
      v8 = 0LL;
    }
    if ( (unsigned __int64)a2[3] < 8 )
      v9 = a2;
    else
      v9 = *a2;
    v10 = (char *)&v9[(_QWORD)v7];
    if ( (unsigned __int64)a2[3] < 8 )
      v11 = (char *)a2;
    else
      v11 = (char *)*a2;
    while ( 1 )
    {
      if ( v11 >= v10 )
      {
        v15 = -1LL;
        goto LABEL_25;
      }
      if ( !v8 )
        break;
      v12 = v8;
      v13 = a3;
      while ( *v13 != *(_WORD *)v11 )
      {
        ++v13;
        if ( !--v12 )
        {
          v13 = 0LL;
          break;
        }
      }
      if ( !v13 )
        break;
      v11 += 2;
    }
    if ( (unsigned __int64)a2[3] < 8 )
      v14 = (char *)a2;
    else
      v14 = (char *)*a2;
    v15 = (v11 - v14) >> 1;
    do
    {
LABEL_25:
      if ( *a3 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( a3[v16] );
        if ( v16 )
        {
          v17 = (unsigned __int64)a2[2];
          if ( v15 < v17 )
          {
            if ( (unsigned __int64)a2[3] < 8 )
              v18 = a2;
            else
              v18 = *a2;
            v19 = (unsigned __int64)&v18[v17];
            if ( (unsigned __int64)a2[3] < 8 )
              v20 = a2;
            else
              v20 = *a2;
            for ( i = &v20[v15]; (unsigned __int64)i < v19; ++i )
            {
              v22 = v16;
              v23 = a3;
              while ( *v23 != *i )
              {
                ++v23;
                if ( !--v22 )
                {
                  v23 = 0LL;
                  break;
                }
              }
              if ( v23 )
              {
                if ( (unsigned __int64)a2[3] < 8 )
                  v24 = a2;
                else
                  v24 = *a2;
                v25 = i - v24;
                goto LABEL_49;
              }
            }
          }
        }
      }
      v25 = -1LL;
LABEL_49:
      v28 = 7LL;
      v27[2] = 0LL;
      LOWORD(v27[0]) = 0;
      std::wstring::assign(v27, a2, v15, v25 - v15);
      v6 |= 2u;
      std::vector<std::wstring>::push_back(a1, v27);
      if ( v28 >= 8 )
        operator delete(v27[0]);
      v15 = v25 + 1;
    }
    while ( v25 != -1 );
  }
  return a1;
}
