/*
 * XREFs of ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801D5A18
 * Callers:
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801D41A0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005D1A0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180085294 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801869E8 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1801D5CDC (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801D5DF0 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801D5F30 (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1801D628C (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall RetailDemoExperienceManager::_ParseExperienceArguments(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  DWORD pdwDefaultLayout; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-31h] BYREF
  __int64 *v10[3]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v11[16]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v12[4]; // [rsp+78h] [rbp+17h] BYREF

  v9[3] = -2LL;
  RetailDemoExperienceManager::_SetDefaults((RetailDemoExperienceManager *)a1);
  RetailDemoExperienceManager::_SplitString(v9, v2, 38LL);
  v3 = v9[0];
  v4 = v9[1];
  while ( v3 != v4 )
  {
    std::wstring::wstring((__int64)v12);
    RetailDemoExperienceManager::_SplitString(v10, v12, 61LL);
    v5 = v10[0];
    if ( (unsigned int)std::wstring::compare(v10[0], L"zBand") )
    {
      if ( (unsigned int)std::wstring::compare(v5, L"topmost") )
      {
        if ( (unsigned int)std::wstring::compare(v5, L"docked") )
        {
          if ( (unsigned int)std::wstring::compare(v5, L"dockedSide") )
          {
            if ( (unsigned int)std::wstring::compare(v5, L"adjustDesktop") )
            {
              if ( (unsigned int)std::wstring::compare(v5, L"dockedWidth") )
              {
                if ( (unsigned int)std::wstring::compare(v5, L"dockedMargin") )
                {
                  if ( (unsigned int)std::wstring::compare(v5, L"dockedHeight") )
                  {
                    if ( !(unsigned int)std::wstring::compare(v5, L"floatingRect") )
                      *(_OWORD *)(a1 + 364) = *(_OWORD *)RetailDemoExperienceManager::_ParseScreenRect(v11, v5 + 4);
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 360) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 4, 0LL, 0LL);
                  }
                }
                else
                {
                  LOBYTE(v7) = 1;
                  *(_DWORD *)(a1 + 356) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 4, v7, 0LL);
                }
              }
              else
              {
                LOBYTE(v6) = 1;
                *(_DWORD *)(a1 + 352) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 4, v6, 0LL);
              }
            }
            else
            {
              *(_BYTE *)(a1 + 381) = (unsigned int)std::wstring::compare(v5 + 4, L"true") == 0;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 382) = (unsigned int)std::wstring::compare(v5 + 4, L"right") == 0;
            pdwDefaultLayout = 0;
            GetProcessDefaultLayout(&pdwDefaultLayout);
            if ( pdwDefaultLayout == 1 )
              *(_BYTE *)(a1 + 382) = *(_BYTE *)(a1 + 382) == 0;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 380) = (unsigned int)std::wstring::compare(v5 + 4, L"true") == 0;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 348) = (unsigned int)std::wstring::compare(v5 + 4, L"true") == 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 344) = _o__wtol();
    }
    std::vector<std::wstring>::_Tidy((__int64)v10);
    std::wstring::_Tidy_deallocate(v12);
    v3 += 32LL;
  }
  std::vector<std::wstring>::_Tidy((__int64)v9);
}
