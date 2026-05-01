/*
 * XREFs of ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B6FB0
 * Callers:
 *     ??0RetailDemoExperienceManager@@QEAA@XZ @ 0x1801B46E0 (--0RetailDemoExperienceManager@@QEAA@XZ.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801B5840 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801B6A98 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     <none>
 */

void __fastcall RetailDemoExperienceManager::_SetDefaults(RetailDemoExperienceManager *this)
{
  *((_DWORD *)this + 90) = -1;
  *((_DWORD *)this + 86) = 15;
  *(_OWORD *)((char *)this + 364) = 0uLL;
  *((_BYTE *)this + 348) = 0;
  *((_QWORD *)this + 44) = 217LL;
  *((_WORD *)this + 190) = 1;
  *((_OWORD *)this + 25) = 0u;
  *((_BYTE *)this + 382) = 1;
}
